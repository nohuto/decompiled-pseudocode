/*
 * XREFs of ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1800CA970
 * Callers:
 *     <none>
 * Callees:
 *     ?SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z @ 0x1800CA798 (-SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ?_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800CA92C (-_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsOleInitializePresent @ 0x180195DE0 (IsOleInitializePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellThreadStart(CImmersiveShellCreationBehavior *this)
{
  HRESULT v2; // ebx
  char *v3; // rax
  char *v4; // rsi
  IUnknown **v5; // rbx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx

  v2 = CImmersiveShellCreationBehavior::_ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 24));
  if ( v2 >= 0 )
  {
    if ( !*((_BYTE *)this + 16) && (unsigned __int8)IsOleInitializePresent() )
    {
      v2 = OleInitialize(0LL);
      *((_BYTE *)this + 16) = v2 >= 0;
    }
    if ( v2 >= 0 && !*((_QWORD *)this + 3) )
    {
      v3 = (char *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v4 = v3;
      if ( v3 )
      {
        v5 = (IUnknown **)(v3 + 16);
        *((_QWORD *)v3 + 2) = 0LL;
        *(_QWORD *)v3 = &CThreadRefHost::`vftable';
        *((_DWORD *)v3 + 2) = 0;
        SHCreateDUIThreadRef((struct IUnknownVtbl *)(v3 + 8), (struct IUnknown **)v3 + 2);
        SHSetThreadRef(*v5);
      }
      else
      {
        v4 = 0LL;
      }
      v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
      *((_QWORD *)this + 3) = 0LL;
      if ( v6 )
        (**v6)(v6, 1LL);
      *((_QWORD *)this + 3) = v4;
      return v4 == 0LL ? 0x8007000E : 0;
    }
  }
  return (unsigned int)v2;
}
