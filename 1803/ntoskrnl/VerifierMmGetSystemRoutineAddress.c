/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x1408318C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfThunkAdjustExportAddressIfHooked @ 0x140823BB4 (VfThunkAdjustExportAddressIfHooked.c)
 */

__int64 __fastcall VerifierMmGetSystemRoutineAddress(__int64 a1)
{
  __int64 result; // rax

  result = ((__int64 (*)(void))pXdvMmGetSystemRoutineAddress)();
  if ( result )
    return VfThunkAdjustExportAddressIfHooked(result, a1);
  return result;
}
