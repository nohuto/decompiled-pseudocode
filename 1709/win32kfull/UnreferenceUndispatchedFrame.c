/*
 * XREFs of UnreferenceUndispatchedFrame @ 0x1C01A6E54
 * Callers:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     ?UnreferenceUndispatchedFrameList@@YAXXZ @ 0x1C00FF0C0 (-UnreferenceUndispatchedFrameList@@YAXXZ.c)
 * Callees:
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C01A4F10 (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB660 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ResetEdgyDataFrames@Edgy@@YAXQEAX@Z @ 0x1C01D1B7C (-ResetEdgyDataFrames@Edgy@@YAXQEAX@Z.c)
 *     ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01F60AC (-GetPrevMsgId@PointerList@@YA_K_K@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F648C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall UnreferenceUndispatchedFrame(PointerFrameList *a1, unsigned __int64 a2)
{
  char *v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 CurrentProcess; // rax
  int v6; // ebp
  unsigned __int64 PrevMsgId; // rax

  v2 = (char *)a1 - 16;
  v3 = 0;
  if ( *((_DWORD *)a1 + 6) )
  {
    do
    {
      v4 = *((_QWORD *)v2 + 11) + 216LL * v3;
      CurrentProcess = PsGetCurrentProcess(a1, a2);
      if ( !(unsigned int)IsProcessDwm(CurrentProcess)
        || !(unsigned int)IsManipulationThreadNode((const struct tagPOINTERINFONODE *)v4)
        && (*(_DWORD *)(v4 + 4) & 0x200) == 0 )
      {
        a1 = *(PointerFrameList **)(v4 + 16);
        if ( !a1
          || (a2 = *(unsigned int *)(*((_QWORD *)v2 + 12) + 40LL * *(unsigned int *)(v4 + 8) + 20), (a2 & 4) != 0) )
        {
          if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v4) )
            PointerFrameList::FreePointerInfoNode(a1, *((_DWORD *)v2 + 8));
        }
        else
        {
          v6 = *(_DWORD *)(v4 + 68) & 2;
          if ( (*(_DWORD *)(v4 + 68) & 1) == 0 )
          {
            PrevMsgId = PointerList::GetPrevMsgId(a1, a2);
            if ( PrevMsgId )
            {
              a1 = (PointerFrameList *)*(unsigned int *)(PrevMsgId + 36);
              if ( ((unsigned __int8)a1 & 0x20) != 0 )
                PointerList::UnreferenceMsgData(PrevMsgId, 1LL);
            }
          }
          if ( !v6 )
            PointerList::UnreferenceMsgData(*(_QWORD *)(v4 + 16), 1LL);
        }
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)v2 + 10) );
  }
  Edgy::ResetEdgyDataFrames((Edgy *)v2, (void *const)a2);
  return UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v2);
}
