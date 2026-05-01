/*
 * XREFs of ?RefreshWindowToMonitorMapping@CClassicWindowManager@@UEAAXPEAUIImmersiveShellHookService@@@Z @ 0x18011A820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindowManager::RefreshWindowToMonitorMapping(
        CClassicWindowManager *this,
        struct IImmersiveShellHookService *a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 i; // rsi
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = *((_QWORD *)this + 16);
  for ( i = 0LL; i < v2; ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6);
    v8 = *(_QWORD *)a2;
    v9 = v7 != 0 ? 4 : 0;
    v10 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
    (*(void (__fastcall **)(struct IImmersiveShellHookService *, __int64, __int64))(v8 + 40))(a2, v9 + 20, v11);
  }
}
