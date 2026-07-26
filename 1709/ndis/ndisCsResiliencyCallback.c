/*
 * XREFs of ndisCsResiliencyCallback @ 0x1C004F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0072D54 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisCsResiliencyCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  unsigned __int8 v5; // r9
  KIRQL v6; // al
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  KIRQL v8; // di
  unsigned __int8 v9; // dl

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1;
  v5 = ndisCsResiliency;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4;
  if ( !v4 && ValueLength == 4 && Value )
    v5 = *Value != 0;
  if ( ndisCsResiliency != v5 )
  {
    ndisCsResiliency = v5;
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v7 = ndisMiniportList;
    v8 = v6;
    while ( v7 )
    {
      if ( v7->AoAc && ndisReferenceMiniport((__int64)v7) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v8);
        if ( v7->AoAc )
          ndisCsResiliencyChange(v7, v9);
        v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport((__int64)v7, 0x66u);
      }
      v7 = v7->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v8);
  }
  return 0LL;
}
