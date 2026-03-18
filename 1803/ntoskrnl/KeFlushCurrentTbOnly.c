/*
 * XREFs of KeFlushCurrentTbOnly @ 0x1400ADB50
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiConvertHiberPhasePages @ 0x140475478 (MiConvertHiberPhasePages.c)
 *     MiInitializePfnsForValidMappings @ 0x1408997A0 (MiInitializePfnsForValidMappings.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x1408BBF64 (MiZeroBootMappings.c)
 * Callees:
 *     KiFlushCurrentTbOnly @ 0x1400ADBA4 (KiFlushCurrentTbOnly.c)
 *     HvlFlushAddressSpaceTb @ 0x140159CD8 (HvlFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x14015A520 (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiIsFlushEntire @ 0x14024519C (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1402451D4 (KiPrepareFlushCurrentAffinity.c)
 */

__int64 __fastcall KeFlushCurrentTbOnly(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r8
  _BYTE v6[8]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v8[176]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = (unsigned int)a1;
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly((unsigned int)v3, a2, a3, v3);
  KiPrepareFlushParameters((unsigned int)v3, &v7, v6);
  KiPrepareFlushCurrentAffinity(v8);
  LOBYTE(v5) = v6[0];
  return HvlFlushAddressSpaceTb(v7, v8, v5);
}
