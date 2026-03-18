/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C00E5230
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00D9FF4 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DD2DC (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DD4EC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00E4674 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00E5570 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00A8B1C (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
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
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
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
  if ( v6 && *((_QWORD *)v6 + 288) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v19 + 24) = 7022LL;
      WdLogEvent5_WdAssertion(v19);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, *(_QWORD *)(*((_QWORD *)v10 + 288) + 88LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v10 + 288) + 88LL));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v10, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
      v16 = v12;
      if ( v12 < 0 )
      {
        if ( v12 == -1073741130 )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
          v20[3] = -1073741130LL;
          v20[4] = v10;
          v20[5] = *((int *)v10 + 68);
          v20[6] = *((unsigned int *)v10 + 67);
          WdLogEvent5_WdWarning(v20);
        }
        else
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v21[3] = v16;
          v21[4] = v10;
          v21[5] = *((int *)v10 + 68);
          v21[6] = *((unsigned int *)v10 + 67);
          WdLogEvent5_WdError(v21);
        }
      }
      else
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64)&v25,
          *(_QWORD *)(*((_QWORD *)v10 + 288) + 88LL));
        v17 = *((_QWORD *)v10 + 288);
        if ( *(_BYTE *)(v17 + 132) )
          AdapterDefaultScaling = 4;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v17 + 88));
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
    v18 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v18 + 24) = a1->HighPart;
    *(_QWORD *)(v18 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v18);
  }
  *a2 = AdapterDefaultScaling;
}
