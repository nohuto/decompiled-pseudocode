/*
 * XREFs of ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x180069FD0
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800647B0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180066730 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Mesh::MeshGraph::Create(int a1, int a2, int a3, int a4, struct Mesh::MeshGraph **a5)
{
  char *v5; // rdi
  unsigned __int64 v6; // rbp
  char *v7; // rsi
  unsigned __int64 v8; // r15
  LPVOID v9; // r13
  unsigned __int64 v10; // r12
  LPVOID v11; // r14
  __int64 v12; // rbx
  SIZE_T v13; // rax
  char *v14; // rax
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rbx
  SIZE_T v17; // rax
  char *v18; // rax
  _QWORD *v19; // rcx
  SIZE_T v20; // rax
  SIZE_T v21; // rax
  _QWORD *v22; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0LL;
  v6 = a4;
  v7 = 0LL;
  v8 = a3;
  v9 = 0LL;
  v10 = a2;
  v11 = 0LL;
  if ( a1 > 0 )
  {
    v12 = a1;
    v13 = (__int64)a1 << 6;
    if ( !is_mul_ok(a1, 0x40uLL) )
      v13 = -1LL;
    if ( !v13 )
      v13 = 1LL;
    v14 = (char *)HeapAlloc(WPF::g_processHeap, 0, v13);
    v5 = v14;
    if ( !v14 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v15 = v14 + 16;
    do
    {
      *v15 = &Mesh::RadialEdgeList::`vftable';
      v15 += 8;
      --v12;
    }
    while ( v12 );
  }
  if ( (int)v10 > 0 )
  {
    v16 = v10;
    v17 = 88 * v10;
    if ( !is_mul_ok(v10, 0x58uLL) )
      v17 = -1LL;
    if ( !v17 )
      v17 = 1LL;
    v18 = (char *)HeapAlloc(WPF::g_processHeap, 0, v17);
    v7 = v18;
    if ( !v18 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v19 = v18 + 40;
    do
    {
      *v19 = &Mesh::LinearEdgeList::`vftable';
      v19 += 11;
      --v16;
    }
    while ( v16 );
  }
  if ( (int)v8 > 0 )
  {
    v20 = 88 * v8;
    if ( !is_mul_ok(v8, 0x58uLL) )
      v20 = -1LL;
    if ( !v20 )
      v20 = 1LL;
    v9 = HeapAlloc(WPF::g_processHeap, 0, v20);
    if ( !v9 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  if ( (int)v6 > 0 )
  {
    v21 = 2 * v6;
    if ( !is_mul_ok(v6, 2uLL) )
      v21 = -1LL;
    if ( !v21 )
      v21 = 1LL;
    v11 = HeapAlloc(WPF::g_processHeap, 0, v21);
    if ( !v11 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v22 = HeapAlloc(WPF::g_processHeap, 0, 0x88uLL);
  if ( !v22 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v22[3] = a1;
  v22[2] = v5;
  v22[5] = v7;
  v22[6] = v10;
  v22[9] = v9;
  v22[10] = v8;
  v22[15] = v6;
  v22[14] = v11;
  v22[8] = 0LL;
  *((_DWORD *)v22 + 8) = 0;
  *((_DWORD *)v22 + 14) = 0;
  v22[11] = 0LL;
  v22[12] = 0LL;
  *((_DWORD *)v22 + 26) = 0;
  *((_DWORD *)v22 + 32) = 0;
  *a5 = (struct Mesh::MeshGraph *)v22;
  return 0LL;
}
