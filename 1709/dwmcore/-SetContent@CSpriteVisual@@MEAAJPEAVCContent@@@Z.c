/*
 * XREFs of ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x180176230
 * Callers:
 *     <none>
 * Callees:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800542A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::SetContent(CSpriteVisual *this, struct CContent *a2)
{
  unsigned int v4; // ebx
  signed int v5; // eax

  if ( !a2 || (*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 14LL) )
  {
    v5 = CVisual::SetContent(this, a2);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x6Fu);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x6Cu);
  }
  return v4;
}
