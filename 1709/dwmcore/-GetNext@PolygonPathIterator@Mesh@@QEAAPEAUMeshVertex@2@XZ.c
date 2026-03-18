/*
 * XREFs of ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800B3D24
 * Callers:
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x180065870 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 * Callees:
 *     ?IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z @ 0x180154848 (-IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z.c)
 */

struct Mesh::MeshVertex *__fastcall Mesh::PolygonPathIterator::GetNext(Mesh::PolygonPathIterator *this)
{
  const struct Mesh::MeshEdge *v1; // r10
  __int64 v2; // rsi
  Mesh::PolygonPathIterator *v3; // r11
  __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // di
  const struct Mesh::MeshEdge *k; // r9
  __int64 v8; // r9
  __int64 j; // r8
  __int64 v10; // rax
  _QWORD *v12; // rax
  __int64 i; // r8
  _QWORD *v14; // rax

  v1 = (const struct Mesh::MeshEdge *)*((_QWORD *)this + 3);
  v2 = 0LL;
  v3 = this;
  if ( v1 )
  {
    v4 = *(_QWORD *)v1;
    v5 = *((_QWORD *)this + 2);
    v6 = *(_BYTE *)this;
    if ( *(_QWORD *)v1 == v5 )
    {
      if ( v6 )
        v2 = *((_QWORD *)v1 + 3);
      else
        v2 = *((_QWORD *)v1 + 5);
    }
    else if ( v6 )
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
        k = (const struct Mesh::MeshEdge *)*((_QWORD *)v1 + 8);
        if ( !v5 || *(_QWORD *)k == v5 )
        {
          v8 = *((_QWORD *)this + 3);
          if ( v6 )
          {
            for ( i = *((_QWORD *)v1 + 10); i; i = *(_QWORD *)(i + 80) )
            {
              v14 = *(_QWORD **)(i + 64);
              if ( !v14 || **((_QWORD **)v1 + 8) != *v14 )
                break;
              v8 = i;
            }
          }
          else
          {
            for ( j = *((_QWORD *)v1 + 9); j; j = *(_QWORD *)(j + 72) )
            {
              v12 = *(_QWORD **)(j + 64);
              if ( !v12 || **((_QWORD **)v1 + 8) != *v12 )
                break;
              v8 = j;
            }
          }
          k = *(const struct Mesh::MeshEdge **)(v8 + 64);
        }
        v10 = *(_QWORD *)k;
        if ( *(_QWORD *)k == v5 )
          goto LABEL_19;
        if ( v6 )
        {
          if ( v5 || !*((_QWORD *)k + 10) )
          {
            for ( k = *(const struct Mesh::MeshEdge **)(v10 + 24);
                  k != *((const struct Mesh::MeshEdge **)v1 + 8) && Mesh::PolygonPathIterator::IsCycle(k, v1);
                  k = (const struct Mesh::MeshEdge *)*((_QWORD *)k + 10) )
            {
              ;
            }
            goto LABEL_19;
          }
        }
        else if ( v5 || !*((_QWORD *)k + 9) )
        {
          for ( k = *(const struct Mesh::MeshEdge **)(v10 + 32);
                k != *((const struct Mesh::MeshEdge **)v1 + 8);
                k = (const struct Mesh::MeshEdge *)*((_QWORD *)k + 9) )
          {
            if ( **((_QWORD **)v1 + 8) != *(_QWORD *)k )
              break;
            if ( **((_QWORD **)k + 8) != *(_QWORD *)v1 )
              break;
          }
          goto LABEL_19;
        }
        *((_QWORD *)this + 2) = v10;
LABEL_19:
        *((_QWORD *)v3 + 3) = k;
        return (struct Mesh::MeshVertex *)v2;
      }
      *((_QWORD *)this + 2) = v4;
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  return (struct Mesh::MeshVertex *)v2;
}
