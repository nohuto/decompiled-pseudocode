/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18001DC20
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180015990 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180023694 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180030DFC (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180031018 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180031108 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int AliasedEndpointCharacteristics; // ebx
  int (*v6)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // eax
  unsigned __int16 *v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // rax
  __int64 i; // rdx
  int v13; // eax
  CVolumeStrip *v14; // rcx
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-10h] BYREF
  struct CEndpointCharacteristics *v17; // [rsp+60h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF

  pv = 0LL;
  v17 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 792));
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(Buffer, 0, &v17);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_28;
  *(GUID *)lpCriticalSection = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v17,
                eHostProcessConnector,
                (struct _GUID *)lpCriticalSection,
                v6,
                (struct tWAVEFORMATEX **)&pv);
  v8 = (unsigned __int16 *)pv;
  AliasedEndpointCharacteristics = MixFormat;
  if ( !MixFormat )
  {
    LOBYTE(lpCriticalSection[1]) = 0;
    lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 880);
    ATL::CCritSecLock::Lock(lpCriticalSection);
    v9 = v8[1];
    *((_DWORD *)this + 258) = v9;
    v10 = 4 * v9;
    if ( !is_mul_ok(v9, 4uLL) )
      v10 = -1LL;
    v11 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    *((_QWORD *)this + 130) = v11;
    if ( v11 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 258); i = (unsigned int)(i + 1) )
        *(_DWORD *)(*((_QWORD *)this + 130) + 4 * i) = 1065353216;
      if ( LOBYTE(lpCriticalSection[1]) )
        LeaveCriticalSection(lpCriticalSection[0]);
      *((_BYTE *)this + 1056) = (a2 & 2) != 0;
      if ( (a2 & 2) != 0 )
      {
        v13 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
        if ( v13 < 0 )
        {
          v14 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              44LL,
              &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
              (unsigned int)v13);
            v14 = WPP_GLOBAL_Control;
          }
          AliasedEndpointCharacteristics = 0;
        }
        else
        {
          AliasedEndpointCharacteristics = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
          CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
          v14 = WPP_GLOBAL_Control;
        }
        if ( AliasedEndpointCharacteristics
          && v14 != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v14 + 28) & 0x40) != 0
          && *((_BYTE *)v14 + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)v14 + 2),
            45LL,
            &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
            (unsigned int)AliasedEndpointCharacteristics);
        }
      }
    }
    else
    {
      AliasedEndpointCharacteristics = -2147024882;
      if ( LOBYTE(lpCriticalSection[1]) )
        LeaveCriticalSection(lpCriticalSection[0]);
    }
  }
  if ( v8 )
    CoTaskMemFree(v8);
  if ( AliasedEndpointCharacteristics < 0 )
LABEL_28:
    AudSrvTraceLoggingErrorHelper(
      "CPerStreamVolumeAudioSession::CompleteConstruction",
      0x7F8u,
      AliasedEndpointCharacteristics);
  if ( v17 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)AliasedEndpointCharacteristics;
}
