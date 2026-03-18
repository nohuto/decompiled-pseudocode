/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C011D2A0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C01223F0 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01224BC (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1C013C8F8 (ApiSetPointerPromotionGetCurrentPointerId.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  CPointerInfoNode *v4; // rcx
  _WORD *v5; // rcx
  int v6; // r8d
  unsigned int v7; // r10d
  __int16 v8; // r9

  if ( *(_DWORD *)(*((_QWORD *)a2 + 14) + 24LL) == 7
    || (*((_DWORD *)a2 + 20) & 8) == 0
    && !(unsigned __int16)ApiSetPointerPromotionGetCurrentPointerId(this, a2, a3, 0LL) )
  {
    return 0LL;
  }
  v4 = (CPointerInfoNode *)*((_QWORD *)a2 + 12);
  if ( !*((_DWORD *)a2 + 12) )
    return 0LL;
  while ( !(unsigned int)CPointerInfoNode::IsValid(v4)
       || (*(_DWORD *)v5 & 0x1000) != 0
       || !(unsigned int)CPointerInfoNode::IsPrimary((CPointerInfoNode *)v5) && v8 != v5[126] )
  {
    v4 = (CPointerInfoNode *)(v5 + 304);
    if ( v6 + 1 >= v7 )
      return 0LL;
  }
  return (const struct CPointerInfoNode *)v5;
}
