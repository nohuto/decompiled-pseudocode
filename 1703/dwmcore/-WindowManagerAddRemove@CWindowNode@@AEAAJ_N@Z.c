/*
 * XREFs of ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180052F50
 * Callers:
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180050554 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x180053AD0 (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800C1734 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800C17BC (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 */

__int64 __fastcall CWindowNode::WindowManagerAddRemove(CWindowNode *this, char a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 72) )
  {
    if ( a2 )
    {
      v4 = CWindowManager::AddWindowNode(*(CWindowManager **)(*((_QWORD *)this + 2) + 48LL), this);
      v2 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x5B7u);
    }
    else
    {
      CWindowManager::RemoveWindowNode(*(CWindowManager **)(*((_QWORD *)this + 2) + 48LL), this);
    }
  }
  return v2;
}
