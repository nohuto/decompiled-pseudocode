/*
 * XREFs of ?v_ShutdownServices@CImmersiveWindowManager@@MEAAJPEAUIProfferService@@@Z @ 0x18002FC80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowManager::v_ShutdownServices(
        CImmersiveWindowManager *this,
        struct IProfferService *a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 i; // rdi
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 19);
  for ( i = 0LL; i < v2; ++i )
    IUnknown_SetSite(*(IUnknown **)(*((_QWORD *)this + 18) + 8 * i), 0LL);
  v5 = *((_QWORD *)this + 23);
  if ( v5 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64, struct IProfferService *))(*(_QWORD *)v5 + 16LL))(v5, a2);
  }
  return 0LL;
}
