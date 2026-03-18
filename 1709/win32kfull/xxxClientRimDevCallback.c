/*
 * XREFs of xxxClientRimDevCallback @ 0x1C0202C08
 * Callers:
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01AB768 (RIMDevChangeDoUsermodeCallback.c)
 *     EditionClientRimDevCallback @ 0x1C01CAB20 (EditionClientRimDevCallback.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxClientRimDevCallback(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int16 a6,
        __int16 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  __int64 result; // rax
  _QWORD v15[2]; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+4Ch] [rbp-2Ch]
  int v18; // [rsp+50h] [rbp-28h]
  __int16 v19; // [rsp+54h] [rbp-24h]
  __int16 v20; // [rsp+56h] [rbp-22h]
  __int64 v21; // [rsp+58h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp-18h]
  int v23; // [rsp+80h] [rbp+8h] BYREF

  v15[0] = a4;
  v15[1] = a5;
  v16 = a1;
  v17 = a2;
  v18 = a3;
  v19 = a6;
  v20 = a7;
  v21 = a8;
  v22 = a9;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a7,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a6);
  EtwTraceBeginCallback(118LL);
  v9 = KeUserModeCallback(118LL, v15, 48LL, &a5, &v23);
  EtwTraceEndCallback(118LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a6);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a7,
    v10,
    v11,
    v12);
  if ( v9 < 0 || v23 != 24 )
    return 0LL;
  v13 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  result = *v13;
  a8 = *v13;
  return result;
}
