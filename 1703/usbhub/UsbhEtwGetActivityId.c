/*
 * XREFs of UsbhEtwGetActivityId @ 0x1C005903C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0004680 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhEtwGetActivityId(__int64 a1, __int64 a2)
{
  if ( a1 && g_IoGetActivityIdIrp )
    return g_IoGetActivityIdIrp(a1, a2);
  else
    return 3221225473LL;
}
