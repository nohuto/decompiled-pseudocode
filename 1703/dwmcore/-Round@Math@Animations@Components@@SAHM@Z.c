/*
 * XREFs of ?Round@Math@Animations@Components@@SAHM@Z @ 0x180029698
 * Callers:
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1800210DC (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 *     ?ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z @ 0x18002C07C (-ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x18002C9F8 (-ApiSeek@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Math::Round(float a1)
{
  bool v1; // cf
  double v2; // xmm0_8
  double v3; // xmm0_8

  v1 = a1 < 0.0;
  v2 = a1;
  if ( v1 )
    v3 = v2 - 0.5;
  else
    v3 = v2 + 0.5;
  return (unsigned int)(int)v3;
}
