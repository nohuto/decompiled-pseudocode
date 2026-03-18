/*
 * XREFs of ?SetBrush@CProjectedShadowCaster@@AEAAXPEAVCSpriteVisualContent@@@Z @ 0x1801A0D9C
 * Callers:
 *     ?ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH@@@Z @ 0x1801A07B8 (-ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCAST.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DestroyWhiteColor@CProjectedShadowCaster@@AEAAXXZ @ 0x18019FBA8 (-DestroyWhiteColor@CProjectedShadowCaster@@AEAAXXZ.c)
 */

void __fastcall CProjectedShadowCaster::SetBrush(CProjectedShadowCaster *this, struct CSpriteVisualContent *a2)
{
  __int64 v4; // rcx
  struct CSpriteVisualContent *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct CSpriteVisualContent **)this + 13) != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v5);
    v4 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CProjectedShadowCaster::DestroyWhiteColor((CRenderTargetImageSource **)this);
  (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
}
