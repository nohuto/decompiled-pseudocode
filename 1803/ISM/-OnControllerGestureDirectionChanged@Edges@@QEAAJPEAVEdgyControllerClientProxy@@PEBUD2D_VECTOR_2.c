/*
 * XREFs of ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800686C0
 * Callers:
 *     ?OnGestureDirectionChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x180066540 (-OnGestureDirectionChanged@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x180067350 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 * Callees:
 *     ?FindEdge@Edges@@AEAAHPEBG@Z @ 0x1800688D4 (-FindEdge@Edges@@AEAAHPEBG@Z.c)
 */

__int64 __fastcall Edges::OnControllerGestureDirectionChanged(
        Edges *this,
        struct EdgyControllerClientProxy *a2,
        const struct D2D_VECTOR_2F *a3)
{
  char *v3; // rdx
  unsigned int v6; // ebx
  int Edge; // eax

  v3 = (char *)a2 + 80;
  v6 = -2147024809;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(char **)v3;
  Edge = Edges::FindEdge(this, (const unsigned __int16 *)v3);
  if ( Edge >= 0 )
  {
    v6 = 0;
    *(struct D2D_VECTOR_2F *)(96LL * Edge + *(_QWORD *)this + 56) = *a3;
  }
  return v6;
}
