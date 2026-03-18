/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C00A8A40
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00A8320 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ABC54 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDX.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B0984 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00ED014 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C00ED224 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00E4E80 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall DxgkGetAdapterDefaultScaling(struct _LUID *a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _BYTE v35[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v36[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v37[40]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp+10h] BYREF

  AdapterDefaultScaling = D3DKMDT_VPPS_STRETCHED;
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v38);
  v11 = v6;
  if ( v6 && *((_QWORD *)v6 + 285) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v27 + 24) = 7007LL;
      WdLogEvent5_WdAssertion(v27);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
        (__int64)&v38,
        *(_QWORD *)(*((_QWORD *)v11 + 285) + 88LL),
        v28,
        v29);
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v11 + 285) + 88LL));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38 + 40), v30, v31, v32);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v11, 0LL);
      v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35);
      v21 = v16;
      if ( v16 < 0 )
      {
        if ( v16 == -1073741130 )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
          v33[3] = -1073741130LL;
          v33[4] = v11;
          v33[5] = *((int *)v11 + 68);
          v33[6] = *((unsigned int *)v11 + 67);
          WdLogEvent5_WdWarning(v33);
        }
        else
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
          v34[3] = v21;
          v34[4] = v11;
          v34[5] = *((int *)v11 + 68);
          v34[6] = *((unsigned int *)v11 + 67);
          WdLogEvent5_WdError(v34);
        }
      }
      else
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64)&v38,
          *(_QWORD *)(*((_QWORD *)v11 + 285) + 88LL),
          v19,
          v20);
        v22 = *((_QWORD *)v11 + 285);
        if ( *(_BYTE *)(v22 + 133) )
          AdapterDefaultScaling = D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v22 + 88));
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v35);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38 + 40), v23, v24, v25);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v37);
      COREACCESS::~COREACCESS((COREACCESS *)v36);
    }
    DXGADAPTER::ReleaseReference(v11);
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v26 + 24) = a1->HighPart;
    *(_QWORD *)(v26 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v26);
  }
  *a2 = AdapterDefaultScaling;
}
