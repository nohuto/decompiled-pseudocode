/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180031EE8
 * Callers:
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x180031BD4 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@QEAAXXZ @ 0x180031F08 (-RemoveAll@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@A.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x180098850 (--1CPolicyConfig@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@QEAAXXZ @ 0x180031F08 (-RemoveAll@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@A.c)
 */

__int64 __fastcall ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::FreeNode(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::RemoveAll();
  return result;
}
