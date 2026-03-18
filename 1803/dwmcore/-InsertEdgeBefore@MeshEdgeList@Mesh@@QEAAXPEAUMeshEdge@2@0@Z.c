/*
 * XREFs of ?InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z @ 0x18013F5F0
 * Callers:
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x18017DD54 (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Mesh::MeshEdgeList::InsertEdgeBefore(
        Mesh::MeshEdgeList *this,
        struct Mesh::MeshEdge *a2,
        struct Mesh::MeshEdge *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rbp

  if ( a3 )
    v6 = (_QWORD *)(**(__int64 (__fastcall ***)(Mesh::MeshEdgeList *, struct Mesh::MeshEdge *))this)(this, a3);
  else
    v6 = (_QWORD *)((char *)this + 16);
  v7 = *v6;
  if ( *v6 )
    *(_QWORD *)((**(__int64 (__fastcall ***)(Mesh::MeshEdgeList *, _QWORD))this)(this, *v6) + 8) = a2;
  *(_QWORD *)(**(__int64 (__fastcall ***)(Mesh::MeshEdgeList *, struct Mesh::MeshEdge *))this)(this, a2) = v7;
  *(_QWORD *)((**(__int64 (__fastcall ***)(Mesh::MeshEdgeList *, struct Mesh::MeshEdge *))this)(this, a2) + 8) = a3;
  if ( a3 )
    *(_QWORD *)(**(__int64 (__fastcall ***)(Mesh::MeshEdgeList *, struct Mesh::MeshEdge *))this)(this, a3) = a2;
  if ( a3 == *((struct Mesh::MeshEdge **)this + 1) )
    *((_QWORD *)this + 1) = a2;
  if ( v7 == *((_QWORD *)this + 2) )
    *((_QWORD *)this + 2) = a2;
  ++*((_DWORD *)this + 6);
}
