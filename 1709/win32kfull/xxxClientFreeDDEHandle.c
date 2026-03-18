/*
 * XREFs of xxxClientFreeDDEHandle @ 0x1C0202140
 * Callers:
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0A34 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0C20 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F11C4 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F13B0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F1774 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F183C (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C01F1BFC (xxxDDETrackPostHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientFreeDDEHandle(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 result; // rax
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  char v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v10[0] = a1;
  v10[1] = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v11,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(67LL);
  v4 = KeUserModeCallback(67LL, v10, 16LL, &v14, &v13);
  EtwTraceEndCallback(67LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v11,
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
