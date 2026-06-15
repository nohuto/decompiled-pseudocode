/*
 * XREFs of ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x1400125B0
 * Callers:
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1400126C0 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x1400129A0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x140013D30 (-Release@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001C890 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct _RTL_CRITICAL_SECTION *__fastcall ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *Block,
        char a2)
{
  __int64 (__fastcall *v4)(CAudioDGModule *__hidden); // rax
  char *LockSemaphore; // rcx
  HANDLE OwningThread; // rcx
  CSystemEffectWrapper *v7; // rcx
  unsigned int (__fastcall *v8)(CSystemEffectWrapper *__hidden); // rax

  Block->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
  *(_QWORD *)&Block->LockCount = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
  Block->OwningThread = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
  Block->LockSemaphore = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObjectInternal'};
  LODWORD(Block->SpinCount) = -1073741823;
  v4 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v4 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v4(ATL::_pAtlModule);
  LockSemaphore = (char *)Block[2].LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(LockSemaphore);
    Block[2].LockSemaphore = 0LL;
  }
  OwningThread = Block[2].OwningThread;
  if ( OwningThread )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  v7 = *(CSystemEffectWrapper **)&Block[2].LockCount;
  if ( v7 )
  {
    v8 = *(unsigned int (__fastcall **)(CSystemEffectWrapper *__hidden))(*(_QWORD *)v7 + 16LL);
    if ( v8 == CSystemEffectWrapper::Release )
      CSystemEffectWrapper::Release(v7);
    else
      v8(v7);
  }
  if ( LOBYTE(Block[2].DebugInfo) )
  {
    LOBYTE(Block[2].DebugInfo) = 0;
    DeleteCriticalSection(Block + 1);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
