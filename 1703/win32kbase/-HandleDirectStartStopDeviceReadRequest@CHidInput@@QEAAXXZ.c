/*
 * XREFs of ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C004EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C004F170 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 */

void __fastcall CHidInput::HandleDirectStartStopDeviceReadRequest(PRKEVENT *this)
{
  if ( this[1] != (PRKEVENT)-1LL )
  {
    if ( CBaseInput::ExecutingInSensorHostingProcess((CBaseInput *)this) )
      CHidInput::OnDirectStartStopReadNotification((CHidInput *)this);
    else
      KeSetEvent(this[57], 1, 0);
  }
}
