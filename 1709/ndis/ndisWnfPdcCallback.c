/*
 * XREFs of ndisWnfPdcCallback @ 0x1C004FF10
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     McTemplateK0 @ 0x1C004E7E0 (McTemplateK0.c)
 *     McTemplateK0x @ 0x1C004EA9C (McTemplateK0x.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E2B8 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0072E00 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

__int64 __fastcall ndisWnfPdcCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int8 v7; // al
  KIRQL v8; // al
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL v10; // di
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  int v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  int v18; // [rsp+40h] [rbp-18h]

  v15 = a4;
  v14 = 20;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v4 = ((__int64 (__fastcall *)(__int64, int *, __int64 *, int *))ExQueryWnfStateData)(a1, &v15, &v16, &v14);
  if ( v4 >= 0 )
  {
    v6 = v16 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v16 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v6 = v17 - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( v6 )
    {
      v7 = 0;
    }
    else
    {
      ndisLastCsScenarioInstanceId = v18;
      v7 = 1;
    }
    if ( ndisConnectedStandby != v7 )
    {
      ndisConnectedStandby = v7;
      if ( v7 )
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
          v5,
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
          ndisDereferenceMiniport((__int64)v9, 7u);
        }
        v9 = v9->NextGlobalMiniport;
      }
      KeReleaseSpinLock(&ndisMiniportListLock, v10);
    }
  }
  else if ( (unsigned __int8)byte_1C0098754 >= 2u )
  {
    WPP_SF_d(0x64u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, v4);
  }
  return 0LL;
}
