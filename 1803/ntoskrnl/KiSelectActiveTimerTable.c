/*
 * XREFs of KiSelectActiveTimerTable @ 0x140168150
 * Callers:
 *     KiTimerExpiration @ 0x1401543F4 (KiTimerExpiration.c)
 *     KiSetSystemTimeDpc @ 0x140167EE0 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x140474F40 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectActiveTimerTable(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !KiSerializeTimerExpiration )
    return a1 + 13952;
  if ( !a2 || *(_BYTE *)(a1 + 33) )
    return KiProcessorBlock[0] + 13952;
  return result;
}
