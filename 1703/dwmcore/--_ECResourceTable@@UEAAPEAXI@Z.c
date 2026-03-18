/*
 * XREFs of ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18005B1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CResourceTable *__fastcall CResourceTable::`vector deleting destructor'(CResourceTable *this, char a2)
{
  __int64 **v3; // rdi
  void *v5; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  void (*v12)(void); // rax

  *(_QWORD *)this = &CResourceTable::`vftable';
  v3 = (__int64 **)((char *)this + 56);
  while ( *v3 != (__int64 *)v3 )
  {
    v7 = *v3;
    v8 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v3 = (__int64 *)v8;
    v9 = v7 - 1;
    *(_QWORD *)(v8 + 8) = v3;
    v10 = *v9;
    v11 = (unsigned __int64)(v9 + 1) & -(__int64)(v9 != 0LL);
    v9[1] = v11;
    v12 = *(void (**)(void))(v10 + 8);
    v9[2] = v11;
    v12();
  }
  v5 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  WPF::ProcessHeapImpl::Free(v5);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
