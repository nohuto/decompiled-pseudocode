/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAPOAuxiliaryInputConfiguration@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013770
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BB0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180013120 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAPOAuxiliaryInputConfiguration@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180058AC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAud_ea_180058AC0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAPOAuxiliaryInputConfiguration@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180058AD0 (-Release@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAud_ea_180058AD0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAPOAuxiliaryInputConfiguration@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180058AE0 (-Release@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAud_ea_180058AE0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAPOAuxiliaryInputConfiguration@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180058AF0 (-Release@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAud_ea_180058AF0.c)
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180017144 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAPOAuxiliaryInputConfiguration,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *lpMem)
{
  unsigned __int32 v2; // ebx
  CAPOWrapperClient *(__fastcall *v4)(CAPOWrapperClient *, char); // rax
  LPCRITICAL_SECTION v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v2 = _InterlockedDecrement(lpMem + 11);
  if ( !v2 )
  {
    if ( lpMem )
    {
      v4 = *(CAPOWrapperClient *(__fastcall **)(CAPOWrapperClient *, char))(*(_QWORD *)lpMem + 32LL);
      if ( v4 == CAPOWrapperClient::`scalar deleting destructor' )
      {
        *(_QWORD *)lpMem = &CAPOWrapperClient::`vftable';
        *((_QWORD *)lpMem + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
        *((_QWORD *)lpMem + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAPOAuxiliaryInputConfiguration,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>,1,0>'};
        *((_QWORD *)lpMem + 3) = &CAPOWrapperClient::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
        *((_QWORD *)lpMem + 4) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>,1,0>'};
        v5 = g_ADGProcess;
        lpCriticalSection = g_ADGProcess;
        v11 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids);
        }
        if ( LODWORD(v5[1].DebugInfo)-- == 1 )
          CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v5);
        if ( v11 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v11 = 0;
        }
        v7 = *((_QWORD *)lpMem + 7);
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        v8 = *((_QWORD *)lpMem + 6);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        *((_DWORD *)lpMem + 11) = -1073741823;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, (LPVOID)lpMem);
      }
      else
      {
        v4((CAPOWrapperClient *)lpMem, 1);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
