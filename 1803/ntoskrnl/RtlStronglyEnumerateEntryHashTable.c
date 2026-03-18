/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x140289420
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x14006C56C (RtlpGetChainHead.c)
 */

_QWORD *__fastcall RtlStronglyEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r9
  __int64 v4; // r11
  _QWORD *v5; // rcx
  __int64 ChainHead; // rdx
  _QWORD *v7; // rcx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  v3 = a2;
  v4 = a1;
  if ( v2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  while ( 1 )
  {
    if ( v2 == *(_DWORD *)(v3 + 32) )
    {
      v5 = *(_QWORD **)v3;
      ChainHead = *(_QWORD *)(v3 + 24);
    }
    else
    {
      ChainHead = RtlpGetChainHead(v4, v2);
      v5 = (_QWORD *)ChainHead;
    }
    v7 = (_QWORD *)*v5;
    if ( v7 != (_QWORD *)ChainHead )
      break;
LABEL_8:
    if ( ++v2 >= *(_DWORD *)(v4 + 8) )
      return 0LL;
  }
  while ( !v7[2] )
  {
    v7 = (_QWORD *)*v7;
    if ( v7 == (_QWORD *)ChainHead )
      goto LABEL_8;
  }
  *(_DWORD *)(v3 + 32) = v2;
  result = v7;
  *(_QWORD *)(v3 + 24) = ChainHead;
  *(_QWORD *)v3 = v7;
  return result;
}
