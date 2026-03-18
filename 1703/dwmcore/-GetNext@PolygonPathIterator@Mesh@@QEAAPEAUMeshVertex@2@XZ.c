/*
 * XREFs of ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x18003DA68
 * Callers:
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x18003B8AC (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 * Callees:
 *     <none>
 */

struct Mesh::MeshVertex *__fastcall Mesh::PolygonPathIterator::GetNext(Mesh::PolygonPathIterator *this)
{
  _QWORD *v1; // r9
  __int64 v2; // rdi
  __int64 v3; // r11
  __int64 *k; // r8
  __int64 v5; // r8
  __int64 j; // rdx
  __int64 v7; // rax
  _QWORD *v9; // rax
  __int64 i; // rdx
  _QWORD *v11; // rax
  __int64 *v12; // rdx

  v1 = (_QWORD *)*((_QWORD *)this + 3);
  v2 = 0LL;
  if ( v1 )
  {
    if ( *v1 == *((_QWORD *)this + 2) )
    {
      if ( *(_BYTE *)this )
        v2 = v1[3];
      else
        v2 = v1[5];
    }
    else if ( *(_BYTE *)this )
    {
      v2 = v1[4];
    }
    else
    {
      v2 = v1[6];
    }
    v3 = *((_QWORD *)this + 2);
    if ( *v1 != v3 )
    {
      if ( v1[8] )
      {
        k = (__int64 *)v1[8];
        if ( !v3 || *k == v3 )
        {
          v5 = *((_QWORD *)this + 3);
          if ( *(_BYTE *)this )
          {
            for ( i = v1[10]; i; i = *(_QWORD *)(i + 80) )
            {
              v11 = *(_QWORD **)(i + 64);
              if ( !v11 || *(_QWORD *)v1[8] != *v11 )
                break;
              v5 = i;
            }
          }
          else
          {
            for ( j = v1[9]; j; j = *(_QWORD *)(j + 72) )
            {
              v9 = *(_QWORD **)(j + 64);
              if ( !v9 || *(_QWORD *)v1[8] != *v9 )
                break;
              v5 = j;
            }
          }
          k = *(__int64 **)(v5 + 64);
        }
        v7 = *k;
        if ( *k == v3 )
          goto LABEL_19;
        if ( *(_BYTE *)this )
        {
          if ( v3 || !k[10] )
          {
            k = *(__int64 **)(v7 + 24);
            if ( k != (__int64 *)v1[8] )
            {
              do
              {
                if ( *(_QWORD *)k[8] != *v1 )
                  break;
                v12 = (__int64 *)v1[8];
                if ( *v12 != *k )
                  break;
                k = (__int64 *)k[10];
              }
              while ( k != v12 );
            }
            goto LABEL_19;
          }
        }
        else if ( v3 || !k[9] )
        {
          for ( k = *(__int64 **)(v7 + 32); k != (__int64 *)v1[8]; k = (__int64 *)k[9] )
          {
            if ( *(_QWORD *)v1[8] != *k )
              break;
            if ( *(_QWORD *)k[8] != *v1 )
              break;
          }
          goto LABEL_19;
        }
        *((_QWORD *)this + 2) = v7;
LABEL_19:
        *((_QWORD *)this + 3) = k;
        return (struct Mesh::MeshVertex *)v2;
      }
      *((_QWORD *)this + 2) = *v1;
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  return (struct Mesh::MeshVertex *)v2;
}
