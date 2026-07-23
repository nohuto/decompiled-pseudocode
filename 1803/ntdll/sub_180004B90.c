/*
 * XREFs of sub_180004B90 @ 0x180004B90
 * Callers:
 *     sub_1800049F4 @ 0x1800049F4 (sub_1800049F4.c)
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     sub_180106D70 @ 0x180106D70 (sub_180106D70.c)
 */

__int64 __fastcall sub_180004B90(PUNICODE_STRING String2, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !String2 )
    return 4201LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = v4 & 0xFFFF7FFF;
    LODWORD(v9) = v4 & 0xFFFF7FFF;
    if ( qword_18015A420 )
      break;
LABEL_4:
    if ( ++v4 >= 0x40 )
      return 4201LL;
  }
  if ( v5 >= 0x40 )
  {
    if ( (unsigned int)sub_180106D70(v4, &v9) )
      goto LABEL_4;
    v5 = v9;
  }
  v7 = 2LL * v5;
  _InterlockedIncrement((volatile signed __int32 *)(qword_18015A420 + 16LL * v5 + 8));
  if ( (*(_BYTE *)(qword_18015A420 + 16LL * v5) & 1) != 0 )
  {
LABEL_8:
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 8 * v7 + 8));
    goto LABEL_4;
  }
  v8 = *(_QWORD *)(qword_18015A420 + 16LL * v5);
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v8 + 152), String2, 1u) )
  {
    v7 = 2LL * v4;
    goto LABEL_8;
  }
  *a2 = v8;
  return 0LL;
}
