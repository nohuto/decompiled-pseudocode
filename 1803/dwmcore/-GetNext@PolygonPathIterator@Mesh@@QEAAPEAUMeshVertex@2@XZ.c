/*
 * XREFs of ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800B2DA4
 * Callers:
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800B0850 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 * Callees:
 *     ?IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z @ 0x18017DDD4 (-IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z.c)
 */

struct Mesh::MeshVertex *__fastcall Mesh::PolygonPathIterator::GetNext(Mesh::PolygonPathIterator *this)
{
  const struct Mesh::MeshEdge *v1; // r10
  __int64 v2; // rdi
  Mesh::PolygonPathIterator *v3; // r11
  __int64 v4; // rax
  __int64 v5; // rdx
  const struct Mesh::MeshEdge *i; // r9
  _QWORD *v7; // rcx
  const struct Mesh::MeshEdge *v8; // rbp
  __int64 *v9; // r8
  __int64 v10; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r9
  __int64 *v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // r9

  v1 = (const struct Mesh::MeshEdge *)*((_QWORD *)this + 3);
  v2 = 0LL;
  v3 = this;
  if ( v1 )
  {
    v4 = *(_QWORD *)v1;
    v5 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)v1 == v5 )
    {
      if ( *(_BYTE *)this )
        v2 = *((_QWORD *)v1 + 3);
      else
        v2 = *((_QWORD *)v1 + 5);
    }
    else if ( *(_BYTE *)this )
    {
      v2 = *((_QWORD *)v1 + 4);
    }
    else
    {
      v2 = *((_QWORD *)v1 + 6);
    }
    if ( v4 != v5 )
    {
      if ( *((_QWORD *)v1 + 8) )
      {
        i = (const struct Mesh::MeshEdge *)*((_QWORD *)v1 + 8);
        if ( !v5 || (v10 = *(_QWORD *)i, v7 = (_QWORD *)*((_QWORD *)v1 + 8), *(_QWORD *)i == v5) )
        {
          v7 = (_QWORD *)*((_QWORD *)v1 + 8);
          v8 = v1;
          if ( *(_BYTE *)v3 )
          {
            v14 = (__int64 *)*((_QWORD *)v1 + 10);
            if ( v14 )
            {
              v15 = (_QWORD *)*((_QWORD *)v1 + 8);
              do
              {
                v16 = (_QWORD *)v14[8];
                v7 = v15;
                if ( !v16 )
                  break;
                v7 = (_QWORD *)*((_QWORD *)v1 + 8);
                if ( *v7 != *v16 )
                  break;
                v8 = (const struct Mesh::MeshEdge *)v14;
                v15 = (_QWORD *)*((_QWORD *)v1 + 8);
                v14 = (__int64 *)v14[10];
              }
              while ( v14 );
            }
          }
          else
          {
            v9 = (__int64 *)*((_QWORD *)v1 + 9);
            if ( v9 )
            {
              v12 = (_QWORD *)*((_QWORD *)v1 + 8);
              do
              {
                v13 = (_QWORD *)v9[8];
                v7 = v12;
                if ( !v13 )
                  break;
                v7 = (_QWORD *)*((_QWORD *)v1 + 8);
                if ( *v7 != *v13 )
                  break;
                v8 = (const struct Mesh::MeshEdge *)v9;
                v12 = (_QWORD *)*((_QWORD *)v1 + 8);
                v9 = (__int64 *)v9[9];
              }
              while ( v9 );
            }
          }
          i = (const struct Mesh::MeshEdge *)*((_QWORD *)v8 + 8);
          v10 = *(_QWORD *)i;
          if ( *(_QWORD *)i == v5 )
            goto LABEL_17;
        }
        if ( *(_BYTE *)v3 )
        {
          if ( v5 || !*((_QWORD *)i + 10) )
          {
            for ( i = *(const struct Mesh::MeshEdge **)(v10 + 24);
                  i != *((const struct Mesh::MeshEdge **)v1 + 8) && Mesh::PolygonPathIterator::IsCycle(i, v1);
                  i = (const struct Mesh::MeshEdge *)*((_QWORD *)i + 10) )
            {
              ;
            }
            goto LABEL_17;
          }
        }
        else if ( v5 || !*((_QWORD *)i + 9) )
        {
          for ( i = *(const struct Mesh::MeshEdge **)(v10 + 32);
                i != *((const struct Mesh::MeshEdge **)v1 + 8);
                i = (const struct Mesh::MeshEdge *)*((_QWORD *)i + 9) )
          {
            if ( *v7 != *(_QWORD *)i )
              break;
            if ( **((_QWORD **)i + 8) != *(_QWORD *)v1 )
              break;
          }
          goto LABEL_17;
        }
        *((_QWORD *)v3 + 2) = v10;
LABEL_17:
        *((_QWORD *)v3 + 3) = i;
        return (struct Mesh::MeshVertex *)v2;
      }
      *((_QWORD *)this + 2) = v4;
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  return (struct Mesh::MeshVertex *)v2;
}
