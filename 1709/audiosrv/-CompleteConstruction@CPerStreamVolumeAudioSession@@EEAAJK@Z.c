/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18002D410
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x18001A000 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180013380 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180020320 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180070514 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180072FA0 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180074174 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int AliasedEndpointCharacteristics; // eax
  int (*v6)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int SessionConfiguration; // ebx
  int MixFormat; // eax
  unsigned __int16 *v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  void *v12; // rax
  __int64 i; // rdx
  int v14; // esi
  void (*v15)(void); // rax
  int v17; // eax
  CAudioDGProcess *v18; // rcx
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-10h] BYREF
  struct CEndpointCharacteristics *v20; // [rsp+60h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF

  pv = 0LL;
  v20 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 720));
  if ( *(__int64 (__fastcall **)(RTL_SRWLOCK *, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL) == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                       Buffer,
                                       0,
                                       &v20);
  else
    AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                       g_pEndpointCharacteristicsCache,
                                       Buffer,
                                       0LL,
                                       &v20);
  SessionConfiguration = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_36;
  *(GUID *)lpCriticalSection = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                (struct _RTL_CRITICAL_SECTION *)v20,
                eHostProcessConnector,
                (struct _GUID *)lpCriticalSection,
                v6,
                (struct tWAVEFORMATEX **)&pv);
  v9 = (unsigned __int16 *)pv;
  SessionConfiguration = MixFormat;
  if ( !MixFormat )
  {
    LOBYTE(lpCriticalSection[1]) = 0;
    lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 864);
    ATL::CCritSecLock::Lock(lpCriticalSection);
    v10 = v9[1];
    *((_DWORD *)this + 254) = v10;
    v11 = 4 * v10;
    if ( !is_mul_ok(v10, 4uLL) )
      v11 = -1LL;
    v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    *((_QWORD *)this + 128) = v12;
    if ( v12 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 254); i = (unsigned int)(i + 1) )
        *(_DWORD *)(*((_QWORD *)this + 128) + 4 * i) = 1065353216;
      if ( LOBYTE(lpCriticalSection[1]) )
        LeaveCriticalSection(lpCriticalSection[0]);
      v14 = a2 & 2;
      *((_BYTE *)this + 1040) = v14 != 0;
      if ( v14 )
      {
        v17 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
        if ( v17 < 0 )
        {
          v18 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              41LL,
              &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
              (unsigned int)v17);
            v18 = WPP_GLOBAL_Control;
          }
          SessionConfiguration = 0;
        }
        else
        {
          SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
          CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
          v18 = WPP_GLOBAL_Control;
        }
        if ( SessionConfiguration
          && v18 != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v18 + 28) & 0x40) != 0
          && *((_BYTE *)v18 + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)v18 + 2),
            42LL,
            &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
            (unsigned int)SessionConfiguration);
        }
      }
    }
    else
    {
      SessionConfiguration = -2147024882;
      if ( LOBYTE(lpCriticalSection[1]) )
        LeaveCriticalSection(lpCriticalSection[0]);
    }
  }
  if ( v9 )
    CoTaskMemFree(v9);
  if ( SessionConfiguration < 0 )
LABEL_36:
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::CompleteConstruction", 0x7A6u, SessionConfiguration);
  if ( v20 )
  {
    v15 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
    if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v20);
    else
      v15();
  }
  return (unsigned int)SessionConfiguration;
}
