/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00A3210
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000CC20 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00E6E70 (-UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00F8DF0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkCddSetGammaRamp(
        struct DXGADAPTER *a1,
        unsigned int a2,
        const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3)
{
  __int64 v4; // rsi
  char v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  int PairingAdapters; // eax
  _QWORD *v13; // rax
  DXGSESSIONMGR *v14; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGADAPTER *v17; // r14
  SESSION_VIEW *SessionViewFromSource; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rbx
  ADAPTER_DISPLAY **v22; // rsi
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v23; // r8
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v30; // rcx
  __int128 v31; // xmm1
  __int64 v32; // rcx
  __int64 v33; // r8
  DXGADAPTER *v35; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-21h] BYREF
  __int64 v37; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v38[32]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v39[40]; // [rsp+70h] [rbp+Fh] BYREF
  char v40; // [rsp+E0h] [rbp+7Fh] BYREF

  v4 = a2;
  v6 = 1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3009);
  v40 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v40, 0);
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v11[3] = (unsigned int)PsGetCurrentProcessSessionId();
    v11[4] = v10;
LABEL_13:
    WdLogEvent5_WdError(v11);
    goto LABEL_28;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v35, &v36);
  v10 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v13[3] = a1;
    v13[4] = v4;
    v13[5] = v10;
    WdLogEvent5_WdEvent(v13);
    goto LABEL_28;
  }
  v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( v14 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v17 = v35;
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            (const struct _LUID *)((char *)v35 + 268),
                            v4);
  DXGADAPTER::ReleaseReference(v17);
  if ( !SessionViewFromSource )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v11[3] = v4;
    v11[4] = v17;
    LODWORD(v10) = -1073741811;
    v11[5] = (unsigned int)PsGetCurrentProcessSessionId();
    v11[6] = -1073741811LL;
    goto LABEL_13;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
    goto LABEL_28;
  do
  {
    v22 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v37, (struct DXGADAPTER *const)v22, 0LL);
    LODWORD(v10) = COREADAPTERACCESS::AcquireExclusive(&v37, 1u);
    if ( (int)v10 < 0 )
      goto LABEL_25;
    v23 = 0LL;
    if ( a3 )
    {
      v24 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)operator new(0x600uLL, 0x4B677844u, PagedPool);
      v23 = v24;
      if ( !v24 )
      {
        LODWORD(v10) = -1073741801;
        v28 = WdLogNewEntry5_WdWarning(v26, v25, 0LL, v27);
        *(_QWORD *)(v28 + 24) = v22;
        *(_QWORD *)(v28 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v28);
        goto LABEL_25;
      }
      v29 = 12LL;
      v30 = a3;
      do
      {
        *(_OWORD *)v24->Red = *(_OWORD *)v30->Red;
        *(_OWORD *)&v24->Red[8] = *(_OWORD *)&v30->Red[8];
        *(_OWORD *)&v24->Red[16] = *(_OWORD *)&v30->Red[16];
        *(_OWORD *)&v24->Red[24] = *(_OWORD *)&v30->Red[24];
        *(_OWORD *)&v24->Red[32] = *(_OWORD *)&v30->Red[32];
        *(_OWORD *)&v24->Red[40] = *(_OWORD *)&v30->Red[40];
        *(_OWORD *)&v24->Red[48] = *(_OWORD *)&v30->Red[48];
        v24 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v24 + 128);
        v31 = *(_OWORD *)&v30->Red[56];
        v30 = (const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v30 + 128);
        *(_OWORD *)&v24[-1].Blue[248] = v31;
        --v29;
      }
      while ( v29 );
    }
    LODWORD(v10) = ADAPTER_DISPLAY::UpdateGdiGammaRamp(v22[285], *((_DWORD *)PrimaryDisplaySource + 4), v23);
    if ( (int)v10 < 0
      || (LODWORD(v10) = ADAPTER_DISPLAY::SetGammaRamp(v22[285], *((_DWORD *)PrimaryDisplaySource + 4), 0LL),
          (int)v10 < 0) )
    {
      ADAPTER_DISPLAY::UpdateGdiGammaRamp(v22[285], *((_DWORD *)PrimaryDisplaySource + 4), 0LL);
    }
    else
    {
      v6 = 0;
    }
LABEL_25:
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(SessionViewFromSource, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( !v6 )
    LODWORD(v10) = 0;
LABEL_28:
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v40);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v32, &EventProfilerExit, v33, 3009);
  return (unsigned int)v10;
}
