/*
 * XREFs of ?LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z @ 0x18003BB10
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18003CCC0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x18003B8AC (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x18003BD00 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800BDB80 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x180133614 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall Mesh::LookupCachedGridGraph(Mesh *this, struct Mesh::MeshGraph **a2)
{
  struct Mesh::MeshGraph *v4; // rdi
  struct Mesh::MeshGraph **v5; // r14
  int Triangles; // eax
  int v7; // ebx
  int *v8; // rcx
  unsigned int v9; // edx
  struct Mesh::MeshGraph *v10; // rbp
  Mesh::MeshGraph *v11; // rcx
  __int64 v12; // rbx
  void *v13; // rcx
  int v14; // r8d
  unsigned __int16 *v15; // rdx
  __int64 v16; // rax
  unsigned int v18; // [rsp+20h] [rbp-58h]
  struct Mesh::MeshGraph *v19; // [rsp+38h] [rbp-40h] BYREF
  char v20; // [rsp+40h] [rbp-38h]

  v4 = 0LL;
  if ( *((_QWORD *)this + 26) != 0x200000002LL )
    goto LABEL_15;
  v5 = (struct Mesh::MeshGraph **)((char *)this + 192);
  if ( this == (Mesh *)-192LL )
    goto LABEL_15;
  v4 = *v5;
  if ( *v5 )
  {
    if ( *((_DWORD *)v4 + 32) )
      goto LABEL_15;
  }
  Triangles = Mesh::BuildGrid(this, (int)a2, 2, 2);
  v7 = Triangles;
  if ( Triangles < 0 )
  {
    v18 = 1272;
    goto LABEL_23;
  }
  if ( !v4 )
  {
    v8 = (int *)*((_QWORD *)this + 22);
    v19 = 0LL;
    v20 = 1;
    v7 = Mesh::MeshGraph::Create(v8[8], v8[14], v8[22], 3 * (v8[25] + 2 * (v8[23] - v8[26])), &v19);
    if ( v20 )
    {
      v10 = v19;
      v11 = *v5;
      if ( v19 != *v5 )
      {
        if ( v11 )
          Mesh::MeshGraph::`scalar deleting destructor'(v11, v9);
        *v5 = v10;
      }
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x501u);
      goto LABEL_16;
    }
    v4 = *v5;
  }
  v12 = *((_QWORD *)this + 22);
  memcpy_0(*((void **)v4 + 2), *(const void **)(v12 + 16), (__int64)*(int *)(v12 + 32) << 6);
  memcpy_0(*((void **)v4 + 5), *(const void **)(v12 + 40), 88LL * *(int *)(v12 + 56));
  v13 = (void *)*((_QWORD *)v4 + 9);
  *((_QWORD *)v4 + 8) = *(_QWORD *)(v12 + 64);
  memcpy_0(v13, *(const void **)(v12 + 72), 88LL * *(int *)(v12 + 88));
  v14 = *((_DWORD *)v4 + 30);
  v15 = (unsigned __int16 *)*((_QWORD *)v4 + 14);
  *((_DWORD *)v4 + 8) = *(_DWORD *)(v12 + 32);
  *((_DWORD *)v4 + 14) = *(_DWORD *)(v12 + 56);
  *((_DWORD *)v4 + 22) = *(_DWORD *)(v12 + 88);
  *((_DWORD *)v4 + 23) = *(_DWORD *)(v12 + 92);
  *((_DWORD *)v4 + 24) = *(_DWORD *)(v12 + 96);
  *((_DWORD *)v4 + 25) = *(_DWORD *)(v12 + 100);
  *((_DWORD *)v4 + 26) = *(_DWORD *)(v12 + 104);
  Triangles = Mesh::GenerateTriangles(this, v15, v14, (int *)v4 + 32);
  v7 = Triangles;
  if ( Triangles < 0 )
  {
    v18 = 1289;
LABEL_23:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Triangles, v18);
    goto LABEL_16;
  }
  v16 = *((_QWORD *)this + 22);
  *(_QWORD *)(v16 + 64) = 0LL;
  *(_DWORD *)(v16 + 32) = 0;
  *(_DWORD *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 88) = 0LL;
  *(_QWORD *)(v16 + 96) = 0LL;
  *(_DWORD *)(v16 + 104) = 0;
  *(_DWORD *)(v16 + 128) = 0;
LABEL_15:
  *a2 = v4;
  v7 = 0;
LABEL_16:
  if ( v7 < 0 && v4 )
  {
    *((_QWORD *)v4 + 8) = 0LL;
    *((_DWORD *)v4 + 8) = 0;
    *((_DWORD *)v4 + 14) = 0;
    *((_QWORD *)v4 + 11) = 0LL;
    *((_QWORD *)v4 + 12) = 0LL;
    *((_DWORD *)v4 + 26) = 0;
    *((_DWORD *)v4 + 32) = 0;
  }
  return (unsigned int)v7;
}
