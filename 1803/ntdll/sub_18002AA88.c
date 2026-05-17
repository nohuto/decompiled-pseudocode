/*
 * XREFs of sub_18002AA88 @ 0x18002AA88
 * Callers:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 *     sub_18005C4D8 @ 0x18005C4D8 (sub_18005C4D8.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_18002ABD8 @ 0x18002ABD8 (sub_18002ABD8.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 */

__int64 *__fastcall sub_18002AA88(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  bool v12; // cc
  bool v13; // zf
  unsigned __int64 v14; // rax
  __int64 *result; // rax

  *(_QWORD *)(a3 + 40) = a4;
  v6 = a3 - 16;
  *(_QWORD *)(a3 + 32) = a3 + 48;
  *(_DWORD *)(v6 + 8) = 65540;
  *(_BYTE *)(v6 + 15) = 3;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((v6 - a2) >> 16) + 1;
    if ( v11 >= 0xFE )
      sub_18009A5F0(3, v10, a3 - 16, a2, 0LL, 0LL);
  }
  v12 = dword_18015D450 < 1;
  *(_BYTE *)(v6 + 14) = v11;
  if ( v12 )
    goto LABEL_4;
  v13 = a5 == v6;
  if ( a5 > v6 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
    sub_1800FC3E4(1LL);
LABEL_4:
    v13 = a5 == v6;
  }
  if ( !v13 )
    *(_WORD *)(v6 + 12) = *(_WORD *)(a1 + 140);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  sub_18002ABD8(a1, a3);
  ++*(_DWORD *)(a2 + 84);
  *(_DWORD *)(a2 + 80) += *(_QWORD *)(a3 + 40) >> 12;
  *(_QWORD *)(a1 + 544) -= *(_QWORD *)(a3 + 40);
  if ( ++*(_DWORD *)(a1 + 572) > 0xAu
    && !*(_QWORD *)(a1 + 320)
    && (*(_DWORD *)(a1 + 112) & 3) == 2
    && (dword_18015D42C & 1) == 0 )
  {
    *(_DWORD *)(a1 + 120) |= 0x10000000u;
  }
  v14 = *(_QWORD *)(a3 + 40);
  if ( v14 >= 0xFF000 )
    *(_QWORD *)(a1 + 552) += v14;
  result = a6;
  *a6 = (__int64)(v6 - a5) >> 4;
  return result;
}
