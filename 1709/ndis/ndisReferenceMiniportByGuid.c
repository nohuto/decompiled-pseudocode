/*
 * XREFs of ndisReferenceMiniportByGuid @ 0x1C004F980
 * Callers:
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E319C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00E3784 (ndisHandleBindNotification.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 */

__int64 __fastcall ndisReferenceMiniportByGuid(_QWORD *a1)
{
  KIRQL v2; // al
  struct _NDIS_M_DRIVER_BLOCK *v3; // rdi
  KIRQL v4; // bp
  __int64 i; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi

  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v3 = ndisMiniDriverList;
  v4 = v2;
LABEL_9:
  if ( v3 )
  {
    KeAcquireSpinLockAtDpcLevel(&v3->Ref.SpinLock);
    for ( i = (__int64)v3->MiniportQueue; ; i = *(_QWORD *)(i + 8) )
    {
      if ( !i )
      {
        KeReleaseSpinLockFromDpcLevel(&v3->Ref.SpinLock);
        v3 = v3->NextDriver;
        goto LABEL_9;
      }
      v6 = *(_QWORD *)(i + 4032) - *a1;
      if ( !v6 )
        v6 = *(_QWORD *)(i + 4040) - a1[1];
      if ( !v6 )
        break;
    }
    v7 = i & -(__int64)(ndisReferenceMiniport(i) != 0);
    KeReleaseSpinLockFromDpcLevel(&v3->Ref.SpinLock);
  }
  else
  {
    v7 = 0LL;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v4);
  return v7;
}
