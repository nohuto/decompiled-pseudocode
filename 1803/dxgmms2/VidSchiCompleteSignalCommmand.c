/*
 * XREFs of VidSchiCompleteSignalCommmand @ 0x1C0013D00
 * Callers:
 *     VidSchiSubmitSignalCommand @ 0x1C0001A20 (VidSchiSubmitSignalCommand.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002B2E4 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BA80 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BB10 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiCompleteSignalCommmand(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  char v6; // bp
  _QWORD *v7; // r14
  __int64 v8; // rcx
  int v9; // eax
  unsigned int i; // esi
  struct _KEVENT *v11; // rcx

  v2 = *(_QWORD *)(a1 + 88);
  v4 = *(_QWORD *)(a1 + 792);
  v5 = 0;
  v6 = a2;
  v7 = *(_QWORD **)(v2 + 104);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 800) = *(_QWORD *)(a1 + 800);
    v8 = *(_QWORD *)(a1 + 800);
    if ( !v8 )
    {
LABEL_16:
      *(_QWORD *)(a1 + 792) = 0LL;
      *(_QWORD *)(a1 + 800) = 0LL;
      goto LABEL_6;
    }
LABEL_15:
    *(_QWORD *)(v8 + 792) = *(_QWORD *)(a1 + 792);
    goto LABEL_16;
  }
  v8 = *(_QWORD *)(a1 + 800);
  if ( v8 )
    goto LABEL_15;
  v9 = *(_DWORD *)(a1 + 272);
  if ( (v9 & 2) != 0 )
  {
    v11 = *(struct _KEVENT **)(a1 + 536);
    if ( (v9 & 8) != 0 )
    {
      ((void (__fastcall *)(struct _KEVENT *))DxgCoreInterface[62])(v11);
    }
    else
    {
      KeSetEvent(v11, 0, 0);
      ObfDereferenceObject(*(PVOID *)(a1 + 536));
    }
    *(_QWORD *)(a1 + 536) = 0LL;
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 276); ++i )
      VidSchiCompleteSignalSyncObject(*(_QWORD *)(a1 + 8LL * i + 280), a2, (_QWORD *)(a1 + 536 + 8LL * i), v6);
  }
LABEL_6:
  *(_DWORD *)(a1 + 80) |= 4u;
  if ( (*(_DWORD *)(a1 + 272) & 2) == 0 && *(_DWORD *)(a1 + 276) )
  {
    do
      VidSchiReleaseSyncObjectReference(*(char **)(a1 + 8LL * v5++ + 280));
    while ( v5 < *(_DWORD *)(a1 + 276) );
  }
  VidSchiCheckPendingDeviceCommand(v7);
}
