/*
 * XREFs of SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C0136C60
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

__int64 __fastcall SfnINOUTLPMEASUREITEMSTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
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
  __int64 v32; // rdx
  _OWORD *v34; // rcx
  __int128 v35; // xmm1
  char v36; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-107h] BYREF
  _DWORD v38[5]; // [rsp+34h] [rbp-104h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-F0h] BYREF
  __int128 v40; // [rsp+58h] [rbp-E0h]
  __int64 v41; // [rsp+68h] [rbp-D0h]
  __int64 v42; // [rsp+70h] [rbp-C8h]
  _QWORD v43[3]; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD v44[10]; // [rsp+B0h] [rbp-88h] BYREF

  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v44, 0, 0x48uLL);
  v44[0] = v14;
  LODWORD(v44[1]) = v10 & 0x1FFFF;
  v44[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v44[3] = *(_OWORD *)a4;
  *(_OWORD *)&v44[5] = *(_OWORD *)(a4 + 16);
  v44[7] = a5;
  v44[8] = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v43[0] = *(_QWORD *)(v18 + 392);
  *(_QWORD *)(v18 + 392) = v43;
  v43[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v21 = *(_QWORD *)(v13 + 456);
  v40 = *(_OWORD *)(v21 + 64);
  v41 = *(_QWORD *)(v21 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v37,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(16LL);
  v24 = KeUserModeCallback(16LL, v44, 72LL, &v39, v38);
  EtwTraceEndCallback(16LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28);
  v30 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v30 + 64) = v40;
  *(_QWORD *)(v30 + 80) = v41;
  if ( v24 < 0 || v38[0] != 24 )
    return 0LL;
  v31 = (__int64 *)v39;
  if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  v32 = *v31;
  v42 = *v31;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v34 = *(_OWORD **)(v39 + 16);
    if ( v34 + 2 < v34 || (unsigned __int64)(v34 + 2) > MmUserProbeAddress )
      v34 = (_OWORD *)MmUserProbeAddress;
    v35 = v34[1];
    *(_OWORD *)a4 = *v34;
    *(_OWORD *)(a4 + 16) = v35;
  }
  return v32;
}
