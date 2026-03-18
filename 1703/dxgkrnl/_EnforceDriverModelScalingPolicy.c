/*
 * XREFs of _EnforceDriverModelScalingPolicy @ 0x1C00ABF30
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ABC54 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDX.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00ABE78 (EnforceDriverModelScalingPolicy.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00E4E80 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(__int64 a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  __int64 v2; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 2280);
  if ( !*(_BYTE *)(v2 + 133) )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v2 + 16)) >= 1105 )
    {
      if ( *a2 != D3DKMDT_VPPS_NOTSPECIFIED )
        return;
    }
    else if ( (unsigned int)(*a2 - 4) > 1 )
    {
      return;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, *(_QWORD *)(v5 + 88), v5, v6);
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*(_QWORD *)(a1 + 2280) + 88LL));
    v8 = v12;
    *a2 = AdapterDefaultScaling;
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 40), v9, v10, v11);
  }
}
