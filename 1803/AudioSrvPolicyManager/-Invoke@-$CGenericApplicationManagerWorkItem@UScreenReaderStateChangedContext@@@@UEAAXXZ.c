/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@UEAAXXZ @ 0x180022D00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<ScreenReaderStateChangedContext>::Invoke(__int64 a1)
{
  volatile signed __int32 **v2; // rdi
  volatile signed __int32 *v3; // rbx

  (*(void (__fastcall **)(CApplicationManager *, _QWORD))(a1 + 8))(g_ApplicationManager, *(_QWORD *)(a1 + 16));
  v2 = *(volatile signed __int32 ***)(a1 + 16);
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 32LL))(v3);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      }
      *v2 = 0LL;
    }
    operator delete(v2, (const struct std::nothrow_t *)0x10);
  }
}
