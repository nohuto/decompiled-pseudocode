/*
 * XREFs of sub_18002ACD0 @ 0x18002ACD0
 * Callers:
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 *     sub_18002ABD8 @ 0x18002ABD8 (sub_18002ABD8.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_180013330 @ 0x180013330 (sub_180013330.c)
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 */

__int64 *__fastcall sub_18002ACD0(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 *result; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax

  if ( dword_18015D450 >= 1 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    sub_1800FC3E4(1LL);
  }
  v4 = *(_QWORD *)(a1 + 320);
  if ( v4 )
  {
    v6 = *(unsigned int *)(v4 + 8);
    v7 = a2 >> 12;
    while ( v7 >= v6 )
    {
      v8 = *(_QWORD *)v4;
      if ( !*(_QWORD *)v4 )
      {
        LODWORD(v7) = *(_DWORD *)(v4 + 8) - 1;
        return sub_180013330(a1, v4, 0, v7, a2);
      }
      v4 = *(_QWORD *)v4;
      v6 = *(unsigned int *)(v8 + 8);
    }
    return sub_180013330(a1, v4, 0, v7, a2);
  }
  else
  {
    for ( result = *(__int64 **)(a1 + 240); (__int64 *)(a1 + 240) != result; result = (__int64 *)*result )
    {
      if ( result[5] >= a2 )
        return result;
    }
    return (__int64 *)(a1 + 240);
  }
}
