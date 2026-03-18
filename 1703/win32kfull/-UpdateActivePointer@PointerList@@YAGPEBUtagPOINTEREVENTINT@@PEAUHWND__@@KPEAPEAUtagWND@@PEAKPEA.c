/*
 * XREFs of ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01EA5C0
 * Callers:
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199818 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 * Callees:
 *     ?CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z @ 0x1C01E9A38 (-CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01E9DBC (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01EA2D4 (-SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01EA710 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 *     ?UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z @ 0x1C01EA95C (-UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z.c)
 */

__int64 __fastcall PointerList::UpdateActivePointer(
        PointerList *this,
        const struct tagPOINTEREVENTINT *a2,
        HWND a3,
        _QWORD *a4,
        struct tagWND **a5,
        unsigned __int16 *a6,
        unsigned int *a7)
{
  __int16 v7; // bx
  unsigned __int16 v9; // cx
  int v10; // r12d
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  struct tagINPUTPOINTERNODE *NodeById; // rax
  __int16 v14; // cx
  struct tagINPUTPOINTERNODE *Node; // rdi
  bool v16; // zf
  struct tagWND *Target; // rax
  unsigned __int16 v19; // dx
  __int16 v20; // dx
  int v21; // ecx
  unsigned int v23; // [rsp+90h] [rbp+18h]

  v23 = (unsigned int)a3;
  HIBYTE(v7) = 0;
  v9 = *(_WORD *)this;
  v10 = 0;
  *a6 = 0;
  v11 = *((_DWORD *)this + 2);
  v12 = *((_DWORD *)this + 5);
  *a7 = 0;
  NodeById = FindNodeById(v9, 1, 1);
  Node = NodeById;
  if ( NodeById )
  {
    if ( *((_DWORD *)NodeById + 10) != v11 )
      return 0LL;
    v16 = (unsigned int)SetNewValidState(v12, NodeById) == 0;
  }
  else
  {
    Node = CreateNode(v14, v11, v12);
    v10 = 1;
    v16 = Node == 0LL;
  }
  if ( v16 )
    return 0LL;
  UpdateStateIndicator(Node, v12, *((_QWORD *)this + 11), *(struct tagPOINT *)((char *)this + 48));
  Target = UpdateInputCaptureAndGetTarget(this, Node, v12, (HWND)a2, v23, a6, a7);
  LOBYTE(v7) = v10 != 0;
  *a6 |= v7;
  v19 = *a6;
  *a4 = Target;
  v20 = (2 * (*((_DWORD *)Node + 38) & 1)) | (2 * (*((_DWORD *)Node + 38) & 4)) | v19;
  v21 = *((_DWORD *)Node + 11);
  LOWORD(Target) = 2 * (*((_DWORD *)Node + 38) & 2);
  *((_DWORD *)Node + 11) = v12;
  *a6 = (unsigned __int16)Target | v20;
  *(_DWORD *)a5 = v21 & 0x1F0;
  return *((unsigned __int16 *)Node + 16);
}
