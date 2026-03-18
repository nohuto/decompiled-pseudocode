/*
 * XREFs of ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01EA114
 * Callers:
 *     DereferencePointerInputFrameAndMessageData @ 0x1C019A9E0 (DereferencePointerInputFrameAndMessageData.c)
 *     UnreferenceUndispatchedFrame @ 0x1C019B190 (UnreferenceUndispatchedFrame.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

PointerList *__fastcall PointerList::GetPrevMsgId(PointerList *this)
{
  while ( 1 )
  {
    this = *(PointerList **)this;
    if ( !*((_WORD *)this + 8) )
      break;
    if ( (*((_DWORD *)this + 9) & 0x10) == 0 )
      return this;
  }
  return 0LL;
}
