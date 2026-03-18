/*
 * XREFs of FreeClientOnWindowDestruction @ 0x1C005D650
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeClientOnWindowDestruction(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v3; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v5; // rdi

  Flink = gPointerDeviceClients.Flink;
  while ( Flink != &gPointerDeviceClients )
  {
    v5 = Flink - 1;
    Flink = Flink->Flink;
    if ( a1 == v5->Flink )
    {
      HMAssignmentUnlock(v5);
      v3 = v5[1].Flink;
      Blink = v5[1].Blink;
      if ( v3->Blink != &v5[1] || Blink->Flink != &v5[1] )
        __fastfail(3u);
      Blink->Flink = v3;
      v3->Blink = Blink;
      Win32FreePool(v5);
    }
  }
}
