/*
 * XREFs of StorPortSetBusDataByOffset @ 0x1C0031260
 * Callers:
 *     StorPortSetBusDataByOffsetVrfy @ 0x1C006A720 (StorPortSetBusDataByOffsetVrfy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorPortSetBusDataByOffset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 - 16) + 648LL))(
           *(_QWORD *)(**(_QWORD **)(a1 - 16) + 608LL),
           a2,
           a5,
           a6,
           a7);
}
