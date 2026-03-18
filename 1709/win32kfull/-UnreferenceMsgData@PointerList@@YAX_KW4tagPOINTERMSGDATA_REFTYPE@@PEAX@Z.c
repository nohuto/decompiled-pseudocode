/*
 * XREFs of ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F648C
 * Callers:
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C01A3FFC (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 *     DereferencePointerInputFrameAndMessageData @ 0x1C01A6620 (DereferencePointerInputFrameAndMessageData.c)
 *     UnreferenceUndispatchedFrame @ 0x1C01A6E54 (UnreferenceUndispatchedFrame.c)
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC234 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F5838 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 * Callees:
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C01A4F10 (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01F5DA8 (-FreeMsgData@PointerList@@YAX_K@Z.c)
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
