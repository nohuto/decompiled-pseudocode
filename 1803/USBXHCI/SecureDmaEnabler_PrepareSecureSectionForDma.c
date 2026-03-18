/*
 * XREFs of SecureDmaEnabler_PrepareSecureSectionForDma @ 0x1C003DDB8
 * Callers:
 *     Isoch_MapStage @ 0x1C00260E4 (Isoch_MapStage.c)
 *     Bulk_MapStage @ 0x1C002C278 (Bulk_MapStage.c)
 * Callees:
 *     memset @ 0x1C0002D40 (memset.c)
 */

__int64 __fastcall SecureDmaEnabler_PrepareSecureSectionForDma(
        __int128 *a1,
        unsigned int a2,
        int a3,
        int a4,
        _DWORD *a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  __int128 v11; // xmm0

  v7 = a2;
  memset(a5, 0, 0x20uLL);
  result = 0LL;
  a5[2] = a3;
  a5[1] = v7;
  *(_DWORD *)a6 = 1;
  *(_QWORD *)(a6 + 16) = v7;
  *(_DWORD *)(a6 + 24) = a3;
  a5[3] = a4;
  v11 = *a1;
  *a5 = 2;
  *((_OWORD *)a5 + 1) = v11;
  return result;
}
