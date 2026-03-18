/*
 * XREFs of ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800B3B14
 * Callers:
 *     ??_GCInteractionContextWrapper@@UEAAPEAXI@Z @ 0x1800B3BD0 (--_GCInteractionContextWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x1800C7B2C (-RemoveAll@-$CArray@PEAVCBufferedOutputPointer@@V-$CArrayEqualHelper@PEAVCBufferedOutputPointer@.c)
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180190950 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 */

void __fastcall CInteractionContextWrapper::~CInteractionContextWrapper(CInteractionContextWrapper *this)
{
  __int64 **v2; // rdi
  __int64 v3; // rbp
  __int64 *v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)this = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
  *((_QWORD *)this + 1) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
  if ( *((_QWORD *)this + 3) )
  {
    DestroyInteractionContext();
    *((_QWORD *)this + 3) = 0LL;
    CInteractionContextWrapper::ResetBufferedOutput(this);
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((char *)this + 544);
  v2 = (__int64 **)((char *)this + 480);
  do
  {
    v3 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
    v4 = *v2;
    v5 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v2 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v2;
    if ( v4 != (__int64 *)v2 )
    {
      v3 = v4[2];
      WPF::ProcessHeapImpl::Free(v4);
      --*((_DWORD *)this + 124);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
  }
  while ( v3 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
