/*
 * XREFs of WheapProcessWorkQueueItem @ 0x140289820
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     WheapFreeErrorRecord @ 0x1402897B0 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x14028A0E8 (WheapGenerateETWEvents.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14043B4C8 (WheapCreateTriageDumpFromPreviousSession.c)
 *     WheapPredictiveFailureAnalysis @ 0x1407642B0 (WheapPredictiveFailureAnalysis.c)
 */

void __fastcall WheapProcessWorkQueueItem(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  PIO_TIMER Timer; // rax

  if ( WheapPreviousSessionFailure )
  {
    if ( (*(_BYTE *)(a2 + 144) & 2) != 0 && *(_DWORD *)(a2 + 52) <= 1u )
    {
      v3 = *(_QWORD *)(a2 + 32);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 40);
        if ( v4 <= 9 )
        {
          v5 = 665;
          if ( _bittest(&v5, v4) )
            WheapCreateTriageDumpFromPreviousSession(a2);
        }
      }
    }
  }
  if ( LODWORD(WheapDispatchPtr.NextDevice) )
  {
    WheapPredictiveFailureAnalysis(a2);
    WheapGenerateETWEvents(a2 + 40);
    WheapFreeErrorRecord(a2);
  }
  else
  {
    KeWaitForSingleObject(&WheapDispatchPtr.DeviceExtension, Executive, 0, 0, 0LL);
    Timer = WheapDispatchPtr.Timer;
    if ( *(struct _DEVICE_OBJECT **)WheapDispatchPtr.Timer != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.CurrentIrp )
      __fastfail(3u);
    *(_QWORD *)a2 = &WheapDispatchPtr.CurrentIrp;
    *(_QWORD *)(a2 + 8) = Timer;
    *(_QWORD *)&Timer->Type = a2;
    WheapDispatchPtr.Timer = (PIO_TIMER)a2;
    KeSetEvent((PRKEVENT)&WheapDispatchPtr.DeviceExtension, 0, 0);
  }
}
