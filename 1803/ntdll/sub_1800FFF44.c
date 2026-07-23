/*
 * XREFs of sub_1800FFF44 @ 0x1800FFF44
 * Callers:
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 */

char __fastcall sub_1800FFF44(__int64 a1)
{
  __int64 v3; // rcx
  ULONG_PTR v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (PVOID)a1 == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", (const void *)a1);
    return 0;
  }
  if ( !sub_18001FC58((_DWORD *)a1, "RtlDestroyHeap") || !(unsigned __int8)sub_18010120C(a1) )
    return 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( *(_QWORD *)(a1 + 216) )
  {
    v4 = 0LL;
    sub_18005CD8C(v3, (PVOID *)(a1 + 216), &v4, 0x8000u);
  }
  return 1;
}
