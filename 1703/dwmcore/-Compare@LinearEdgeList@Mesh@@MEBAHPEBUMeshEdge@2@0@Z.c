/*
 * XREFs of ?Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x18015DF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::LinearEdgeList::Compare(
        Mesh::LinearEdgeList *this,
        float ***a2,
        const struct Mesh::MeshEdge *a3)
{
  float *v3; // r8
  float *v4; // rcx
  float **v5; // rax
  float v6; // xmm2_4
  float v7; // xmm3_4
  float *v8; // rdx
  __int64 result; // rax
  float v10; // xmm1_4
  float *v11; // [rsp+10h] [rbp+10h]

  v3 = *(float **)(*(_QWORD *)a3 + 8LL);
  v4 = (*a2)[1];
  v5 = a2[1];
  v6 = *v4 - *v3;
  v7 = v4[1] - v3[1];
  v8 = *v5;
  v11 = v5[2];
  if ( (*v5)[2] >= (float)((float)(v7 * v7) + (float)(v6 * v6)) )
    return 0LL;
  result = 1LL;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( *v8 <= v10 )
  {
    if ( v6 < 0.0 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    if ( v7 < 0.0 )
      result = 0xFFFFFFFFLL;
    if ( *((float *)&v11 + 1) < 0.0 )
      return (unsigned int)-(int)result;
  }
  return result;
}
