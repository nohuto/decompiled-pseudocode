/*
 * XREFs of ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B9A98
 * Callers:
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x18002CC84 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180156044 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ?ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@@@Z @ 0x180158350 (-ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@.c)
 *     ?OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x180175C00 (-OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z @ 0x180175C34 (-ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x1800AAE28 (-RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 */

__int64 __fastcall CBaseAnimation::RegisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  signed int v3; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    v3 = CComposition::RegisterAnimateResource(this[2], (struct IAnimationResource *)(this + 7));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x7Au);
    else
      *((_BYTE *)this + 96) = 1;
  }
  return v1;
}
