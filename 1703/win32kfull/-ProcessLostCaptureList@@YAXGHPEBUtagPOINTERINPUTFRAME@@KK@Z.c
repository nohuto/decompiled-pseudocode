/*
 * XREFs of ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C0199A80
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0008530 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01E9898 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 * Callees:
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01C58C4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01E9DBC (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
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
  _QWORD **v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  HWND v13; // rbx
  _QWORD *v14; // rax

  v5 = a4;
  while ( 1 )
  {
    NodeById = FindNodeById(a1, 0, 0);
    if ( !NodeById || (v10 = (_QWORD **)((char *)NodeById + 136), v11 = *v10, *v10 == v10) )
    {
      v13 = 0LL;
    }
    else
    {
      v12 = *v11;
      v13 = (HWND)v11[2];
      v14 = (_QWORD *)v11[1];
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v14 != v11 )
        __fastfail(3u);
      *v14 = v12;
      *(_QWORD *)(v12 + 8) = v14;
      Win32FreePool(v11);
    }
    if ( !v13 )
      break;
    if ( a2 )
    {
      if ( a3 )
        GeneratePointerMessage(
          (const struct tagPOINTERINFONODE *)(*((_QWORD *)a3 + 11) + 216 * v5),
          (*(_DWORD *)(*((_QWORD *)a3 + 11) + 216 * v5 + 56) != 5) - 1LL,
          0x253u,
          a5,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a3 + 13) + 260LL), 6),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a3 + 13) + 260LL), 7),
          v13);
    }
  }
}
