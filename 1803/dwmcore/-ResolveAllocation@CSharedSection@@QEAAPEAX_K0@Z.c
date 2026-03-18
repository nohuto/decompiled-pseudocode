/*
 * XREFs of ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x18002BC88
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180037340 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18003EB04 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180097C88 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18018F548 (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z.c)
 *     ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x180190BF4 (-ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INJECTIONANIMA.c)
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x180197A20 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SE.c)
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x18019DE48 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
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
