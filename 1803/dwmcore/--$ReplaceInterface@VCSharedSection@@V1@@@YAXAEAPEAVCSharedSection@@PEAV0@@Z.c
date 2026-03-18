/*
 * XREFs of ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800C39B4
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18003EB04 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall ReplaceInterface<CSharedSection,CSharedSection>(CMILCOMBase **a1, CMILCOMBase *a2)
{
  CMILCOMBase *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CMILCOMBase::InternalRelease(v4);
  *a1 = a2;
  if ( a2 )
    return CMILCOMBase::InternalAddRef(a2);
  return result;
}
