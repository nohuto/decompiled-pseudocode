/*
 * XREFs of SfnOUTDWORDINDWORD @ 0x1C01FF270
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnOUTDWORDINDWORD(
        volatile signed __int32 *a1,
        __int64 a2,
        _DWORD *a3,
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
  __int64 v32; // r8
  _DWORD *v33; // rdx
  __int128 v35; // [rsp+58h] [rbp-C0h]
  __int64 v36; // [rsp+68h] [rbp-B0h]
  _QWORD v37[11]; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v38[10]; // [rsp+C8h] [rbp-50h] BYREF
  char v39; // [rsp+120h] [rbp+8h] BYREF
  char v40; // [rsp+128h] [rbp+10h] BYREF
  int v41; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v42; // [rsp+138h] [rbp+20h] BYREF

  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v37, 0, 0x30uLL);
  v37[0] = v14;
  LODWORD(v37[1]) = v10;
  v37[3] = a4;
  v37[4] = a5;
  v37[5] = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v38[0] = *(_QWORD *)(v18 + 392);
  *(_QWORD *)(v18 + 392) = v38;
  v38[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v21 = *(_QWORD *)(v13 + 456);
  v35 = *(_OWORD *)(v21 + 64);
  v36 = *(_QWORD *)(v21 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v39,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  EtwTraceBeginCallback(33LL);
  v24 = KeUserModeCallback(33LL, v37, 48LL, &v42, &v41);
  EtwTraceEndCallback(33LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v39,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28);
  v30 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v30 + 64) = v35;
  *(_QWORD *)(v30 + 80) = v36;
  if ( v24 < 0 || v41 != 24 )
    return 0LL;
  v31 = (__int64 *)v42;
  if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  v32 = *v31;
  v37[6] = *v31;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v33 = *(_DWORD **)(v42 + 16);
    if ( (unsigned __int64)v33 >= MmUserProbeAddress )
      v33 = (_DWORD *)MmUserProbeAddress;
    *a3 = *v33;
  }
  return v32;
}
