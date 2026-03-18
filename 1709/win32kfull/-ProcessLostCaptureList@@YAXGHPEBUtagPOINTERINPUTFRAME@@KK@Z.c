/*
 * XREFs of ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01A5648
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00F8798 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01A6F54 (xxxSetManipulationInputTarget.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F5838 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 * Callees:
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01CB090 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F5D54 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

void __fastcall ProcessLostCaptureList(
        unsigned __int16 a1,
        int a2,
        const struct tagPOINTERINPUTFRAME *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // r14
  struct tagINPUTPOINTERNODE *NodeById; // rax
  __int64 v10; // r8
  _QWORD **v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  HWND v14; // rbx
  _QWORD *v15; // rax

  v5 = a4;
  while ( 1 )
  {
    NodeById = FindNodeById(a1, 0, 0);
    if ( !NodeById || (v11 = (_QWORD **)((char *)NodeById + 136), v12 = *v11, *v11 == v11) )
    {
      v14 = 0LL;
    }
    else
    {
      v13 = *v12;
      v14 = (HWND)v12[2];
      if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v15 = (_QWORD *)v12[1], (_QWORD *)*v15 != v12) )
        __fastfail(3u);
      *v15 = v13;
      *(_QWORD *)(v13 + 8) = v15;
      Win32FreePool(v12, v13, v10);
    }
    if ( !v14 )
      break;
    if ( a2 )
    {
      if ( a3 )
        GeneratePointerMessage(
          (const struct tagPOINTERINFONODE *)(*((_QWORD *)a3 + 11) + 216 * v5),
          (*(_DWORD *)(*((_QWORD *)a3 + 11) + 216 * v5 + 56) != 5) - 1LL,
          0x253u,
          a5,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a3 + 13) + 276LL), 6),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a3 + 13) + 276LL), 7),
          v14);
    }
  }
}
