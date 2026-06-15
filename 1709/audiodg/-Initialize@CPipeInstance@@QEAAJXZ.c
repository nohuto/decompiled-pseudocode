/*
 * XREFs of ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140008F40
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000CC90 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011570 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140011B30 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140044310 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x1400460E8 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x1400057E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140009060 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x1400091F0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140009E90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ??_ECProcessNode@@UEAAPEAXI@Z @ 0x14000B440 (--_ECProcessNode@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::Initialize(CPipeInstance *this)
{
  int v2; // ebx
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  CProcessNode *v5; // rdi
  __int64 *v6; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // zf
  void *(__fastcall *v11)(CProcessNode *__hidden, unsigned int); // rax

  if ( (*(_QWORD *)this || *((_DWORD *)this + 2))
    && (*((_DWORD *)this + 28) == 3 || *((_DWORD *)this + 32) || (*((_BYTE *)this + 132) & 8) != 0) )
  {
    v2 = CPipeInstance::ResolveFormatConflictsLeftRight(this);
    if ( v2 < 0 )
      goto LABEL_27;
  }
  else
  {
    v2 = CPipeInstance::ResolveFormatConflictsRightLeft(this);
    if ( v2 < 0 )
    {
LABEL_27:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          36LL,
          &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
          (unsigned int)v2);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::Initialize", 0x9B8u, v2);
      return (unsigned int)v2;
    }
  }
  v3 = (_QWORD *)*((_QWORD *)this + 3);
  while ( v3 )
  {
    v4 = v3;
    v5 = (CProcessNode *)v3[2];
    v6 = v3 + 1;
    v3 = (_QWORD *)v3[1];
    if ( *((_DWORD *)v5 + 10) == 4 )
    {
      v8 = *v4;
      if ( v4 == *((_QWORD **)this + 2) )
        *((_QWORD *)this + 2) = v8;
      else
        *v3 = v8;
      v9 = *v6;
      if ( v4 == *((_QWORD **)this + 3) )
        *((_QWORD *)this + 3) = v9;
      else
        *(_QWORD *)(*v4 + 8LL) = v9;
      *v4 = *((_QWORD *)this + 6);
      v10 = (*((_QWORD *)this + 4))-- == 1LL;
      *((_QWORD *)this + 6) = v4;
      if ( v10 )
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)this + 16);
      v11 = **(void *(__fastcall ***)(CProcessNode *__hidden, unsigned int))v5;
      if ( v11 == CProcessNode::`vector deleting destructor' )
        CProcessNode::`vector deleting destructor'(v5, 1u);
      else
        v11(v5, 1u);
    }
  }
  v2 = CPipeInstance::FixupStreamPipe(this);
  if ( v2 < 0 )
    goto LABEL_27;
  return (unsigned int)v2;
}
