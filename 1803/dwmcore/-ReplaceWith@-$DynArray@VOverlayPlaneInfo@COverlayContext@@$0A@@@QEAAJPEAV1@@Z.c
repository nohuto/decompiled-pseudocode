/*
 * XREFs of ?ReplaceWith@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x1801677B8
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x18007A548 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180079770 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 result; // rax

  v4 = *(void **)a1;
  if ( v4 != *(void **)(a1 + 8) )
  {
    operator delete(v4);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  result = DynArrayImpl<0>::DetachData(a2, 0xF8u, (_QWORD *)a1);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  return result;
}
