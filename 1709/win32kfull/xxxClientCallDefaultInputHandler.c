/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1C02012E8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 result; // rax
  _QWORD v10[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF
  char v12; // [rsp+88h] [rbp+10h] BYREF
  int v13; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  memset(v10, 0, 0x30uLL);
  v10[0] = *(_QWORD *)a1;
  LODWORD(v10[1]) = *(_DWORD *)(a1 + 8);
  v10[2] = *(_QWORD *)(a1 + 16);
  v10[3] = *(_QWORD *)(a1 + 24);
  LODWORD(v10[4]) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)((char *)&v10[4] + 4) = *(_QWORD *)(a1 + 36);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v12,
    gdwInAtomicOperation,
    v2,
    v3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(116LL);
  v4 = KeUserModeCallback(116LL, v10, 48LL, &v14, &v13);
  EtwTraceEndCallback(116LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v12,
    v5,
    v6,
    v7);
  if ( v4 < 0 || v13 != 24 )
    return 0LL;
  v8 = (__int64 *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v11 = *v8;
  return result;
}
