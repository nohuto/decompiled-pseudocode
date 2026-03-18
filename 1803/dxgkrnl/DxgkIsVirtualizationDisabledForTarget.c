/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1C00AB090
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00ABA00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B4B84 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00B6F48 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C0228A04 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0015460 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00154E0 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C0015A90 (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z @ 0x1C00BA694 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(
        struct _LUID a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        _DWORD *a7)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v10; // rax
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rdi
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // rbx
  int VideoOutputTechnology; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v23[48]; // [rsp+28h] [rbp-30h] BYREF
  LONG HighPart; // [rsp+64h] [rbp+Ch]

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v22);
  v12 = v10;
  if ( v10 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v10) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v16 + 24) = 7684LL;
      WdLogEvent5_WdAssertion(v16);
    }
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23, v12, 1);
    DXGADAPTER::ReleaseReferenceNoTracking(v12);
    if ( DXGADAPTER::IsActive(v12) )
    {
      if ( a5
        && (VideoOutputTechnology = DmmGetVideoOutputTechnology(v17, a2, a5, a6),
            v18 = VideoOutputTechnology,
            VideoOutputTechnology < 0) )
      {
        v21 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v21 + 24) = v12;
        *(_QWORD *)(v21 + 32) = v18;
        WdLogEvent5_WdError(v21);
      }
      else
      {
        if ( a7 )
          *a7 = DmmGetTargetUsage(v12, a2);
        LODWORD(v18) = IsVirtualizationDisabledForTarget(v12, a2);
      }
    }
    else
    {
      LODWORD(v18) = -1073741130;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    return (unsigned int)v18;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = HighPart;
    *(_QWORD *)(v13 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
}
