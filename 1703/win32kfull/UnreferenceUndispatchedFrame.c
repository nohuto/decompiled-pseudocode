/*
 * XREFs of UnreferenceUndispatchedFrame @ 0x1C019B190
 * Callers:
 *     ?UnreferenceUndispatchedFrameList@@YAXXZ @ 0x1C00F24A0 (-UnreferenceUndispatchedFrameList@@YAXXZ.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C01182F4 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C0199408 (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6964 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ResetEdgyDataFrames@Edgy@@YAXQEAX@Z @ 0x1C01CD9E4 (-ResetEdgyDataFrames@Edgy@@YAXQEAX@Z.c)
 *     ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01EA114 (-GetPrevMsgId@PointerList@@YA_K_K@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01EA574 (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
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
      CurrentProcess = PsGetCurrentProcess(a1);
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
                PointerList::UnreferenceMsgData(PrevMsgId);
            }
          }
          if ( !v6 )
            PointerList::UnreferenceMsgData(*(_QWORD *)(v4 + 16));
        }
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)v2 + 10) );
  }
  Edgy::ResetEdgyDataFrames((Edgy *)v2, (void *const)a2);
  return UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v2);
}
