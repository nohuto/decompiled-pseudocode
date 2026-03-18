/*
 * XREFs of OffsetBaseVertices @ 0x1800BF6C4
 * Callers:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x18003B030 (-GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 * Callees:
 *     <none>
 */

void __fastcall OffsetBaseVertices(char a1, char a2, char a3, __int64 a4, __int64 a5, int a6)
{
  float v9; // xmm1_4
  unsigned __int64 v10; // r10
  unsigned __int64 i; // r9
  float *v12; // rdx
  float *v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // r8
  float *v16; // rax
  signed __int64 v17; // rcx
  float v18; // xmm0_4
  __int64 v19; // r8
  float *v20; // rax
  signed __int64 v21; // rcx

  if ( a2 )
    v9 = FLOAT_0_5;
  else
    v9 = FLOAT_N0_5;
  v10 = *(unsigned int *)(a4 + 12);
  for ( i = 0LL; i < v10; ++i )
  {
    v12 = (float *)(*(_QWORD *)a4 + (int)i * *(_DWORD *)(a4 + 8));
    v13 = (float *)(*(_QWORD *)a5 + (int)i * *(_DWORD *)(a5 + 8));
    if ( a1 )
    {
      *v12 = v9 + *v13;
      if ( v12[1] == v13[1] )
        v18 = FLOAT_0_5;
      else
        v18 = FLOAT_0_70710677;
      v13[2] = v18;
      if ( !a3 )
      {
        v19 = a6;
        if ( a6 )
        {
          v20 = v12 + 4;
          v21 = (char *)v13 - (char *)v12;
          do
          {
            *v20 = v9 + *(float *)((char *)v20 + v21);
            v20 += 2;
            --v19;
          }
          while ( v19 );
        }
      }
    }
    else
    {
      v12[1] = v9 + v13[1];
      if ( *v12 == *v13 )
        v14 = FLOAT_0_5;
      else
        v14 = FLOAT_0_70710677;
      v13[2] = v14;
      if ( !a3 )
      {
        v15 = a6;
        if ( a6 )
        {
          v16 = v12 + 5;
          v17 = (char *)v13 - (char *)v12;
          do
          {
            *v16 = v9 + *(float *)((char *)v16 + v17);
            v16 += 2;
            --v15;
          }
          while ( v15 );
        }
      }
    }
  }
}
