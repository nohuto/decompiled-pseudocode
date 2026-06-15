/*
 * XREFs of ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041A18
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180035BF0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180041EC0 (-GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_Sdg @ 0x1800A4F68 (WPP_SF_Sdg.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x1800A8ACC (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800A8B90 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x1800A9A20 (-GetCount@-$CComSafeArray@M$03@ATL@@QEBAKI@Z.c)
 *     ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x1800A9F0C (-GetLowerBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x1800AA660 (-GetUpperBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800AD680 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     WPP_SF_DD @ 0x1800ADEC8 (WPP_SF_DD.c)
 *     WPP_SF_Sg @ 0x1800AE08C (WPP_SF_Sg.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LoadSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  CAudioSessionStore *v2; // rcx
  int (*v3)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *); // rax
  int Value; // eax
  int v5; // edi
  int v6; // r8d
  CAudioSessionStore *v7; // rcx
  int (*v8)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *); // rax
  int v9; // eax
  int v10; // edi
  bool v11; // zf
  CAudioSessionStore *v12; // rcx
  int (*v13)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *); // rax
  int v14; // eax
  int v15; // edi
  bool v16; // zf
  unsigned int v17; // ebx
  int v19; // eax
  int v20; // edi
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int Count; // ecx
  unsigned __int64 v25; // rax
  void *v26; // rax
  void *v27; // rcx
  int v28; // edi
  __int64 v29; // r14
  int LowerBound; // esi
  int v31; // esi
  __int64 v32; // r8
  int v33; // eax
  int v34; // [rsp+20h] [rbp-50h]
  int v35; // [rsp+20h] [rbp-50h]
  struct tagPROPVARIANT lpCriticalSection; // [rsp+30h] [rbp-40h] BYREF
  LPCRITICAL_SECTION v37; // [rsp+48h] [rbp-28h] BYREF
  char v38; // [rsp+50h] [rbp-20h]
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  SAFEARRAY *ppsaOut; // [rsp+A0h] [rbp+30h] BYREF

  v37 = (LPCRITICAL_SECTION)((char *)this + 992);
  v38 = 0;
  ATL::CCritSecLock::Lock(&v37);
  v2 = (CAudioSessionStore *)*((_QWORD *)this + 129);
  memset(&pvar, 0, sizeof(pvar));
  v3 = *(int (**)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v2 + 40LL);
  if ( v3 == CAudioSessionStore::GetValue )
    Value = CAudioSessionStore::GetValue(v2, &PKEY_AudioSession_MasterVolume, &pvar);
  else
    Value = ((__int64 (__fastcall *)(CAudioSessionStore *, const struct _tagpropertykey *, struct tagPROPVARIANT *))v3)(
              v2,
              &PKEY_AudioSession_MasterVolume,
              &pvar);
  v5 = Value;
  if ( Value < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11B5,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)Value,
      v34);
  if ( !v5 )
  {
    lpCriticalSection.cVal = 0;
    *(_QWORD *)&lpCriticalSection.vt = (char *)this + 808;
    ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&lpCriticalSection);
    if ( pvar.vt == 4 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          99,
          v6,
          *((_QWORD *)this + 91),
          *(_OWORD *)&_mm_cvtps_pd((__m128)pvar.ulVal));
      }
      *((_DWORD *)this + 212) = pvar.lVal;
    }
    else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 100LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, pvar.vt);
    }
    if ( lpCriticalSection.cVal )
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection.vt);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v7 = (CAudioSessionStore *)*((_QWORD *)this + 129);
  memset(&pvar, 0, sizeof(pvar));
  v8 = *(int (**)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v7 + 40LL);
  if ( v8 == CAudioSessionStore::GetValue )
    v9 = CAudioSessionStore::GetValue(v7, &PKEY_AudioSession_ChannelVolume, &pvar);
  else
    v9 = ((__int64 (__fastcall *)(CAudioSessionStore *, const struct _tagpropertykey *, struct tagPROPVARIANT *))v8)(
           v7,
           &PKEY_AudioSession_ChannelVolume,
           &pvar);
  v10 = v9;
  v11 = v9 == 0;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11CD,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v9,
      v34);
    v11 = v10 == 0;
  }
  if ( v11 )
  {
    if ( pvar.vt == 8196 )
    {
      ppsaOut = 0LL;
      v19 = ATL::CComSafeArray<float,4>::CopyFrom(&ppsaOut, pvar.parray);
      if ( v19 < 0 )
        ATL::AtlThrowImpl(v19);
      lpCriticalSection.cVal = 0;
      *(_QWORD *)&lpCriticalSection.vt = (char *)this + 808;
      ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&lpCriticalSection);
      if ( !*((_DWORD *)this + 240)
        || (v20 = *((_DWORD *)this + 240), v20 == (unsigned int)ATL::CComSafeArray<float,4>::GetCount(&ppsaOut)) )
      {
        if ( *((_QWORD *)this + 121) )
          goto LABEL_58;
        Count = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
        v25 = 4LL * Count;
        *((_DWORD *)this + 240) = Count;
        if ( !is_mul_ok(Count, 4uLL) )
          v25 = -1LL;
        v26 = operator new[](v25, (const struct std::nothrow_t *)&std::nothrow);
        v27 = (void *)*((_QWORD *)this + 121);
        *((_QWORD *)this + 121) = v26;
        if ( v27 )
        {
          operator delete(v27);
          v26 = (void *)*((_QWORD *)this + 121);
        }
        if ( v26 )
        {
          memset_0(v26, 0, 4LL * *((unsigned int *)this + 240));
          if ( *((_QWORD *)this + 121) )
          {
LABEL_58:
            v28 = 0;
            if ( *((int *)this + 240) > 0 )
            {
              v29 = 0LL;
              do
              {
                if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  if ( !ppsaOut )
                    ATL::AtlThrowImpl(-2147467259);
                  LowerBound = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut);
                  if ( v28 < LowerBound || v28 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut) )
                    ATL::AtlThrowImpl(-2147024809);
                  WPP_SF_Sdg(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    101,
                    (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
                    *((_QWORD *)this + 91),
                    v28,
                    *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)ppsaOut->pvData + v28 - LowerBound)));
                }
                if ( !ppsaOut )
                  ATL::AtlThrowImpl(-2147467259);
                v31 = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut);
                if ( v28 < v31 || v28 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut) )
                  ATL::AtlThrowImpl(-2147024809);
                v32 = v28 - v31;
                ++v28;
                *(_DWORD *)(v29 + *((_QWORD *)this + 121)) = *((_DWORD *)ppsaOut->pvData + v32);
                v29 += 4LL;
              }
              while ( v28 < *((_DWORD *)this + 240) );
            }
          }
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v21 = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
        v34 = v20;
        WPP_SF_DD(*((_QWORD *)WPP_GLOBAL_Control + 2), v22, v23, v21);
      }
      if ( lpCriticalSection.cVal )
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection.vt);
      ATL::CComSafeArray<float,4>::Destroy(&ppsaOut);
    }
    else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 103LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, pvar.vt);
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v12 = (CAudioSessionStore *)*((_QWORD *)this + 129);
  memset(&lpCriticalSection, 0, sizeof(lpCriticalSection));
  v13 = *(int (**)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v12 + 40LL);
  if ( v13 == CAudioSessionStore::GetValue )
    v14 = CAudioSessionStore::GetValue(v12, &PKEY_AudioSession_Mute, &lpCriticalSection);
  else
    v14 = ((__int64 (__fastcall *)(CAudioSessionStore *, const struct _tagpropertykey *, struct tagPROPVARIANT *))v13)(
            v12,
            &PKEY_AudioSession_Mute,
            &lpCriticalSection);
  v15 = v14;
  v16 = v14 == 0;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1209,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v14,
      v34);
    v16 = v15 == 0;
  }
  if ( !v16 )
    goto LABEL_27;
  if ( lpCriticalSection.vt != 11 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        105LL,
        &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
        lpCriticalSection.vt);
    }
LABEL_27:
    PropVariantClear((PROPVARIANT *)&lpCriticalSection);
    v17 = 0;
    goto LABEL_28;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      104LL,
      &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      (unsigned int)lpCriticalSection.iVal);
  }
  v33 = CPerStreamVolumeAudioSession::SetMute(
          this,
          lpCriticalSection.iVal == 0xFFFF,
          &EVENTCONTEXT_AUDIOSUBSYSTEM,
          1,
          0LL);
  v17 = v33;
  if ( v33 >= 0 )
    goto LABEL_27;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1212,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v33,
    v35);
  PropVariantClear((PROPVARIANT *)&lpCriticalSection);
LABEL_28:
  if ( v38 )
    LeaveCriticalSection(v37);
  return v17;
}
