/*
 * XREFs of ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x180133504
 * Callers:
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x18015DFC4 (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::Line2d::SetDirection(Mesh::Line2d *this, const struct D2D_VECTOR_2F *a2)
{
  float v2; // xmm1_4
  float v3; // xmm1_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2->x) & _xmm);
  if ( v2 >= 0.0000011920929 )
  {
    v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2->y) & _xmm);
    if ( v3 >= 0.0000011920929 )
    {
      *((_WORD *)this + 8) = 0;
      *((struct D2D_VECTOR_2F *)this + 1) = *a2;
    }
    else
    {
      *((_DWORD *)this + 3) = 0;
      *((_WORD *)this + 8) = 256;
      *((_DWORD *)this + 2) = 1065353216;
    }
  }
  else
  {
    *((_DWORD *)this + 2) = 0;
    *((_WORD *)this + 8) = 1;
    *((_DWORD *)this + 3) = 1065353216;
  }
}
