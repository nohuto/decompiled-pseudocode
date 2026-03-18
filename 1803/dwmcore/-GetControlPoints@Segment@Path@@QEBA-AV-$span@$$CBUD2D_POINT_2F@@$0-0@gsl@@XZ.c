/*
 * XREFs of ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x180208654
 * Callers:
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x180208C34 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x180208C58 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18020B914 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18020C728 (-UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall Path::Segment::GetControlPoints(_BYTE *a1, _QWORD *a2)
{
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*a1 )
    goto LABEL_11;
  if ( *a1 != 1 )
  {
    if ( *a1 != 2 && *a1 != 3 )
    {
      if ( *a1 == 4 )
      {
        *a2 = 2LL;
      }
      else
      {
        if ( *a1 != 5 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        *a2 = 3LL;
      }
      goto LABEL_12;
    }
LABEL_11:
    *a2 = 1LL;
LABEL_12:
    a2[1] = a1 + 8;
    return a2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  return a2;
}
