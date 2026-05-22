/*
 * XREFs of ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x180068210
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x180068B60 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetHittestRegion@Edge@@AEAA_NPEBUD2D_VECTOR_2F@@PEAUD2D_RECT_F@@@Z @ 0x180068068 (-GetHittestRegion@Edge@@AEAA_NPEBUD2D_VECTOR_2F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?GetRunState@Edge@@QEBA?AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ @ 0x1800681A8 (-GetRunState@Edge@@QEBA-AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ.c)
 */

char __fastcall Edge::HitTest(Edge *this, int a2, int a3, const struct D2D_VECTOR_2F *a4)
{
  int RunState; // eax
  Edge *v8; // rcx
  char v9; // r11
  D2D_RECT_F v11; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v11.left = 0LL;
  *(_QWORD *)&v11.right = 0LL;
  RunState = Edge::GetRunState((__int64)this);
  v9 = 0;
  if ( RunState
    && Edge::GetHittestRegion(v8, a4, &v11)
    && (float)a2 >= v11.left
    && v11.right >= (float)a2
    && (float)a3 >= v11.top
    && v11.bottom >= (float)a3 )
  {
    return 1;
  }
  return v9;
}
