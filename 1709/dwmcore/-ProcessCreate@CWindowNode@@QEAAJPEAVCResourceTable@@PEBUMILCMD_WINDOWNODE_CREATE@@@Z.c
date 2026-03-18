/*
 * XREFs of ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x18009C7CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180007F80 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x18009B908 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowNode::ProcessCreate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_CREATE *a3)
{
  int v4; // edx
  __int64 v5; // r8
  int ProcessAttribution; // eax
  signed int v7; // eax
  unsigned int v8; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  *((_QWORD *)this + 74) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 75) = *((_QWORD *)a3 + 1);
  v4 = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 154) = v4;
  v5 = *((_QWORD *)a3 + 3);
  *((_QWORD *)this + 76) = v5;
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(
                         qword_180272960,
                         v4,
                         v5,
                         (struct CProcessAttribution **)this + 78);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr);
  v7 = CWindowNode::WindowManagerAddRemove(this, 1);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x9Eu);
  return v8;
}
