/*
 * XREFs of ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C8794
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800C86D0 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ??0CMit@@AEAA@PEAVCComposition@@@Z @ 0x18001DE34 (--0CMit@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CMit@@AEAAJXZ @ 0x18001E028 (-Initialize@CMit@@AEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMit::Create(struct CComposition *a1, struct CMit **a2)
{
  CMit *v4; // rax
  CMit *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx

  v4 = (CMit *)operator new(0x88uLL);
  if ( v4 )
    v5 = CMit::CMit(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = CMit::Initialize(v5);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x57u);
    else
      *a2 = v5;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x55u);
  }
  return v7;
}
