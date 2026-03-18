/*
 * XREFs of ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18020C728
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18020C008 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x180208654 (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 */

void __fastcall CTrimPathOperation::UpdateCurrentEndPoint(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  int v3; // xmm1_4
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]
  const void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)a2 != 1 )
  {
    Path::Segment::GetControlPoints(a2, &v4);
    if ( !v4 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v3 = *(_DWORD *)(v5 + 8 * v4 - 4);
    *((_DWORD *)this + 9) = *(_DWORD *)(v5 + 8 * v4 - 8);
    *((_DWORD *)this + 10) = v3;
  }
}
