/*
 * XREFs of ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x180065870
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800647B0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x180064ED0 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV-$S.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800B3D24 (-GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ.c)
 *     ?IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z @ 0x180154848 (-IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z.c)
 */

__int64 __fastcall Mesh::GenerateTriangles(Mesh *this, unsigned __int16 *a2, int a3, int *a4)
{
  __int64 v4; // rax
  int v5; // ebp
  int v6; // edx
  int *v7; // r10
  Mesh *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct Mesh::MeshVertex *Next; // r13
  bool v16; // zf
  int v17; // ecx
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // r9
  struct Mesh::MeshEdge *v21; // rax
  unsigned __int16 *v22; // r12
  struct Mesh::MeshEdge **v23; // r10
  struct Mesh::MeshEdge *v24; // rax
  struct Mesh::MeshEdge *v25; // r8
  char v26; // di
  struct Mesh::MeshEdge *v27; // r11
  struct Mesh::MeshEdge *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  unsigned __int16 *v31; // r11
  struct Mesh::MeshEdge *v32; // rax
  struct Mesh::MeshEdge *v33; // rdx
  char v34; // bp
  const struct Mesh::MeshEdge *v35; // rsi
  const struct Mesh::MeshEdge *v36; // r10
  __int64 v37; // r10
  __int64 v38; // r8
  _QWORD *v39; // rax
  __int64 v40; // rax
  unsigned __int16 v41; // ax
  __int64 v42; // r10
  struct Mesh::MeshEdge *v43; // rax
  struct Mesh::MeshEdge *v44; // rdx
  char v45; // r8
  struct Mesh::MeshEdge *v46; // rsi
  struct Mesh::MeshEdge *v47; // rdx
  __int64 v48; // r8
  _QWORD *v49; // rax
  float v50; // xmm1_4
  struct Mesh::MeshEdge **v51; // rdi
  int v52; // esi
  struct Mesh::MeshVertex *v53; // rcx
  __int64 v54; // rax
  float v55; // xmm0_4
  _QWORD *v56; // rax
  struct Mesh::MeshEdge *v57; // rdx
  _QWORD *v58; // rax
  struct Mesh::MeshEdge **v59; // rbp
  const struct Mesh::MeshEdge *k; // rdi
  __int64 v61; // rsi
  __int64 j; // rdi
  struct Mesh::MeshEdge **v63; // rax
  __int64 i; // rdi
  struct Mesh::MeshEdge **v65; // rax
  __int64 v66; // rax
  int v67; // [rsp+30h] [rbp-A8h]
  int v68; // [rsp+34h] [rbp-A4h]
  int v69; // [rsp+38h] [rbp-A0h]
  __int64 v70; // [rsp+40h] [rbp-98h]
  _BYTE v71[8]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v72; // [rsp+58h] [rbp-80h]
  struct Mesh::MeshEdge *v73; // [rsp+60h] [rbp-78h]
  struct Mesh::MeshEdge *v74; // [rsp+68h] [rbp-70h] BYREF
  char v75; // [rsp+70h] [rbp-68h]
  __int64 v76; // [rsp+78h] [rbp-60h]
  struct Mesh::MeshEdge *v77; // [rsp+80h] [rbp-58h]
  __int64 v78; // [rsp+88h] [rbp-50h]

  v4 = *((_QWORD *)this + 22);
  v5 = 0;
  v6 = 0;
  v68 = 0;
  v7 = a4;
  v69 = 0;
  v8 = this;
  if ( *(int *)(v4 + 56) <= 0 )
    goto LABEL_9;
  v9 = 0LL;
  v70 = 0LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(88 * v9 + *(_QWORD *)(v4 + 40) + 48);
    if ( v10 )
      break;
LABEL_7:
    v4 = *((_QWORD *)v8 + 22);
    ++v6;
    ++v9;
    v69 = v6;
    v70 = v9;
    if ( v6 >= *(_DWORD *)(v4 + 56) )
    {
      v7 = a4;
LABEL_9:
      *v7 = v5;
      return 0LL;
    }
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)(v10 + 16) & 0x100) == 0 )
      goto LABEL_5;
    v12 = *(_QWORD *)(v10 + 64);
    v13 = *(_QWORD *)(v10 + 80);
    v14 = *(_QWORD *)(*(_QWORD *)v12 + 32LL);
    if ( *(_QWORD *)(v14 + 64) )
    {
      if ( *(_QWORD *)v12 == *(_QWORD *)v14 && **(_QWORD **)(v14 + 64) == *(_QWORD *)v10 )
        goto LABEL_5;
    }
    if ( *(_QWORD *)v12 == **(_QWORD **)(v13 + 64) )
      goto LABEL_5;
    Next = 0LL;
    v71[0] = 0;
    v16 = (*((_BYTE *)v8 + 236) & 8) == 0;
    v72 = v10;
    v73 = 0LL;
    v74 = (struct Mesh::MeshEdge *)v10;
    v75 = 1;
    v76 = v13;
    v77 = 0LL;
    v78 = v13;
    if ( v16 )
    {
      v74 = (struct Mesh::MeshEdge *)v10;
      Next = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)v71);
    }
    else
    {
      v50 = 0.0;
      v51 = &v74;
      v52 = 0;
      while ( 1 )
      {
        *v51 = *(v51 - 2);
        if ( v52 == 1 )
          *(v51 - 1) = v73;
        v53 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v71[32 * v52]);
        if ( v53 )
          break;
LABEL_96:
        if ( v50 != 1.0 )
        {
          ++v52;
          v51 += 4;
          if ( v52 < 2 )
            continue;
        }
        goto LABEL_98;
      }
      while ( 1 )
      {
        v54 = *((_QWORD *)v53 + 1);
        v55 = *(float *)(v54 + 20);
        if ( !Next || v55 > v50 )
        {
          Next = v53;
          v50 = *(float *)(v54 + 20);
          if ( v55 == 1.0 )
            break;
        }
        v53 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v71[32 * v52]);
        if ( !v53 )
          goto LABEL_96;
      }
LABEL_98:
      v5 = v68;
    }
    if ( !*(_BYTE *)(*((_QWORD *)Next + 1) + 24LL) )
      break;
LABEL_67:
    v8 = this;
LABEL_5:
    v10 = *(_QWORD *)(v10 + 64);
    if ( !v10 )
    {
      v6 = v69;
      v9 = v70;
      goto LABEL_7;
    }
  }
  v17 = 0;
  v18 = v5;
  v67 = 0;
  v19 = 0LL;
  while ( 1 )
  {
    v20 = 32 * v19;
    *(&v74 + 4 * v19) = (struct Mesh::MeshEdge *)*(&v72 + 4 * v19);
    v21 = v77;
    if ( v19 == 1 )
      v21 = v73;
    v22 = 0LL;
    v77 = v21;
    v23 = (struct Mesh::MeshEdge **)*(&v74 + 4 * v19);
    if ( v23 )
    {
      v24 = *v23;
      v25 = *(&v73 + 4 * v19);
      v26 = v71[32 * v19];
      if ( *v23 == v25 )
      {
        if ( v26 )
          v22 = (unsigned __int16 *)v23[3];
        else
          v22 = (unsigned __int16 *)v23[5];
      }
      else if ( v26 )
      {
        v22 = (unsigned __int16 *)v23[4];
      }
      else
      {
        v22 = (unsigned __int16 *)v23[6];
      }
      if ( v24 == v25 )
      {
        *(&v74 + 4 * v19) = 0LL;
      }
      else
      {
        v27 = v23[8];
        if ( v27 )
        {
          v28 = v23[8];
          if ( v25 && *(struct Mesh::MeshEdge **)v27 != v25 )
          {
LABEL_28:
            v29 = *(_QWORD *)v28;
            if ( *(struct Mesh::MeshEdge **)v28 != v25 )
            {
              if ( v26 )
              {
                if ( !v25 && *((_QWORD *)v28 + 10) )
                {
                  *(&v73 + 4 * v19) = (struct Mesh::MeshEdge *)v29;
                  goto LABEL_34;
                }
                v28 = *(struct Mesh::MeshEdge **)(v29 + 24);
                if ( v28 != v27 )
                {
                  do
                  {
                    if ( **((struct Mesh::MeshEdge ***)v28 + 8) != *v23 )
                      break;
                    if ( *(_QWORD *)v27 != *(_QWORD *)v28 )
                      break;
                    v28 = (struct Mesh::MeshEdge *)*((_QWORD *)v28 + 10);
                  }
                  while ( v28 != v27 );
LABEL_33:
                  v17 = v67;
                }
              }
              else
              {
                if ( !v25 && *((_QWORD *)v28 + 9) )
                {
                  *(&v73 + 4 * v19) = (struct Mesh::MeshEdge *)v29;
                  goto LABEL_34;
                }
                v28 = *(struct Mesh::MeshEdge **)(v29 + 32);
                if ( v28 != v27 )
                {
                  do
                  {
                    if ( *(_QWORD *)v27 != *(_QWORD *)v28 )
                      break;
                    if ( **((struct Mesh::MeshEdge ***)v28 + 8) != *v23 )
                      break;
                    v28 = (struct Mesh::MeshEdge *)*((_QWORD *)v28 + 9);
                  }
                  while ( v28 != v27 );
                  goto LABEL_33;
                }
              }
            }
LABEL_34:
            *(&v74 + 4 * v19) = v28;
            goto LABEL_35;
          }
          v46 = *(&v74 + 4 * v19);
          if ( v26 )
          {
            v57 = v23[10];
            if ( !v57 )
              goto LABEL_71;
            do
            {
              v58 = (_QWORD *)*((_QWORD *)v57 + 8);
              if ( !v58 )
                break;
              if ( *(_QWORD *)v27 != *v58 )
                break;
              v46 = v57;
              v57 = (struct Mesh::MeshEdge *)*((_QWORD *)v57 + 10);
            }
            while ( v57 );
          }
          else
          {
            v47 = v23[9];
            if ( !v47 )
            {
LABEL_71:
              v28 = (struct Mesh::MeshEdge *)*((_QWORD *)v46 + 8);
              goto LABEL_28;
            }
            do
            {
              v56 = (_QWORD *)*((_QWORD *)v47 + 8);
              if ( !v56 )
                break;
              if ( *(_QWORD *)v27 != *v56 )
                break;
              v46 = v47;
              v47 = (struct Mesh::MeshEdge *)*((_QWORD *)v47 + 9);
            }
            while ( v47 );
          }
          v17 = v67;
          goto LABEL_71;
        }
        *(&v73 + 4 * v19) = v24;
        *(&v74 + 4 * v19) = 0LL;
      }
    }
LABEL_35:
    v30 = (__int64)*(&v74 + 4 * v19);
    v31 = 0LL;
    if ( !v30 )
      goto LABEL_51;
    v32 = *(struct Mesh::MeshEdge **)v30;
    v33 = *(&v73 + 4 * v19);
    v34 = v71[32 * v19];
    if ( *(struct Mesh::MeshEdge **)v30 == v33 )
    {
      if ( v34 )
        v31 = *(unsigned __int16 **)(v30 + 24);
      else
        v31 = *(unsigned __int16 **)(v30 + 40);
    }
    else if ( v34 )
    {
      v31 = *(unsigned __int16 **)(v30 + 32);
    }
    else
    {
      v31 = *(unsigned __int16 **)(v30 + 48);
    }
    if ( v32 == v33 )
    {
      *(&v74 + 4 * v19) = 0LL;
      goto LABEL_50;
    }
    v35 = *(const struct Mesh::MeshEdge **)(v30 + 64);
    if ( !v35 )
    {
      *(&v73 + 4 * v19) = v32;
      *(&v74 + 4 * v19) = 0LL;
      goto LABEL_50;
    }
    v36 = *(const struct Mesh::MeshEdge **)(v30 + 64);
    if ( !v33 || *(struct Mesh::MeshEdge **)v35 == v33 )
    {
      v37 = (__int64)*(&v74 + 4 * v19);
      if ( v34 )
      {
        v48 = *(_QWORD *)(v30 + 80);
        if ( !v48 )
          goto LABEL_47;
        do
        {
          v49 = *(_QWORD **)(v48 + 64);
          if ( !v49 )
            break;
          if ( *(_QWORD *)v35 != *v49 )
            break;
          v37 = v48;
          v48 = *(_QWORD *)(v48 + 80);
        }
        while ( v48 );
      }
      else
      {
        v38 = *(_QWORD *)(v30 + 72);
        if ( !v38 )
        {
LABEL_47:
          v36 = *(const struct Mesh::MeshEdge **)(v37 + 64);
          goto LABEL_48;
        }
        do
        {
          v39 = *(_QWORD **)(v38 + 64);
          if ( !v39 )
            break;
          if ( *(_QWORD *)v35 != *v39 )
            break;
          v37 = v38;
          v38 = *(_QWORD *)(v38 + 72);
        }
        while ( v38 );
      }
      v17 = v67;
      goto LABEL_47;
    }
LABEL_48:
    v40 = *(_QWORD *)v36;
    if ( *(struct Mesh::MeshEdge **)v36 != v33 )
    {
      if ( v34 )
      {
        if ( !v33 && *((_QWORD *)v36 + 10) )
        {
          *(&v73 + 4 * v19) = (struct Mesh::MeshEdge *)v40;
          goto LABEL_49;
        }
        v36 = *(const struct Mesh::MeshEdge **)(v40 + 24);
        if ( v36 == v35 )
          goto LABEL_49;
        do
        {
          if ( !Mesh::PolygonPathIterator::IsCycle(v36, (const struct Mesh::MeshEdge *)v30) )
            break;
          v36 = (const struct Mesh::MeshEdge *)*((_QWORD *)v36 + 10);
        }
        while ( v36 != v35 );
      }
      else
      {
        if ( !v33 && *((_QWORD *)v36 + 9) )
        {
          *(&v73 + 4 * v19) = (struct Mesh::MeshEdge *)v40;
          goto LABEL_49;
        }
        v36 = *(const struct Mesh::MeshEdge **)(v40 + 32);
        if ( v36 == v35 )
          goto LABEL_49;
        do
        {
          if ( !Mesh::PolygonPathIterator::IsCycle((const struct Mesh::MeshEdge *)v30, v36) )
            break;
          v36 = (const struct Mesh::MeshEdge *)*((_QWORD *)v36 + 9);
        }
        while ( v36 != v35 );
      }
      v17 = v67;
    }
LABEL_49:
    *(struct Mesh::MeshEdge **)((char *)&v74 + v20) = v36;
LABEL_50:
    v5 = v68;
LABEL_51:
    if ( v31 )
      break;
LABEL_66:
    ++v17;
    ++v19;
    v67 = v17;
    if ( v19 >= 2 )
      goto LABEL_67;
  }
  while ( v22 == (unsigned __int16 *)Next || v31 == (unsigned __int16 *)Next )
  {
LABEL_58:
    v42 = *(__int64 *)((char *)&v74 + v20);
    v22 = v31;
    v31 = 0LL;
    if ( v42 )
    {
      v43 = *(struct Mesh::MeshEdge **)v42;
      v44 = *(struct Mesh::MeshEdge **)((char *)&v73 + v20);
      v45 = v71[v20];
      if ( *(struct Mesh::MeshEdge **)v42 == v44 )
      {
        if ( v45 )
          v31 = *(unsigned __int16 **)(v42 + 24);
        else
          v31 = *(unsigned __int16 **)(v42 + 40);
      }
      else if ( v45 )
      {
        v31 = *(unsigned __int16 **)(v42 + 32);
      }
      else
      {
        v31 = *(unsigned __int16 **)(v42 + 48);
      }
      if ( v43 == v44 )
      {
        *(struct Mesh::MeshEdge **)((char *)&v74 + v20) = 0LL;
      }
      else
      {
        v59 = *(struct Mesh::MeshEdge ***)(v42 + 64);
        if ( v59 )
        {
          k = *(const struct Mesh::MeshEdge **)(v42 + 64);
          if ( !v44 || *v59 == v44 )
          {
            v61 = *(__int64 *)((char *)&v74 + v20);
            if ( v45 )
            {
              for ( i = *(_QWORD *)(v42 + 80); i; i = *(_QWORD *)(i + 80) )
              {
                v65 = *(struct Mesh::MeshEdge ***)(i + 64);
                if ( !v65 )
                  break;
                if ( *v59 != *v65 )
                  break;
                v61 = i;
              }
            }
            else
            {
              for ( j = *(_QWORD *)(v42 + 72); j; j = *(_QWORD *)(j + 72) )
              {
                v63 = *(struct Mesh::MeshEdge ***)(j + 64);
                if ( !v63 )
                  break;
                if ( *v59 != *v63 )
                  break;
                v61 = j;
              }
            }
            k = *(const struct Mesh::MeshEdge **)(v61 + 64);
          }
          v66 = *(_QWORD *)k;
          if ( *(struct Mesh::MeshEdge **)k != v44 )
          {
            if ( v45 )
            {
              if ( v44 || !*((_QWORD *)k + 10) )
              {
                for ( k = *(const struct Mesh::MeshEdge **)(v66 + 24);
                      k != (const struct Mesh::MeshEdge *)v59;
                      k = (const struct Mesh::MeshEdge *)*((_QWORD *)k + 10) )
                {
                  if ( !Mesh::PolygonPathIterator::IsCycle(k, (const struct Mesh::MeshEdge *)v42) )
                    break;
                }
              }
              else
              {
                *(struct Mesh::MeshEdge **)((char *)&v73 + v20) = (struct Mesh::MeshEdge *)v66;
              }
            }
            else if ( v44 || !*((_QWORD *)k + 9) )
            {
              for ( k = *(const struct Mesh::MeshEdge **)(v66 + 32);
                    k != (const struct Mesh::MeshEdge *)v59;
                    k = (const struct Mesh::MeshEdge *)*((_QWORD *)k + 9) )
              {
                if ( !Mesh::PolygonPathIterator::IsCycle((const struct Mesh::MeshEdge *)v42, k) )
                  break;
              }
            }
            else
            {
              *(struct Mesh::MeshEdge **)((char *)&v73 + v20) = (struct Mesh::MeshEdge *)v66;
            }
          }
          *(struct Mesh::MeshEdge **)((char *)&v74 + v20) = k;
        }
        else
        {
          *(struct Mesh::MeshEdge **)((char *)&v73 + v20) = v43;
          *(struct Mesh::MeshEdge **)((char *)&v74 + v20) = 0LL;
        }
        v5 = v68;
      }
    }
    if ( !v31 )
    {
      v17 = v67;
      goto LABEL_66;
    }
  }
  if ( v18 < a3 )
  {
    v5 += 3;
    v16 = v71[v20] == 0;
    v68 = v5;
    a2[v18] = *(_WORD *)Next;
    if ( v16 )
    {
      a2[v18 + 1] = *v22;
      v41 = *v31;
    }
    else
    {
      a2[v18 + 1] = *v31;
      v41 = *v22;
    }
    a2[v18 + 2] = v41;
    v18 += 3LL;
    goto LABEL_58;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC68u);
  return 2147942414LL;
}
