/*
 * XREFs of ?PreallocateGraphObjects@Mesh@@AEAAJI_N@Z @ 0x18003C7A0
 * Callers:
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x18003C950 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800BDB80 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x180133614 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall Mesh::PreallocateGraphObjects(Mesh *this, int a2, char a3)
{
  int v3; // r15d
  char *v6; // r14
  void *v7; // rcx
  char *v8; // rdi
  Mesh::MeshGraph **v9; // r12
  Mesh::MeshGraph *v10; // rcx
  __int64 v11; // rax
  SIZE_T v12; // r8
  LPVOID v13; // rax
  void *v14; // r13
  void *v15; // rbx
  unsigned int v16; // edx
  int v17; // esi
  Mesh::MeshGraph *v18; // rax
  void *v19; // r8
  Mesh::MeshGraph *v20; // rdi
  Mesh::MeshGraph *v21; // rcx
  struct Mesh::MeshGraph *v23; // [rsp+38h] [rbp-18h] BYREF
  char v24; // [rsp+40h] [rbp-10h]
  Mesh::MeshGraph *v25; // [rsp+90h] [rbp+40h] BYREF
  int v26; // [rsp+A0h] [rbp+50h]
  char v27; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *((_DWORD *)this + 41);
  v25 = 0LL;
  if ( a3 )
    v3 += 64;
  v6 = (char *)this + 144;
  v7 = (void *)*((_QWORD *)this + 18);
  if ( v7 )
  {
    WPF::ProcessHeapImpl::Free(v7);
    *(_QWORD *)v6 = 0LL;
  }
  v8 = (char *)this + 152;
  if ( this != (Mesh *)-152LL )
  {
    *((_QWORD *)this + 20) = 0LL;
    *(_QWORD *)v8 = 0LL;
  }
  v9 = (Mesh::MeshGraph **)((char *)this + 176);
  v10 = (Mesh::MeshGraph *)*((_QWORD *)this + 22);
  if ( v10 )
  {
    Mesh::MeshGraph::`scalar deleting destructor'(v10, 0);
    *v9 = 0LL;
  }
  v11 = *((_QWORD *)this + 24);
  if ( v11 )
  {
    *(_QWORD *)(v11 + 88) = 0LL;
    *(_QWORD *)(v11 + 96) = 0LL;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_DWORD *)(v11 + 32) = 0;
    *(_DWORD *)(v11 + 56) = 0;
    *(_DWORD *)(v11 + 104) = 0;
    *(_DWORD *)(v11 + 128) = 0;
  }
  v26 = 8 * a2 + 28;
  v12 = (unsigned int)(v3 * v26);
  if ( !(v3 * v26) )
    v12 = 1LL;
  v13 = HeapAlloc(WPF::g_processHeap, 0, v12);
  v14 = v13;
  if ( v13 )
  {
    v23 = 0LL;
    v15 = v13;
    v24 = 1;
    v17 = Mesh::MeshGraph::Create(v3, v3, 2 * v3, 0, &v23);
    if ( v24 )
    {
      v18 = v23;
      if ( v23 != v25 )
      {
        if ( v25 )
        {
          Mesh::MeshGraph::`scalar deleting destructor'(v25, v16);
          v18 = v23;
        }
        v25 = v18;
      }
      v14 = v15;
    }
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x97u);
    }
    else
    {
      if ( v6 != &v27 )
      {
        v19 = *(void **)v6;
        v15 = 0LL;
        if ( v14 != *(void **)v6 )
        {
          if ( v19 )
            HeapFree(WPF::g_processHeap, 0, v19);
          *(_QWORD *)v6 = v14;
        }
      }
      if ( v8 )
      {
        *(_QWORD *)v8 = *(_QWORD *)v6;
        *((_DWORD *)v8 + 2) = v26;
        *((_DWORD *)v8 + 3) = v3;
      }
      if ( v9 != &v25 )
      {
        v20 = v25;
        v25 = 0LL;
        v21 = *v9;
        if ( v20 != *v9 )
        {
          if ( v21 )
            Mesh::MeshGraph::`scalar deleting destructor'(v21, v16);
          *v9 = v20;
        }
      }
      v17 = 0;
    }
    if ( v15 )
      HeapFree(WPF::g_processHeap, 0, v15);
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x95u);
  }
  if ( v25 )
    Mesh::MeshGraph::`scalar deleting destructor'(v25, v16);
  return (unsigned int)v17;
}
