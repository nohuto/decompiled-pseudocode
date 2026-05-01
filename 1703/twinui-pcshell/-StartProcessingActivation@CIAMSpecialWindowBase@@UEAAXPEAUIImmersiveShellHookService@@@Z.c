/*
 * XREFs of ?StartProcessingActivation@CIAMSpecialWindowBase@@UEAAXPEAUIImmersiveShellHookService@@@Z @ 0x18002CA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CIAMSpecialWindowBase::StartProcessingActivation(
        CIAMSpecialWindowBase *this,
        struct IImmersiveShellHookService *a2)
{
  __int64 v4; // rcx

  if ( *((struct IImmersiveShellHookService **)this + 4) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveShellHookService *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
