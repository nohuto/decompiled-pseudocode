/*
 * XREFs of ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18002E598
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18002D650 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18002E094 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x180025AC4 (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::UpdateMmcssPartners(CComposition *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v4; // esi
  int updated; // eax
  int v6; // edi
  int v7; // eax
  int v8; // edi

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 240LL);
  if ( !v2 )
    goto LABEL_5;
  if ( !*(_BYTE *)(v2 + 24) && *(_QWORD *)(v2 + 8) )
  {
    SetEvent(*(HANDLE *)(v2 + 112));
LABEL_5:
    v3 = 0;
    v4 = 0;
    goto LABEL_6;
  }
  v3 = -2147467260;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467260, 0x1D6u);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467260, 0x318u);
  v4 = -2147467260;
LABEL_6:
  updated = CManipulationManager::UpdateMMCSSTask((CManipulationManager *)v2);
  v6 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x31Au);
  if ( !v4 )
    v3 = v6;
  v7 = CSurfaceManager::ResetTokenThread(*((CSurfaceManager **)this + 10));
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x31Cu);
  if ( !v3 || v3 >= 0 && v8 < 0 )
    return (unsigned int)v8;
  return (unsigned int)v3;
}
