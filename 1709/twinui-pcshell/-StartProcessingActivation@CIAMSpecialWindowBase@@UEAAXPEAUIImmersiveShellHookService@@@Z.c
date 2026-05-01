/*
 * XREFs of ?StartProcessingActivation@CIAMSpecialWindowBase@@UEAAXPEAUIImmersiveShellHookService@@@Z @ 0x18002E310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CIAMSpecialWindowBase::StartProcessingActivation(
        CIAMSpecialWindowBase *this,
        struct IImmersiveShellHookService *a2)
{
  __int64 v4; // rcx

  if ( *((struct IImmersiveShellHookService **)this + 5) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveShellHookService *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
