/*
 * XREFs of VfThunkAdjustExportAddressIfHooked @ 0x1407B5EC0
 * Callers:
 *     VerifierMmGetSystemRoutineAddress @ 0x1407C43A0 (VerifierMmGetSystemRoutineAddress.c)
 * Callees:
 *     ViThunkAdjustExportAddressIfHooked @ 0x1407B61E0 (ViThunkAdjustExportAddressIfHooked.c)
 */

__int64 __fastcall VfThunkAdjustExportAddressIfHooked(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  if ( !(unsigned int)ViThunkAdjustExportAddressIfHooked(&v4, a2, &VfRegularThunks, 40LL)
    && !(unsigned int)ViThunkAdjustExportAddressIfHooked(&v4, a2, &VfOrderDependentThunks, 48LL)
    && !(unsigned int)ViThunkAdjustExportAddressIfHooked(&v4, a2, &VfMandatoryThunks, 40LL)
    && !(unsigned int)ViThunkAdjustExportAddressIfHooked(&v4, a2, &VfPoolThunks, 40LL) )
  {
    ViThunkAdjustExportAddressIfHooked(&v4, a2, &VfXdvThunks, 40LL);
  }
  return v4;
}
