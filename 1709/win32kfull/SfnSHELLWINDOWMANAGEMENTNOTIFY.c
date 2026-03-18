/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C0102920
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

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 result; // rax
  char v31; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v32[3]; // [rsp+31h] [rbp-107h] BYREF
  _DWORD v33[7]; // [rsp+34h] [rbp-104h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v35; // [rsp+58h] [rbp-E0h]
  __int64 v36; // [rsp+68h] [rbp-D0h]
  __int64 v37; // [rsp+70h] [rbp-C8h]
  _QWORD v38[4]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD v39[10]; // [rsp+B0h] [rbp-88h] BYREF

  v8 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v12 = 0LL;
  memset(v39, 0, sizeof(v39));
  v39[0] = v12;
  LODWORD(v39[1]) = v8 & 0x1FFFF;
  v39[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  *(_OWORD *)&v39[3] = *(_OWORD *)a4;
  *(_OWORD *)&v39[5] = *(_OWORD *)(a4 + 16);
  v39[7] = *(_QWORD *)(a4 + 32);
  v39[8] = a5;
  v39[9] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v38[0] = *(_QWORD *)(v16 + 392);
  *(_QWORD *)(v16 + 392) = v38;
  v38[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v19 = *(_QWORD *)(v11 + 456);
  v35 = *(_OWORD *)(v19 + 64);
  v36 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v12;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 456) + 64LL) = v20;
  if ( a1 )
    v21 = *((_QWORD *)a1 + 35);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 456) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v32,
    gdwInAtomicOperation,
    v17,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  EtwTraceBeginCallback(54LL);
  v22 = KeUserModeCallback(54LL, v39, 80LL, &v34, v33);
  EtwTraceEndCallback(54LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v32,
    v23,
    v24,
    v25);
  ThreadUnlock1(v27, v26);
  v28 = *(_QWORD *)(v11 + 456);
  *(_OWORD *)(v28 + 64) = v35;
  *(_QWORD *)(v28 + 80) = v36;
  if ( v22 < 0 || v33[0] != 24 )
    return 0LL;
  v29 = (__int64 *)v34;
  if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
    v29 = (__int64 *)MmUserProbeAddress;
  result = *v29;
  v37 = *v29;
  return result;
}
