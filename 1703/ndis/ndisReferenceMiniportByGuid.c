/*
 * XREFs of ndisReferenceMiniportByGuid @ 0x1C0050DB8
 * Callers:
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00D8DD8 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00D93C4 (ndisHandleBindNotification.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 */

struct _NDIS_M_DRIVER_BLOCK *__fastcall ndisReferenceMiniportByGuid(_QWORD *a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  struct _NDIS_M_DRIVER_BLOCK *v5; // rdi
  KIRQL v6; // bp
  __int64 i; // rbx
  __int64 v8; // rcx
  char v10; // al
  KSPIN_LOCK *p_SpinLock; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v5 = ndisMiniDriverList;
  v6 = v4;
LABEL_9:
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel(&v5->Ref.SpinLock);
    for ( i = (__int64)v5->MiniportQueue; ; i = *(_QWORD *)(i + 8) )
    {
      if ( !i )
      {
        KeReleaseSpinLockFromDpcLevel(&v5->Ref.SpinLock);
        v5 = v5->NextDriver;
        goto LABEL_9;
      }
      v8 = *(_QWORD *)(i + 4032) - *a1;
      if ( !v8 )
        v8 = *(_QWORD *)(i + 4040) - a1[1];
      if ( !v8 )
        break;
    }
    v10 = ndisReferenceMiniport(i, a2);
    p_SpinLock = &v5->Ref.SpinLock;
    v5 = (struct _NDIS_M_DRIVER_BLOCK *)(i & -(__int64)(v10 != 0));
    KeReleaseSpinLockFromDpcLevel(p_SpinLock);
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v6);
  return v5;
}
