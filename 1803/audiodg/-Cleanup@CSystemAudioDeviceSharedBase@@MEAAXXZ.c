/*
 * XREFs of ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140012D50
 * Callers:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x1400129AC (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x1400153D4 (--1-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002EB00 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x14003CA40 (-Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003D250 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140002D2C (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140003420 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140007B00 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140012EB0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14002EC2C (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceSharedBase::Cleanup(CSystemAudioDeviceSharedBase *this)
{
  _QWORD *v2; // rcx
  CAudioDeviceGraph *v3; // rdx
  __int64 (__fastcall *v4)(CAudioDeviceGraph *); // rax
  __int128 v5; // [rsp+38h] [rbp-20h] BYREF

  v5 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v5);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids);
  }
  if ( *((_DWORD *)this + 85) )
  {
    CSystemAudioDeviceCollection::Remove(this);
    *((_DWORD *)this + 85) = 0;
  }
  CSystemAudioDeviceBase::Cleanup(this);
  if ( !*((_QWORD *)this + 41) )
    goto LABEL_17;
  if ( !*((_DWORD *)this + 84) )
    goto LABEL_7;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids);
  }
  if ( (int)CSystemAudioDeviceSharedBase::SetGraphState(this, 0LL) >= 0 )
    goto LABEL_7;
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids);
LABEL_7:
    v2 = WPP_GLOBAL_Control;
  }
  v3 = (CAudioDeviceGraph *)*((_QWORD *)this + 41);
  if ( v3 )
  {
    *((_QWORD *)this + 41) = 0LL;
    v4 = *(__int64 (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v3 + 16LL);
    if ( v4 == ATL::CComObject<CAudioDeviceGraph>::Release )
      ATL::CComObject<CAudioDeviceGraph>::Release(v3);
    else
      v4(v3);
    v2 = WPP_GLOBAL_Control;
  }
  if ( v2 != &WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v2 + 7) & 0x200) == 0 || *((_BYTE *)v2 + 25) < 4u )
    {
LABEL_14:
      if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
        WPP_SF_(v2[2], 15LL, &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids);
      goto LABEL_16;
    }
    WPP_SF_(v2[2], 14LL, &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids);
LABEL_17:
    v2 = WPP_GLOBAL_Control;
    goto LABEL_14;
  }
LABEL_16:
  PublishDeviceGraphWnfState();
  EtwEventActivityIdControl(4LL, &v5);
}
