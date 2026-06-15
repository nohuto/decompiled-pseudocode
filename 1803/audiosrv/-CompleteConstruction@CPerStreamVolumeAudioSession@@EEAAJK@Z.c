/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180035BF0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180034D70 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800164B0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039070 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041A18 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041C14 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041CFC (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int AliasedEndpointCharacteristics; // eax
  int (*v6)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // ebx
  _QWORD *v8; // rsi
  struct tWAVEFORMATEX *v9; // r14
  struct tWAVEFORMATEX *v10; // rcx
  bool v11; // of
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  void *v14; // rcx
  _DWORD *v15; // rdx
  __int64 i; // rcx
  int v17; // r15d
  int v18; // eax
  unsigned int v19; // ebx
  int SessionConfiguration; // eax
  void (*v21)(void); // rax
  int v23; // [rsp+20h] [rbp-40h]
  int v24; // [rsp+20h] [rbp-40h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-30h] BYREF
  LPVOID *p_pv; // [rsp+40h] [rbp-20h]
  struct tWAVEFORMATEX *v27; // [rsp+48h] [rbp-18h] BYREF
  char v28; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct CEndpointCharacteristics *v30; // [rsp+90h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp+40h] BYREF

  v30 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 656));
  if ( *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL) == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       g_pEndpointCharacteristicsCache,
                                       Buffer,
                                       0,
                                       &v30);
  else
    AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                       g_pEndpointCharacteristicsCache,
                                       Buffer,
                                       0LL,
                                       &v30);
  MixFormat = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)AliasedEndpointCharacteristics,
      v23);
    goto LABEL_26;
  }
  pv = 0LL;
  v27 = 0LL;
  p_pv = &pv;
  v28 = 1;
  *(GUID *)lpCriticalSection = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v30,
                eHostProcessConnector,
                (struct _GUID *)lpCriticalSection,
                v6,
                &v27);
  if ( v28 )
  {
    v8 = p_pv;
    v9 = v27;
    v10 = (struct tWAVEFORMATEX *)*p_pv;
    if ( v27 != *p_pv )
    {
      if ( v10 )
        CoTaskMemFree(v10);
      *v8 = v9;
    }
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x664,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)MixFormat,
      v24);
  }
  else
  {
    LOBYTE(lpCriticalSection[1]) = 0;
    lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 808);
    ATL::CCritSecLock::Lock(lpCriticalSection);
    v12 = 4LL * *((unsigned __int16 *)pv + 1);
    v11 = (*((unsigned __int16 *)pv + 1) * (unsigned __int128)4uLL) >> 64 != 0;
    *((_DWORD *)this + 240) = *((unsigned __int16 *)pv + 1);
    if ( v11 )
      v12 = -1LL;
    v13 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v14 = (void *)*((_QWORD *)this + 121);
    v15 = v13;
    *((_QWORD *)this + 121) = v13;
    if ( v14 )
    {
      operator delete(v14);
      v15 = (_DWORD *)*((_QWORD *)this + 121);
    }
    if ( !v15 )
    {
      MixFormat = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x8007000ELL,
        v24);
      if ( LOBYTE(lpCriticalSection[1]) )
        LeaveCriticalSection(lpCriticalSection[0]);
      goto LABEL_24;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 240); i = (unsigned int)(i + 1) )
      v15[i] = 1065353216;
    if ( LOBYTE(lpCriticalSection[1]) )
      LeaveCriticalSection(lpCriticalSection[0]);
    v17 = a2 & 2;
    *((_BYTE *)this + 984) = v17 != 0;
    if ( !v17 )
      goto LABEL_23;
    v18 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x67D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v18,
        v24);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, v19);
      }
      goto LABEL_23;
    }
    SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
    MixFormat = SessionConfiguration;
    if ( SessionConfiguration >= 0 )
    {
      CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
LABEL_23:
      MixFormat = 0;
      goto LABEL_24;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x683,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)SessionConfiguration,
      v24);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
  }
LABEL_24:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_26:
  if ( v30 )
  {
    v21 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
    if ( (char *)v21 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release();
    else
      v21();
  }
  return (unsigned int)MixFormat;
}
