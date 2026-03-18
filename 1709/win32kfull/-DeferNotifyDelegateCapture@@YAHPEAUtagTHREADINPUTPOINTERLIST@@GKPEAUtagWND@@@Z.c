/*
 * XREFs of ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01CAD94
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01BF628 (_DelegateCapturePointers.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D004 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F5F6C (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 */

__int64 __fastcall DeferNotifyDelegateCapture(struct _LIST_ENTRY *a1, __int16 a2, int a3, struct tagWND *a4)
{
  unsigned int PointerDownFrame; // ebx
  struct _LIST_ENTRY *ThreadPointerData; // rdi
  struct tagWND *v9; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 result; // rax
  int *v12; // [rsp+20h] [rbp-28h]
  struct tagWND *v13; // [rsp+50h] [rbp+8h] BYREF

  PointerDownFrame = 0;
  ThreadPointerData = FindThreadPointerData(a1, a2);
  if ( !ThreadPointerData )
    return 0LL;
  if ( (gdwMitConfig & 4) != 0 )
  {
    CTouchProcessor::GetPointerCapture(
      gpTouchProcessor,
      (unsigned __int64)ThreadPointerData[1].Blink,
      0,
      (void **)&v13,
      0LL);
    v9 = v13 ? (struct tagWND *)*((_QWORD *)v13 + 10) : 0LL;
  }
  else
  {
    PointerList::GetPointerCapture((PointerList *)ThreadPointerData[1].Blink, 0LL, (int)&v13, 0LL, v12);
    v9 = v13;
  }
  if ( !v9 || v9 != a4 )
    return 0LL;
  if ( (gdwMitConfig & 4) != 0 )
  {
    PointerDownFrame = CTouchProcessor::GetPointerDownFrame(
                         gpTouchProcessor,
                         (unsigned __int64)ThreadPointerData[1].Blink);
  }
  else
  {
    Blink = ThreadPointerData[1].Blink[2].Blink;
    if ( Blink )
      PointerDownFrame = (unsigned int)Blink[1].Blink;
  }
  if ( a3 != PointerDownFrame )
    return 0LL;
  LODWORD(ThreadPointerData[3].Flink) |= 4u;
  result = 1LL;
  HIDWORD(a1[2].Flink) = 1;
  return result;
}
