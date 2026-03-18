/*
 * XREFs of DpiGdiHandleAsyncDisplayCallout @ 0x1C01EE6F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGdiSyncDisplayCallout @ 0x1C01EE714 (DpiGdiSyncDisplayCallout.c)
 */

void __fastcall DpiGdiHandleAsyncDisplayCallout(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  DpiGdiSyncDisplayCallout(IoObject, Context);
  IoFreeWorkItem(IoWorkItem);
}
