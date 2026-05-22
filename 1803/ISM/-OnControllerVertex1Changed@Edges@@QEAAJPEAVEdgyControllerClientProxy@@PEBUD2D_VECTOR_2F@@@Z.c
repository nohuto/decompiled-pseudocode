/*
 * XREFs of ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x180068864
 * Callers:
 *     ?OnVertex1Changed@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800666A0 (-OnVertex1Changed@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x180067350 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 * Callees:
 *     ?FindEdge@Edges@@AEAAHPEBG@Z @ 0x1800688D4 (-FindEdge@Edges@@AEAAHPEBG@Z.c)
 */

__int64 __fastcall Edges::OnControllerVertex1Changed(
        Edges *this,
        struct EdgyControllerClientProxy *a2,
        const struct D2D_VECTOR_2F *a3)
{
  char *v3; // rdx
  unsigned int v6; // ebx
  int Edge; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax

  v3 = (char *)a2 + 80;
  v6 = -2147024809;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(char **)v3;
  Edge = Edges::FindEdge(this, (const unsigned __int16 *)v3);
  if ( Edge >= 0 )
  {
    v8 = 96LL * Edge;
    *(struct D2D_VECTOR_2F *)(v8 + *(_QWORD *)this + 84) = *a3;
    v9 = *(_DWORD *)(v8 + *(_QWORD *)this + 72);
    if ( v9 < 2 )
      *(_DWORD *)(v8 + *(_QWORD *)this + 72) = v9 + 1;
    return 0;
  }
  return v6;
}
