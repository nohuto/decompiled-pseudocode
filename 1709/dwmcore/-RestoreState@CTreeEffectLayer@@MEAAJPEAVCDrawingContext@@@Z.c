/*
 * XREFs of ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180080BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180043794 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081490 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::RestoreState(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  signed int v4; // eax
  int v5; // r8d
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v4 = CExternalLayer::RestoreState(this, a2);
  v5 = 0;
  v6 = v4;
  if ( v4 < 0 )
  {
    v8 = 301;
    goto LABEL_18;
  }
  *((_BYTE *)a2 + 6830) = *((_BYTE *)this + 112);
  switch ( *((_DWORD *)this + 29) )
  {
    case 1:
      v5 = 1;
      break;
    case 2:
      v5 = 2;
      break;
    case 3:
      v5 = 6;
      break;
    case 4:
      v5 = 5;
      break;
    case 5:
      v5 = 7;
      break;
  }
  *((_DWORD *)a2 + 63) = v5;
  v4 = CDrawingContext::FlushD2D(a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v8 = 311;
    goto LABEL_18;
  }
  v4 = CTreeEffectLayer::Draw(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v8 = 313;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v8);
  }
  return v6;
}
