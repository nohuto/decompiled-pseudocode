/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1C00AAF40
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AC7A0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00ECB3C (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00EF8B8 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01E0D9C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(
        struct _LUID a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  int VideoOutputTechnology; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int64 v30; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v31[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v32[8]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h]
  volatile signed __int64 *v34; // [rsp+48h] [rbp-38h]
  char v35; // [rsp+50h] [rbp-30h]
  _BYTE v36[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v37; // [rsp+60h] [rbp-20h]
  volatile signed __int64 *v38; // [rsp+68h] [rbp-18h]
  char v39; // [rsp+70h] [rbp-10h]
  LONG HighPart; // [rsp+B4h] [rbp+34h]

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal();
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v30);
  v14 = (volatile signed __int64 *)v11;
  if ( v11 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v11) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      *(_QWORD *)(v28 + 24) = 7456LL;
      WdLogEvent5_WdAssertion(v28);
    }
    v34 = v14;
    v35 = 0;
    _InterlockedIncrement64(v14 + 3);
    v38 = v14;
    v33 = -1LL;
    v39 = 0;
    _InterlockedIncrement64(v14 + 3);
    v37 = -1LL;
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
    v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
    v22 = v19;
    if ( v19 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
      v29[3] = HighPart;
      v29[4] = a1.LowPart;
      v29[5] = v22;
    }
    else
    {
      if ( !a5
        || (VideoOutputTechnology = DmmGetVideoOutputTechnology(v14, a2, a5, a6),
            v22 = VideoOutputTechnology,
            VideoOutputTechnology >= 0) )
      {
        LODWORD(v22) = IsVirtualizationDisabledForTarget(v14, a2, a3, a4);
LABEL_7:
        COREACCESS::~COREACCESS((COREACCESS *)v36);
        COREACCESS::~COREACCESS((COREACCESS *)v32);
        return (unsigned int)v22;
      }
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
      v29[3] = v14;
      v29[4] = v22;
    }
    WdLogEvent5_WdError(v29);
    goto LABEL_7;
  }
  v27 = WdLogNewEntry5_WdError(v13, v12);
  *(_QWORD *)(v27 + 24) = HighPart;
  *(_QWORD *)(v27 + 32) = a1.LowPart;
  WdLogEvent5_WdError(v27);
  return 3221225485LL;
}
