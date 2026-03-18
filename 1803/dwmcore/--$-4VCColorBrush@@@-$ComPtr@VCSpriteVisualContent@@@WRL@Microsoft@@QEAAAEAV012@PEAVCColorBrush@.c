/*
 * XREFs of ??$?4VCColorBrush@@@?$ComPtr@VCSpriteVisualContent@@@WRL@Microsoft@@QEAAAEAV012@PEAVCColorBrush@@@Z @ 0x18019F7AC
 * Callers:
 *     ?InitializeFastShadow@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801A0634 (-InitializeFastShadow@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CSpriteVisualContent>::operator=<CColorBrush>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v6);
  v4 = *a1;
  *a1 = a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
