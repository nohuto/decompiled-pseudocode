/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C01FE890
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnINSIZECLIPBRD(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int128 v22; // xmm6
  __int64 v23; // xmm7_8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  ULONG64 v33; // rcx
  char v35; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v36[3]; // [rsp+31h] [rbp-F7h] BYREF
  _DWORD v37[5]; // [rsp+34h] [rbp-F4h] BYREF
  __int64 v38; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v39[4]; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v40[3]; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+90h] [rbp-98h]
  __int64 v42; // [rsp+A0h] [rbp-88h]
  _QWORD v43[7]; // [rsp+A8h] [rbp-80h] BYREF

  v8 = a2;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v12 = 0LL;
  memset(v43, 0, sizeof(v43));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), 4u) )
  {
    v43[0] = v12;
    LODWORD(v43[1]) = v8;
    v43[2] = a3;
    *(_OWORD *)&v43[3] = *a4;
    v43[5] = a5;
    v43[6] = a6;
    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
    v40[0] = *(_QWORD *)(v18 + 392);
    *(_QWORD *)(v18 + 392) = v40;
    v40[1] = a1;
    if ( a1 )
      _InterlockedIncrement(a1 + 2);
    v21 = *(_QWORD *)(v11 + 456);
    v22 = *(_OWORD *)(v21 + 64);
    v41 = v22;
    v23 = *(_QWORD *)(v21 + 80);
    v42 = v23;
    *(_QWORD *)(v21 + 72) = v12;
    if ( a1 )
      v24 = *(_QWORD *)a1;
    else
      v24 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 456) + 64LL) = v24;
    if ( a1 )
      v25 = *((_QWORD *)a1 + 35);
    else
      v25 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 456) + 80LL) = v25;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v36,
      gdwInAtomicOperation,
      v19,
      v20);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
    EtwTraceBeginCallback(24LL);
    v26 = KeUserModeCallback(24LL, v43, 56LL, v39, v37);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v36,
      v27,
      v28,
      v29);
    ThreadUnlock1(v31, v30);
    v32 = *(_QWORD *)(v11 + 456);
    *(_OWORD *)(v32 + 64) = v22;
    *(_QWORD *)(v32 + 80) = v23;
    if ( v26 < 0 || v37[0] != 24 )
      return 0LL;
    v33 = v39[0];
    if ( v39[0] + 8 < v39[0] || v39[0] + 8 > MmUserProbeAddress )
      v33 = MmUserProbeAddress;
    return *(_QWORD *)v33;
  }
  return v38;
}
