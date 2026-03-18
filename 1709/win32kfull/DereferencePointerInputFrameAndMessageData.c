/*
 * XREFs of DereferencePointerInputFrameAndMessageData @ 0x1C01A6620
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C01A4F10 (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB660 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01F60AC (-GetPrevMsgId@PointerList@@YA_K_K@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F648C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall DereferencePointerInputFrameAndMessageData(struct tagPOINTERINPUTFRAME *a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  struct tagPOINTERINPUTFRAME *i; // rbx
  __int64 CurrentProcess; // rax
  int v6; // ebp
  unsigned __int64 PrevMsgId; // rax

  v2 = *((_QWORD *)a1 + 11);
  v3 = 0;
  for ( i = a1; v3 < *((_DWORD *)i + 10); v2 += 216LL )
  {
    if ( (*((_DWORD *)i + 18) & 1) != 0 )
    {
      if ( (*(_DWORD *)v2 & 0x2000) == 0 )
      {
        a1 = (struct tagPOINTERINPUTFRAME *)(*((_QWORD *)i + 11) + 216LL * v3);
        *(_DWORD *)a1 |= 0x2000u;
        *((_QWORD *)a1 + 2) = 0LL;
        ++*((_DWORD *)i + 11);
      }
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess(a1, a2);
      if ( !(unsigned int)IsProcessDwm(CurrentProcess)
        || !(unsigned int)IsManipulationThreadNode((const struct tagPOINTERINFONODE *)v2)
        && (*(_DWORD *)(v2 + 4) & 0x200) == 0 )
      {
        a1 = *(struct tagPOINTERINPUTFRAME **)(v2 + 16);
        if ( !a1 || (a2 = *(unsigned int *)(*((_QWORD *)i + 12) + 40LL * *(unsigned int *)(v2 + 8) + 20), (a2 & 4) != 0) )
        {
          if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v2) )
            PointerFrameList::FreePointerInfoNode(a1, *((_DWORD *)i + 8));
        }
        else
        {
          v6 = *(_DWORD *)(v2 + 68) & 2;
          if ( (*(_DWORD *)(v2 + 68) & 1) == 0 )
          {
            PrevMsgId = PointerList::GetPrevMsgId(a1, a2);
            if ( PrevMsgId )
            {
              a1 = (struct tagPOINTERINPUTFRAME *)*(unsigned int *)(PrevMsgId + 36);
              if ( ((unsigned __int8)a1 & 0x20) != 0 )
                PointerList::UnreferenceMsgData(PrevMsgId, 1LL);
            }
          }
          if ( !v6 )
            PointerList::UnreferenceMsgData(*(_QWORD *)(v2 + 16), 1LL);
        }
      }
    }
    ++v3;
  }
  return UnreferenceFrameInt(i);
}
