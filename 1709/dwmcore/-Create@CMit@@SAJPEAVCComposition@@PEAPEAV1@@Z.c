/*
 * XREFs of ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801A03C0
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180194F14 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CMit@@AEAA@PEAVCComposition@@@Z @ 0x1801A036C (--0CMit@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CMit@@AEAAJXZ @ 0x1801A044C (-Initialize@CMit@@AEAAJXZ.c)
 */

__int64 __fastcall CMit::Create(struct CComposition *a1, struct CMit **a2)
{
  CMit *v4; // rax
  CMit *v5; // rdi
  unsigned int v6; // ebx
  signed int v7; // eax

  v4 = (CMit *)operator new(0x88uLL);
  if ( v4 )
    v5 = CMit::CMit(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v7 = CMit::Initialize(v5);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x56u);
    else
      *a2 = v5;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x54u);
  }
  return v6;
}
