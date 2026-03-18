/*
 * XREFs of SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C01FEEF0
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

__int64 __fastcall SfnKEYBOARDCORRECTIONCALLOUT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rdi
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // r9
  _OWORD *v17; // rcx
  __int64 v18; // rax
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
  __int64 result; // rax
  char v34; // [rsp+30h] [rbp-228h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-227h] BYREF
  _DWORD v36[7]; // [rsp+34h] [rbp-224h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-208h] BYREF
  __int128 v38; // [rsp+58h] [rbp-200h]
  __int64 v39; // [rsp+68h] [rbp-1F0h]
  __int64 v40; // [rsp+70h] [rbp-1E8h]
  _QWORD v41[4]; // [rsp+90h] [rbp-1C8h] BYREF
  _QWORD v42[46]; // [rsp+B0h] [rbp-1A8h] BYREF

  v8 = a4;
  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  if ( ThreadWin32Thread == *(_QWORD *)(a8 + 32) )
    return 0LL;
  memset(v42, 0, sizeof(v42));
  v42[0] = v14;
  LODWORD(v42[1]) = v10 & 0x1FFFF;
  v42[2] = a3;
  *(_DWORD *)(v8 + 12) = 0;
  v17 = &v42[3];
  v18 = 2LL;
  do
  {
    *v17 = *(_OWORD *)v8;
    v17[1] = *(_OWORD *)(v8 + 16);
    v17[2] = *(_OWORD *)(v8 + 32);
    v17[3] = *(_OWORD *)(v8 + 48);
    v17[4] = *(_OWORD *)(v8 + 64);
    v17[5] = *(_OWORD *)(v8 + 80);
    v17[6] = *(_OWORD *)(v8 + 96);
    v17 += 8;
    *(v17 - 1) = *(_OWORD *)(v8 + 112);
    v8 += 128LL;
    --v18;
  }
  while ( v18 );
  *v17 = *(_OWORD *)v8;
  v17[1] = *(_OWORD *)(v8 + 16);
  v17[2] = *(_OWORD *)(v8 + 32);
  v17[3] = *(_OWORD *)(v8 + 48);
  *((_QWORD *)v17 + 8) = *(_QWORD *)(v8 + 64);
  v42[44] = a5;
  v42[45] = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 128LL, v15, v16);
  v41[0] = *(_QWORD *)(v19 + 392);
  *(_QWORD *)(v19 + 392) = v41;
  v41[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v22 = *(_QWORD *)(v13 + 456);
  v38 = *(_OWORD *)(v22 + 64);
  v39 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v14;
  if ( a1 )
    v23 = *(_QWORD *)a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v23;
  if ( a1 )
    v24 = *((_QWORD *)a1 + 35);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v35,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  EtwTraceBeginCallback(52LL);
  v25 = KeUserModeCallback(52LL, v42, 368LL, &v37, v36);
  EtwTraceEndCallback(52LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v35,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29);
  v31 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v31 + 64) = v38;
  *(_QWORD *)(v31 + 80) = v39;
  if ( v25 < 0 || v36[0] != 24 )
    return 0LL;
  v32 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  result = *v32;
  v40 = *v32;
  return result;
}
