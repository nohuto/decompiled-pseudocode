/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C009D7C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     RegisterDefaultClass @ 0x1C0075794 (RegisterDefaultClass.c)
 *     _GetClassInfoEx @ 0x1C009DAA0 (_GetClassInfoEx.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     RegisterIconTitleClass @ 0x1C0108AB4 (RegisterIconTitleClass.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, unsigned int *a2, _OWORD *a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  wchar_t *v20; // rdi
  ULONG64 v21; // rdx
  unsigned __int64 v22; // r15
  __int16 v23; // r12
  wchar_t *v24; // rax
  wchar_t *v25; // r14
  __int64 v26; // rax
  _BYTE *v27; // rdx
  _DWORD *v28; // rdx
  unsigned __int16 ClassInfo; // ax
  int v31; // [rsp+30h] [rbp-E8h]
  int v32; // [rsp+34h] [rbp-E4h]
  __int64 v33; // [rsp+48h] [rbp-D0h] BYREF
  int v34; // [rsp+50h] [rbp-C8h]
  wchar_t *Str1; // [rsp+58h] [rbp-C0h]
  _OWORD v36[5]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v37; // [rsp+C0h] [rbp-58h]
  _BYTE v38[24]; // [rsp+D8h] [rbp-40h] BYREF

  v5 = a4;
  v8 = a1;
  v33 = 0LL;
  memset(v36, 0, sizeof(v36));
  v31 = 0;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass(v10, v9, v11, v12) )
  {
    goto LABEL_3;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v19 = *a2;
  v32 = *a2;
  v34 = *a2;
  v20 = (wchar_t *)*((_QWORD *)a2 + 1);
  Str1 = v20;
  if ( ((unsigned __int64)v20 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v20 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (ULONG64)v20 + (unsigned __int16)v19 + 2;
    if ( v21 >= MmUserProbeAddress
      || (unsigned __int16)v19 > HIWORD(v32)
      || (v19 & 1) != 0
      || v21 <= (unsigned __int64)v20 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  if ( ((unsigned __int64)v20 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v22 = (unsigned __int16)v19;
    v23 = v19 + 2;
    v24 = (wchar_t *)Win32AllocPoolWithQuota((unsigned __int16)v19 + 2LL, 2020897621LL);
    v25 = v24;
    Str1 = v24;
    if ( !v24 )
      ExRaiseStatus(-1073741801);
    v31 = 1;
    PushW32ThreadLock(v24, v38, Win32FreePool);
    memmove(v25, v20, (unsigned int)v22);
    v25[v22 >> 1] = 0;
    HIWORD(v34) = v23;
    v5 = a4;
    v8 = a1;
  }
  v26 = -PsGetCurrentProcessWow64Process(v19);
  v37 = (-(__int64)(v26 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
  if ( ((v26 != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v27 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v27 = (_BYTE *)MmUserProbeAddress;
  *v27 = *v27;
  v27[79] = v27[79];
  v28 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v28 = (_DWORD *)MmUserProbeAddress;
  *v28 = *v28;
  v36[0] = *a3;
  v36[1] = a3[1];
  v36[2] = a3[2];
  v36[3] = a3[3];
  v36[4] = a3[4];
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) & 0x2000) != 0 || (unsigned int)RegisterDefaultClass(Str1) )
  {
    ClassInfo = GetClassInfoEx(v8, Str1, v36, &v33, a5);
    v14 = ClassInfo;
    if ( ClassInfo )
    {
      *a3 = v36[0];
      a3[1] = v36[1];
      a3[2] = v36[2];
      a3[3] = v36[3];
      a3[4] = v36[4];
      *v5 = v33;
    }
  }
  else
  {
LABEL_3:
    v14 = 0;
    UserSetLastError(87LL, v13);
  }
  if ( v31 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v38, v15, v17, v18);
  UserSessionSwitchLeaveCrit(v16, v15);
  return v14;
}
