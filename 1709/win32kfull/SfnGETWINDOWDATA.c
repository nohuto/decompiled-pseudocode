/*
 * XREFs of SfnGETWINDOWDATA @ 0x1C01FAA10
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG64 v17; // rcx
  _QWORD v19[11]; // [rsp+40h] [rbp-58h] BYREF
  char v20; // [rsp+A0h] [rbp+8h] BYREF
  char v21; // [rsp+A8h] [rbp+10h] BYREF
  int v22; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+B8h] [rbp+20h] BYREF

  v7 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  memset(v19, 0, 0x30uLL);
  if ( a1 )
    v11 = *a1;
  else
    v11 = 0LL;
  v19[0] = v11;
  LODWORD(v19[1]) = v7;
  v19[2] = a3;
  v19[3] = a4;
  v19[4] = a5;
  if ( (*((_BYTE *)a1 + 58) & 8) != 0 )
    v12 = *(_QWORD *)(gpsi + 424LL);
  else
    v12 = *(_QWORD *)(gpsi + 608LL);
  v19[5] = v12;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v20,
    gdwInAtomicOperation,
    v9,
    v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  EtwTraceBeginCallback(127LL);
  v13 = KeUserModeCallback(127LL, v19, 48LL, &v23, &v22);
  EtwTraceEndCallback(127LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v20,
    v14,
    v15,
    v16);
  if ( v13 < 0 || v22 != 24 )
    return 0LL;
  v17 = v23;
  if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
    v17 = MmUserProbeAddress;
  return *(_QWORD *)v17;
}
