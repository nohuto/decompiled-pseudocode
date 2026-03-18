/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00F65D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00080F4 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00154C8 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00794E8 (-SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00B2DB4 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00B51B0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 */

__int64 __fastcall DxgkCddSetGammaRamp(
        struct DXGADAPTER *a1,
        unsigned int a2,
        const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3)
{
  __int64 v4; // rsi
  char v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  int PairingAdapters; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v21; // r8
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGADAPTER *v23; // r14
  DXGSESSIONDATA **SessionViewFromSource; // r13
  __int64 v25; // rcx
  __int64 v26; // rcx
  size_t *v27; // rbx
  size_t *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  unsigned int v32; // r15d
  ADAPTER_DISPLAY **v33; // rdi
  int v34; // r8d
  int v35; // eax
  int updated; // r14d
  __int64 v37; // rcx
  __int64 v38; // r8
  DXGADAPTER *v40; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-21h] BYREF
  __int64 v42; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v43[32]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v44[40]; // [rsp+70h] [rbp+Fh] BYREF
  char v45; // [rsp+E0h] [rbp+7Fh] BYREF

  v4 = a2;
  v6 = 1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3009);
  v45 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v45, 0);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v10[3] = (unsigned int)PsGetCurrentProcessSessionId(v11);
    v10[4] = v9;
LABEL_13:
    WdLogEvent5_WdError(v10);
    goto LABEL_33;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v40, &v41);
  v9 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14) + 73);
    if ( v19 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         v19,
                                         CurrentProcessSessionId,
                                         v21);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    v23 = v40;
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)((char *)v40 + 268),
                              v4);
    DXGADAPTER::ReleaseReferenceNoTracking(v23);
    if ( !SessionViewFromSource )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v10[3] = v4;
      v10[4] = v23;
      LODWORD(v9) = -1073741811;
      v10[5] = (unsigned int)PsGetCurrentProcessSessionId(v26);
      v10[6] = -1073741811LL;
      goto LABEL_13;
    }
    v27 = 0LL;
    if ( !a3 )
      goto LABEL_21;
    v28 = (size_t *)operator new(0x28uLL, 0x4B677844u, PagedPool);
    v27 = v28;
    if ( v28 )
    {
      v28[3] = 0LL;
      v28[4] = 0LL;
      *v28 = (size_t)&ReferenceCounted::`vftable';
      *v28 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
      *((_DWORD *)v28 + 2) = 1;
      *((_DWORD *)v28 + 4) = 1;
    }
    else
    {
      v27 = 0LL;
    }
    if ( !v27 )
    {
      v30 = WdLogNewEntry5_WdLowResource(v29);
      *(_QWORD *)(v30 + 24) = v23;
      WdLogEvent5_WdLowResource(v30);
      goto LABEL_33;
    }
    LODWORD(v9) = DXGK_GAMMA_RAMP::Initialize(v27, 2u, a3);
    if ( (int)v9 >= 0 )
    {
LABEL_21:
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        do
        {
          v32 = *((_DWORD *)PrimaryDisplaySource + 4);
          v33 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v42, (struct DXGADAPTER *const)v33, 0LL);
          if ( *((_BYTE *)v33[288] + 134) == (_BYTE)v34 )
            v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v42);
          else
            v35 = COREADAPTERACCESS::AcquireExclusive(&v42, v34 + 1);
          updated = v35;
          if ( v35 >= 0 )
          {
            ADAPTER_DISPLAY::SetGdiGammaRamp(v33[288], v32, (const struct DXGK_GAMMA_RAMP *)v27);
            updated = ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)v33[288], v32);
            if ( updated >= 0 )
              v6 = 0;
            else
              ADAPTER_DISPLAY::SetGdiGammaRamp(v33[288], v32, 0LL);
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
    if ( v27 )
      ReferenceCounted::Release((ReferenceCounted *)v27);
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
    v17[3] = a1;
    v17[4] = v4;
    v17[5] = v9;
    WdLogEvent5_WdEvent(v17);
  }
LABEL_33:
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v45);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, 3009);
  return (unsigned int)v9;
}
