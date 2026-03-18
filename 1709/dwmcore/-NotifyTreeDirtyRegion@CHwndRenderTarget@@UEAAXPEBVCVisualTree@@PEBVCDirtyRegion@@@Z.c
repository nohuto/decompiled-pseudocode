/*
 * XREFs of ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1800172B0
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180015D90 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::NotifyTreeDirtyRegion(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  __int64 v5; // rcx
  char *v6; // rcx
  void (__fastcall *v7)(char *, _QWORD, _QWORD); // rax

  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    (*(void (__fastcall **)(__int64, const struct CVisualTree *))(*(_QWORD *)v5 + 8LL))(v5, a2);
  *((_QWORD *)this + 9) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *, const struct CVisualTree *))a3)(a3, a2);
  v6 = (char *)this - 72;
  v7 = *(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 9) + 64LL);
  if ( (char *)v7 == (char *)CResource::NotifyOnChanged )
    CResource::NotifyOnChanged(v6, 0LL, 0LL);
  else
    v7(v6, 0LL, 0LL);
}
