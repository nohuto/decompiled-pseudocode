/*
 * XREFs of RtlTimeToTimeFields @ 0x180066700
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x180066340 (RtlCutoverTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTimeToTimeFields(__int64 *a1, _WORD *a2)
{
  unsigned __int128 v4; // rax
  __int64 v5; // rcx
  unsigned __int128 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // r11d
  __int64 v11; // r10
  __int64 v12; // r11
  __int16 v13; // ax
  unsigned int v14; // r8d
  __int64 result; // rax

  if ( *a1 < 0 )
    v4 = (unsigned __int64)-*a1 * (unsigned __int128)0xD1B71758E219652CuLL;
  else
    v4 = (unsigned __int64)*a1 * (unsigned __int128)0xD1B71758E219652CuLL;
  v5 = *((_QWORD *)&v4 + 1) >> 13;
  if ( *a1 < 0 )
    v5 = -v5;
  if ( v5 < 0 )
    v6 = (unsigned __int64)-v5 * (unsigned __int128)0xC6D750EBFA67B90EuLL;
  else
    v6 = (unsigned __int64)v5 * (unsigned __int128)0xC6D750EBFA67B90EuLL;
  v7 = *((_QWORD *)&v6 + 1) >> 26;
  if ( v5 < 0 )
    v7 = -v7;
  v8 = v5 - 86400000 * v7;
  a2[7] = ((int)v7 + 1) % 7u;
  v9 = (100 * ((-36524 * ((100 * ((unsigned int)v7 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v7 % 0x23AB1) % 0x5B5)
      + 75)
     / 0x8EAD
     + 4
     * ((-36524 * ((100 * ((unsigned int)v7 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v7 % 0x23AB1) / 0x5B5
      + 25 * ((100 * ((unsigned int)v7 % 0x23AB1) + 75) / 0x37BB49 + 4 * ((unsigned int)v7 / 0x23AB1)));
  v10 = v9 + 1;
  v11 = (_DWORD)v7 + -365 * v9 - v9 / 0x190 - (v9 >> 2) + v9 / 0x64;
  if ( v9 + 1 != 400 * ((v9 + 1) / 0x190) && (v10 == 100 * (v10 / 0x64) || (v10 & 3) != 0) )
  {
    v12 = byte_180120E00[v11];
    v13 = word_180120F80[v12];
  }
  else
  {
    v12 = byte_180120C80[v11];
    v13 = word_180120C48[v12];
  }
  a2[1] = v12 + 1;
  a2[2] = v7 + -365 * v9 - v9 / 0x190 - (v9 >> 2) + v9 / 0x64 - v13 + 1;
  v14 = v8 / 0x3E8 / 0x3C;
  *a2 = v9 + 1601;
  a2[3] = v14 / 0x3C;
  a2[4] = v14 % 0x3C;
  a2[5] = v8 / 0x3E8 % 0x3C;
  result = 1000LL;
  a2[6] = v8 % 0x3E8;
  return result;
}
