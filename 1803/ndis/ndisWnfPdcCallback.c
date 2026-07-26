/*
 * XREFs of ndisWnfPdcCallback @ 0x1C0050860
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     McTemplateK0 @ 0x1C004F148 (McTemplateK0.c)
 *     McTemplateK0x @ 0x1C004F404 (McTemplateK0x.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006EB3C (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0073678 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

__int64 __fastcall ndisWnfPdcCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 v4; // bl
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rax
  KIRQL v8; // al
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL v10; // di
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+28h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+40h] [rbp-18h]

  v17 = a4;
  v16 = 20;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v4 = 0;
  v5 = ((__int64 (__fastcall *)(__int64, int *, __int64 *, int *))ExQueryWnfStateData)(a1, &v17, &v18, &v16);
  if ( v5 >= 0 )
  {
    v7 = v18 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v18 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v7 = v19 - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( !v7 )
    {
      v4 = 1;
      ndisLastCsScenarioInstanceId = v20;
    }
    if ( ndisConnectedStandby != v4 )
    {
      ndisConnectedStandby = v4;
      if ( v4 )
      {
        ndisLastCsEntryTime = MEMORY[0xFFFFF78000000008];
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          McTemplateK0();
      }
      else if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      {
        McTemplateK0x(
          MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime,
          (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x989680,
          v6,
          (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x989680);
      }
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      v9 = ndisMiniportList;
      v10 = v8;
      while ( v9 )
      {
        if ( v9->AoAc && ndisReferenceMiniport((__int64)v9) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, v10);
          ndisNicAutoPowerSaverControlIdleTimer(v9);
          if ( v9->AoAc )
            ndisCsStateChange(v9, v11, v12);
          v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport((__int64)v9, 7u, v13, v14);
        }
        v9 = v9->NextGlobalMiniport;
      }
      KeReleaseSpinLock(&ndisMiniportListLock, v10);
    }
  }
  else if ( (unsigned __int8)byte_1C0099614 >= 2u )
  {
    WPP_SF_d(0x64u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v5);
  }
  return 0LL;
}
