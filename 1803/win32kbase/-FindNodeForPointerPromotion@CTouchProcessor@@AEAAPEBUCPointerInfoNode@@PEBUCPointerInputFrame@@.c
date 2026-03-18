/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01116B8
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C0117828 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1C014110C (ApiSetPointerPromotionGetCurrentPointerId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int16 CurrentPointerId; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebp
  CPointerInfoNode *v8; // rbx
  unsigned __int64 v9; // rcx
  CPointerInfoNode *v10; // rcx

  CurrentPointerId = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 14) + 24LL) == 7 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 20) & 8) == 0 )
  {
    CurrentPointerId = ApiSetPointerPromotionGetCurrentPointerId();
    if ( !CurrentPointerId )
      return 0LL;
  }
  v6 = *((unsigned int *)a2 + 12);
  v7 = 0;
  v8 = (CPointerInfoNode *)*((_QWORD *)a2 + 12);
  if ( !(_DWORD)v6 )
    return 0LL;
  while ( 1 )
  {
    v9 = *((_QWORD *)a2 + 12) + 576 * v6;
    if ( (unsigned __int64)v8 >= v9 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v4);
    if ( (unsigned int)CPointerInfoNode::IsValid(v8)
      && (*(_DWORD *)v8 & 0x1000) == 0
      && ((unsigned int)CPointerInfoNode::IsPrimary(v10) || CurrentPointerId == *((_WORD *)v8 + 118)) )
    {
      break;
    }
    v6 = *((unsigned int *)a2 + 12);
    ++v7;
    v8 = (CPointerInfoNode *)((char *)v8 + 576);
    if ( v7 >= (unsigned int)v6 )
      return 0LL;
  }
  return v8;
}
