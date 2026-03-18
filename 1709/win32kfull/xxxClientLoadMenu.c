/*
 * XREFs of xxxClientLoadMenu @ 0x1C0053BA0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxLoadSysMenu @ 0x1C007C804 (xxxLoadSysMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C020FE4C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxClientLoadMenu(__int64 a1, void **a2)
{
  unsigned __int16 v4; // ax
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  unsigned __int8 *v7; // rdi
  unsigned __int16 v8; // ax
  int v9; // ebx
  __int64 *v10; // rcx
  ULONG64 v11; // rdx
  __int64 v12; // rbx
  char v14; // [rsp+30h] [rbp-2A8h] BYREF
  _BYTE v15[3]; // [rsp+31h] [rbp-2A7h] BYREF
  int v16; // [rsp+34h] [rbp-2A4h] BYREF
  unsigned __int8 *v17; // [rsp+38h] [rbp-2A0h]
  unsigned __int64 v18; // [rsp+40h] [rbp-298h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-290h] BYREF
  __int64 v20; // [rsp+50h] [rbp-288h]
  _BYTE v21[32]; // [rsp+60h] [rbp-278h] BYREF
  _DWORD v22[16]; // [rsp+80h] [rbp-258h] BYREF
  unsigned __int8 v23[512]; // [rsp+C0h] [rbp-218h] BYREF

  v4 = *((_WORD *)a2 + 1);
  if ( v4 )
  {
    v6 = 1;
    v5 = v4;
  }
  else
  {
    v5 = 0LL;
    v6 = 0;
  }
  if ( v6 )
  {
    v7 = (unsigned __int8 *)AllocCallbackMessage(0x40u, v6, v5, v23, 1, 0x200uLL);
    v17 = v7;
    if ( !v7 )
      return 0LL;
  }
  else
  {
    v7 = (unsigned __int8 *)v22;
    v17 = (unsigned __int8 *)v22;
    memset(v22, 0, sizeof(v22));
    v22[0] = 64;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v7 != (unsigned __int8 *)v22 && v7 != v23 )
    PushW32ThreadLock(v7, v21, Win32FreePool);
  *((_QWORD *)v7 + 5) = a1;
  *((_WORD *)v7 + 24) = *(_WORD *)a2;
  v8 = *((_WORD *)a2 + 1);
  *((_WORD *)v7 + 25) = v8;
  if ( v8 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v7, a2[1], *(unsigned __int16 *)a2 + 2, (void **)v7 + 7) < 0 )
      goto LABEL_26;
  }
  else
  {
    *((_QWORD *)v7 + 7) = a2[1];
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v15);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v9 = KeUserModeCallback(76LL, v7, *(unsigned int *)v7, &v18, &v16);
  EtwTraceEndCallback(76LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v15);
  if ( v9 >= 0 && v16 == 24 )
  {
    v10 = (__int64 *)v18;
    v11 = v18 + 8;
    if ( v18 + 8 < v18 || v11 > MmUserProbeAddress )
      v10 = (__int64 *)MmUserProbeAddress;
    v20 = *v10;
    LOBYTE(v11) = 2;
    v12 = HMValidateHandleNoRip(v20, v11);
    goto LABEL_15;
  }
LABEL_26:
  v12 = 0LL;
LABEL_15:
  if ( v7 != (unsigned __int8 *)v22 && v7 != v23 )
  {
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v21);
  }
  return v12;
}
