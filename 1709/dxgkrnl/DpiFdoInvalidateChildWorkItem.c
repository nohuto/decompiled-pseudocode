/*
 * XREFs of DpiFdoInvalidateChildWorkItem @ 0x1C01DE960
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000F224 (DpiDisableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0118F60 (DpiFdoInvalidateChildRelations.c)
 */

void __fastcall DpiFdoInvalidateChildWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rbx
  int v6; // ecx

  v3 = IoObject[8];
  IoFreeWorkItem(IoWorkItem);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 483) )
    DpiDisableD3Requests(*(_QWORD *)(v3 + 24));
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  v6 = *(_DWORD *)(v3 + 236);
  if ( (v6 == 2 || *(_DWORD *)(v3 + 240) == 2 && ((v6 - 3) & 0xFFFFFFFC) == 0 && v6 != 4)
    && *(_DWORD *)(v3 + 3808) != 1
    && *(_DWORD *)(v3 + 284) == 1 )
  {
    DpiFdoInvalidateChildRelations((__int64)IoObject, 6u, (__int64)Context);
  }
  if ( Context )
    ExFreePoolWithTag(Context, 0x6E6F6374u);
  if ( *(_BYTE *)(v3 + 483) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
}
