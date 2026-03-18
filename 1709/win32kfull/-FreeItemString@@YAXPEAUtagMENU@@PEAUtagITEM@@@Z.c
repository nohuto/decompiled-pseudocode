/*
 * XREFs of ?FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C009C6D4
 * Callers:
 *     MNFreeItem @ 0x1C009C568 (MNFreeItem.c)
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeItemString(struct tagMENU *a1, struct tagITEM *a2)
{
  void *v2; // r8

  v2 = (void *)*((_QWORD *)a2 + 5);
  if ( v2 )
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v2);
  *((_QWORD *)a2 + 5) = 0LL;
}
