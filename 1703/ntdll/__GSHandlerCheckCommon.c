/*
 * XREFs of __GSHandlerCheckCommon @ 0x18009C0A0
 * Callers:
 *     __GSHandlerCheck @ 0x18009C080 (__GSHandlerCheck.c)
 *     __GSHandlerCheck_SEH @ 0x1800A4EBC (__GSHandlerCheck_SEH.c)
 * Callees:
 *     <none>
 */

void __fastcall _GSHandlerCheckCommon(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  __int64 v5; // rcx

  v3 = a1;
  v4 = a1;
  if ( (*(_BYTE *)a3 & 4) != 0 )
    v4 = -*(_DWORD *)(a3 + 8) & (a1 + *(int *)(a3 + 4));
  v5 = *(_QWORD *)(a2 + 8) + *(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL);
  if ( (*(_BYTE *)(v5 + 3) & 0xF) != 0 )
    v3 += *(_BYTE *)(v5 + 3) & 0xF0;
  sub_180095EB0(*(_QWORD *)((int)(*(_DWORD *)a3 & 0xFFFFFFF8) + v4) ^ v3);
}
