/*
 * XREFs of ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x18009B908
 * Callers:
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x1800993DC (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x18009C7CC (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800B6924 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800B69AC (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 */

__int64 __fastcall CWindowNode::WindowManagerAddRemove(CWindowNode *this, char a2)
{
  unsigned int v2; // ebx
  signed int v4; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 74) )
  {
    if ( a2 )
    {
      v4 = CWindowManager::AddWindowNode(*(CWindowManager **)(*((_QWORD *)this + 2) + 88LL), this);
      v2 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x5A2u);
    }
    else
    {
      CWindowManager::RemoveWindowNode(*(CWindowManager **)(*((_QWORD *)this + 2) + 88LL), this);
    }
  }
  return v2;
}
