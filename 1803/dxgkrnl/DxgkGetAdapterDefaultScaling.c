/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C00D8450
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B1CC8 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B505C (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B5274 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00C51E0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D7CD4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00BA378 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

void __fastcall DxgkGetAdapterDefaultScaling(struct _LUID *a1, int *a2)
{
  int AdapterDefaultScaling; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v23[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v24[40]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp+10h] BYREF

  AdapterDefaultScaling = 3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v25);
  v10 = v6;
  if ( v6 && *((_QWORD *)v6 + 307) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v18 + 24) = 7234LL;
      WdLogEvent5_WdAssertion(v18);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
        (__int64 *)&v25,
        *(_QWORD *)(*((_QWORD *)v10 + 307) + 88LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v10 + 307) + 88LL));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v10, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
      if ( v12 < 0 )
      {
        v19 = v12;
        if ( v12 == -1073741130 )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
          v20[3] = v19;
          v20[4] = v10;
          v20[5] = *((int *)v10 + 68);
          v20[6] = *((unsigned int *)v10 + 67);
          WdLogEvent5_WdWarning(v20);
        }
        else
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v21[3] = v19;
          v21[4] = v10;
          v21[5] = *((int *)v10 + 68);
          v21[6] = *((unsigned int *)v10 + 67);
          WdLogEvent5_WdError(v21);
        }
      }
      else
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64 *)&v25,
          *(_QWORD *)(*((_QWORD *)v10 + 307) + 88LL));
        v16 = *((_QWORD *)v10 + 307);
        if ( *(_BYTE *)(v16 + 132) )
          AdapterDefaultScaling = 4;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v16 + 88));
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v22);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
      }
      COREACCESS::~COREACCESS((COREACCESS *)v24);
      COREACCESS::~COREACCESS((COREACCESS *)v23);
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v10);
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v17 + 24) = a1->HighPart;
    *(_QWORD *)(v17 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v17);
  }
  *a2 = AdapterDefaultScaling;
}
