/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00DDD20
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000BB4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00A25B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00AA410 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E1C6C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E1DB4 (-SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkCddSetGammaRamp(
        struct DXGADAPTER *a1,
        unsigned int a2,
        const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3)
{
  __int64 v4; // r14
  char v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int PairingAdapters; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGADAPTER *v17; // rsi
  DXGSESSIONDATA **SessionViewFromSource; // r13
  __int64 v19; // rcx
  size_t *v20; // rbx
  size_t *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  unsigned int v25; // r15d
  ADAPTER_DISPLAY **v26; // rdi
  char v27; // r8
  int v28; // eax
  int updated; // esi
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v33; // rbx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  DXGADAPTER *v38; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-31h] BYREF
  int v40; // [rsp+48h] [rbp-29h] BYREF
  __int64 v41; // [rsp+50h] [rbp-21h]
  __int64 v42; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v43[32]; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v44[40]; // [rsp+80h] [rbp+Fh] BYREF
  char v45; // [rsp+F0h] [rbp+7Fh] BYREF

  v41 = 0LL;
  v4 = a2;
  v6 = 1;
  v40 = 3009;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3009);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 3009);
  v45 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v45, 0);
  v9 = v7;
  if ( v7 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v33[3] = (unsigned int)PsGetCurrentProcessSessionId(v34);
    v33[4] = v9;
LABEL_32:
    WdLogEvent5_WdError(v33);
    goto LABEL_22;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v38, &v39);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
    v35[3] = a1;
    v35[4] = v4;
    v35[5] = v9;
    WdLogEvent5_WdEvent(v35);
    goto LABEL_22;
  }
  v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 74);
  if ( v14 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v17 = v38;
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            (const struct _LUID *)((char *)v38 + 268),
                            v4);
  DXGADAPTER::ReleaseReferenceNoTracking(v17);
  if ( !SessionViewFromSource )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v33[3] = v4;
    v33[4] = v17;
    LODWORD(v9) = -1073741811;
    v33[5] = (unsigned int)PsGetCurrentProcessSessionId(v36);
    v33[6] = -1073741811LL;
    goto LABEL_32;
  }
  v20 = 0LL;
  if ( !a3 )
    goto LABEL_12;
  v21 = (size_t *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
  v20 = v21;
  if ( v21 )
  {
    v21[3] = 0LL;
    v21[4] = 0LL;
    *v21 = (size_t)&ReferenceCounted::`vftable';
    *v21 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v21 + 2) = 1;
    *((_DWORD *)v21 + 4) = 1;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v37 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v37 + 24) = v17;
    WdLogEvent5_WdLowResource(v37);
    goto LABEL_22;
  }
  LODWORD(v9) = DXGK_GAMMA_RAMP::Initialize(v20, D3DDDI_GAMMARAMP_RGB256x3x16, a3);
  if ( (int)v9 >= 0 )
  {
LABEL_12:
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
    if ( PrimaryDisplaySource )
    {
      do
      {
        v25 = *((_DWORD *)PrimaryDisplaySource + 4);
        v26 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v42, (struct DXGADAPTER *const)v26, 0LL);
        if ( *((_BYTE *)v26[307] + 134) == v27 )
          v28 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v42);
        else
          v28 = COREADAPTERACCESS::AcquireExclusive(&v42);
        updated = v28;
        if ( v28 >= 0 )
        {
          ADAPTER_DISPLAY::SetGdiGammaRamp(v26[307], v25, (const struct DXGK_GAMMA_RAMP *)v20);
          updated = ADAPTER_DISPLAY::UpdateGammaRamp(v26[307], v25);
          if ( updated < 0 )
            ADAPTER_DISPLAY::SetGdiGammaRamp(v26[307], v25, 0LL);
          else
            v6 = 0;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v44);
        COREACCESS::~COREACCESS((COREACCESS *)v43);
        PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(
                                 (SESSION_VIEW *)SessionViewFromSource,
                                 PrimaryDisplaySource);
      }
      while ( PrimaryDisplaySource );
      LODWORD(v9) = v6 != 0 ? updated : 0;
    }
  }
  if ( v20 )
    ReferenceCounted::Release((ReferenceCounted *)v20);
LABEL_22:
  if ( v45 )
    DxgkReleaseSessionModeChangeLock(v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v40);
  return (unsigned int)v9;
}
