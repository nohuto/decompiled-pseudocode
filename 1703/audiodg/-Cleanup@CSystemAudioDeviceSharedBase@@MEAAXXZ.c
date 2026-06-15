/*
 * XREFs of ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005CE0
 * Callers:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140005700 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140008EB0 (--_G-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002FE88 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x14003DE00 (-Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003E600 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140001D44 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140003AC0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140005F20 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400141C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14002FFF0 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSystemAudioDeviceSharedBase::Cleanup(CSystemAudioDeviceSharedBase *this)
{
  int v2; // edx
  CSystemAudioDeviceSharedBase **v3; // rax
  _QWORD *v4; // rcx
  void *v5; // rdx
  __int64 (__fastcall *v6)(void *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+48h] [rbp-20h] BYREF

  v9 = -2LL;
  v10 = *(_OWORD *)((char *)this + 248);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids);
  }
  if ( *((_DWORD *)this + 85) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSadMap;
    v8 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v2 = 0;
    if ( (int)qword_1400862A0 > 0 )
    {
      v3 = (CSystemAudioDeviceSharedBase **)qword_140086298;
      while ( *v3 != this )
      {
        ++v2;
        ++v3;
        if ( v2 >= (int)qword_1400862A0 )
          goto LABEL_11;
      }
      if ( v2 != -1 )
        ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt(
          (unsigned int)qword_1400862A0,
          v2);
    }
LABEL_11:
    if ( v8 )
      LeaveCriticalSection(lpCriticalSection);
    *((_DWORD *)this + 85) = 0;
  }
  CSystemAudioDeviceBase::Cleanup(this);
  if ( !*((_QWORD *)this + 41) )
    goto LABEL_29;
  if ( !*((_DWORD *)this + 84) )
    goto LABEL_16;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids);
  }
  if ( (int)CSystemAudioDeviceSharedBase::SetGraphState(this, 0LL) >= 0 )
    goto LABEL_16;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids);
LABEL_16:
    v4 = WPP_GLOBAL_Control;
  }
  v5 = (void *)*((_QWORD *)this + 41);
  if ( v5 )
  {
    *((_QWORD *)this + 41) = 0LL;
    v6 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL);
    if ( v6 == ATL::CComObject<CAudioDeviceGraph>::Release )
      ATL::CComObject<CAudioDeviceGraph>::Release(v5);
    else
      v6(v5);
    v4 = WPP_GLOBAL_Control;
  }
  if ( v4 != &WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v4 + 7) & 0x200) == 0 || *((_BYTE *)v4 + 25) < 4u )
    {
LABEL_24:
      if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x200) != 0 && *((_BYTE *)v4 + 25) >= 4u )
        WPP_SF_(v4[2], 15LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids);
      goto LABEL_28;
    }
    WPP_SF_(v4[2], 14LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids);
LABEL_29:
    v4 = WPP_GLOBAL_Control;
    goto LABEL_24;
  }
LABEL_28:
  PublishDeviceGraphWnfState();
  EtwEventActivityIdControl(4LL, &v11);
}
