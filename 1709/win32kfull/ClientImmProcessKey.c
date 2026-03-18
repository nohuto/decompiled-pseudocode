/*
 * XREFs of ClientImmProcessKey @ 0x1C00CE848
 * Callers:
 *     xxxImmProcessKey @ 0x1C00CE9BC (xxxImmProcessKey.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall ClientImmProcessKey(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rcx
  __int64 result; // rax
  _QWORD v17[10]; // [rsp+38h] [rbp-50h] BYREF
  int v18; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+10h] BYREF
  char v20; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+20h]

  memset(v17, 0, 0x28uLL);
  v17[0] = a1;
  v17[1] = a2;
  LODWORD(v17[2]) = a3;
  v17[3] = a4;
  LODWORD(v17[4]) = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v20,
    gdwInAtomicOperation,
    v9,
    v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(93LL);
  v11 = KeUserModeCallback(93LL, v17, 40LL, &v19, &v18);
  EtwTraceEndCallback(93LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v20,
    v12,
    v13,
    v14);
  if ( v11 < 0 || v18 != 24 )
    return 0LL;
  v15 = (__int64 *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v15 = (__int64 *)MmUserProbeAddress;
  result = *v15;
  v21 = *v15;
  return result;
}
