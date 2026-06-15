/*
 * XREFs of ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180030DFC
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18001DC20 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180031210 (-GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     WPP_SF_Sdg @ 0x1800877E4 (WPP_SF_Sdg.c)
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x18008A704 (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18008A830 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x18008BF04 (-GetCount@-$CComSafeArray@M$03@ATL@@QEBAKI@Z.c)
 *     ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x18008C4CC (-GetLowerBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x18008CB50 (-GetUpperBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x18008FE40 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 *     WPP_SF_DD @ 0x180090640 (WPP_SF_DD.c)
 *     WPP_SF_Sg @ 0x18009086C (WPP_SF_Sg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LoadSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  CAudioSessionStore *v2; // rcx
  int (*v3)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *); // rax
  int Value; // eax
  int v5; // r8d
  CAudioSessionStore *v6; // rcx
  int (*v7)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *); // rax
  int v8; // eax
  CAudioSessionStore *v9; // rcx
  int (*v10)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *); // rax
  int v11; // eax
  int v12; // edi
  int v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int Count; // ecx
  unsigned __int64 v20; // rax
  void *v21; // rax
  int v22; // edi
  __int64 v23; // r15
  int LowerBound; // r14d
  int v25; // r14d
  __int64 v26; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-39h] BYREF
  char v28; // [rsp+40h] [rbp-31h]
  LPCRITICAL_SECTION v29; // [rsp+48h] [rbp-29h] BYREF
  char v30; // [rsp+50h] [rbp-21h]
  struct tagPROPVARIANT v31; // [rsp+58h] [rbp-19h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+70h] [rbp-1h] BYREF
  struct tagPROPVARIANT v33; // [rsp+88h] [rbp+17h] BYREF
  SAFEARRAY *ppsaOut; // [rsp+D8h] [rbp+67h] BYREF

  memset(&v31, 0, sizeof(v31));
  v29 = (LPCRITICAL_SECTION)((char *)this + 1064);
  v30 = 0;
  ATL::CCritSecLock::Lock(&v29);
  v2 = (CAudioSessionStore *)*((_QWORD *)this + 138);
  v3 = *(int (**)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v2 + 40LL);
  if ( v3 == CAudioSessionStore::GetValue )
    Value = CAudioSessionStore::GetValue(v2, &PKEY_AudioSession_MasterVolume, &v31);
  else
    Value = ((__int64 (__fastcall *)(CAudioSessionStore *, const struct _tagpropertykey *, struct tagPROPVARIANT *))v3)(
              v2,
              &PKEY_AudioSession_MasterVolume,
              &v31);
  if ( Value )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        128,
        (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        *((_QWORD *)this + 108),
        Value);
    }
  }
  else
  {
    v28 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 880);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( v31.vt == 4 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          126,
          v5,
          *((_QWORD *)this + 108),
          *(_OWORD *)&_mm_cvtps_pd((__m128)v31.ulVal));
      }
      *((_DWORD *)this + 230) = v31.lVal;
    }
    else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 127LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, v31.vt);
    }
    if ( v28 )
      LeaveCriticalSection(lpCriticalSection);
  }
  v6 = (CAudioSessionStore *)*((_QWORD *)this + 138);
  memset(&v33, 0, sizeof(v33));
  v7 = *(int (**)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v6 + 40LL);
  if ( v7 == CAudioSessionStore::GetValue )
    v8 = CAudioSessionStore::GetValue(v6, &PKEY_AudioSession_ChannelVolume, &v33);
  else
    v8 = ((__int64 (__fastcall *)(CAudioSessionStore *, const struct _tagpropertykey *, struct tagPROPVARIANT *))v7)(
           v6,
           &PKEY_AudioSession_ChannelVolume,
           &v33);
  if ( !v8 )
  {
    if ( v33.vt == 8196 )
    {
      ppsaOut = 0LL;
      v14 = ATL::CComSafeArray<float,4>::CopyFrom(&ppsaOut, v33.parray);
      if ( v14 < 0 )
        ATL::AtlThrowImpl(v14);
      v28 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 880);
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      if ( !*((_DWORD *)this + 258)
        || (v15 = *((_DWORD *)this + 258), v15 == (unsigned int)ATL::CComSafeArray<float,4>::GetCount(&ppsaOut)) )
      {
        if ( *((_QWORD *)this + 130) )
          goto LABEL_60;
        Count = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
        v20 = 4LL * Count;
        *((_DWORD *)this + 258) = Count;
        if ( !is_mul_ok(Count, 4uLL) )
          v20 = -1LL;
        v21 = operator new[](v20, (const struct std::nothrow_t *)&std::nothrow);
        *((_QWORD *)this + 130) = v21;
        if ( v21 )
          memset(v21, 0, 4LL * *((unsigned int *)this + 258));
        if ( *((_QWORD *)this + 130) )
        {
LABEL_60:
          v22 = 0;
          if ( *((int *)this + 258) > 0 )
          {
            v23 = 0LL;
            do
            {
              if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                if ( !ppsaOut )
                  ATL::AtlThrowImpl(-2147467259);
                LowerBound = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut);
                if ( v22 < LowerBound || v22 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut) )
                  ATL::AtlThrowImpl(-2147024809);
                WPP_SF_Sdg(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  129,
                  (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
                  *((_QWORD *)this + 108),
                  v22,
                  *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)ppsaOut->pvData + v22 - LowerBound)));
              }
              if ( !ppsaOut )
                ATL::AtlThrowImpl(-2147467259);
              v25 = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut);
              if ( v22 < v25 || v22 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut) )
                ATL::AtlThrowImpl(-2147024809);
              v26 = v22 - v25;
              ++v22;
              *(_DWORD *)(v23 + *((_QWORD *)this + 130)) = *((_DWORD *)ppsaOut->pvData + v26);
              v23 += 4LL;
            }
            while ( v22 < *((_DWORD *)this + 258) );
          }
        }
      }
      else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v16 = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
        WPP_SF_DD(*((_QWORD *)WPP_GLOBAL_Control + 2), v17, v18, v16, v15);
      }
      if ( v28 )
        LeaveCriticalSection(lpCriticalSection);
      ATL::CComSafeArray<float,4>::Destroy(&ppsaOut);
    }
    else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 131LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, v33.vt);
    }
  }
  v9 = (CAudioSessionStore *)*((_QWORD *)this + 138);
  memset(&pvar, 0, sizeof(pvar));
  v10 = *(int (**)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v9 + 40LL);
  if ( v10 == CAudioSessionStore::GetValue )
    v11 = CAudioSessionStore::GetValue(v9, &PKEY_AudioSession_Mute, &pvar);
  else
    v11 = ((__int64 (__fastcall *)(CAudioSessionStore *, const struct _tagpropertykey *, struct tagPROPVARIANT *))v10)(
            v9,
            &PKEY_AudioSession_Mute,
            &pvar);
  v12 = v11;
  if ( v11 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        134,
        (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        *((_QWORD *)this + 108),
        v11);
    }
    v12 = 0;
  }
  else if ( pvar.vt == 11 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        132LL,
        &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        (unsigned int)pvar.iVal);
    }
    v12 = CPerStreamVolumeAudioSession::SetMute(this, pvar.iVal == 0xFFFF, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1);
  }
  else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 133LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, v31.vt);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  PropVariantClear((PROPVARIANT *)&v33);
  PropVariantClear((PROPVARIANT *)&v31);
  if ( v12 < 0 )
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::LoadSessionConfiguration", 0x1498u, v12);
  if ( v30 )
    LeaveCriticalSection(v29);
  return (unsigned int)v12;
}
