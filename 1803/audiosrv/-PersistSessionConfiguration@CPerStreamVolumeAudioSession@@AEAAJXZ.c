/*
 * XREFs of ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004197C
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035590 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x1800AAD40 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800ABCA0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dd @ 0x1800A4FEC (WPP_SF_dd.c)
 *     WPP_SF_g @ 0x1800A5030 (WPP_SF_g.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800A8B90 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x1800ACDB4 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     WPP_SF_Sd @ 0x1800ADF18 (WPP_SF_Sd.c)
 *     WPP_SF_dSD @ 0x1800AE230 (WPP_SF_dSD.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     WPP_SF_dg @ 0x1800D3DD4 (WPP_SF_dg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::PersistSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  SAFEARRAY *v2; // rbx
  HRESULT v4; // esi
  __int64 v5; // r9
  ULONG v6; // eax
  SAFEARRAY *v7; // rax
  unsigned int v8; // r14d
  int v9; // edx
  int v10; // r8d
  int v11; // r14d
  __int64 v12; // rcx
  int v13; // eax
  __int16 v14; // ax
  int v15; // eax
  int v16; // eax
  LPCRITICAL_SECTION v17; // [rsp+30h] [rbp-50h] BYREF
  char v18; // [rsp+38h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-40h] BYREF
  char v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  SAFEARRAY *v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h]
  __int64 v26; // [rsp+78h] [rbp-8h]
  SAFEARRAY *v27; // [rsp+C0h] [rbp+40h] BYREF
  SAFEARRAYBOUND rgsabound; // [rsp+C8h] [rbp+48h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 992);
  v20 = 0;
  v2 = 0LL;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      106LL,
      &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      *((unsigned __int8 *)this + 984));
  }
  if ( *((_QWORD *)this + 129) && *((_BYTE *)this + 984) )
  {
    v27 = 0LL;
    v21 = 4LL;
    v22 = 0LL;
    v23 = 0LL;
    v17 = (LPCRITICAL_SECTION)((char *)this + 808);
    v18 = 0;
    ATL::CCritSecLock::Lock(&v17);
    LODWORD(v22) = *((_DWORD *)this + 212);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 107LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids);
    }
    if ( v18 )
      LeaveCriticalSection(v17);
    v4 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, __int64 *))(**((_QWORD **)this + 129) + 48LL))(
           *((_QWORD *)this + 129),
           &PKEY_AudioSession_MasterVolume,
           &v21);
    if ( v4 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          108,
          (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
          *((_QWORD *)this + 91),
          v4);
      }
      v4 = 0;
    }
    v17 = (LPCRITICAL_SECTION)((char *)this + 808);
    v18 = 0;
    ATL::CCritSecLock::Lock(&v17);
    v5 = *((unsigned int *)this + 240);
    if ( (_DWORD)v5 )
    {
      v6 = *((_DWORD *)this + 240);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 109LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, v5);
        v6 = *((_DWORD *)this + 240);
      }
      rgsabound.cElements = v6;
      rgsabound.lLbound = 0;
      v7 = SafeArrayCreate(4u, 1u, &rgsabound);
      v27 = v7;
      v2 = v7;
      v4 = v7 ? SafeArrayLock(v7) : -2147024882;
      if ( !v4 )
      {
        v8 = 0;
        if ( *((_DWORD *)this + 240) )
        {
          while ( 1 )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_dg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                110LL,
                &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
                v8,
                *(float *)(*((_QWORD *)this + 121) + 4LL * v8));
            }
            v4 = ATL::CComSafeArray<float,4>::SetAt(&v27, v8, *((_QWORD *)this + 121) + 4LL * v8);
            if ( v4 )
              break;
            if ( ++v8 >= *((_DWORD *)this + 240) )
              goto LABEL_43;
          }
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_dSD(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, v8, *((_QWORD *)this + 91), v4);
          }
        }
      }
    }
LABEL_43:
    v11 = *((_DWORD *)this + 240);
    if ( v18 )
      LeaveCriticalSection(v17);
    if ( v11 )
    {
      if ( !v4 )
      {
        v12 = *((_QWORD *)this + 129);
        v22 = v2;
        LOWORD(v21) = 8196;
        v13 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, __int64 *))(*(_QWORD *)v12 + 48LL))(
                v12,
                &PKEY_AudioSession_ChannelVolume,
                &v21);
        if ( v13 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              112,
              (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
              *((_QWORD *)this + 91),
              v13);
          }
        }
      }
    }
    v17 = (LPCRITICAL_SECTION)((char *)this + 808);
    v24 = 11LL;
    v25 = 0LL;
    v26 = 0LL;
    v18 = 0;
    ATL::CCritSecLock::Lock(&v17);
    if ( *((_DWORD *)this + 213) )
      v14 = -1;
    else
      v14 = 0;
    LOWORD(v25) = v14;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 113LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids);
    }
    if ( v18 )
      LeaveCriticalSection(v17);
    v15 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, __int64 *))(**((_QWORD **)this + 129) + 48LL))(
            *((_QWORD *)this + 129),
            &PKEY_AudioSession_Mute,
            &v24);
    if ( v15
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        114,
        (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
        *((_QWORD *)this + 91),
        v15);
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 129) + 56LL))(*((_QWORD *)this + 129));
    LODWORD(v2) = v16;
    if ( v16 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          115,
          (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
          *((_QWORD *)this + 91),
          v16);
      }
      LODWORD(v2) = 0;
    }
    ATL::CComSafeArray<float,4>::Destroy(&v27);
    if ( (int)v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::PersistSessionConfiguration", 0x1291u, (int)v2);
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
