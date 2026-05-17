/*
 * XREFs of sub_18001C638 @ 0x18001C638
 * Callers:
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_18001C540 @ 0x18001C540 (sub_18001C540.c)
 * Callees:
 *     sub_18000E730 @ 0x18000E730 (sub_18000E730.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800FDDA8 @ 0x1800FDDA8 (sub_1800FDDA8.c)
 */

_QWORD *__fastcall sub_18001C638(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *result; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax

  if ( dword_18015BFD8 >= 1 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    sub_1800FDDA8(1LL);
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
        return sub_18000E730(a1, v4, 0, (unsigned int)v7, a2);
      }
      v4 = *(_QWORD *)v4;
      v6 = *(unsigned int *)(v8 + 8);
    }
    return sub_18000E730(a1, v4, 0, (unsigned int)v7, a2);
  }
  else
  {
    for ( result = *(_QWORD **)(a1 + 240); (_QWORD *)(a1 + 240) != result; result = (_QWORD *)*result )
    {
      if ( result[5] >= a2 )
        return result;
    }
    return (_QWORD *)(a1 + 240);
  }
}
