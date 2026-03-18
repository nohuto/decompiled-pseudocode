/*
 * XREFs of ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C020BB58
 * Callers:
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C020BAF8 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z @ 0x1C021D734 (-OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4CF4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

__int64 __fastcall Pointer::GetPointerInfoByPointerMsgId(
        Pointer *this,
        const struct tagPOINTER_INFO **a2,
        const struct tagPOINTER_INFO **a3)
{
  unsigned int v3; // ebx
  const struct tagPOINTER_INFO *PointerInfo; // rax
  struct _LIST_ENTRY *FrameById; // rax
  __int64 v7; // r9

  v3 = 0;
  *a2 = 0LL;
  if ( (gdwMitConfig & 4) == 0 )
  {
    if ( this )
    {
      FrameById = FindFrameById(*((_DWORD *)this + 7));
      if ( FrameById )
      {
        *a2 = (const struct tagPOINTER_INFO *)(&FrameById[5].Blink[3].Blink + 27 * *(unsigned int *)(v7 + 32));
        return v3;
      }
    }
    return (unsigned int)-1073741811;
  }
  PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (unsigned __int64)this);
  *a2 = PointerInfo;
  if ( !PointerInfo )
    return (unsigned int)-1073741811;
  return v3;
}
