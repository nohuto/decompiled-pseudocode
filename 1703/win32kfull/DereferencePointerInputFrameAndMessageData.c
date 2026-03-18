/*
 * XREFs of DereferencePointerInputFrameAndMessageData @ 0x1C019A9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C0199408 (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6964 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01EA114 (-GetPrevMsgId@PointerList@@YA_K_K@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01EA574 (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall DereferencePointerInputFrameAndMessageData(struct tagPOINTERINPUTFRAME *a1)
{
  const struct tagPOINTERINFONODE *v1; // rdi
  unsigned int v2; // ebp
  struct tagPOINTERINPUTFRAME *v3; // rbx
  _DWORD *v4; // rsi
  __int64 CurrentProcess; // rax
  unsigned __int64 v6; // rdx
  int v7; // r14d
  unsigned __int64 PrevMsgId; // rax

  v1 = (const struct tagPOINTERINFONODE *)*((_QWORD *)a1 + 11);
  v2 = 0;
  v3 = a1;
  if ( *((_DWORD *)a1 + 10) )
  {
    v4 = (_DWORD *)((char *)v1 + 68);
    do
    {
      if ( (*((_DWORD *)v3 + 18) & 1) != 0 )
      {
        if ( (*(_DWORD *)v1 & 0x2000) == 0 )
        {
          a1 = (struct tagPOINTERINPUTFRAME *)(*((_QWORD *)v3 + 11) + 216LL * v2);
          *(_DWORD *)a1 |= 0x2000u;
          *((_QWORD *)a1 + 2) = 0LL;
          ++*((_DWORD *)v3 + 11);
        }
      }
      else
      {
        CurrentProcess = PsGetCurrentProcess(a1);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess)
          || !(unsigned int)IsManipulationThreadNode(v1) && (*(v4 - 16) & 0x200) == 0 )
        {
          a1 = *(struct tagPOINTERINPUTFRAME **)(v4 - 13);
          if ( !a1
            || (v6 = *(unsigned int *)(*((_QWORD *)v3 + 12) + 40LL * (unsigned int)*(v4 - 15) + 20), (v6 & 4) != 0) )
          {
            if ( (unsigned int)IsPointerInfoNodeValid(v1) )
              PointerFrameList::FreePointerInfoNode(a1, *((_DWORD *)v3 + 8));
          }
          else
          {
            v7 = *v4 & 2;
            if ( (*v4 & 1) == 0 )
            {
              PrevMsgId = PointerList::GetPrevMsgId(a1, v6);
              if ( PrevMsgId )
              {
                a1 = (struct tagPOINTERINPUTFRAME *)*(unsigned int *)(PrevMsgId + 36);
                if ( ((unsigned __int8)a1 & 0x20) != 0 )
                  PointerList::UnreferenceMsgData(PrevMsgId);
              }
            }
            if ( !v7 )
              PointerList::UnreferenceMsgData(*(_QWORD *)(v4 - 13));
          }
        }
      }
      ++v2;
      v1 = (const struct tagPOINTERINFONODE *)((char *)v1 + 216);
      v4 += 54;
    }
    while ( v2 < *((_DWORD *)v3 + 10) );
  }
  return UnreferenceFrameInt(v3);
}
