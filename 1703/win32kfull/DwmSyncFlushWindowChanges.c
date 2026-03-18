/*
 * XREFs of DwmSyncFlushWindowChanges @ 0x1C00E98A4
 * Callers:
 *     xxxSendInput @ 0x1C003B1F0 (xxxSendInput.c)
 * Callees:
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C00E9650 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 */

__int64 __fastcall DwmSyncFlushWindowChanges(void *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = g_cDWMWindowUniqueness;
  v2 = -1073741823;
  if ( a1 )
  {
    v2 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( gbInVideoPnpCallout || qword_1C0325868 == g_cDWMWindowUniqueness )
    {
      ObfDereferenceObject(a1);
    }
    else
    {
      v2 = DwmSyncFlushForceRenderAndWaitForBatch(a1, 0);
      qword_1C0325868 = v1;
    }
  }
  return v2;
}
