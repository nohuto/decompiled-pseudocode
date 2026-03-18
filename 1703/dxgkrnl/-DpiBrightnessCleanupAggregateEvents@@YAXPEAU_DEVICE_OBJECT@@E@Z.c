/*
 * XREFs of ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01C8EB4
 * Callers:
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01C9AB8 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01C8D84 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

void __fastcall DpiBrightnessCleanupAggregateEvents(struct _DEVICE_OBJECT *a1, char a2)
{
  _BYTE *DeviceExtension; // rbp
  char v3; // di
  __int64 v4; // rbx
  __int64 v7; // r14

  DeviceExtension = a1->DeviceExtension;
  v3 = 0;
  v4 = 0LL;
  v7 = 3LL;
  do
  {
    if ( *(_QWORD *)&DeviceExtension[v4 + 4112] )
    {
      EADeleteAggregateEvent();
      if ( DeviceExtension[v4 + 4104] )
        v3 = 1;
      DeviceExtension[v4 + 4104] = 0;
      *(_QWORD *)&DeviceExtension[v4 + 4112] = 0LL;
    }
    v4 += 24LL;
    --v7;
  }
  while ( v7 );
  if ( v3 )
  {
    if ( a2 )
      DpiBrightnessAISetBacklightOptLevel(a1);
  }
}
