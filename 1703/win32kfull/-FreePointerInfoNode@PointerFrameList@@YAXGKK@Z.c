/*
 * XREFs of ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C0199408
 * Callers:
 *     DereferencePointerInputFrameAndMessageData @ 0x1C019A9E0 (DereferencePointerInputFrameAndMessageData.c)
 *     UnreferenceUndispatchedFrame @ 0x1C019B190 (UnreferenceUndispatchedFrame.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01EA574 (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C0199368 (-FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

void __fastcall PointerFrameList::FreePointerInfoNode(PointerFrameList *this, int a2)
{
  struct _LIST_ENTRY *FrameById; // rax
  __int64 v3; // r9
  struct _LIST_ENTRY *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  struct _LIST_ENTRY *Blink; // rax

  FrameById = FindFrameById(a2);
  v4 = FrameById;
  if ( FrameById )
  {
    _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
    v5 = 216 * v3;
    v6 = (__int64)FrameById[5].Blink + 216 * v3;
    if ( *(_DWORD *)(v6 + 124) > 1u )
      FreeHistory(&FrameById->Flink, (const struct tagPOINTERINFONODE *)v6);
    Blink = v4[5].Blink;
    *(_DWORD *)((char *)&Blink->Flink + v5) |= 0x2000u;
    *(struct _LIST_ENTRY **)((char *)&Blink[1].Flink + v5) = 0LL;
    ++HIDWORD(v4[2].Blink);
    UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v4);
  }
}
