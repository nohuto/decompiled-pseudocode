/*
 * XREFs of ??_ECResourceTable@@UEAAPEAXI@Z @ 0x1800AA140
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180009F80 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CMILRefCountBase **__fastcall CResourceTable::`vector deleting destructor'(CMILRefCountBase **this, char a2)
{
  char *v3; // rdi
  CMILRefCountBase *v5; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  void (*v12)(void); // rax

  *this = (CMILRefCountBase *)&CResourceTable::`vftable';
  v3 = (char *)(this + 8);
  while ( *(char **)v3 != v3 )
  {
    v7 = *(__int64 **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v8 = *v7, *(__int64 **)(*v7 + 8) != v7) )
      __fastfail(3u);
    *(_QWORD *)v3 = v8;
    v9 = v7 - 1;
    *(_QWORD *)(v8 + 8) = v3;
    v10 = *v9;
    v11 = (unsigned __int64)(v9 + 1) & -(__int64)(v9 != 0LL);
    v9[1] = v11;
    v12 = *(void (**)(void))(v10 + 8);
    v9[2] = v11;
    v12();
  }
  ReleaseInterface<CConnection>(this + 7);
  v5 = this[5];
  this[2] = (CMILRefCountBase *)&HANDLE_TABLE::`vftable';
  WPF::ProcessHeapImpl::Free(v5);
  *this = (CMILRefCountBase *)&CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
