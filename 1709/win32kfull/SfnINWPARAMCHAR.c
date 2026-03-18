/*
 * XREFs of SfnINWPARAMCHAR @ 0x1C01FEBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0121148 (RtlWCSMessageWParamCharToMB.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnINWPARAMCHAR(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v8; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
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
  __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+58h] [rbp-B0h]
  __int64 v34; // [rsp+68h] [rbp-A0h]
  _QWORD v35[10]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v36[9]; // [rsp+C0h] [rbp-48h] BYREF
  char v37; // [rsp+110h] [rbp+8h] BYREF
  char v38; // [rsp+118h] [rbp+10h] BYREF
  __int64 v39; // [rsp+120h] [rbp+18h] BYREF
  int v40; // [rsp+128h] [rbp+20h] BYREF

  v39 = a3;
  v8 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v12 = 0LL;
  memset(v35, 0, 0x30uLL);
  v35[0] = v12;
  LODWORD(v35[1]) = v8;
  if ( (a7 & 1) != 0 )
  {
    if ( v8 == 47 || v8 == 288 )
    {
      v31 = (unsigned __int16)v39;
      RtlWCSMessageWParamCharToMB(v8, (__int64)&v31);
      v39 = (WORD1(v39) << 16) | (unsigned __int16)v31;
    }
    else
    {
      RtlWCSMessageWParamCharToMB(v8, (__int64)&v39);
    }
  }
  v35[2] = v39;
  v35[3] = a4;
  v35[4] = a5;
  v35[5] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v36[0] = *(_QWORD *)(v16 + 392);
  *(_QWORD *)(v16 + 392) = v36;
  v36[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v19 = *(_QWORD *)(v11 + 456);
  v33 = *(_OWORD *)(v19 + 64);
  v34 = *(_QWORD *)(v19 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v37,
    gdwInAtomicOperation,
    v17,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(2LL);
  v22 = KeUserModeCallback(2LL, v35, 48LL, &v32, &v40);
  EtwTraceEndCallback(2LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v37,
    v23,
    v24,
    v25);
  ThreadUnlock1(v27, v26);
  v28 = *(_QWORD *)(v11 + 456);
  *(_OWORD *)(v28 + 64) = v33;
  *(_QWORD *)(v28 + 80) = v34;
  if ( v22 < 0 || v40 != 24 )
    return 0LL;
  v29 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
    v29 = (__int64 *)MmUserProbeAddress;
  result = *v29;
  v35[6] = *v29;
  return result;
}
