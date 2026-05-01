/*
 * XREFs of ?GetDragProvider@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewDragProvider@@@WRL@Microsoft@@XZ @ 0x18028A780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::GetDragProvider(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 424LL))(v2);
  }
  else
  {
    *a2 = (__int64)CMultitaskingViewElementBase::s_nullDragProvider;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2);
  }
  return a2;
}
