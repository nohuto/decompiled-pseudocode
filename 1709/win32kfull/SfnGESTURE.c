/*
 * XREFs of SfnGESTURE @ 0x1C01FA720
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnGESTURE(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
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
  __int64 result; // rax
  _BYTE v34[4]; // [rsp+30h] [rbp-C8h] BYREF
  _DWORD v35[7]; // [rsp+34h] [rbp-C4h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+58h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-90h]
  _QWORD v39[10]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v40[4]; // [rsp+C0h] [rbp-38h] BYREF
  char v41; // [rsp+100h] [rbp+8h] BYREF

  v8 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v12 = 0LL;
  memset(v39, 0, 0x30uLL);
  LOBYTE(v13) = 21;
  if ( !HMValidateHandle(a4, v13, v14, v15) )
    return 0LL;
  v39[0] = v12;
  LODWORD(v39[1]) = v8;
  v39[2] = a3;
  v39[3] = a4;
  v39[4] = a5;
  v39[5] = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
  v40[0] = *(_QWORD *)(v19 + 392);
  *(_QWORD *)(v19 + 392) = v40;
  v40[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v22 = *(_QWORD *)(v11 + 456);
  v37 = *(_OWORD *)(v22 + 64);
  v38 = *(_QWORD *)(v22 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v34,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(113LL);
  v25 = KeUserModeCallback(113LL, v39, 48LL, &v36, v35);
  EtwTraceEndCallback(113LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29);
  v31 = *(_QWORD *)(v11 + 456);
  *(_OWORD *)(v31 + 64) = v37;
  *(_QWORD *)(v31 + 80) = v38;
  if ( v25 < 0 || v35[0] != 24 )
    return 0LL;
  v32 = (__int64 *)v36;
  if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  result = *v32;
  v39[6] = *v32;
  return result;
}
