/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C0039810
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     RegisterDefaultClass @ 0x1C0036E20 (RegisterDefaultClass.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _GetClassInfoEx @ 0x1C0039584 (_GetClassInfoEx.c)
 *     RegisterIconTitleClass @ 0x1C00FCD80 (RegisterIconTitleClass.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, int *a2, _OWORD *a3, _QWORD *a4, unsigned int a5)
{
  _QWORD *v5; // r15
  __int64 v8; // r13
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edi
  wchar_t *v18; // r14
  unsigned __int64 v19; // r8
  wchar_t *v20; // rax
  wchar_t *v21; // r15
  __int64 v22; // rax
  _BYTE *v23; // rdx
  _DWORD *v24; // rdx
  unsigned __int16 ClassInfo; // ax
  int v27; // [rsp+30h] [rbp-E8h]
  int v28; // [rsp+34h] [rbp-E4h]
  __int64 v29; // [rsp+48h] [rbp-D0h] BYREF
  int v30; // [rsp+50h] [rbp-C8h]
  wchar_t *Str1; // [rsp+58h] [rbp-C0h]
  _OWORD v32[5]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v33; // [rsp+C0h] [rbp-58h]
  _QWORD v34[3]; // [rsp+D8h] [rbp-40h] BYREF

  v5 = a4;
  v8 = a1;
  v29 = 0LL;
  memset(v32, 0, sizeof(v32));
  v27 = 0;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
    goto LABEL_3;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (int *)W32UserProbeAddress;
  v17 = *a2;
  v28 = *a2;
  v30 = *a2;
  v18 = (wchar_t *)*((_QWORD *)a2 + 1);
  Str1 = v18;
  v19 = (unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL;
  if ( ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (unsigned __int64)v18 + (unsigned __int16)v17 + 2;
    v9 = W32UserProbeAddress;
    if ( v10 >= W32UserProbeAddress
      || (unsigned __int16)v17 > HIWORD(v28)
      || (v17 & 1) != 0
      || v10 <= (unsigned __int64)v18 )
    {
      *W32UserProbeAddress = 0;
    }
  }
  if ( v19 )
  {
    v20 = (wchar_t *)Win32AllocPoolWithQuota((unsigned __int16)v17 + 2LL, 2020897621LL);
    v21 = v20;
    Str1 = v20;
    if ( !v20 )
      ExRaiseStatus(-1073741801);
    v27 = 1;
    PushW32ThreadLock((__int64)v20, v34, (__int64)Win32FreePool);
    memmove(v21, v18, (unsigned __int16)v17);
    v21[(unsigned __int64)(unsigned __int16)v17 >> 1] = 0;
    HIWORD(v30) = v17 + 2;
    v5 = a4;
    v8 = a1;
  }
  v22 = -PsGetCurrentProcessWow64Process(v10, v9, v19, v11);
  v33 = (-(__int64)(v22 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
  if ( ((v22 != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v23 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v23 = (_BYTE *)W32UserProbeAddress;
  *v23 = *v23;
  v23[79] = v23[79];
  v24 = v5;
  if ( (unsigned __int64)v5 >= W32UserProbeAddress )
    v24 = (_DWORD *)W32UserProbeAddress;
  *v24 = *v24;
  v32[0] = *a3;
  v32[1] = a3[1];
  v32[2] = a3[2];
  v32[3] = a3[3];
  v32[4] = a3[4];
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x2000) != 0 || (unsigned int)RegisterDefaultClass(Str1) )
  {
    ClassInfo = GetClassInfoEx(v8, Str1, (__int64)v32, &v29, a5);
    v12 = ClassInfo;
    if ( ClassInfo )
    {
      *a3 = v32[0];
      a3[1] = v32[1];
      a3[2] = v32[2];
      a3[3] = v32[3];
      a3[4] = v32[4];
      *v5 = v29;
    }
  }
  else
  {
LABEL_3:
    v12 = 0;
    UserSetLastError(87LL);
  }
  if ( v27 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v34);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v12;
}
