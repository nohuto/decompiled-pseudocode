/*
 * XREFs of ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180072FA0
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18002D410 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     WPP_SF_Sdg @ 0x18006B964 (WPP_SF_Sdg.c)
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x1800707EC (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x180070918 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x180071854 (-GetCount@-$CComSafeArray@M$03@ATL@@QEBAKI@Z.c)
 *     ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x180071DAC (-GetLowerBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x180072670 (-GetUpperBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180076450 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 *     WPP_SF_DD @ 0x180076C30 (WPP_SF_DD.c)
 *     WPP_SF_Sg @ 0x180076E18 (WPP_SF_Sg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LoadSessionConfiguration(const wchar_t **this)
{
  int v2; // r8d
  const wchar_t *v3; // rcx
  int v4; // eax
  const wchar_t *v5; // rdx
  int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int Count; // ecx
  SIZE_T v11; // rax
  wchar_t *v12; // rax
  int v13; // edi
  __int64 v14; // r15
  LONG v15; // edx
  LONG v16; // edx
  int LowerBound; // r14d
  __int64 v18; // r8
  const wchar_t *v19; // rcx
  int v20; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-39h] BYREF
  char v23; // [rsp+40h] [rbp-31h]
  LPCRITICAL_SECTION v24; // [rsp+48h] [rbp-29h] BYREF
  char v25; // [rsp+50h] [rbp-21h]
  PROPVARIANT v26; // [rsp+58h] [rbp-19h] BYREF
  __int64 v27; // [rsp+60h] [rbp-11h]
  __int64 v28; // [rsp+68h] [rbp-9h]
  PROPVARIANT pvar; // [rsp+70h] [rbp-1h] BYREF
  __int64 v30; // [rsp+78h] [rbp+7h]
  __int64 v31; // [rsp+80h] [rbp+Fh]
  PROPVARIANT v32; // [rsp+88h] [rbp+17h] BYREF
  SAFEARRAY *psa; // [rsp+90h] [rbp+1Fh]
  __int64 v34; // [rsp+98h] [rbp+27h]
  SAFEARRAY *ppsaOut; // [rsp+D8h] [rbp+67h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v24 = (LPCRITICAL_SECTION)(this + 131);
  v25 = 0;
  ATL::CCritSecLock::Lock(&v24);
  if ( (*(unsigned int (__fastcall **)(const wchar_t *, void *, PROPVARIANT *))(*(_QWORD *)this[136] + 40LL))(
         this[136],
         &PKEY_AudioSession_MasterVolume,
         &v26) )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x79u,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        this[99]);
    }
  }
  else
  {
    v23 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 108);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( (_WORD)v26 == 4 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          119,
          v2,
          (unsigned int)this[99],
          *(_OWORD *)&_mm_cvtps_pd((__m128)(unsigned int)v27));
      }
      *((_DWORD *)this + 226) = v27;
    }
    else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x78u,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        (unsigned __int16)v26);
    }
    if ( v23 )
      LeaveCriticalSection(lpCriticalSection);
  }
  v3 = this[136];
  v32 = 0LL;
  psa = 0LL;
  v34 = 0LL;
  if ( !(*(unsigned int (__fastcall **)(const wchar_t *, void *, PROPVARIANT *))(*(_QWORD *)v3 + 40LL))(
          v3,
          &PKEY_AudioSession_ChannelVolume,
          &v32) )
  {
    if ( (_WORD)v32 == 8196 )
    {
      ppsaOut = 0LL;
      v4 = ATL::CComSafeArray<float,4>::CopyFrom(&ppsaOut, psa);
      if ( v4 < 0 )
        ATL::AtlThrowImpl(v4);
      v23 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)(this + 108);
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      if ( !*((_DWORD *)this + 254)
        || (v6 = *((_DWORD *)this + 254), v6 == (unsigned int)ATL::CComSafeArray<float,4>::GetCount(&ppsaOut, (LONG)v5)) )
      {
        if ( this[128] )
          goto LABEL_34;
        Count = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut, (LONG)v5);
        v11 = 4LL * Count;
        *((_DWORD *)this + 254) = Count;
        if ( !is_mul_ok(Count, 4uLL) )
          v11 = -1LL;
        v12 = (wchar_t *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
        this[128] = v12;
        if ( v12 )
          memset(v12, 0, 4LL * *((unsigned int *)this + 254));
        if ( this[128] )
        {
LABEL_34:
          v13 = 0;
          if ( *((int *)this + 254) > 0 )
          {
            v14 = 0LL;
            do
            {
              if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                if ( !ppsaOut )
                  ATL::AtlThrowImpl(-2147467259);
                if ( v13 < (int)ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut, (LONG)v5)
                  || v13 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut, v15) )
                {
                  ATL::AtlThrowImpl(-2147024809);
                }
                WPP_SF_Sdg(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x7Au,
                  (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
                  this[99]);
              }
              if ( !ppsaOut )
                ATL::AtlThrowImpl(-2147467259);
              LowerBound = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut, (LONG)v5);
              if ( v13 < LowerBound || v13 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut, v16) )
                ATL::AtlThrowImpl(-2147024809);
              v5 = this[128];
              v18 = v13 - LowerBound;
              ++v13;
              *(_DWORD *)&v5[v14] = *((_DWORD *)ppsaOut->pvData + v18);
              v14 += 2LL;
            }
            while ( v13 < *((_DWORD *)this + 254) );
          }
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v7 = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut, (LONG)v5);
        WPP_SF_DD(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v9, v7, v6);
      }
      if ( v23 )
        LeaveCriticalSection(lpCriticalSection);
      ATL::CComSafeArray<float,4>::Destroy(&ppsaOut);
    }
    else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x7Cu,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        (unsigned __int16)v32);
    }
  }
  v19 = this[136];
  pvar = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v20 = (*(__int64 (__fastcall **)(const wchar_t *, void *, PROPVARIANT *))(*(_QWORD *)v19 + 40LL))(
          v19,
          &PKEY_AudioSession_Mute,
          &pvar);
  if ( v20 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x7Fu,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        this[99]);
    }
    v20 = 0;
  }
  else if ( (_WORD)pvar == 11 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x7Du,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        (__int16)v30);
    }
    v20 = CPerStreamVolumeAudioSession::SetMute(
            (CPerStreamVolumeAudioSession *)this,
            (_WORD)v30 == 0xFFFF,
            &EVENTCONTEXT_AUDIOSUBSYSTEM,
            1);
  }
  else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x7Eu,
      (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      (unsigned __int16)v26);
  }
  PropVariantClear(&pvar);
  PropVariantClear(&v32);
  PropVariantClear(&v26);
  if ( v20 < 0 )
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::LoadSessionConfiguration", 5216, v20);
  if ( v25 )
    LeaveCriticalSection(v24);
  return (unsigned int)v20;
}
