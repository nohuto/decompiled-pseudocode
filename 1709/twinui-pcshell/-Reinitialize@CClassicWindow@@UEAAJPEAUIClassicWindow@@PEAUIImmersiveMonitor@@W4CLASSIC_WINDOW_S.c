/*
 * XREFs of ?Reinitialize@CClassicWindow@@UEAAJPEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@@Z @ 0x180035140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindow::Reinitialize(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 64) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *(_QWORD *)(a1 + 24) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v9 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  result = 0LL;
  *(_DWORD *)(a1 + 72) = a4;
  return result;
}
