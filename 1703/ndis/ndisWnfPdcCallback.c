/*
 * XREFs of ndisWnfPdcCallback @ 0x1C0051340
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     TemplateEventDescriptor @ 0x1C004FC60 (TemplateEventDescriptor.c)
 *     Template_x @ 0x1C004FF0C (Template_x.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0071484 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

__int64 __fastcall ndisWnfPdcCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int8 v7; // cl
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
      v7 = 1;
      ndisLastCsScenarioInstanceId = v18;
    }
    if ( ndisConnectedStandby != v7 )
    {
      ndisConnectedStandby = v7;
      if ( v7 )
      {
        ndisLastCsEntryTime = MEMORY[0xFFFFF78000000008];
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          TemplateEventDescriptor();
      }
      else if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      {
        Template_x(
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
        if ( v9->AoAc && ndisReferenceMiniport((__int64)v9, 7u) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, v10);
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
  else if ( (unsigned __int8)byte_1C0092614 >= 2u )
  {
    WPP_SF_d(0x67u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v4);
  }
  return 0LL;
}
