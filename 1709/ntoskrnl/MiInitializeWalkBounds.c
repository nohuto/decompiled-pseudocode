/*
 * XREFs of MiInitializeWalkBounds @ 0x14009F1A0
 * Callers:
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeWalkBounds(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // ecx
  __int64 v5; // rax
  __int128 v6; // xmm0

  v2 = *(_QWORD *)(a1 + 8);
  switch ( *(_BYTE *)(v2 + 192) & 7 )
  {
    case 0:
      *a2 = 0LL;
      a2[1] = 0xFFFF7FFFFFFFFFFFuLL;
      a2[2] = qword_140388950;
      a2[3] = qword_140388950 + 276840447;
      goto LABEL_3;
    case 1:
      v5 = qword_1403884B0;
      *a2 = qword_1403884B0;
      a2[1] = v5 + 0x7FFFFFFFFFLL;
      return 1LL;
    case 2:
      *a2 = qword_140388828;
      a2[1] = qword_140388828 - 1 + (qword_140388808 << 21);
      return 1LL;
  }
  v4 = (*(_BYTE *)(v2 + 192) & 7) - 3;
  if ( (*(_BYTE *)(v2 + 192) & 7) == 3 )
  {
    *a2 = qword_140388750;
    a2[1] = qword_140388750 - 1 + (qword_140388730 << 21);
    if ( qword_1403887C0 )
    {
      a2[2] = qword_1403887E0;
      a2[3] = qword_1403887E0 - 1 + (qword_1403887C0 << 21);
LABEL_3:
      result = 2LL;
      if ( *a2 > a2[2] )
      {
        v6 = *((_OWORD *)a2 + 1);
        *((_OWORD *)a2 + 1) = *(_OWORD *)a2;
        *(_OWORD *)a2 = v6;
      }
      return result;
    }
    return 1LL;
  }
  result = 1LL;
  if ( v4 == 1 )
  {
    *a2 = qword_1403886C0;
    a2[1] = qword_1403886C0 - 1 + (qword_1403886A0 << 21);
  }
  return result;
}
