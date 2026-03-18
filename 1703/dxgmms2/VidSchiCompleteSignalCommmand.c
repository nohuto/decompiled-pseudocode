/*
 * XREFs of VidSchiCompleteSignalCommmand @ 0x1C000EA04
 * Callers:
 *     VidSchiSubmitSignalCommand @ 0x1C000EAE0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C0026340 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009ED0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009F60 (VidSchiCompleteSignalSyncObject.c)
 */

void __fastcall VidSchiCompleteSignalCommmand(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  char v6; // bp
  _QWORD *v7; // r14
  unsigned int i; // esi
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a1 + 88);
  v4 = *(_QWORD *)(a1 + 784);
  v5 = 0;
  v6 = a2;
  v7 = *(_QWORD **)(v2 + 104);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 792) = *(_QWORD *)(a1 + 792);
  }
  else if ( !*(_QWORD *)(a1 + 792) )
  {
    if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    {
      KeSetEvent(*(PRKEVENT *)(a1 + 528), 0, 0);
      ObfDereferenceObject(*(PVOID *)(a1 + 528));
      *(_QWORD *)(a1 + 528) = 0LL;
    }
    else
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 268); ++i )
        VidSchiCompleteSignalSyncObject(*(_QWORD *)(a1 + 8LL * i + 272), a2, (_QWORD *)(a1 + 528 + 8LL * i), v6);
    }
    goto LABEL_6;
  }
  v9 = *(_QWORD *)(a1 + 792);
  if ( v9 )
    *(_QWORD *)(v9 + 784) = *(_QWORD *)(a1 + 784);
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_QWORD *)(a1 + 792) = 0LL;
LABEL_6:
  *(_DWORD *)(a1 + 80) |= 4u;
  if ( (*(_DWORD *)(a1 + 264) & 2) == 0 && *(_DWORD *)(a1 + 268) )
  {
    do
      VidSchiReleaseSyncObjectReference(*(char **)(a1 + 8LL * v5++ + 272));
    while ( v5 < *(_DWORD *)(a1 + 268) );
  }
  VidSchiCheckPendingDeviceCommand(v7);
}
