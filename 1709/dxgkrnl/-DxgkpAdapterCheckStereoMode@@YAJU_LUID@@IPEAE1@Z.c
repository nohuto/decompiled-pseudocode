/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B8DA0
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00B1DE0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C0002148 (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007774 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00080F4 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0014C3C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0014C68 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(struct _LUID a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v6; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r15
  DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 PairingAdapters; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  DXGADAPTER ***v20; // rdi
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 VidPnSourceId; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int8 v34[4]; // [rsp+30h] [rbp-59h] BYREF
  __int16 v35; // [rsp+34h] [rbp-55h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v36; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v38[24]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v39[112]; // [rsp+70h] [rbp-19h] BYREF
  LONG HighPart; // [rsp+F4h] [rbp+6Bh]
  DXGADAPTER *v41; // [rsp+108h] [rbp+7Fh] BYREF

  HighPart = a1.HighPart;
  v6 = a2;
  if ( !a4 || !a3 )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
    *(_QWORD *)(v8 + 24) = 8526LL;
    WdLogEvent5_WdAssertion(v8);
  }
  Current = DXGPROCESS::GetCurrent(*(_QWORD *)&a1, a2);
  if ( !Current || !a4 || !a3 )
  {
    v31 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    *(_QWORD *)(v31 + 32) = PsGetCurrentProcess(v33, v32);
    v15 = v31;
    goto LABEL_29;
  }
  v36.hAdapter = 0;
  v36.VidPnSourceId = v6;
  v36.pModeList = 0LL;
  *(_QWORD *)&v36.ModeCount = 0LL;
  Global = DXGGLOBAL::GetGlobal(v9);
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&v41);
  if ( v13 )
  {
    PairingAdapters = (int)DxgkpGetPairingAdapters(v13, v36.VidPnSourceId, 0LL, 0LL, &v41, &v37);
    DXGADAPTER::ReleaseReferenceNoTracking(v13);
    if ( (int)PairingAdapters < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v18[3] = v13;
      v18[4] = v36.VidPnSourceId;
      v18[5] = PairingAdapters;
      WdLogEvent5_WdEvent(v18);
      return (unsigned int)PairingAdapters;
    }
    v20 = (DXGADAPTER ***)v41;
    if ( !v41 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v21 + 24) = 8565LL;
      WdLogEvent5_WdAssertion(v21);
    }
    LOBYTE(v41) = 0;
    v22 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v41, 0);
    PairingAdapters = v22;
    if ( v22 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v24 + 24) = PairingAdapters;
      WdLogEvent5_WdError(v24);
LABEL_27:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v41);
      return (unsigned int)PairingAdapters;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v38,
      (struct DXGADAPTER *)v20,
      1);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, (struct DXGADAPTER *const)v20, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v20);
    if ( DXGADAPTER::IsActive((DXGADAPTER *)v20) )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(v20[288], v36.VidPnSourceId) )
      {
        v35 = 0;
        v34[0] = 0;
        LODWORD(PairingAdapters) = DxgkpGetDisplayModeList(
                                     (ADAPTER_DISPLAY **)v20,
                                     (struct COREADAPTERACCESS *)v39,
                                     0,
                                     &v36,
                                     v34,
                                     (struct DXGK_STEREO_PARAMS *)&v35);
        if ( v36.ModeCount || v36.pModeList )
        {
          v30 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v30 + 24) = 8626LL;
          WdLogEvent5_WdAssertion(v30);
        }
        if ( (int)PairingAdapters >= 0 )
        {
          *a3 = v35;
          *a4 = HIBYTE(v35);
        }
        goto LABEL_26;
      }
      v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v28);
      LODWORD(PairingAdapters) = -1071774238;
      v26[3] = -1071774238LL;
      v26[4] = v20;
      VidPnSourceId = v36.VidPnSourceId;
    }
    else
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v25);
      LODWORD(PairingAdapters) = -1073741130;
      v26[3] = -1073741130LL;
      v26[4] = Current;
      VidPnSourceId = v36.hAdapter;
      v26[6] = v20;
    }
    v26[5] = VidPnSourceId;
    WdLogEvent5_WdDmmEvent(v26);
LABEL_26:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
    goto LABEL_27;
  }
  v14 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v14 + 24) = HighPart;
  *(_QWORD *)(v14 + 32) = a1.LowPart;
  v15 = v14;
LABEL_29:
  WdLogEvent5_WdError(v15);
  return 3221225485LL;
}
