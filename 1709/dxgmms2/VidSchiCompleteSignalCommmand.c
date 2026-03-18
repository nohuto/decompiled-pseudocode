/*
 * XREFs of VidSchiCompleteSignalCommmand @ 0x1C000DE7C
 * Callers:
 *     VidSchiSubmitSignalCommand @ 0x1C000E040 (VidSchiSubmitSignalCommand.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C00283FC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0004764 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B3C0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B450 (VidSchiCompleteSignalSyncObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiCompleteSignalCommmand(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  char v6; // bp
  _QWORD *v7; // r14
  int v8; // eax
  unsigned int i; // esi
  struct _KEVENT *v10; // rcx
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 88);
  v4 = *(_QWORD *)(a1 + 808);
  v5 = 0;
  v6 = a2;
  v7 = *(_QWORD **)(v2 + 104);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 816) = *(_QWORD *)(a1 + 816);
  }
  else if ( !*(_QWORD *)(a1 + 816) )
  {
    v8 = *(_DWORD *)(a1 + 288);
    if ( (v8 & 2) != 0 )
    {
      v10 = *(struct _KEVENT **)(a1 + 552);
      if ( (v8 & 8) != 0 )
      {
        ((void (__fastcall *)(struct _KEVENT *))DxgCoreInterface[51])(v10);
      }
      else
      {
        KeSetEvent(v10, 0, 0);
        ObfDereferenceObject(*(PVOID *)(a1 + 552));
      }
      *(_QWORD *)(a1 + 552) = 0LL;
    }
    else
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 292); ++i )
        VidSchiCompleteSignalSyncObject(*(_QWORD *)(a1 + 8LL * i + 296), a2, (_QWORD *)(a1 + 552 + 8LL * i), v6);
    }
    goto LABEL_6;
  }
  v11 = *(_QWORD *)(a1 + 816);
  if ( v11 )
    *(_QWORD *)(v11 + 808) = *(_QWORD *)(a1 + 808);
  *(_QWORD *)(a1 + 808) = 0LL;
  *(_QWORD *)(a1 + 816) = 0LL;
LABEL_6:
  *(_DWORD *)(a1 + 80) |= 4u;
  if ( (*(_DWORD *)(a1 + 288) & 2) == 0 && *(_DWORD *)(a1 + 292) )
  {
    do
      VidSchiReleaseSyncObjectReference(*(char **)(a1 + 8LL * v5++ + 296));
    while ( v5 < *(_DWORD *)(a1 + 292) );
  }
  VidSchiCheckPendingDeviceCommand(v7);
}
