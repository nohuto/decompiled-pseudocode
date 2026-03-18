/*
 * XREFs of ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800B7BE4
 * Callers:
 *     ??_GCInteractionContextWrapper@@UEAAPEAXI@Z @ 0x1800B7CA0 (--_GCInteractionContextWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x1800BE284 (-RemoveAll@-$CArray@PEAVCBufferedOutputPointer@@V-$CArrayEqualHelper@PEAVCBufferedOutputPointer@.c)
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x18019F060 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 */

void __fastcall CInteractionContextWrapper::~CInteractionContextWrapper(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE *p_OwningThread; // rdi
  HANDLE v3; // rbp
  HANDLE *v4; // rcx
  _QWORD *v5; // rax

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
  *(_QWORD *)&this->LockCount = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
  if ( this->LockSemaphore )
  {
    DestroyInteractionContext();
    this->LockSemaphore = 0LL;
    CInteractionContextWrapper::ResetBufferedOutput((CInteractionContextWrapper *)this);
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll(&this[15]);
  p_OwningThread = &this[13].OwningThread;
  do
  {
    v3 = 0LL;
    EnterCriticalSection(this + 14);
    v4 = (HANDLE *)*p_OwningThread;
    if ( *((HANDLE **)*p_OwningThread + 1) != p_OwningThread || (v5 = *v4, *((HANDLE **)*v4 + 1) != v4) )
      __fastfail(3u);
    *p_OwningThread = v5;
    v5[1] = p_OwningThread;
    if ( v4 != p_OwningThread )
    {
      v3 = v4[2];
      WPF::ProcessHeapImpl::Free(v4);
      --LODWORD(this[13].SpinCount);
    }
    LeaveCriticalSection(this + 14);
  }
  while ( v3 );
  DeleteCriticalSection(this + 14);
  *(_QWORD *)&this->LockCount = &CMILRefCountBase::`vftable';
}
