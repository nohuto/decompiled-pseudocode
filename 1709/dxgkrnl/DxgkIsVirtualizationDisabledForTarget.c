/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1C00B3A10
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AFB00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00DB214 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DCE00 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01FB08C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B3084 (IsVirtualizationDisabledForTarget.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(
        struct _LUID a1,
        unsigned int a2,
        bool *a3,
        bool *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v11; // rax
  __int64 v12; // rcx
  volatile signed __int64 *v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rsi
  int VideoOutputTechnology; // eax
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned __int64 v24; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v25[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v26[8]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v27; // [rsp+40h] [rbp-40h]
  volatile signed __int64 *v28; // [rsp+48h] [rbp-38h]
  char v29; // [rsp+50h] [rbp-30h]
  _BYTE v30[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v31; // [rsp+60h] [rbp-20h]
  volatile signed __int64 *v32; // [rsp+68h] [rbp-18h]
  char v33; // [rsp+70h] [rbp-10h]
  LONG HighPart; // [rsp+B4h] [rbp+34h]

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v24);
  v13 = (volatile signed __int64 *)v11;
  if ( v11 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v11) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v22 + 24) = 7471LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v28 = v13;
    v29 = 0;
    _InterlockedIncrement64(v13 + 3);
    v32 = v13;
    v27 = -1LL;
    v33 = 0;
    _InterlockedIncrement64(v13 + 3);
    v31 = -1LL;
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v13);
    v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25);
    v17 = v15;
    if ( v15 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v23[3] = HighPart;
      v23[4] = a1.LowPart;
      v23[5] = v17;
    }
    else
    {
      if ( !a5
        || (VideoOutputTechnology = DmmGetVideoOutputTechnology((void *const)v13, a2, a5, a6),
            v17 = VideoOutputTechnology,
            VideoOutputTechnology >= 0) )
      {
        LODWORD(v17) = IsVirtualizationDisabledForTarget((DXGADAPTER *)v13, a2, a3, a4);
LABEL_8:
        COREACCESS::~COREACCESS((COREACCESS *)v30);
        COREACCESS::~COREACCESS((COREACCESS *)v26);
        return (unsigned int)v17;
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v23[3] = v13;
      v23[4] = v17;
    }
    WdLogEvent5_WdError(v23);
    goto LABEL_8;
  }
  v21 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v21 + 24) = HighPart;
  *(_QWORD *)(v21 + 32) = a1.LowPart;
  WdLogEvent5_WdError(v21);
  return 3221225485LL;
}
