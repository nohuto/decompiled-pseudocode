/*
 * XREFs of ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01F64D8
 * Callers:
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A53D8 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 * Callees:
 *     ?CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z @ 0x1C01F59D4 (-CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F5D54 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F61EC (-SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01F6604 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 *     ?UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z @ 0x1C01F6894 (-UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z.c)
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
  unsigned __int16 v8; // cx
  __int16 v9; // bp
  unsigned int v11; // esi
  unsigned int v12; // edi
  __int16 v13; // cx
  struct tagINPUTPOINTERNODE *NodeById; // rbx
  __int64 result; // rax
  struct tagWND *Target; // rax
  int v17; // ecx
  unsigned int v19; // [rsp+90h] [rbp+18h]

  v19 = (unsigned int)a3;
  v8 = *(_WORD *)this;
  v9 = 0;
  *a6 = 0;
  v11 = *((_DWORD *)this + 2);
  v12 = *((_DWORD *)this + 5);
  *a7 = 0;
  NodeById = FindNodeById(v8, 1, 1);
  result = 0LL;
  if ( !NodeById )
  {
    NodeById = CreateNode(v13, v11, v12);
    v9 = 1;
    result = 0LL;
    if ( !NodeById )
      return result;
    goto LABEL_3;
  }
  if ( *((_DWORD *)NodeById + 10) == v11 )
  {
    if ( !(unsigned int)SetNewValidState(v12, NodeById) )
      return 0LL;
LABEL_3:
    UpdateStateIndicator(NodeById, v12, *((_QWORD *)this + 11), *(struct tagPOINT *)((char *)this + 48));
    Target = UpdateInputCaptureAndGetTarget(this, NodeById, v12, (HWND)a2, v19, a6, a7);
    v17 = *((_DWORD *)NodeById + 11);
    *a4 = Target;
    LOWORD(Target) = *((_DWORD *)NodeById + 38) & 7;
    *((_DWORD *)NodeById + 11) = v12;
    *a6 |= v9 | (unsigned __int16)(2 * (_WORD)Target);
    *(_DWORD *)a5 = v17 & 0x1F0;
    return *((unsigned __int16 *)NodeById + 16);
  }
  return result;
}
