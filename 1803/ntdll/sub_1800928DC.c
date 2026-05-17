/*
 * XREFs of sub_1800928DC @ 0x1800928DC
 * Callers:
 *     sub_180091FB0 @ 0x180091FB0 (sub_180091FB0.c)
 *     sub_180092928 @ 0x180092928 (sub_180092928.c)
 *     sub_18009297C @ 0x18009297C (sub_18009297C.c)
 * Callees:
 *     sub_180094F54 @ 0x180094F54 (sub_180094F54.c)
 */

void __fastcall sub_1800928DC(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( (*(_BYTE *)(a2 + 24) & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( (unsigned __int16)sub_180094F54() == 0xFFFF && (*(_BYTE *)(a2 + 24) & 0x20) != 0 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
}
