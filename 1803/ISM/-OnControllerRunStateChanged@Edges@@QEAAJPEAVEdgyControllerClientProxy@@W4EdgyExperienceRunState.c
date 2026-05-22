/*
 * XREFs of ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x180068790
 * Callers:
 *     ?OnRunStateChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800665F0 (-OnRunStateChanged@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x180067350 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 * Callees:
 *     ?FindEdge@Edges@@AEAAHPEBG@Z @ 0x1800688D4 (-FindEdge@Edges@@AEAAHPEBG@Z.c)
 */

__int64 __fastcall Edges::OnControllerRunStateChanged(Edges *a1, __int64 a2, int a3)
{
  const unsigned __int16 *v3; // rdx
  unsigned int v6; // ebx
  int Edge; // eax
  __int64 v8; // rdx

  v3 = (const unsigned __int16 *)(a2 + 80);
  v6 = -2147024809;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(const unsigned __int16 **)v3;
  Edge = Edges::FindEdge(a1, v3);
  if ( Edge >= 0 )
  {
    v8 = 96LL * Edge;
    v6 = 0;
    *(_DWORD *)(v8 + *(_QWORD *)a1 + 48) = a3;
    *(_DWORD *)(v8 + *(_QWORD *)a1 + 52) = a3 != 0;
  }
  return v6;
}
