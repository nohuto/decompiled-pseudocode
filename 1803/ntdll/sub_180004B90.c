/*
 * XREFs of sub_180004B90 @ 0x180004B90
 * Callers:
 *     sub_1800049F4 @ 0x1800049F4 (sub_1800049F4.c)
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     sub_180106D70 @ 0x180106D70 (sub_180106D70.c)
 */

__int64 __fastcall sub_180004B90(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !a1 )
    return 4201LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5 & 0xFFFF7FFF;
    LODWORD(v10) = v5 & 0xFFFF7FFF;
    if ( qword_18015A420 )
      break;
LABEL_4:
    if ( ++v5 >= 0x40 )
      return 4201LL;
  }
  if ( v6 >= 0x40 )
  {
    if ( (unsigned int)sub_180106D70(v5, &v10) )
      goto LABEL_4;
    v6 = v10;
  }
  v8 = 2LL * v6;
  _InterlockedIncrement((volatile signed __int32 *)(qword_18015A420 + 16LL * v6 + 8));
  if ( (*(_BYTE *)(qword_18015A420 + 16LL * v6) & 1) != 0 )
  {
LABEL_8:
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 8 * v8 + 8));
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(qword_18015A420 + 16LL * v6);
  LOBYTE(a3) = 1;
  if ( !(unsigned __int8)RtlEqualUnicodeString(v9 + 152, a1, a3) )
  {
    v8 = 2LL * v5;
    goto LABEL_8;
  }
  *a2 = v9;
  return 0LL;
}
