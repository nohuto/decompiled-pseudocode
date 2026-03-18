/*
 * XREFs of HUBMISC_AttachDevice @ 0x1C0029C50
 * Callers:
 *     HUBPSM20_IssuingAttachDeviceToPort @ 0x1C000EB70 (HUBPSM20_IssuingAttachDeviceToPort.c)
 *     HUBPSM30_IssuingAttachDeviceToDsm @ 0x1C000FAD0 (HUBPSM30_IssuingAttachDeviceToDsm.c)
 *     HUBPSM30_IssuingAttachDeviceWithResetToDsm @ 0x1C000FB00 (HUBPSM30_IssuingAttachDeviceWithResetToDsm.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMISC_AttachDevice(__int64 a1)
{
  int v2; // ecx
  __int64 result; // rax

  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1328) + 1636LL), 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1336), 0xFFFFFFFD);
  HUBSM_AddEvent(*(_QWORD *)(a1 + 1328) + 504LL, 4034);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1636LL) & 1;
  if ( v2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 1u);
  result = (unsigned int)(4 * v2 + 3009);
  *(_DWORD *)(a1 + 1424) = v2 != 0 ? 9 : 3;
  return result;
}
