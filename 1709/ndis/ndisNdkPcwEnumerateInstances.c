/*
 * XREFs of ndisNdkPcwEnumerateInstances @ 0x1C0067988
 * Callers:
 *     ndisNdkPcwProviderCallback @ 0x1C00EE480 (ndisNdkPcwProviderCallback.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00EEBB4 (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisNdkPcwEnumerateInstances(PPCW_BUFFER Buffer)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  KIRQL i; // di
  const UNICODE_STRING *MiniportName; // rax
  __int64 v6; // r8
  struct _PCW_DATA Data; // [rsp+30h] [rbp-18h] BYREF

  Data.Data = 0LL;
  Data.Size = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v3 = ndisMiniportList;
  for ( i = v2; v3; v3 = v3->NextGlobalMiniport )
  {
    if ( v3->NDKBlock && ndisReferenceMiniport((__int64)v3) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, i);
      MiniportName = ndisPcwGetMiniportName(v3);
      PcwAddInstance(Buffer, MiniportName, *(_DWORD *)(v6 + 4), 1u, &Data);
      i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport((__int64)v3, 0x5Au);
    }
  }
  KeReleaseSpinLock(&ndisMiniportListLock, i);
  return 0LL;
}
