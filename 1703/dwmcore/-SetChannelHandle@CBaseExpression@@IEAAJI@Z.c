/*
 * XREFs of ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18002F14C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180032390 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x18012BCA0 (-ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INJECTIONANIMA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseExpression::SetChannelHandle(CBaseExpression *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = *((_DWORD *)this + 40);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 != a2 )
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x240u);
    }
  }
  else
  {
    *((_DWORD *)this + 40) = a2;
  }
  return v3;
}
