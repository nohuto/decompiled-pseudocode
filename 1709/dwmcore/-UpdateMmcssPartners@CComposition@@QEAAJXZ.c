/*
 * XREFs of ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1800ABA7C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800AABCC (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1800AB5E0 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18000A170 (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 */

__int64 __fastcall CComposition::UpdateMmcssPartners(CComposition *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // edi
  int v5; // esi
  signed int updated; // eax
  signed int v7; // ebp
  signed int v8; // eax
  int v9; // esi
  unsigned int v11; // [rsp+20h] [rbp-28h]

  v2 = *((_QWORD *)this + 12);
  if ( (dword_18027278C & 4) != 0 )
  {
    v3 = *(_QWORD *)(v2 + 232);
    if ( !v3 )
    {
LABEL_6:
      v4 = 0;
      v5 = 0;
      goto LABEL_7;
    }
    if ( !*(_BYTE *)(v3 + 24) && *(_QWORD *)(v3 + 8) )
    {
LABEL_5:
      SetEvent(*(HANDLE *)(v3 + 112));
      goto LABEL_6;
    }
    v11 = 560;
  }
  else
  {
    v3 = *(_QWORD *)(v2 + 216);
    if ( !v3 )
      goto LABEL_6;
    if ( !*(_BYTE *)(v3 + 24) && *(_QWORD *)(v3 + 8) )
      goto LABEL_5;
    v11 = 553;
  }
  v4 = -2147467260;
  v5 = -2147467260;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004004, v11);
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004004, 0x311u);
LABEL_7:
  updated = CManipulationManager::UpdateMMCSSTask((CManipulationManager *)v3);
  v7 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x313u);
  if ( !v5 )
    v4 = v7;
  v8 = CSurfaceManager::ResetTokenThread(*((CSurfaceManager **)this + 10));
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x315u);
  if ( !v4 || v4 >= 0 && v9 < 0 )
    return (unsigned int)v9;
  return (unsigned int)v4;
}
