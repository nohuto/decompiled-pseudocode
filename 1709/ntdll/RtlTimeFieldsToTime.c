/*
 * XREFs of RtlTimeFieldsToTime @ 0x18006A0A0
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x180069F00 (RtlCutoverTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlTimeFieldsToTime(__int16 *a1, _QWORD *a2)
{
  int v2; // r13d
  __int64 v3; // r9
  unsigned int v5; // r8d
  unsigned int v6; // edi
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned int v9; // esi
  __int16 *v10; // r10
  int v11; // edx
  __int64 v12; // rbx
  int v13; // eax
  char result; // al

  v2 = a1[2];
  v3 = (unsigned int)(a1[1] - 1);
  v5 = *a1;
  v6 = a1[3];
  v7 = a1[4];
  v8 = a1[5];
  v9 = a1[6];
  if ( a1[1] < 1 || a1[2] < 1 || v5 - 1601 > 0x722A || (unsigned int)v3 > 0xB )
    return 0;
  v10 = NormalYearDaysPrecedingMonth;
  if ( v5 != 400 * (v5 / 0x190) && (v5 == 100 * (v5 / 0x64) || (v5 & 3) != 0) )
  {
    v11 = NormalYearDaysPrecedingMonth[a1[1]];
    v12 = v3;
    v13 = NormalYearDaysPrecedingMonth[v3];
  }
  else
  {
    v11 = LeapYearDaysPrecedingMonth[a1[1]];
    v12 = v3;
    v13 = LeapYearDaysPrecedingMonth[v3];
  }
  if ( (__int16)(v2 - 1) >= v11 - v13 || v6 > 0x17 || v7 > 0x3B || v8 > 0x3B || v9 > 0x3E7 )
    return 0;
  if ( v5 - 1600 == 400 * ((v5 - 1600) / 0x190) || v5 - 1600 != 100 * ((v5 - 1600) / 0x64) && (v5 & 3) == 0 )
    v10 = LeapYearDaysPrecedingMonth;
  result = 1;
  *a2 = 10000
      * (v9
       + 1000 * (v8 + 60 * (v7 + 60 * v6))
       + 86400000LL
       * (int)(v2 + v10[v12] + 365 * (v5 - 1601) + (v5 - 1601) / 0x190 - (v5 - 1601) / 0x64 + ((v5 - 1601) >> 2) - 1));
  return result;
}
