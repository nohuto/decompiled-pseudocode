/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002D1A0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180066540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAP_ea_180066540.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180066550 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAP_ea_180066550.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180066560 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAP_ea_180066560.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180066570 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAP_ea_180066570.c)
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180007CB4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::Release(
        int *lpMem)
{
  unsigned int result; // eax
  unsigned int v3; // edi
  void *(__fastcall *v4)(CAPOWrapperClient *__hidden, unsigned int); // rax
  LPCRITICAL_SECTION v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  result = ATL::SafeDecrementReferenceMultiThread(lpMem + 11);
  v3 = result;
  if ( !result )
  {
    if ( lpMem )
    {
      v4 = *(void *(__fastcall **)(CAPOWrapperClient *__hidden, unsigned int))(*(_QWORD *)lpMem + 32LL);
      if ( v4 == CAPOWrapperClient::`scalar deleting destructor' )
      {
        *(_QWORD *)lpMem = &CAPOWrapperClient::`vftable';
        *((_QWORD *)lpMem + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
        *((_QWORD *)lpMem + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>'};
        *((_QWORD *)lpMem + 3) = &CAPOWrapperClient::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
        *((_QWORD *)lpMem + 4) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
        v5 = g_ADGProcess;
        lpCriticalSection = g_ADGProcess;
        v11 = v3;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
        if ( LODWORD(v5[1].DebugInfo)-- == 1 )
          CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v5);
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
        lpMem[11] = -1073741823;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
      else
      {
        v4((CAPOWrapperClient *)lpMem, 1u);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    return v3;
  }
  return result;
}
