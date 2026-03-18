/*
 * XREFs of MiInitializeWalkBounds @ 0x1400D80B0
 * Callers:
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
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
      a2[2] = qword_14036C5C8;
      a2[3] = qword_14036C5C8 + 276840447;
      goto LABEL_3;
    case 1:
      v5 = qword_14036C170;
      *a2 = qword_14036C170;
      a2[1] = v5 + 0x7FFFFFFFFFLL;
      return 1LL;
    case 2:
      *a2 = qword_14036C4A0;
      a2[1] = qword_14036C4A0 - 1 + (qword_14036C480 << 21);
      return 1LL;
  }
  v4 = (*(_BYTE *)(v2 + 192) & 7) - 3;
  if ( (*(_BYTE *)(v2 + 192) & 7) == 3 )
  {
    *a2 = qword_14036C3C8;
    a2[1] = qword_14036C3C8 - 1 + (qword_14036C3A8 << 21);
    if ( qword_14036C438 )
    {
      a2[2] = qword_14036C458;
      a2[3] = qword_14036C458 - 1 + (qword_14036C438 << 21);
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
    *a2 = qword_14036C338;
    a2[1] = qword_14036C338 - 1 + (qword_14036C318 << 21);
  }
  return result;
}
