/*
 * XREFs of ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x18003B8AC
 * Callers:
 *     ?LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z @ 0x18003BB10 (-LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x18003D250 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV-$S.c)
 * Callees:
 *     ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x18003DA68 (-GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z @ 0x18015E6A8 (-IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z.c)
 */

__int64 __fastcall Mesh::GenerateTriangles(Mesh *this, unsigned __int16 *a2, int a3, int *a4)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // edx
  Mesh *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  bool v15; // zf
  struct Mesh::MeshVertex *Next; // r12
  int v17; // r13d
  __int64 v18; // r14
  _BYTE *v19; // rsi
  unsigned __int16 *v20; // r11
  unsigned __int16 *v21; // rdx
  unsigned __int16 v22; // ax
  __int64 v23; // r10
  __int64 v24; // r8
  float v25; // xmm1_4
  __int64 *v26; // rbx
  int i; // esi
  __int64 v28; // rax
  float v29; // xmm0_4
  struct Mesh::MeshVertex *v30; // rax
  struct Mesh::MeshVertex *v31; // rcx
  const struct Mesh::MeshEdge *v32; // rbx
  const struct Mesh::MeshEdge *m; // r9
  __int64 v34; // r9
  __int64 k; // rdx
  _QWORD *v36; // rax
  __int64 j; // rdx
  _QWORD *v38; // rax
  __int64 v39; // rax
  int v40; // [rsp+38h] [rbp-49h]
  int v41; // [rsp+3Ch] [rbp-45h]
  struct Mesh::MeshVertex *v42; // [rsp+40h] [rbp-41h]
  unsigned __int16 *v43; // [rsp+40h] [rbp-41h]
  __int64 v44; // [rsp+48h] [rbp-39h]
  _BYTE v45[8]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v46; // [rsp+60h] [rbp-21h]
  __int64 v47; // [rsp+68h] [rbp-19h]
  __int64 v48; // [rsp+70h] [rbp-11h] BYREF
  char v49; // [rsp+78h] [rbp-9h]
  __int64 v50; // [rsp+80h] [rbp-1h]
  __int64 v51; // [rsp+88h] [rbp+7h]
  __int64 v52; // [rsp+90h] [rbp+Fh]

  v4 = *((_QWORD *)this + 22);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = this;
  v40 = 0;
  v41 = 0;
  if ( *(int *)(v4 + 56) > 0 )
  {
    v9 = 0LL;
    v44 = 0LL;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 88 * v9 + 48);
      if ( v10 )
      {
        do
        {
          if ( (*(_DWORD *)(v10 + 16) & 0x100) != 0 )
          {
            v12 = *(_QWORD *)(v10 + 64);
            v13 = *(_QWORD *)(v10 + 80);
            v14 = *(_QWORD **)(*(_QWORD *)v12 + 32LL);
            if ( (!v14[8] || *(_QWORD *)v12 != *v14 || *(_QWORD *)v14[8] != *(_QWORD *)v10)
              && *(_QWORD *)v12 != **(_QWORD **)(v13 + 64) )
            {
              v15 = (*((_BYTE *)v8 + 236) & 8) == 0;
              Next = 0LL;
              v45[0] = 0;
              v46 = v10;
              v47 = 0LL;
              v48 = v10;
              v49 = 1;
              v50 = v13;
              v51 = 0LL;
              v52 = v13;
              if ( v15 )
              {
                v48 = v10;
                Next = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)v45);
              }
              else
              {
                v25 = 0.0;
                v26 = &v48;
                for ( i = 0; i < 2; ++i )
                {
                  *v26 = *(v26 - 2);
                  if ( i == 1 )
                    *(v26 - 1) = v47;
                  while ( 1 )
                  {
                    v30 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v45[32 * i]);
                    v31 = v30;
                    if ( !v30 )
                      break;
                    v28 = *((_QWORD *)v30 + 1);
                    v29 = *(float *)(v28 + 20);
                    if ( !Next || v29 > v25 )
                    {
                      Next = v31;
                      v25 = *(float *)(v28 + 20);
                      if ( v29 == 1.0 )
                        goto LABEL_49;
                    }
                  }
                  if ( v25 == 1.0 )
                    break;
                  v26 += 4;
                }
LABEL_49:
                v6 = v40;
              }
              if ( !*(_BYTE *)(*((_QWORD *)Next + 1) + 24LL) )
              {
                v17 = 0;
                v18 = v6;
                v19 = v45;
                while ( 1 )
                {
                  *((_QWORD *)v19 + 3) = *((_QWORD *)v19 + 1);
                  if ( v17 == 1 )
                    *((_QWORD *)v19 + 2) = v47;
                  v42 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v45[32 * v17]);
                  v20 = (unsigned __int16 *)Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v45[32 * v17]);
                  if ( v20 )
                    break;
LABEL_35:
                  ++v17;
                  v19 += 32;
                  if ( v17 >= 2 )
                    goto LABEL_36;
                }
                v21 = (unsigned __int16 *)v42;
                while ( 2 )
                {
                  if ( v21 != (unsigned __int16 *)Next && v20 != (unsigned __int16 *)Next )
                  {
                    if ( v18 >= a3 )
                    {
                      v5 = -2147024882;
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC68u);
                      return v5;
                    }
                    v40 += 3;
                    a2[v18] = *(_WORD *)Next;
                    if ( *v19 )
                    {
                      a2[v18 + 1] = *v20;
                      v22 = *v21;
                    }
                    else
                    {
                      a2[v18 + 1] = *v21;
                      v22 = *v20;
                    }
                    a2[v18 + 2] = v22;
                    v18 += 3LL;
                  }
                  v23 = *((_QWORD *)v19 + 3);
                  v21 = v20;
                  v43 = v20;
                  v20 = 0LL;
                  if ( v23 )
                  {
                    if ( *(_QWORD *)v23 == *((_QWORD *)v19 + 2) )
                    {
                      if ( *v19 )
                        v20 = *(unsigned __int16 **)(v23 + 24);
                      else
                        v20 = *(unsigned __int16 **)(v23 + 40);
                    }
                    else if ( *v19 )
                    {
                      v20 = *(unsigned __int16 **)(v23 + 32);
                    }
                    else
                    {
                      v20 = *(unsigned __int16 **)(v23 + 48);
                    }
                    v24 = *((_QWORD *)v19 + 2);
                    if ( *(_QWORD *)v23 == v24 )
                    {
LABEL_33:
                      *((_QWORD *)v19 + 3) = 0LL;
                      goto LABEL_34;
                    }
                    v32 = *(const struct Mesh::MeshEdge **)(v23 + 64);
                    if ( !v32 )
                    {
                      *((_QWORD *)v19 + 2) = *(_QWORD *)v23;
                      goto LABEL_33;
                    }
                    m = *(const struct Mesh::MeshEdge **)(v23 + 64);
                    if ( !v24 || *(_QWORD *)v32 == v24 )
                    {
                      v34 = *((_QWORD *)v19 + 3);
                      if ( *v19 )
                      {
                        for ( j = *(_QWORD *)(v23 + 80); j; j = *(_QWORD *)(j + 80) )
                        {
                          v38 = *(_QWORD **)(j + 64);
                          if ( !v38 || *(_QWORD *)v32 != *v38 )
                            break;
                          v34 = j;
                        }
                      }
                      else
                      {
                        for ( k = *(_QWORD *)(v23 + 72); k; k = *(_QWORD *)(k + 72) )
                        {
                          v36 = *(_QWORD **)(k + 64);
                          if ( !v36 || *(_QWORD *)v32 != *v36 )
                            break;
                          v34 = k;
                        }
                      }
                      m = *(const struct Mesh::MeshEdge **)(v34 + 64);
                    }
                    v39 = *(_QWORD *)m;
                    if ( *(_QWORD *)m != v24 )
                    {
                      if ( !*v19 )
                      {
                        if ( v24 || !*((_QWORD *)m + 9) )
                        {
                          for ( m = *(const struct Mesh::MeshEdge **)(v39 + 32);
                                m != v32 && Mesh::PolygonPathIterator::IsCycle((const struct Mesh::MeshEdge *)v23, m);
                                m = (const struct Mesh::MeshEdge *)*((_QWORD *)m + 9) )
                          {
                            ;
                          }
                          goto LABEL_86;
                        }
LABEL_81:
                        *((_QWORD *)v19 + 2) = v39;
                        goto LABEL_86;
                      }
                      if ( !v24 && *((_QWORD *)m + 10) )
                        goto LABEL_81;
                      for ( m = *(const struct Mesh::MeshEdge **)(v39 + 24);
                            m != v32 && Mesh::PolygonPathIterator::IsCycle(m, (const struct Mesh::MeshEdge *)v23);
                            m = (const struct Mesh::MeshEdge *)*((_QWORD *)m + 10) )
                      {
                        ;
                      }
                    }
LABEL_86:
                    v21 = v43;
                    *((_QWORD *)v19 + 3) = m;
                  }
LABEL_34:
                  if ( !v20 )
                    goto LABEL_35;
                  continue;
                }
              }
LABEL_36:
              v8 = this;
            }
          }
          v10 = *(_QWORD *)(v10 + 64);
          v6 = v40;
        }
        while ( v10 );
        v7 = v41;
      }
      ++v7;
      v4 = *((_QWORD *)v8 + 22);
      v9 = v44 + 1;
      v41 = v7;
      ++v44;
    }
    while ( v7 < *(_DWORD *)(v4 + 56) );
  }
  *a4 = v6;
  return v5;
}
