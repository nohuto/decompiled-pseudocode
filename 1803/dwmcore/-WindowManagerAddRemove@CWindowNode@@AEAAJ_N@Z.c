/*
 * XREFs of ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180092B98
 * Callers:
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180090308 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x1800931D8 (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800BFF68 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800BFFEC (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 */

__int64 __fastcall CWindowNode::WindowManagerAddRemove(CWindowNode *this, char a2)
{
  unsigned int v2; // ebx
  bool v3; // zf
  CWindowManager *v5; // rcx
  int v6; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 75) )
  {
    v3 = a2 == 0;
    v5 = *(CWindowManager **)(*((_QWORD *)this + 2) + 88LL);
    if ( v3 )
    {
      CWindowManager::RemoveWindowNode(v5, this);
    }
    else
    {
      v6 = CWindowManager::AddWindowNode(v5, this);
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3A2u);
    }
  }
  return v2;
}
