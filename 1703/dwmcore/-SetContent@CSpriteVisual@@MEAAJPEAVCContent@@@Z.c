/*
 * XREFs of ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x180161370
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180088B00 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::SetContent(CSpriteVisual *this, struct CContent *a2)
{
  unsigned int v4; // ebx
  int v5; // eax

  if ( !a2 || (*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 81LL) )
  {
    v5 = CVisual::SetContent(this, a2);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5Bu);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x58u);
  }
  return v4;
}
