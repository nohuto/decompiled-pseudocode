/*
 * XREFs of fnHkINLPCBTACTIVATESTRUCT @ 0x1C0116658
 * Callers:
 *     xxxCallCtfHook @ 0x1C005BCB8 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTACTIVATESTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rcx
  _OWORD v17[5]; // [rsp+38h] [rbp-50h] BYREF
  char v18; // [rsp+90h] [rbp+8h] BYREF
  int v19; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v20; // [rsp+A0h] [rbp+18h] BYREF

  memset(v17, 0, 0x30uLL);
  LODWORD(v17[0]) = a1;
  *((_QWORD *)&v17[0] + 1) = a2;
  *(_DWORD *)(a3 + 4) = 0;
  v17[1] = *(_OWORD *)a3;
  *(_QWORD *)&v17[2] = a4;
  *((_QWORD *)&v17[2] + 1) = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    gdwInAtomicOperation,
    v9,
    v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  EtwTraceBeginCallback(41LL);
  v11 = KeUserModeCallback(41LL, v17, 48LL, &v20, &v19);
  EtwTraceEndCallback(41LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    v12,
    v13,
    v14);
  if ( v11 < 0 || v19 != 24 )
    return 0LL;
  v15 = (_QWORD *)v20;
  if ( v20 + 8 < v20 || v20 + 8 > MmUserProbeAddress )
    v15 = (_QWORD *)MmUserProbeAddress;
  return (unsigned int)*v15;
}
