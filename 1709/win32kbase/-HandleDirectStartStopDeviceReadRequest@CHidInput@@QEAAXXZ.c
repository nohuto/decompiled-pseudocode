/*
 * XREFs of ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C00197F0
 * Callers:
 *     rimObsStartStopDeviceRead @ 0x1C0114A4C (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0019610 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C0019BC0 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C001AB4C (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 */

void __fastcall CHidInput::HandleDirectStartStopDeviceReadRequest(struct _KEVENT **this)
{
  struct _KEVENT *v2; // rdi

  if ( this[1] != (struct _KEVENT *)-1LL )
  {
    v2 = 0LL;
    if ( CBaseInput::ExecutingInSensorHostingProcess((CBaseInput *)this) )
    {
      CHidInput::OnDirectStartStopReadNotification((CHidInput *)this);
    }
    else
    {
      if ( CRIMBase::SensorDispatcherObject::IsValid((CRIMBase::SensorDispatcherObject *)(this + 74)) )
        v2 = this[80];
      KeSetEvent(v2, 1, 0);
    }
  }
}
