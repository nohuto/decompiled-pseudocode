/*
 * XREFs of ?Close@SwitchItemThumbnailElement@@IEAAXXZ @ 0x18029D03C
 * Callers:
 *     ?KeyDown@SwitchItemThumbnailElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x18029D690 (-KeyDown@SwitchItemThumbnailElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?v_OnClick@SwitchItemThumbnailElement@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18029E030 (-v_OnClick@SwitchItemThumbnailElement@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputAr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SwitchItemThumbnailElement::Close(SwitchItemThumbnailElement *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 73);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, *((_QWORD *)this + 72));
}
