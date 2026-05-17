/*
 * XREFs of sub_18005C6E0 @ 0x18005C6E0
 * Callers:
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 * Callees:
 *     sub_18005C774 @ 0x18005C774 (sub_18005C774.c)
 */

void __fastcall sub_18005C6E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( (*(_BYTE *)(a1 + 120) & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) |= sub_18005C774(a1, a2, a3, a4);
    *(_DWORD *)(a1 + 140) = (unsigned __int16)sub_18005C774(v6, v5, v7, v8);
  }
}
