/*
 * XREFs of ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x18001F360
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001F420 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClien.c)
 * Callees:
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D870 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAPOWrapperClient *__fastcall CAPOWrapperClient::`scalar deleting destructor'(CAPOWrapperClient *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CAPOWrapperClient::`vftable';
  *((_QWORD *)this + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>'};
  *((_QWORD *)this + 3) = &CAPOWrapperClient::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  *((_QWORD *)this + 4) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  CAudioDGProcess::UnlockADGProcess(this);
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_DWORD *)this + 11) = -1073741823;
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
