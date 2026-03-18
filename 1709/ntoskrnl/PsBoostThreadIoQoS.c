/*
 * XREFs of PsBoostThreadIoQoS @ 0x140113034
 * Callers:
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     KiAbThreadBoostIoPriority @ 0x14010F8BC (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14010F854 (KeAbProcessEffectiveIoPriorityChange.c)
 */

void __fastcall PsBoostThreadIoQoS(__int64 a1, int a2)
{
  if ( a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1804));
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 1804)) == 1 )
  {
    KeAbProcessEffectiveIoPriorityChange(a1, 0);
  }
}
