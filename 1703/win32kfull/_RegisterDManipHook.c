/*
 * XREFs of _RegisterDManipHook @ 0x1C00E3EE4
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C00E3C30 (NtUserRegisterDManipHook.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00C6ED0 (IsPrivileged.c)
 *     RemoveHmodDependency @ 0x1C00D9358 (RemoveHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00E48C0 (GetHmodTableIndex.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterDManipHook(int *a1, int *a2, int *a3, int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  const wchar_t *v13; // r8
  unsigned __int64 v14; // rdx
  int *v15; // rax
  int v16; // ecx
  const wchar_t *v17; // r8
  unsigned __int64 v18; // rdx
  int v19; // ecx
  const wchar_t *v20; // r8
  unsigned __int64 v21; // rdx
  int *v22; // rax
  int v23; // ecx
  const wchar_t *v24; // r8
  unsigned __int64 v25; // r9
  int HmodTableIndex; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx

  if ( gihmodDManipHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v11 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v9, v8) + 732), (_DWORD)v11 != luidSystem[0])
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10) + 736) != luidSystem[1]
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v27 = 5LL;
    goto LABEL_52;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (int *)W32UserProbeAddress;
  v12 = *a2;
  v13 = (const wchar_t *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int64)v13 + (unsigned __int16)v12 + 2;
  if ( v14 >= W32UserProbeAddress
    || (unsigned __int16)v12 > (unsigned __int16)HIWORD(*a2)
    || (v12 & 1) != 0
    || v14 <= (unsigned __int64)v13 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW(&gszFunctionDManipHook, 0x104uLL, v13);
  v15 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v15 = (int *)W32UserProbeAddress;
  v16 = *v15;
  v17 = (const wchar_t *)*((_QWORD *)v15 + 1);
  if ( ((unsigned __int8)v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (unsigned __int64)v17 + (unsigned __int16)v16 + 2;
  if ( v18 >= W32UserProbeAddress
    || (unsigned __int16)v16 > (unsigned __int16)HIWORD(*v15)
    || (v16 & 1) != 0
    || v18 <= (unsigned __int64)v17 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW(&gszModuleDManipHook, 0x104uLL, v17);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v19 = *a4;
  v20 = (const wchar_t *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v20 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = (unsigned __int64)v20 + (unsigned __int16)v19 + 2;
  if ( v21 >= W32UserProbeAddress
    || (unsigned __int16)v19 > (unsigned __int16)HIWORD(*a4)
    || (v19 & 1) != 0
    || v21 <= (unsigned __int64)v20 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW(&gszFunctionDManipHookWOW, 0x104uLL, v20);
  v22 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v22 = (int *)W32UserProbeAddress;
  v23 = *v22;
  v24 = (const wchar_t *)*((_QWORD *)v22 + 1);
  if ( ((unsigned __int8)v24 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = (unsigned __int64)v24 + (unsigned __int16)v23 + 2;
  if ( v25 >= W32UserProbeAddress
    || (unsigned __int16)v23 > (unsigned __int16)HIWORD(*v22)
    || (v23 & 1) != 0
    || v25 <= (unsigned __int64)v24 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW(&gszModuleDManipHookWOW, 0x104uLL, v24);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v27 = 126LL;
LABEL_52:
    UserSetLastError(v27);
    return 0LL;
  }
  if ( HmodTableIndex < catomSysTableEntries )
    ++*((_DWORD *)&acatomSysDepends + HmodTableIndex);
  v28 = GetHmodTableIndex(a3);
  gihmodDManipHookWOW = v28;
  if ( v28 == -1 )
  {
    UserSetLastError(126LL);
    RemoveHmodDependency(gihmodDManipHook);
    gihmodDManipHook = -1;
    return 0LL;
  }
  if ( v28 < catomSysTableEntries )
    ++*((_DWORD *)&acatomSysDepends + v28);
  gppiDManipHook = PsGetCurrentProcessWin32Process(v28, v29);
  *gpsi |= 0x10u;
  return 1LL;
}
