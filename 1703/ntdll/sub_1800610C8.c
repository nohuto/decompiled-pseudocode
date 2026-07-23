/*
 * XREFs of sub_1800610C8 @ 0x1800610C8
 * Callers:
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     sub_180100E1C @ 0x180100E1C (sub_180100E1C.c)
 *     sub_180100F68 @ 0x180100F68 (sub_180100F68.c)
 *     sub_180101254 @ 0x180101254 (sub_180101254.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemory @ 0x1800A9760 (RtlCompareMemory.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

char __fastcall sub_1800610C8(PVOID *Src, char a2)
{
  PVOID *v3; // rdi
  size_t v4; // r8
  SIZE_T v5; // rsi
  ULONG_PTR v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  ULONG_PTR v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !byte_18015C7CC )
    return 1;
  v3 = Src + 27;
  if ( Src[27] )
    goto LABEL_5;
  v10 = *((unsigned __int16 *)Src + 105);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3, 0LL, &v10, 0x1000u, 4u) < 0 )
    return 1;
  a2 = 1;
LABEL_5:
  v4 = *((unsigned __int16 *)Src + 105);
  v10 = v4;
  if ( a2 )
  {
    memmove(*v3, Src, v4);
    v6 = v10;
    v5 = v10;
  }
  else
  {
    v5 = RtlCompareMemory(Src, *v3, v4);
    v6 = v10;
  }
  if ( v6 == v5 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap %p - headers modified (%p is %lx instead of %lx)\n",
    Src,
    (char *)Src + v5,
    *(_DWORD *)((char *)Src + v5),
    *(_DWORD *)((char *)*v3 + v5));
  v7 = 0;
  if ( "Entry" )
  {
    v8 = 0LL;
    while ( v5 < *(unsigned int *)((char *)&unk_180110C50 + v8) || v5 >= *((unsigned int *)&unk_180110C50 + 4 * v7 + 4) )
    {
      v8 = 16LL * ++v7;
      if ( !*(_QWORD *)((char *)&unk_180110C50 + v8 + 8) )
        return 0;
    }
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("    This is located in the %s field of the heap header.\n", *((const char **)&unk_180110C50 + 2 * v7 + 1));
  }
  return 0;
}
