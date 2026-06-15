/*
 * XREFs of ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x18002D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180007CB4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAPOWrapperClient *__fastcall CAPOWrapperClient::`scalar deleting destructor'(CAPOWrapperClient *this, char a2)
{
  LPCRITICAL_SECTION v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = &CAPOWrapperClient::`vftable';
  *((_QWORD *)this + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>'};
  *((_QWORD *)this + 3) = &CAPOWrapperClient::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  *((_QWORD *)this + 4) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  v4 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( LODWORD(v4[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v4);
  if ( v11 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v11 = 0;
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_DWORD *)this + 11) = -1073741823;
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
