/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1C013AA00
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

__int64 __fastcall SfnOUTLPSCROLLBARINFO(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // r8
  ULONG64 v34; // rcx
  __int128 v35; // xmm3
  __int128 v36; // xmm0
  __int64 v37; // xmm1_8
  int v38; // eax
  char v39; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v40[3]; // [rsp+31h] [rbp-127h] BYREF
  _DWORD v41[5]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-110h] BYREF
  __int128 v43; // [rsp+58h] [rbp-100h]
  __int64 v44; // [rsp+68h] [rbp-F0h]
  __int64 v45; // [rsp+70h] [rbp-E8h]
  _QWORD v46[3]; // [rsp+98h] [rbp-C0h] BYREF
  _QWORD v47[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v47, 0, 0x68uLL);
  v47[0] = v14;
  LODWORD(v47[1]) = v10;
  v47[2] = a3;
  *(_OWORD *)&v47[3] = *(_OWORD *)a4;
  *(_OWORD *)&v47[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v47[7] = *(_OWORD *)(a4 + 32);
  v47[9] = *(_QWORD *)(a4 + 48);
  LODWORD(v47[10]) = *(_DWORD *)(a4 + 56);
  v47[11] = a5;
  v47[12] = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v46[0] = *(_QWORD *)(v18 + 392);
  *(_QWORD *)(v18 + 392) = v46;
  v46[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v21 = *(_QWORD *)(v13 + 456);
  v43 = *(_OWORD *)(v21 + 64);
  v44 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v14;
  if ( a1 )
    v22 = *(_QWORD *)a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v22;
  if ( a1 )
    v23 = *((_QWORD *)a1 + 35);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v40,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(105LL);
  v24 = KeUserModeCallback(105LL, v47, 104LL, &v42, v41);
  EtwTraceEndCallback(105LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v40,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28);
  v30 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v30 + 64) = v43;
  *(_QWORD *)(v30 + 80) = v44;
  if ( v24 < 0 || v41[0] != 24 )
    return 0LL;
  v31 = (__int64 *)v42;
  if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  v32 = *v31;
  v45 = *v31;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v34 = *(_QWORD *)(v42 + 16);
    if ( v34 + 60 < v34 || v34 + 60 > MmUserProbeAddress )
      v34 = MmUserProbeAddress;
    v35 = *(_OWORD *)(v34 + 16);
    v36 = *(_OWORD *)(v34 + 32);
    v37 = *(_QWORD *)(v34 + 48);
    v38 = *(_DWORD *)(v34 + 56);
    *(_OWORD *)a4 = *(_OWORD *)v34;
    *(_OWORD *)(a4 + 16) = v35;
    *(_OWORD *)(a4 + 32) = v36;
    *(_QWORD *)(a4 + 48) = v37;
    *(_DWORD *)(a4 + 56) = v38;
  }
  return v32;
}
