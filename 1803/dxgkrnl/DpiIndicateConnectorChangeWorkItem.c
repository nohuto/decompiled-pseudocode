/*
 * XREFs of DpiIndicateConnectorChangeWorkItem @ 0x1C01EE410
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkQueryConnectionChanges @ 0x1C003BA24 (DxgkQueryConnectionChanges.c)
 */

void __fastcall DpiIndicateConnectorChangeWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi

  v3 = IoObject[8];
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 483) )
    DpiCheckForOutstandingD3Requests(v3);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3168), 1u);
  DxgkQueryConnectionChanges((__int64)IoObject, 0, 0, 0, 1);
  ExReleaseResourceLite((PERESOURCE)(v3 + 3168));
  KeLeaveCriticalRegion();
  if ( *(_BYTE *)(v3 + 483) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  IoFreeWorkItem(IoWorkItem);
}
