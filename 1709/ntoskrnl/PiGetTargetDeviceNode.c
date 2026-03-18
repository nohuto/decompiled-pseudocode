/*
 * XREFs of PiGetTargetDeviceNode @ 0x14055CEC8
 * Callers:
 *     PnpRecordBlackboxPnpEventInformation @ 0x1400FEDA4 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiCheckRemovalPreconditions @ 0x14055C9F8 (PiCheckRemovalPreconditions.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1406D53A0 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiGetTargetDeviceNode(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 144);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  return result;
}
