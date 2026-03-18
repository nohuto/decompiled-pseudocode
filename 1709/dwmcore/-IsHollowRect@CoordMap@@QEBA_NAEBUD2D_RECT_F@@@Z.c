/*
 * XREFs of ?IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z @ 0x18009F824
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x18009F190 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CoordMap::IsHollowRect(CoordMap *this, const struct D2D_RECT_F *a2)
{
  char v3; // r8
  float v4; // xmm4_4
  float v5; // xmm1_4
  unsigned int v6; // r9d
  float v7; // xmm2_4
  unsigned int v8; // ecx
  float v9; // xmm3_4
  __int64 v11; // rdx
  float *v12; // rax

  v3 = 0;
  v4 = a2->left + 0.00000011920929;
  v5 = a2->top + 0.00000011920929;
  v6 = *((_DWORD *)this + 102);
  v7 = a2->right - 0.00000011920929;
  v8 = 0;
  v9 = a2->bottom - 0.00000011920929;
  if ( v6 )
  {
    v11 = *((_QWORD *)this + 48);
    while ( 1 )
    {
      v12 = (float *)(v11 + 16LL * v8);
      if ( v4 >= *v12 && v5 >= v12[1] && v12[2] >= v7 && v12[3] >= v9 )
        break;
      if ( ++v8 >= v6 )
        return v3;
    }
    return 1;
  }
  return v3;
}
