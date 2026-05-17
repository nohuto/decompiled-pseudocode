/*
 * XREFs of sub_180101390 @ 0x180101390
 * Callers:
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 * Callees:
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 */

char __fastcall sub_180101390(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (void *)a1 == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", (const void *)a1);
    return 0;
  }
  if ( !sub_18001F9B0((_DWORD *)a1, "RtlDestroyHeap") || !sub_180090710(a1, 0) )
    return 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( *(_QWORD *)(a1 + 216) )
  {
    v4 = 0LL;
    sub_18001E5E0(v3, (_QWORD *)(a1 + 216), &v4, 0x8000LL);
  }
  return 1;
}
