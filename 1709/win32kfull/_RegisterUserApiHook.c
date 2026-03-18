/*
 * XREFs of _RegisterUserApiHook @ 0x1C010B46C
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x1C010B3F0 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C0058D88 (RemoveHmodDependency.c)
 *     AddHmodDependency @ 0x1C00590AC (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00590E8 (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     IsPrivileged @ 0x1C010BDF0 (IsPrivileged.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterUserApiHook(ULONG64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  ULONG64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v11; // ecx
  const wchar_t *v12; // r8
  ULONG64 v13; // rdx
  int v14; // ecx
  const wchar_t *v15; // r8
  ULONG64 v16; // r9
  int HmodTableIndex; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx

  v6 = a2;
  if ( gihmodUserApiHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v9 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v8) + 740), (_DWORD)v9 != luidSystem[0])
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9),
        a2 = (unsigned int)luidSystem[1],
        *(_DWORD *)(CurrentProcessWin32Process + 744) != (_DWORD)a2)
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v18 = 5LL;
    goto LABEL_30;
  }
  if ( v6 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  v11 = *(_DWORD *)v6;
  v12 = *(const wchar_t **)(v6 + 8);
  if ( ((unsigned __int8)v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (ULONG64)v12 + (unsigned __int16)v11 + 2;
  if ( v13 >= MmUserProbeAddress
    || (unsigned __int16)v11 > (unsigned __int16)HIWORD(*(_DWORD *)v6)
    || (v11 & 1) != 0
    || v13 <= (unsigned __int64)v12 )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  RtlStringCchCopyW(&gszFunctionUserApiHook, 0x104uLL, v12);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v14 = *(_DWORD *)a4;
  v15 = *(const wchar_t **)(a4 + 8);
  if ( ((unsigned __int8)v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = (ULONG64)v15 + (unsigned __int16)v14 + 2;
  if ( v16 >= MmUserProbeAddress
    || (unsigned __int16)v14 > (unsigned __int16)HIWORD(*(_DWORD *)a4)
    || (v14 & 1) != 0
    || v16 <= (unsigned __int64)v15 )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  RtlStringCchCopyW(gszFunctionUserApiHookWOW, 0x104uLL, v15);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v18 = 126LL;
LABEL_30:
    UserSetLastError(v18, a2);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v19 = GetHmodTableIndex(a3);
  gihmodUserApiHookWOW = v19;
  if ( v19 != -1 )
  {
    AddHmodDependency(v19);
    gppiUserApiHook = PsGetCurrentProcessWin32Process(v21);
    *gpsi |= 0x10u;
    return 1LL;
  }
  UserSetLastError(126LL, v20);
  RemoveHmodDependency(gihmodUserApiHook);
  gihmodUserApiHook = -1;
  return 0LL;
}
