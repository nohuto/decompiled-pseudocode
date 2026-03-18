/*
 * XREFs of ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800252B4
 * Callers:
 *     ??_GCInteractionContextWrapper@@UEAAPEAXI@Z @ 0x180025370 (--_GCInteractionContextWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x1800C5D08 (-RemoveAll@-$CArray@PEAVCBufferedOutputPointer@@V-$CArrayEqualHelper@PEAVCBufferedOutputPointer@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x1801D80E0 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 */

void __fastcall CInteractionContextWrapper::~CInteractionContextWrapper(CInteractionContextWrapper *this)
{
  char *v2; // rdi
  __int64 v3; // rbp
  char *v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)this = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
  *((_QWORD *)this + 1) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
  if ( *((_QWORD *)this + 3) )
  {
    DestroyInteractionContext();
    *((_QWORD *)this + 3) = 0LL;
    CInteractionContextWrapper::ResetBufferedOutput(this);
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((char *)this + 608);
  v2 = (char *)this + 544;
  do
  {
    v3 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
    v4 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
      __fastfail(3u);
    *(_QWORD *)v2 = v5;
    *(_QWORD *)(v5 + 8) = v2;
    if ( v4 != v2 )
    {
      v3 = *((_QWORD *)v4 + 2);
      operator delete(v4, 0x18uLL);
      --*((_DWORD *)this + 140);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
  }
  while ( v3 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
