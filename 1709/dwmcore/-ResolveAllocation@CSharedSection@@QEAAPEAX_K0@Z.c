/*
 * XREFs of ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x180084B60
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180084658 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A3410 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800A83FC (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x1801682C4 (-ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INJECTIONANIMA.c)
 * Callees:
 *     <none>
 */

void *__fastcall CSharedSection::ResolveAllocation(CSharedSection *this, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax

  v3 = *((unsigned int *)this + 16);
  if ( a2 < v3 && a3 <= v3 - a2 && (v4 = *((_QWORD *)this + 9)) != 0 )
    return (void *)(a2 + v4);
  else
    return 0LL;
}
