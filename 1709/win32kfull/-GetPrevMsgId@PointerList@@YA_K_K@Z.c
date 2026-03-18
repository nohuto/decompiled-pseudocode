/*
 * XREFs of ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01F60AC
 * Callers:
 *     DereferencePointerInputFrameAndMessageData @ 0x1C01A6620 (DereferencePointerInputFrameAndMessageData.c)
 *     UnreferenceUndispatchedFrame @ 0x1C01A6E54 (UnreferenceUndispatchedFrame.c)
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
