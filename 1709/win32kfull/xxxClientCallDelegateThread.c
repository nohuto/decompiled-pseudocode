/*
 * XREFs of xxxClientCallDelegateThread @ 0x1C0138664
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxClientCallDelegateThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rcx
  __int64 result; // rax
  _QWORD v14[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF
  char v16; // [rsp+A8h] [rbp+10h] BYREF
  int v17; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v18; // [rsp+B8h] [rbp+20h] BYREF

  memset(v14, 0, 0x40uLL);
  v14[0] = a1;
  v14[1] = a3;
  v14[2] = *(_QWORD *)a2;
  LODWORD(v14[3]) = *(_DWORD *)(a2 + 8);
  v14[4] = *(_QWORD *)(a2 + 16);
  v14[5] = *(_QWORD *)(a2 + 24);
  LODWORD(v14[6]) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)((char *)&v14[6] + 4) = *(_QWORD *)(a2 + 36);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v16,
    gdwInAtomicOperation,
    v6,
    v7);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(50LL);
  v8 = KeUserModeCallback(50LL, v14, 64LL, &v18, &v17);
  EtwTraceEndCallback(50LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v16,
    v9,
    v10,
    v11);
  if ( v8 < 0 || v17 != 24 )
    return 0LL;
  v12 = (__int64 *)v18;
  if ( v18 + 8 < v18 || v18 + 8 > MmUserProbeAddress )
    v12 = (__int64 *)MmUserProbeAddress;
  result = *v12;
  v15 = *v12;
  return result;
}
