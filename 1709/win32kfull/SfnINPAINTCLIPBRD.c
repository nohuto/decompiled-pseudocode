/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C01FE150
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00F8870 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v32; // rcx
  char v34; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-127h] BYREF
  _DWORD v36[5]; // [rsp+34h] [rbp-124h] BYREF
  __int64 v37; // [rsp+48h] [rbp-110h]
  unsigned __int64 v38; // [rsp+58h] [rbp-100h] BYREF
  __int128 v39; // [rsp+60h] [rbp-F8h]
  __int64 v40; // [rsp+70h] [rbp-E8h]
  _QWORD v41[4]; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v42[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v8 = a2;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v12 = 0LL;
  memset(v42, 0, sizeof(v42));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), 4u) )
  {
    v42[0] = v12;
    LODWORD(v42[1]) = v8;
    v42[2] = a3;
    *(_DWORD *)(a4 + 68) = 0;
    *(_OWORD *)&v42[3] = *(_OWORD *)a4;
    *(_OWORD *)&v42[5] = *(_OWORD *)(a4 + 16);
    *(_OWORD *)&v42[7] = *(_OWORD *)(a4 + 32);
    *(_OWORD *)&v42[9] = *(_OWORD *)(a4 + 48);
    v42[11] = *(_QWORD *)(a4 + 64);
    v42[12] = a5;
    v42[13] = a6;
    v15 = WindowFromDC(*(HDC *)a4);
    v42[3] = _GetDC(v15);
    v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
    v41[0] = *(_QWORD *)(v19 + 392);
    *(_QWORD *)(v19 + 392) = v41;
    v41[1] = a1;
    if ( a1 )
      _InterlockedIncrement(a1 + 2);
    v22 = *(_QWORD *)(v11 + 456);
    v39 = *(_OWORD *)(v22 + 64);
    v40 = *(_QWORD *)(v22 + 80);
    *(_QWORD *)(v22 + 72) = v12;
    if ( a1 )
      v23 = *(_QWORD *)a1;
    else
      v23 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 456) + 64LL) = v23;
    if ( a1 )
      v24 = *((_QWORD *)a1 + 35);
    else
      v24 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 456) + 80LL) = v24;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v35,
      gdwInAtomicOperation,
      v20,
      v21);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
    EtwTraceBeginCallback(23LL);
    v25 = KeUserModeCallback(23LL, v42, 112LL, &v38, v36);
    EtwTraceEndCallback(23LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v35,
      v26,
      v27,
      v28);
    ThreadUnlock1(v30, v29);
    v31 = *(_QWORD *)(v11 + 456);
    *(_OWORD *)(v31 + 64) = v39;
    *(_QWORD *)(v31 + 80) = v40;
    if ( v25 < 0 || v36[0] != 24 )
      return 0LL;
    v32 = (__int64 *)v38;
    if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v37 = *v32;
    _ReleaseDC(v42[3]);
  }
  return v37;
}
