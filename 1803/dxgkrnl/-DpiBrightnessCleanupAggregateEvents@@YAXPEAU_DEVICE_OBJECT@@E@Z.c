/*
 * XREFs of ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C0200AE0
 * Callers:
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201C7C (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0200994 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

void __fastcall DpiBrightnessCleanupAggregateEvents(struct _DEVICE_OBJECT *a1, char a2)
{
  __int64 v2; // rsi
  char v3; // di
  char *v6; // rbx

  v2 = 3LL;
  v3 = 0;
  v6 = (char *)a1->DeviceExtension + 4200;
  do
  {
    if ( *((_QWORD *)v6 + 1) )
    {
      EADeleteAggregateEvent();
      if ( *v6 )
        v3 = 1;
      *v6 = 0;
      *((_QWORD *)v6 + 1) = 0LL;
    }
    v6 += 24;
    --v2;
  }
  while ( v2 );
  if ( v3 )
  {
    if ( a2 )
      DpiBrightnessAISetBacklightOptLevel(a1);
  }
}
