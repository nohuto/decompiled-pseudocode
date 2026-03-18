/*
 * XREFs of ?UnreferenceUndispatchedFrameList@@YAXXZ @ 0x1C00FF0C0
 * Callers:
 *     <none>
 * Callees:
 *     UnreferenceUndispatchedFrame @ 0x1C01A6E54 (UnreferenceUndispatchedFrame.c)
 */

void UnreferenceUndispatchedFrameList(void)
{
  struct _LIST_ENTRY *v0; // rbx
  struct _LIST_ENTRY *v1; // rdx
  struct _LIST_ENTRY *Blink; // rax

  v0 = (struct _LIST_ENTRY *)(gptiCurrent + 1096LL);
  while ( v0->Flink != v0 )
  {
    v1 = *(struct _LIST_ENTRY **)(gptiCurrent + 1104LL);
    if ( v1->Flink != v0 || (Blink = v1->Blink, Blink->Flink != v1) )
      __fastfail(3u);
    *(_QWORD *)(gptiCurrent + 1104LL) = Blink;
    Blink->Flink = v0;
    if ( (gdwMitConfig & 4) != 0 )
      CTouchProcessor::UnreferenceUndispatchedFrame(gpTouchProcessor, v1);
    else
      UnreferenceUndispatchedFrame(v1);
  }
}
