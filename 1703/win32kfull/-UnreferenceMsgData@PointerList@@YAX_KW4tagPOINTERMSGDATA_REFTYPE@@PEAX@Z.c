/*
 * XREFs of ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01EA574
 * Callers:
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C0198454 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 *     DereferencePointerInputFrameAndMessageData @ 0x1C019A9E0 (DereferencePointerInputFrameAndMessageData.c)
 *     UnreferenceUndispatchedFrame @ 0x1C019B190 (UnreferenceUndispatchedFrame.c)
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C7618 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01E9898 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 * Callees:
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C0199408 (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01E9E10 (-FreeMsgData@PointerList@@YAX_K@Z.c)
 */

void __fastcall PointerList::UnreferenceMsgData(__int64 a1, int a2)
{
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 36) &= ~0x20u;
  --*(_BYTE *)(a2 + a1 + 48);
  if ( !*(_DWORD *)(a1 + 24) )
  {
    if ( (*(_DWORD *)(a1 + 36) & 0x10) == 0 )
      PointerFrameList::FreePointerInfoNode((PointerFrameList *)a1, *(_DWORD *)(a1 + 28));
    PointerList::FreeMsgData((PointerList *)a1);
  }
}
