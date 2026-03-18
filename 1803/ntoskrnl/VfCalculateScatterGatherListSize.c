/*
 * XREFs of VfCalculateScatterGatherListSize @ 0x140818400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x14081B294 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfCalculateScatterGatherListSize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD, __int64, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, __int64))ViGetRealDmaOperation(
                                                                                                    a1,
                                                                                                    104LL);
  return RealDmaOperation(a1, a2, a3, a4, a5, a6);
}
