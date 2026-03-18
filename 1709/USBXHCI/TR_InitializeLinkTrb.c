/*
 * XREFs of TR_InitializeLinkTrb @ 0x1C00233AC
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x1C0025B3C (Control_Transfer_MapIntoRing.c)
 *     Isoch_InsertLinkTrb @ 0x1C0028578 (Isoch_InsertLinkTrb.c)
 *     Bulk_InsertLinkTrb @ 0x1C002E5B0 (Bulk_InsertLinkTrb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_InitializeLinkTrb(__int64 a1, int a2, __int64 a3, char a4)
{
  int v4; // eax
  unsigned int v5; // r10d
  unsigned int v6; // eax
  __int64 result; // rax

  v4 = 0;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_DWORD *)(a3 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(a3 + 12) = v5;
  if ( a4 )
  {
    LOBYTE(v4) = *(_DWORD *)(a1 + 200) == 0;
    v6 = v5 & 0xFFFFFFFE | v4;
  }
  else
  {
    v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)*(_DWORD *)(a1 + 200)) & 1;
  }
  *(_DWORD *)(a3 + 12) = v6;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL) & 0x800LL) == 0 && (a4 || (unsigned int)(a2 - 5) > 2) )
    *(_DWORD *)(a3 + 12) &= ~0x10u;
  else
    *(_DWORD *)(a3 + 12) |= 0x10u;
  result = *(_DWORD *)(a3 + 8) & 0x3FFFFF;
  *(_DWORD *)(a3 + 8) = result | (*(unsigned __int16 *)(a1 + 112) << 22);
  return result;
}
