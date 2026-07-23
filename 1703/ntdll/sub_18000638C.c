/*
 * XREFs of sub_18000638C @ 0x18000638C
 * Callers:
 *     sub_1800062E0 @ 0x1800062E0 (sub_1800062E0.c)
 *     RtlCompactHeap @ 0x1800EF180 (RtlCompactHeap.c)
 * Callees:
 *     sub_180006420 @ 0x180006420 (sub_180006420.c)
 *     sub_1800064D4 @ 0x1800064D4 (sub_1800064D4.c)
 */

__int64 __fastcall sub_18000638C(__int64 a1)
{
  int v1; // r8d
  int v2; // r9d
  _SLIST_HEADER *v3; // rsi
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  __int64 v6; // rbp

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 )
    LOBYTE(v1) = v2 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v3 = (_SLIST_HEADER *)(a1 + 288);
  v4 = *(_DWORD *)(a1 + 20) & 0x13000002 | 1;
  v5 = (_QWORD *)(a1 + 480);
  v6 = 129LL;
  if ( !v1 )
    v4 = *(_DWORD *)(a1 + 20) & 0x13000003;
  do
  {
    if ( (*v5 & 1) == 0 )
      sub_180006420(v3, *v5, v4);
    ++v5;
    --v6;
  }
  while ( v6 );
  sub_1800064D4(v3 + 5);
  return 0LL;
}
