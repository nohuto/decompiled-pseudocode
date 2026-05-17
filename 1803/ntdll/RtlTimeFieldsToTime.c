/*
 * XREFs of RtlTimeFieldsToTime @ 0x1800657F0
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x180065640 (RtlCutoverTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlTimeFieldsToTime(__int16 *a1, _QWORD *a2)
{
  int v2; // r10d
  int v3; // r15d
  unsigned int v4; // r9d
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned int v7; // esi
  unsigned int v8; // ebp
  unsigned int v9; // edi
  int v11; // eax
  int v12; // ecx
  __int16 v13; // ax
  int v14; // ecx
  char result; // al

  v2 = a1[1];
  v3 = a1[2];
  v4 = *a1;
  v5 = a1[3];
  v6 = (unsigned int)(v2 - 1);
  v7 = a1[4];
  v8 = a1[5];
  v9 = a1[6];
  if ( a1[1] < 1 || a1[2] < 1 || v4 - 1601 > 0x722A || (unsigned int)v6 > 0xB )
    return 0;
  if ( v4 == 400 * (v4 / 0x190) || v4 != 100 * (v4 / 0x64) && (v4 & 3) == 0 )
  {
    v11 = word_180120A18[v6];
    v12 = word_180120A18[v2];
  }
  else
  {
    v11 = word_180120D50[v6];
    v12 = word_180120D50[v2];
  }
  if ( (__int16)(v3 - 1) >= v12 - v11 || v5 > 0x17 || v7 > 0x3B || v8 > 0x3B || v9 > 0x3E7 )
    return 0;
  if ( v4 - 1600 != 400 * ((v4 - 1600) / 0x190) && (v4 - 1600 == 100 * ((v4 - 1600) / 0x64) || (v4 & 3) != 0) )
    v13 = word_180120D50[(unsigned int)v6];
  else
    v13 = word_180120A18[(unsigned int)v6];
  v14 = v13;
  result = 1;
  *a2 = 10000
      * (v9
       + 1000 * (v8 + 60 * (v7 + 60 * v5))
       + 86400000LL
       * (int)(v3
             + ((v4 - 1601) >> 2)
             + (v4 - 1601) / 0x190
             - ((4 * ((v4 - 1601) / 0x190)) & 0x7FFFFFF)
             + 365 * (v4 - 1601)
             + v14
             - 1));
  return result;
}
