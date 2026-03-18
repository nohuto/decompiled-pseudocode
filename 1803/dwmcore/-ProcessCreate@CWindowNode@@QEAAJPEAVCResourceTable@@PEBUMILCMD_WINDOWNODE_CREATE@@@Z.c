/*
 * XREFs of ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x1800931D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180022498 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180092B98 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowNode::ProcessCreate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_CREATE *a3)
{
  struct CProcessAttribution **v3; // rdi
  bool v4; // zf
  int v6; // edx
  __int64 v7; // r8
  int ProcessAttribution; // eax
  int v9; // eax
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct CProcessAttribution **)((char *)this + 632);
  v4 = *((_QWORD *)this + 79) == 0LL;
  *((_QWORD *)this + 75) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 76) = *((_QWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 156) = v6;
  v7 = *((_QWORD *)a3 + 3);
  *((_QWORD *)this + 77) = v7;
  if ( !v4 )
  {
    RaiseFailFastException(0LL, 0LL, 0);
    v7 = *((_QWORD *)this + 77);
    v6 = *((_DWORD *)this + 156);
  }
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(qword_1802D60A0, v6, v7, v3);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr);
  v9 = CWindowNode::WindowManagerAddRemove(this, 1);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Au);
  return v10;
}
