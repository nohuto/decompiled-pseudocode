/*
 * XREFs of DpiGdiHandleAsyncDisplayCallout @ 0x1C0104AA0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGdiSyncDisplayCallout @ 0x1C0104AC4 (DpiGdiSyncDisplayCallout.c)
 */

void __fastcall DpiGdiHandleAsyncDisplayCallout(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  DpiGdiSyncDisplayCallout(IoObject, Context);
  IoFreeWorkItem(IoWorkItem);
}
