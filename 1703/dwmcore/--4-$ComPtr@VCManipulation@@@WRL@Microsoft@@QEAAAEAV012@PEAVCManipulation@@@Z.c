/*
 * XREFs of ??4?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulation@@@Z @ 0x18016BEF4
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016EB34 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D244 (-InternalRelease@-$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CManipulation>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a2 + 8) + 8LL))(a2 + 8);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CManipulation>::InternalRelease(&v5);
  }
  return a1;
}
