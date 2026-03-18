/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00991B0
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00F7260 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B5B4 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(struct _LUID a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v6; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r15
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // rdi
  __int64 PairingAdapters; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGADAPTER ***v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v30; // rax
  __int64 hAdapter; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  unsigned __int8 v40[4]; // [rsp+30h] [rbp-49h] BYREF
  __int16 v41; // [rsp+34h] [rbp-45h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v42; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v44[8]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v45[32]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v46[72]; // [rsp+88h] [rbp+Fh] BYREF
  LONG HighPart; // [rsp+E4h] [rbp+6Bh]
  struct DXGADAPTER *v48; // [rsp+F8h] [rbp+7Fh] BYREF

  HighPart = a1.HighPart;
  v6 = a2;
  if ( !a4 || !a3 )
  {
    v32 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(a1, a2, a3, a4);
    *(_QWORD *)(v32 + 24) = 8504LL;
    WdLogEvent5_WdAssertion(v32);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current && a4 && a3 )
  {
    v42.hAdapter = 0;
    v42.VidPnSourceId = v6;
    v42.pModeList = 0LL;
    *(_QWORD *)&v42.ModeCount = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&v48);
    if ( v14 )
    {
      PairingAdapters = (int)DxgkpGetPairingAdapters(v14, v42.VidPnSourceId, 0LL, 0LL, &v48, &v43);
      DXGADAPTER::ReleaseReference(v14);
      if ( (int)PairingAdapters < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v35[3] = v14;
        v35[4] = v42.VidPnSourceId;
        v35[5] = PairingAdapters;
        WdLogEvent5_WdEvent(v35);
        return (unsigned int)PairingAdapters;
      }
      v20 = (DXGADAPTER ***)v48;
      if ( !v48 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        *(_QWORD *)(v36 + 24) = 8543LL;
        WdLogEvent5_WdAssertion(v36);
      }
      LOBYTE(v48) = 0;
      v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v48, 0);
      PairingAdapters = v21;
      if ( v21 < 0 )
      {
        v37 = WdLogNewEntry5_WdError(v23, v22);
        *(_QWORD *)(v37 + 24) = PairingAdapters;
        WdLogEvent5_WdError(v37);
LABEL_18:
        if ( (_BYTE)v48 )
          DxgkReleaseSessionModeChangeLock();
        return (unsigned int)PairingAdapters;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, (struct DXGADAPTER *const)v20, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v20);
      v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v44);
      PairingAdapters = v24;
      if ( v24 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v30[3] = PairingAdapters;
        v30[4] = Current;
        hAdapter = v42.hAdapter;
        v30[6] = v20;
      }
      else
      {
        if ( ADAPTER_DISPLAY::IsPartOfDesktop(v20[285], v42.VidPnSourceId) )
        {
          v41 = 0;
          v40[0] = 0;
          LODWORD(PairingAdapters) = DxgkpGetDisplayModeList(
                                       (struct DXGADAPTER *)v20,
                                       (struct COREADAPTERACCESS *)v44,
                                       0,
                                       &v42,
                                       v40,
                                       (struct DXGK_STEREO_PARAMS *)&v41);
          if ( v42.ModeCount || v42.pModeList )
          {
            v38 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
            *(_QWORD *)(v38 + 24) = 8592LL;
            WdLogEvent5_WdAssertion(v38);
          }
          if ( (int)PairingAdapters >= 0 )
          {
            *a3 = v41;
            *a4 = HIBYTE(v41);
          }
          goto LABEL_17;
        }
        v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        LODWORD(PairingAdapters) = -1071774238;
        v30[3] = -1071774238LL;
        v30[4] = v20;
        hAdapter = v42.VidPnSourceId;
      }
      v30[5] = hAdapter;
      WdLogEvent5_WdDmmEvent(v30);
LABEL_17:
      COREACCESS::~COREACCESS((COREACCESS *)v46);
      COREACCESS::~COREACCESS((COREACCESS *)v45);
      goto LABEL_18;
    }
    v33 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v33 + 24) = HighPart;
    *(_QWORD *)(v33 + 32) = a1.LowPart;
    v34 = v33;
  }
  else
  {
    v39 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    *(_QWORD *)(v39 + 32) = PsGetCurrentProcess();
    v34 = v39;
  }
  WdLogEvent5_WdError(v34);
  return 3221225485LL;
}
