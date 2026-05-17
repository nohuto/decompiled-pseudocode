/*
 * XREFs of sub_18005F570 @ 0x18005F570
 * Callers:
 *     sub_18005F458 @ 0x18005F458 (sub_18005F458.c)
 * Callees:
 *     sub_18005F5DC @ 0x18005F5DC (sub_18005F5DC.c)
 */

int __fastcall sub_18005F570(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rax

  sub_18005F5DC(a1, a2, 0xFFFFFFFFLL);
  v5 = *(unsigned __int8 *)(a1 + 1);
  *(_QWORD *)(a1 + 80) = 0LL;
  v6 = (unsigned __int16)word_180119600[v5];
  if ( (((_DWORD)v6 - 1) & (unsigned int)v6) != 0 )
  {
    _BitScanForward(&v7, *(_DWORD *)(a3 + 80));
    v8 = (unsigned __int16)word_180119600[v5];
    LOBYTE(v7) = v7 + 18;
    *(_BYTE *)(a1 + 76) = v7;
    v9 = (v6 - 1 + (1LL << v7)) / v8;
    *(_DWORD *)(a1 + 72) = v9;
  }
  else
  {
    _BitScanForward((unsigned int *)&v9, v6);
    *(_BYTE *)(a1 + 76) = v9;
  }
  return v9;
}
