/*
 * XREFs of ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800B0850
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800B1C50 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x1800B2340 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV-$S.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800B2DA4 (-GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ.c)
 *     ?IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z @ 0x18017DDD4 (-IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z.c)
 */

__int64 __fastcall Mesh::GenerateTriangles(Mesh *this, unsigned __int16 *a2, int a3, int *a4)
{
  __int64 v4; // rax
  int v5; // r14d
  int v6; // r8d
  int *v7; // r10
  Mesh *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // r8
  struct Mesh::MeshVertex *Next; // r13
  bool v17; // zf
  int v18; // esi
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // r10
  __int64 *v22; // r9
  unsigned __int16 *v23; // r15
  char v24; // cl
  __int64 v25; // r8
  struct Mesh::MeshEdge *v26; // rdx
  __int64 v27; // rax
  struct Mesh::MeshEdge *i; // r8
  unsigned __int16 *v29; // rdi
  char v30; // cl
  __int64 v31; // rcx
  __int64 *v32; // r11
  __int64 v33; // rax
  __int64 *k; // rdx
  _QWORD *v35; // rax
  __int64 v36; // r14
  __int64 *v37; // r8
  __int64 v38; // rcx
  int v39; // edx
  __int64 v40; // r14
  unsigned __int16 v41; // ax
  char v42; // cl
  __int64 v43; // rdx
  __int64 *v44; // rdx
  struct Mesh::MeshEdge *j; // r8
  __int64 *m; // rdx
  _QWORD *v47; // rax
  float v48; // xmm1_4
  struct Mesh::MeshEdge **v49; // rdi
  int v50; // esi
  struct Mesh::MeshVertex *v51; // rcx
  __int64 v52; // rax
  float v53; // xmm0_4
  _QWORD **v54; // r11
  _QWORD *v55; // rax
  __int64 *v56; // rdx
  _QWORD **v57; // r11
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 *v60; // r9
  __int64 v61; // rsi
  __int64 *v62; // r9
  __int64 v63; // rax
  __int64 *v64; // r9
  _QWORD **v65; // r11
  _QWORD *v66; // rax
  __int64 *v67; // r9
  _QWORD **v68; // r11
  _QWORD *v69; // rax
  __int64 v70; // rcx
  __int64 *v71; // r11
  __int64 v72; // rsi
  __int64 *v73; // r11
  int v74; // [rsp+30h] [rbp-A8h]
  int v75; // [rsp+34h] [rbp-A4h]
  int v76; // [rsp+38h] [rbp-A0h]
  __int64 v77; // [rsp+40h] [rbp-98h]
  _BYTE v78[8]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v79; // [rsp+58h] [rbp-80h]
  struct Mesh::MeshEdge *v80; // [rsp+60h] [rbp-78h]
  struct Mesh::MeshEdge *v81; // [rsp+68h] [rbp-70h] BYREF
  char v82; // [rsp+70h] [rbp-68h]
  __int64 *v83; // [rsp+78h] [rbp-60h]
  struct Mesh::MeshEdge *v84; // [rsp+80h] [rbp-58h]
  __int64 *v85; // [rsp+88h] [rbp-50h]

  v4 = *((_QWORD *)this + 22);
  v5 = 0;
  v6 = 0;
  v75 = 0;
  v7 = a4;
  v76 = 0;
  v8 = this;
  if ( *(int *)(v4 + 56) <= 0 )
    goto LABEL_9;
  v9 = 0LL;
  v77 = 0LL;
LABEL_3:
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 88 * v9 + 48);
  if ( !v10 )
    goto LABEL_7;
LABEL_4:
  if ( (*(_DWORD *)(v10 + 16) & 0x100) == 0 )
    goto LABEL_5;
  v12 = *(__int64 **)(v10 + 80);
  v13 = **(_QWORD **)(v10 + 64);
  v14 = *(_QWORD **)(v13 + 32);
  v15 = (_QWORD *)v14[8];
  if ( v15 )
  {
    if ( v13 == *v14 && *v15 == *(_QWORD *)v10 )
      goto LABEL_5;
  }
  if ( v13 == *(_QWORD *)v12[8] )
    goto LABEL_5;
  Next = 0LL;
  v78[0] = 0;
  v17 = (*((_BYTE *)v8 + 236) & 8) == 0;
  v79 = v10;
  v80 = 0LL;
  v81 = (struct Mesh::MeshEdge *)v10;
  v82 = 1;
  v83 = v12;
  v84 = 0LL;
  v85 = v12;
  if ( v17 )
  {
    v81 = (struct Mesh::MeshEdge *)v10;
    Next = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)v78);
  }
  else
  {
    v48 = 0.0;
    v49 = &v81;
    v50 = 0;
    while ( 1 )
    {
      *v49 = *(v49 - 2);
      if ( v50 == 1 )
        *(v49 - 1) = v80;
      v51 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v78[32 * v50]);
      if ( v51 )
        break;
LABEL_95:
      if ( v48 != 1.0 )
      {
        ++v50;
        v49 += 4;
        if ( v50 < 2 )
          continue;
      }
      goto LABEL_16;
    }
    while ( 1 )
    {
      v52 = *((_QWORD *)v51 + 1);
      v53 = *(float *)(v52 + 20);
      if ( !Next || v53 > v48 )
      {
        Next = v51;
        v48 = *(float *)(v52 + 20);
        if ( v53 == 1.0 )
          break;
      }
      v51 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v78[32 * v50]);
      if ( !v51 )
        goto LABEL_95;
    }
  }
LABEL_16:
  if ( *(_BYTE *)(*((_QWORD *)Next + 1) + 24LL) )
    goto LABEL_65;
  v18 = 0;
  v19 = v5;
  v74 = 0;
  v20 = 0LL;
  while ( 1 )
  {
    v21 = 32 * v20;
    v22 = (__int64 *)*(&v79 + 4 * v20);
    *(&v81 + 4 * v20) = (struct Mesh::MeshEdge *)v22;
    if ( v20 == 1 )
    {
      v84 = v80;
      v22 = v85;
    }
    v23 = 0LL;
    if ( v22 )
    {
      v24 = v78[32 * v20];
      if ( (struct Mesh::MeshEdge *)*v22 == *(&v80 + 4 * v20) )
      {
        if ( v24 )
          v23 = (unsigned __int16 *)v22[3];
        else
          v23 = (unsigned __int16 *)v22[5];
      }
      else if ( v24 )
      {
        v23 = (unsigned __int16 *)v22[4];
      }
      else
      {
        v23 = (unsigned __int16 *)v22[6];
      }
      v25 = (__int64)*(&v80 + 4 * v20);
      if ( *v22 == v25 )
      {
        *(&v81 + 4 * v20) = 0LL;
        v22 = 0LL;
      }
      else
      {
        v26 = (struct Mesh::MeshEdge *)v22[8];
        if ( v26 )
        {
          if ( v25 )
          {
            v27 = *(_QWORD *)v26;
            if ( *(_QWORD *)v26 != v25 )
              goto LABEL_182;
          }
          if ( v78[32 * v20] )
          {
            v56 = (__int64 *)v22[10];
            if ( v56 )
            {
              v57 = (_QWORD **)(v22 + 8);
              do
              {
                v58 = (_QWORD *)v56[8];
                if ( !v58 )
                  break;
                if ( **v57 != *v58 )
                  break;
                v22 = v56;
                v56 = (__int64 *)v56[10];
              }
              while ( v56 );
            }
          }
          else
          {
            v44 = (__int64 *)v22[9];
            if ( v44 )
            {
              v54 = (_QWORD **)(v22 + 8);
              do
              {
                v55 = (_QWORD *)v44[8];
                if ( !v55 )
                  break;
                if ( **v54 != *v55 )
                  break;
                v22 = v44;
                v44 = (__int64 *)v44[9];
              }
              while ( v44 );
            }
          }
          v26 = (struct Mesh::MeshEdge *)v22[8];
          v22 = (__int64 *)*(&v81 + 4 * v20);
          v27 = *(_QWORD *)v26;
          if ( *(_QWORD *)v26 != v25 )
          {
LABEL_182:
            if ( v78[32 * v20] )
            {
              if ( v25 || !*((_QWORD *)v26 + 10) )
              {
                v26 = *(struct Mesh::MeshEdge **)(v27 + 24);
                for ( i = (struct Mesh::MeshEdge *)v22[8]; v26 != i; v26 = (struct Mesh::MeshEdge *)*((_QWORD *)v26 + 10) )
                {
                  if ( **((_QWORD **)v26 + 8) != *v22 )
                    break;
                  if ( *(_QWORD *)i != *(_QWORD *)v26 )
                    break;
                }
              }
              else
              {
                *(&v80 + 4 * v20) = (struct Mesh::MeshEdge *)v27;
              }
            }
            else if ( !v25 && *((_QWORD *)v26 + 9) )
            {
              *(&v80 + 4 * v20) = (struct Mesh::MeshEdge *)v27;
            }
            else
            {
              v26 = *(struct Mesh::MeshEdge **)(v27 + 32);
              for ( j = (struct Mesh::MeshEdge *)v22[8]; v26 != j; v26 = (struct Mesh::MeshEdge *)*((_QWORD *)v26 + 9) )
              {
                if ( *(_QWORD *)j != *(_QWORD *)v26 )
                  break;
                if ( **((_QWORD **)v26 + 8) != *v22 )
                  break;
              }
            }
          }
          *(&v81 + 4 * v20) = v26;
          v22 = (__int64 *)v26;
        }
        else
        {
          *(&v80 + 4 * v20) = (struct Mesh::MeshEdge *)*v22;
          v22 = 0LL;
          *(&v81 + 4 * v20) = 0LL;
        }
      }
    }
    v29 = 0LL;
    if ( v22 )
    {
      v30 = v78[32 * v20];
      if ( (struct Mesh::MeshEdge *)*v22 == *(&v80 + 4 * v20) )
      {
        if ( v30 )
          v29 = (unsigned __int16 *)v22[3];
        else
          v29 = (unsigned __int16 *)v22[5];
      }
      else if ( v30 )
      {
        v29 = (unsigned __int16 *)v22[4];
      }
      else
      {
        v29 = (unsigned __int16 *)v22[6];
      }
      v31 = (__int64)*(&v80 + 4 * v20);
      if ( *v22 == v31 )
      {
        *(&v81 + 4 * v20) = 0LL;
        v22 = 0LL;
      }
      else
      {
        v32 = (__int64 *)v22[8];
        if ( v32 )
        {
          if ( v31 )
          {
            v33 = *v32;
            if ( *v32 != v31 )
              goto LABEL_183;
          }
          if ( v78[32 * v20] )
          {
            for ( k = (__int64 *)v22[10]; k; k = (__int64 *)k[10] )
            {
              v35 = (_QWORD *)k[8];
              if ( !v35 )
                break;
              if ( *v32 != *v35 )
                break;
              v22 = k;
            }
          }
          else
          {
            for ( m = (__int64 *)v22[9]; m; m = (__int64 *)m[9] )
            {
              v47 = (_QWORD *)m[8];
              if ( !v47 )
                break;
              if ( *v32 != *v47 )
                break;
              v22 = m;
            }
          }
          v32 = (__int64 *)v22[8];
          v33 = *v32;
          if ( *v32 != v31 )
          {
LABEL_183:
            if ( v78[32 * v20] )
            {
              if ( v31 || !v32[10] )
              {
                v61 = (__int64)*(&v81 + 4 * v20);
                v32 = *(__int64 **)(v33 + 24);
                if ( v32 != *(__int64 **)(v61 + 64) )
                {
                  do
                  {
                    if ( !Mesh::PolygonPathIterator::IsCycle(
                            (const struct Mesh::MeshEdge *)v32,
                            (const struct Mesh::MeshEdge *)v61) )
                      break;
                    v32 = (__int64 *)v32[10];
                  }
                  while ( v32 != v62 );
                }
                v18 = v74;
              }
              else
              {
                *(&v80 + 4 * v20) = (struct Mesh::MeshEdge *)v33;
              }
            }
            else if ( v31 || !v32[9] )
            {
              v59 = (__int64)*(&v81 + 4 * v20);
              v32 = *(__int64 **)(v33 + 32);
              if ( v32 != *(__int64 **)(v59 + 64) )
              {
                do
                {
                  if ( !Mesh::PolygonPathIterator::IsCycle(
                          (const struct Mesh::MeshEdge *)v59,
                          (const struct Mesh::MeshEdge *)v32) )
                    break;
                  v32 = (__int64 *)v32[9];
                }
                while ( v32 != v60 );
              }
            }
            else
            {
              *(&v80 + 4 * v20) = (struct Mesh::MeshEdge *)v33;
            }
          }
          *(struct Mesh::MeshEdge **)((char *)&v81 + v21) = (struct Mesh::MeshEdge *)v32;
          v22 = v32;
        }
        else
        {
          *(&v80 + 4 * v20) = (struct Mesh::MeshEdge *)*v22;
          v22 = 0LL;
          *(&v81 + 4 * v20) = 0LL;
        }
      }
    }
    if ( v29 )
      break;
LABEL_63:
    ++v18;
    ++v20;
    v74 = v18;
    if ( v20 >= 2 )
    {
      v5 = v75;
LABEL_65:
      v8 = this;
LABEL_5:
      v10 = *(_QWORD *)(v10 + 64);
      if ( v10 )
        goto LABEL_4;
      v9 = v77;
      v6 = v76;
LABEL_7:
      v4 = *((_QWORD *)v8 + 22);
      ++v6;
      ++v9;
      v76 = v6;
      v77 = v9;
      if ( v6 >= *(_DWORD *)(v4 + 56) )
      {
        v7 = a4;
LABEL_9:
        *v7 = v5;
        return 0LL;
      }
      goto LABEL_3;
    }
  }
  v36 = 2 * v19;
  while ( 1 )
  {
    v37 = v22;
    if ( v23 != (unsigned __int16 *)Next && v29 != (unsigned __int16 *)Next )
      break;
LABEL_54:
    v23 = v29;
    v29 = 0LL;
    if ( v22 )
    {
      v42 = v78[v21];
      if ( (struct Mesh::MeshEdge *)*v22 == *(struct Mesh::MeshEdge **)((char *)&v80 + v21) )
      {
        if ( v42 )
          v29 = (unsigned __int16 *)v22[3];
        else
          v29 = (unsigned __int16 *)v22[5];
      }
      else if ( v42 )
      {
        v29 = (unsigned __int16 *)v22[4];
      }
      else
      {
        v29 = (unsigned __int16 *)v22[6];
      }
    }
    if ( v22 )
    {
      v43 = *(__int64 *)((char *)&v80 + v21);
      if ( *v22 == v43 )
      {
        *(struct Mesh::MeshEdge **)((char *)&v81 + v21) = 0LL;
        v22 = 0LL;
      }
      else
      {
        v22 = (__int64 *)v22[8];
        if ( v22 )
        {
          if ( v43 )
          {
            v63 = *v22;
            if ( *v22 != v43 )
              goto LABEL_184;
          }
          if ( v78[v21] )
          {
            v67 = (__int64 *)v37[10];
            if ( v67 )
            {
              v68 = (_QWORD **)(v37 + 8);
              do
              {
                v69 = (_QWORD *)v67[8];
                if ( !v69 )
                  break;
                if ( **v68 != *v69 )
                  break;
                v37 = v67;
                v67 = (__int64 *)v67[10];
              }
              while ( v67 );
            }
          }
          else
          {
            v64 = (__int64 *)v37[9];
            if ( v64 )
            {
              v65 = (_QWORD **)(v37 + 8);
              do
              {
                v66 = (_QWORD *)v64[8];
                if ( !v66 )
                  break;
                if ( **v65 != *v66 )
                  break;
                v37 = v64;
                v64 = (__int64 *)v64[9];
              }
              while ( v64 );
            }
          }
          v22 = (__int64 *)v37[8];
          v63 = *v22;
          if ( *v22 != v43 )
          {
LABEL_184:
            if ( v78[v21] )
            {
              if ( v43 || !v22[10] )
              {
                v72 = *(__int64 *)((char *)&v81 + v21);
                v22 = *(__int64 **)(v63 + 24);
                if ( v22 != *(__int64 **)(v72 + 64) )
                {
                  do
                  {
                    if ( !Mesh::PolygonPathIterator::IsCycle(
                            (const struct Mesh::MeshEdge *)v22,
                            (const struct Mesh::MeshEdge *)v72) )
                      break;
                    v22 = (__int64 *)v22[10];
                  }
                  while ( v22 != v73 );
                }
              }
              else
              {
                *(struct Mesh::MeshEdge **)((char *)&v80 + v21) = (struct Mesh::MeshEdge *)v63;
              }
            }
            else if ( v43 || !v22[9] )
            {
              v70 = *(__int64 *)((char *)&v81 + v21);
              v22 = *(__int64 **)(v63 + 32);
              if ( v22 != *(__int64 **)(v70 + 64) )
              {
                do
                {
                  if ( !Mesh::PolygonPathIterator::IsCycle(
                          (const struct Mesh::MeshEdge *)v70,
                          (const struct Mesh::MeshEdge *)v22) )
                    break;
                  v22 = (__int64 *)v22[9];
                }
                while ( v22 != v71 );
              }
            }
            else
            {
              *(struct Mesh::MeshEdge **)((char *)&v80 + v21) = (struct Mesh::MeshEdge *)v63;
            }
          }
          *(struct Mesh::MeshEdge **)((char *)&v81 + v21) = (struct Mesh::MeshEdge *)v22;
        }
        else
        {
          *(struct Mesh::MeshEdge **)((char *)&v80 + v21) = (struct Mesh::MeshEdge *)*v37;
          *(struct Mesh::MeshEdge **)((char *)&v81 + v21) = 0LL;
        }
      }
    }
    if ( !v29 )
    {
      v18 = v74;
      goto LABEL_63;
    }
  }
  if ( v19 < a3 )
  {
    v38 = v36 + 2;
    v39 = v75 + 3;
    v19 += 3LL;
    v17 = v78[v21] == 0;
    v75 += 3;
    *(unsigned __int16 *)((char *)a2 + v36) = *(_WORD *)Next;
    v40 = v36 + 4;
    if ( v17 )
    {
      *(unsigned __int16 *)((char *)a2 + v38) = *v23;
      v41 = *v29;
    }
    else
    {
      *(unsigned __int16 *)((char *)a2 + v38) = *v29;
      v41 = *v23;
      v75 = v39;
    }
    *(unsigned __int16 *)((char *)a2 + v40) = v41;
    v36 = v40 + 2;
    goto LABEL_54;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC1Bu);
  return 2147942414LL;
}
