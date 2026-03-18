/*
 * XREFs of ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18005CCA8
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18005BBA4 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18005C754 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18004E95C (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800B63E8 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 */

__int64 __fastcall CComposition::UpdateMmcssPartners(CComposition *this)
{
  int v1; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // edi
  int updated; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v1 = 0;
  v3 = *((_QWORD *)this + 7);
  if ( (dword_18023E9D0 & 4) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 232);
    if ( !v4 )
    {
LABEL_6:
      v5 = 0;
      goto LABEL_7;
    }
    if ( !*(_BYTE *)(v4 + 24) && *(_QWORD *)(v4 + 8) )
    {
LABEL_5:
      SetEvent(*(HANDLE *)(v4 + 112));
      goto LABEL_6;
    }
    v11 = 424;
  }
  else
  {
    v4 = *(_QWORD *)(v3 + 216);
    if ( !v4 )
      goto LABEL_6;
    if ( !*(_BYTE *)(v4 + 24) && *(_QWORD *)(v4 + 8) )
      goto LABEL_5;
    v11 = 417;
  }
  v1 = -2147467260;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, v11);
  v5 = -2147467260;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, 0x341u);
LABEL_7:
  updated = CManipulationManager::UpdateMMCSSTask((CManipulationManager *)v4);
  v7 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x343u);
  if ( !v1 )
    v5 = v7;
  v8 = CSurfaceManager::ResetTokenThread(*((CSurfaceManager **)this + 5));
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x345u);
  if ( !v5 || v5 >= 0 && v9 < 0 )
    return (unsigned int)v9;
  return (unsigned int)v5;
}
