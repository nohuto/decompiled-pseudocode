/*
 * XREFs of ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180074730
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18002CFB0 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18002D0D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180074100 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     WPP_SF_dg @ 0x18006B9E8 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x18006BA2C (WPP_SF_g.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x180070918 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x180075A8C (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     WPP_SF_dSD @ 0x180076FB4 (WPP_SF_dSD.c)
 *     WPP_SF_dd @ 0x180089EEC (WPP_SF_dd.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::PersistSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  SAFEARRAY *v2; // rbx
  float v3; // xmm0_4
  HRESULT v4; // esi
  int v5; // r9d
  SAFEARRAY *v6; // rax
  unsigned int v7; // r14d
  int v8; // edx
  int v9; // r8d
  int v10; // r14d
  __int64 v11; // rcx
  __int16 v12; // ax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-50h] BYREF
  char v15; // [rsp+38h] [rbp-48h]
  LPCRITICAL_SECTION v16; // [rsp+40h] [rbp-40h] BYREF
  char v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  SAFEARRAY *v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-18h] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h]
  __int64 v23; // [rsp+78h] [rbp-8h]
  SAFEARRAY *v24; // [rsp+C0h] [rbp+40h] BYREF
  SAFEARRAYBOUND rgsabound; // [rsp+C8h] [rbp+48h] BYREF

  v16 = (LPCRITICAL_SECTION)((char *)this + 1048);
  v17 = 0;
  v2 = 0LL;
  ATL::CCritSecLock::Lock(&v16);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x80u,
      (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      *((unsigned __int8 *)this + 1040));
  }
  if ( *((_QWORD *)this + 136) && *((_BYTE *)this + 1040) )
  {
    v24 = 0LL;
    v18 = 4LL;
    v19 = 0LL;
    v20 = 0LL;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 864);
    v15 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v3 = *((float *)this + 226);
    *(float *)&v19 = v3;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_g(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x81u,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        v3);
    }
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    v4 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64 *))(**((_QWORD **)this + 136) + 48LL))(
           *((_QWORD *)this + 136),
           &PKEY_AudioSession_MasterVolume,
           &v18);
    if ( v4 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x82u,
          (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
          *((const wchar_t **)this + 99));
      }
      v4 = 0;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 864);
    v15 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v5 = *((_DWORD *)this + 254);
    if ( v5 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x83u,
          (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
          v5);
      }
      rgsabound.cElements = *((_DWORD *)this + 254);
      rgsabound.lLbound = 0;
      v6 = SafeArrayCreate(4u, 1u, &rgsabound);
      v24 = v6;
      v2 = v6;
      if ( v6 )
      {
        v4 = SafeArrayLock(v6);
        if ( !v4 )
        {
          v7 = 0;
          if ( *((_DWORD *)this + 254) )
          {
            while ( 1 )
            {
              if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_dg(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x84u,
                  (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
                  v7);
              }
              v4 = ATL::CComSafeArray<float,4>::SetAt(&v24, v7, *((_QWORD *)this + 128) + 4LL * v7);
              if ( v4 )
                break;
              if ( ++v7 >= *((_DWORD *)this + 254) )
                goto LABEL_39;
            }
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_dSD(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v9, v7, *((_QWORD *)this + 99), v4);
            }
          }
        }
      }
      else
      {
        v4 = -2147024882;
      }
    }
LABEL_39:
    v10 = *((_DWORD *)this + 254);
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v10 )
    {
      if ( !v4 )
      {
        v11 = *((_QWORD *)this + 136);
        v19 = v2;
        LOWORD(v18) = 8196;
        if ( (*(unsigned int (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v11 + 48LL))(
               v11,
               &PKEY_AudioSession_ChannelVolume,
               &v18) )
        {
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x86u,
              (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
              *((const wchar_t **)this + 99));
          }
        }
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 864);
    v21 = 11LL;
    v22 = 0LL;
    v23 = 0LL;
    v15 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( *((_DWORD *)this + 227) )
      v12 = -1;
    else
      v12 = 0;
    LOWORD(v22) = v12;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 135LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids);
    }
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    if ( (*(unsigned int (__fastcall **)(_QWORD, void *, __int64 *))(**((_QWORD **)this + 136) + 48LL))(
           *((_QWORD *)this + 136),
           &PKEY_AudioSession_Mute,
           &v21)
      && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x88u,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        *((const wchar_t **)this + 99));
    }
    LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 136) + 56LL))(*((_QWORD *)this + 136));
    if ( (_DWORD)v2 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x89u,
          (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
          *((const wchar_t **)this + 99));
      }
      LODWORD(v2) = 0;
    }
    ATL::CComSafeArray<float,4>::Destroy(&v24);
  }
  if ( v17 )
    LeaveCriticalSection(v16);
  return (unsigned int)v2;
}
