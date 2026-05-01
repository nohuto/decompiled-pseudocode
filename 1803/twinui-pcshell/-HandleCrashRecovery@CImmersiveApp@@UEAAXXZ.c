/*
 * XREFs of ?HandleCrashRecovery@CImmersiveApp@@UEAAXXZ @ 0x18012E770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::HandleCrashRecovery(CImmersiveApp *this, __int64 a2)
{
  unsigned __int64 i; // rdi
  __int64 v4; // rcx

  for ( i = 0LL; i < *((_QWORD *)this + 39); ++i )
  {
    LOBYTE(a2) = i == 0;
    v4 = *(_QWORD *)(*((_QWORD *)this + 38) + 8 * i);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 176LL))(v4, a2);
  }
  CImmersiveApp::CloakType::RecoverFromPresentationLayer(
    (CImmersiveApp *)((char *)this + 472),
    *((struct IApplicationPresentationLayer **)this + 36));
}
