/*
 * XREFs of ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x1400386F0
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140011F90 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140014C10 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140030D10 (-FreeNode@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = *a1;
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  v2 = *v1;
  v3 = v1[2];
  *a1 = (__int64 *)*v1;
  if ( v2 )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    a1[1] = 0LL;
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::FreeNode((__int64)a1, v1);
  return v3;
}
