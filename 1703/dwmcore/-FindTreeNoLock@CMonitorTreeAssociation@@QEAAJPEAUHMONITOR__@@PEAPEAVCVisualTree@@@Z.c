/*
 * XREFs of ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x180004AE0
 * Callers:
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800048C4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18013F5F4 (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 *     ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x180144A10 (-FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::FindTreeNoLock(
        CMonitorTreeAssociation *this,
        HMONITOR a2,
        struct CVisualTree **a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rcx
  unsigned int v8; // ecx
  __int64 v9; // r10

  *a3 = 0LL;
  v4 = *((_DWORD *)this + 10);
  v5 = -2147024890;
  if ( v4 )
  {
    if ( a2 )
    {
      v8 = 0;
      v9 = *((_QWORD *)this + 2);
      while ( *(HMONITOR *)(v9 + 16LL * v8) != a2 )
      {
        if ( ++v8 >= v4 )
          return v5;
      }
      v6 = *(volatile signed __int32 **)(v9 + 16LL * v8 + 8);
    }
    else
    {
      v6 = *(volatile signed __int32 **)(*((_QWORD *)this + 2) + 8LL);
    }
    *a3 = (struct CVisualTree *)v6;
    _InterlockedIncrement(v6 + 2);
    return 0;
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x8Eu);
  }
  return v5;
}
