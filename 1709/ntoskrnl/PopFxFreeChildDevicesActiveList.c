/*
 * XREFs of PopFxFreeChildDevicesActiveList @ 0x1406F82A4
 * Callers:
 *     PopDripsCallbackTakeAction @ 0x14070A6BC (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14070A8CC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x14012914C (IoControlPnpDeviceActionQueue.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxFreeChildDevicesActiveList(__int64 a1, void *a2)
{
  __int64 *v2; // r8
  __int64 *v4; // rax
  __int64 *i; // rcx
  int v6; // ecx
  __int64 *v7; // rcx

  v2 = *(__int64 **)(a1 + 48);
  v4 = v2;
  for ( i = (__int64 *)v2[1]; i; i = (__int64 *)i[1] )
    v4 = i;
  while ( v4 != v2 )
  {
    *((_DWORD *)v4 + 74) &= ~0x10u;
    v6 = *((_DWORD *)v4 + 74);
    if ( (v6 & 0x20) != 0 )
      *((_DWORD *)v4 + 74) = v6 & 0xFFFFFFDF;
    v7 = (__int64 *)*v4;
    if ( *v4 )
    {
      do
      {
        v4 = v7;
        v7 = (__int64 *)v7[1];
      }
      while ( v7 );
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  IoControlPnpDeviceActionQueue(0);
  ExFreePoolWithTag(a2, 0x4D584650u);
}
