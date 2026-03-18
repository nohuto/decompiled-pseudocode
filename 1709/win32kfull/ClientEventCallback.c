/*
 * XREFs of ClientEventCallback @ 0x1C000C52C
 * Callers:
 *     xxxEventWndProc @ 0x1C0053E10 (xxxEventWndProc.c)
 * Callees:
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
 */

__int64 __fastcall ClientEventCallback(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *v5; // rdi
  int v6; // ebx
  ULONG_PTR *v7; // rcx
  ULONG_PTR v8; // rbx
  char v10; // [rsp+30h] [rbp-298h] BYREF
  _BYTE v11[3]; // [rsp+31h] [rbp-297h] BYREF
  int v12; // [rsp+34h] [rbp-294h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-290h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-280h] BYREF
  _BYTE v15[24]; // [rsp+60h] [rbp-268h] BYREF
  _BYTE v16[56]; // [rsp+78h] [rbp-250h] BYREF
  unsigned __int8 v17[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = a2[3] + 8;
  v5 = (unsigned __int8 *)AllocCallbackMessage(0x38u, 1u, v4, v17, 1, 0x200uLL);
  v13[1] = v5;
  if ( !v5 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v5 != v16 && v5 != v17 )
    PushW32ThreadLock(v5, v15, Win32FreePool);
  *((_QWORD *)v5 + 5) = a1;
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a2, v4, (void **)v5 + 6) < 0 )
    goto LABEL_17;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v11);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  EtwTraceBeginCallback(65LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v6 = KeUserModeCallback(65LL, v5, *(unsigned int *)v5, v13, &v12);
  EtwTraceEndCallback(65LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v11);
  if ( v6 < 0 )
    goto LABEL_17;
  if ( v12 == 24 )
  {
    v7 = (ULONG_PTR *)v13[0];
    if ( (unsigned __int64)(v13[0] + 8LL) < v13[0] || v13[0] + 8LL > MmUserProbeAddress )
      v7 = (ULONG_PTR *)MmUserProbeAddress;
    v8 = *v7;
    RegionSize[1] = *v7;
  }
  else
  {
LABEL_17:
    LODWORD(v8) = 0;
  }
  if ( v5 != v16 && v5 != v17 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v15);
  }
  return (unsigned int)v8;
}
