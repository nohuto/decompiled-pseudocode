/*
 * XREFs of DpiFdoDispatchCleanupAndClose @ 0x1C01F2B60
 * Callers:
 *     <none>
 * Callees:
 *     DpiDisableD3Requests @ 0x1C0001CAC (DpiDisableD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 */

NTSTATUS __fastcall DpiFdoDispatchCleanupAndClose(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  PIRP v5; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v2 + 1143) )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  }
  else
  {
    if ( *(_BYTE *)(v2 + 57) && a2->Tail.Overlay.CurrentStackLocation->MajorFunction == 2 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v2 + 483) )
        DpiDisableD3Requests(*(_QWORD *)(v2 + 24));
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v2 + 168), 1u);
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v2 + 5272)) )
      {
        while ( 1 )
        {
          v5 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5064), 0LL);
          if ( !v5 )
            break;
          v5->IoStatus.Information = 0LL;
          v5->IoStatus.Status = -1073741536;
          IofCompleteRequest(v5, 0);
        }
        *(_BYTE *)(v2 + 5180) = 0;
        *(_BYTE *)(v2 + 5212) = 0;
      }
      if ( *(_BYTE *)(v2 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
      KeLeaveCriticalRegion();
    }
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    return 0;
  }
}
