/*
 * XREFs of ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180030D5C
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18001D440 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001D5D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18008E330 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     WPP_SF_g @ 0x180087868 (WPP_SF_g.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18008A830 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x18008F4FC (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     WPP_SF_dd @ 0x180090690 (WPP_SF_dd.c)
 *     WPP_SF_dSD @ 0x180090A08 (WPP_SF_dSD.c)
 *     WPP_SF_dg @ 0x1800ADE90 (WPP_SF_dg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::PersistSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  SAFEARRAY *v2; // rbx
  HRESULT v4; // esi
  __int64 v5; // r9
  SAFEARRAY *v6; // rax
  unsigned int v7; // r14d
  int v8; // edx
  int v9; // r8d
  int v10; // r14d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r8d
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

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 1064);
  v20 = 0;
  v2 = 0LL;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      135LL,
      &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      *((unsigned __int8 *)this + 1056));
  }
  if ( *((_QWORD *)this + 138) && *((_BYTE *)this + 1056) )
  {
    v27 = 0LL;
    v21 = 4LL;
    v22 = 0LL;
    v23 = 0LL;
    v17 = (LPCRITICAL_SECTION)((char *)this + 880);
    v18 = 0;
    ATL::CCritSecLock::Lock(&v17);
    LODWORD(v22) = *((_DWORD *)this + 230);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 136LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids);
    }
    if ( v18 )
      LeaveCriticalSection(v17);
    v4 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, __int64 *))(**((_QWORD **)this + 138) + 48LL))(
           *((_QWORD *)this + 138),
           &PKEY_AudioSession_MasterVolume,
           &v21);
    if ( v4 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          137,
          (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
          *((_QWORD *)this + 108),
          v4);
      }
      v4 = 0;
    }
    v17 = (LPCRITICAL_SECTION)((char *)this + 880);
    v18 = 0;
    ATL::CCritSecLock::Lock(&v17);
    v5 = *((unsigned int *)this + 258);
    if ( (_DWORD)v5 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 138LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, v5);
      }
      rgsabound.cElements = *((_DWORD *)this + 258);
      rgsabound.lLbound = 0;
      v6 = SafeArrayCreate(4u, 1u, &rgsabound);
      v27 = v6;
      v2 = v6;
      if ( v6 )
      {
        v4 = SafeArrayLock(v6);
        if ( !v4 )
        {
          v7 = 0;
          if ( *((_DWORD *)this + 258) )
          {
            while ( 1 )
            {
              if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_dg(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  139LL,
                  &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
                  v7,
                  *(float *)(*((_QWORD *)this + 130) + 4LL * v7));
              }
              v4 = ATL::CComSafeArray<float,4>::SetAt(&v27, v7, *((_QWORD *)this + 130) + 4LL * v7);
              if ( v4 )
                break;
              if ( ++v7 >= *((_DWORD *)this + 258) )
                goto LABEL_42;
            }
            if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_dSD(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v9, v7, *((_QWORD *)this + 108), v4);
            }
          }
        }
      }
      else
      {
        v4 = -2147024882;
      }
    }
LABEL_42:
    v10 = *((_DWORD *)this + 258);
    if ( v18 )
      LeaveCriticalSection(v17);
    if ( v10 )
    {
      if ( !v4 )
      {
        v11 = *((_QWORD *)this + 138);
        v22 = v2;
        LOWORD(v21) = 8196;
        v12 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, __int64 *))(*(_QWORD *)v11 + 48LL))(
                v11,
                &PKEY_AudioSession_ChannelVolume,
                &v21);
        if ( v12 )
        {
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              141,
              (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
              *((_QWORD *)this + 108),
              v12);
          }
        }
      }
    }
    v17 = (LPCRITICAL_SECTION)((char *)this + 880);
    v24 = 11LL;
    v25 = 0LL;
    v26 = 0LL;
    v18 = 0;
    ATL::CCritSecLock::Lock(&v17);
    v13 = *((_DWORD *)this + 231);
    if ( v13 )
      v14 = -1;
    else
      v14 = 0;
    LOWORD(v25) = v14;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        142LL,
        &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        (unsigned int)v14,
        v13);
    }
    if ( v18 )
      LeaveCriticalSection(v17);
    v15 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, __int64 *))(**((_QWORD **)this + 138) + 48LL))(
            *((_QWORD *)this + 138),
            &PKEY_AudioSession_Mute,
            &v24);
    if ( v15
      && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        143,
        (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        *((_QWORD *)this + 108),
        v15);
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 138) + 56LL))(*((_QWORD *)this + 138));
    LODWORD(v2) = v16;
    if ( v16 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          144,
          (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
          *((_QWORD *)this + 108),
          v16);
      }
      LODWORD(v2) = 0;
    }
    ATL::CComSafeArray<float,4>::Destroy(&v27);
    if ( (int)v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::PersistSessionConfiguration", 0x150Fu, (int)v2);
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
