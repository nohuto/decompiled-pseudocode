/*
 * XREFs of ?ndisNumNbsInNblChain@@YAKPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00543FC
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0001060 (NdisSendNetBufferLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisNumNbsInNblChain(struct _NET_BUFFER_LIST *Alignment)
{
  __int64 result; // rax
  _NET_BUFFER *FirstNetBuffer; // rdx
  int v3; // r8d

  result = 0LL;
  while ( Alignment )
  {
    FirstNetBuffer = Alignment->FirstNetBuffer;
    v3 = 0;
    while ( FirstNetBuffer )
    {
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      ++v3;
    }
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    result = (unsigned int)(v3 + result);
  }
  return result;
}
