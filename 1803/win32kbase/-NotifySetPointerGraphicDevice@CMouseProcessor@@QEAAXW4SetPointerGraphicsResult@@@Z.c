/*
 * XREFs of ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x1C0039EB0
 * Callers:
 *     NotifySetPointerGraphicDevice @ 0x1C006CA00 (NotifySetPointerGraphicDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::NotifySetPointerGraphicDevice(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rbx

  v2 = a2;
  if ( !(_DWORD)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = a1 + 2864;
  RIMLockExclusive(v4);
  if ( *(_BYTE *)(v4 + 16) && v2 > 0 )
  {
    if ( v2 <= 2 )
    {
      if ( *(_BYTE *)(v4 + 17) )
        *(_BYTE *)(v4 + 17) = 0;
    }
    else if ( v2 == 3 )
    {
      *(_BYTE *)(v4 + 17) = 1;
    }
  }
  *(_QWORD *)(v4 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
