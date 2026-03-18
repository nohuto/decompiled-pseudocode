/*
 * XREFs of xxxClientCopyImage @ 0x1C0053A84
 * Callers:
 *     xxxSetMonitorIcoCurIndex @ 0x1C0051864 (xxxSetMonitorIcoCurIndex.c)
 *     xxxCreateWindowSmIcon @ 0x1C0051CA4 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C00534E4 (xxxCreateClassSmIcon.c)
 *     xxxEnsureMonitorCursors @ 0x1C01122D0 (xxxEnsureMonitorCursors.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCopyImage(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v6; // ebx
  __int64 *v7; // rcx
  ULONG64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  char v16; // [rsp+78h] [rbp+10h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF

  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v14 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(64LL);
  v6 = KeUserModeCallback(64LL, &v10, 24LL, &v15, &v17);
  EtwTraceEndCallback(64LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16);
  if ( v6 < 0 || v17 != 24 )
    return 0LL;
  v7 = (__int64 *)v15;
  v8 = v15 + 8;
  if ( v15 + 8 < v15 || v8 > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  result = *v7;
  if ( *v7 )
  {
    if ( a2 )
    {
      LOBYTE(v8) = 3;
      return HMValidateHandleNoRip(result, v8);
    }
  }
  return result;
}
