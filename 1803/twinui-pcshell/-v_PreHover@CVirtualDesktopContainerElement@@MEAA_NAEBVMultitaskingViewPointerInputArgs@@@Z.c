/*
 * XREFs of ?v_PreHover@CVirtualDesktopContainerElement@@MEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A8840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x18028BE0C (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     ?AllUpViewHoverSelectVirtualDesktop@MultitaskingViewTelemetry@@SAXXZ @ 0x1802A6C48 (-AllUpViewHoverSelectVirtualDesktop@MultitaskingViewTelemetry@@SAXXZ.c)
 */

char __fastcall CVirtualDesktopContainerElement::v_PreHover(
        CVirtualDesktopContainerElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 100) > 1uLL )
  {
    v3 = (__int64 *)*((_QWORD *)this + 17);
    if ( v3 )
    {
      v4 = *v3;
      v5 = CMultitaskingViewElementBase::_MapArgumentsToChild((__int64)this, (__int64)v7, (__int64 *)a2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v4 + 224))(v3, v5) )
      {
        *((_BYTE *)this + 824) = 1;
        MultitaskingViewTelemetry::AllUpViewHoverSelectVirtualDesktop();
      }
    }
  }
  return 1;
}
