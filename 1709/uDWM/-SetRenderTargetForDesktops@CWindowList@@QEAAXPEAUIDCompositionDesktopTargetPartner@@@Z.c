/*
 * XREFs of ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z @ 0x18003D64C
 * Callers:
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003B784 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006EB3C (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::SetRenderTargetForDesktops(
        CWindowList *this,
        struct IDCompositionDesktopTargetPartner *a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  while ( 1 )
  {
    v4 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
    if ( !v4 )
      break;
    v5 = v4[2];
    v6 = *(_QWORD *)(v5 + 40);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *(_QWORD *)(v5 + 40) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IDCompositionDesktopTargetPartner *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *(_QWORD *)(v5 + 64);
    v8 = *(_QWORD *)(v7 + 32);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *(_QWORD *)(v7 + 32) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IDCompositionDesktopTargetPartner *))(*(_QWORD *)a2 + 8LL))(a2);
  }
}
