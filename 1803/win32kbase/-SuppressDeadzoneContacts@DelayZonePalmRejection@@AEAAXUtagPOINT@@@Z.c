/*
 * XREFs of ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C012D644
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012CD3C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C011DA20 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 */

void __fastcall DelayZonePalmRejection::SuppressDeadzoneContacts(DelayZonePalmRejection *this, struct tagPOINT a2)
{
  struct CPointerInputFrame *v2; // rdi
  struct CPointerInputFrame *v4; // rbp
  struct CPointerInputFrame *v5; // rsi
  struct _LIST_ENTRY **Next; // rax

  v2 = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
  v4 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
  v5 = 0LL;
  WPP_RECORDER_SF_(*((_QWORD *)this + 14), 4u, 0xDu, 0x1Du, (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids);
  if ( v2 )
  {
    do
    {
      if ( v2 == v4 )
        break;
      Next = CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(gpTouchProcessor, v5, v2, a2);
      v5 = v2;
      v2 = (struct CPointerInputFrame *)Next;
    }
    while ( Next );
    if ( v2 )
      CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(gpTouchProcessor, v5, v2, a2);
  }
}
