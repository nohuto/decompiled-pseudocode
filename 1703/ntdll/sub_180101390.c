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

char __fastcall sub_180101390(PVOID *BaseAddress)
{
  __int64 v3; // rcx
  ULONG_PTR v4; // [rsp+30h] [rbp+8h] BYREF

  if ( BaseAddress == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", BaseAddress);
    return 0;
  }
  if ( !sub_18001F9B0(BaseAddress, "RtlDestroyHeap") || !sub_180090710(BaseAddress, 0) )
    return 0;
  *((_DWORD *)BaseAddress + 38) = 0;
  if ( BaseAddress[27] )
  {
    v4 = 0LL;
    sub_18001E5E0(v3, BaseAddress + 27, &v4, 0x8000u);
  }
  return 1;
}
