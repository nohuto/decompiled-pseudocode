/*
 * XREFs of sub_180053EE0 @ 0x180053EE0
 * Callers:
 *     sub_180051100 @ 0x180051100 (sub_180051100.c)
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001FC70 (RtlEqualUnicodeString.c)
 *     sub_180104B00 @ 0x180104B00 (sub_180104B00.c)
 */

__int64 __fastcall sub_180053EE0(PUNICODE_STRING String2, _QWORD *a2)
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
    if ( qword_1801593C0 )
      break;
LABEL_4:
    if ( ++v4 >= 0x40 )
      return 4201LL;
  }
  if ( v5 >= 0x40 )
  {
    if ( (unsigned int)sub_180104B00(v4, &v9) )
      goto LABEL_4;
    v5 = v9;
  }
  v7 = 2LL * v5;
  _InterlockedIncrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v5 + 8));
  if ( (*(_BYTE *)(qword_1801593C0 + 16LL * v5) & 1) != 0 )
  {
LABEL_8:
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 8 * v7 + 8));
    goto LABEL_4;
  }
  v8 = *(_QWORD *)(qword_1801593C0 + 16LL * v5);
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v8 + 152), String2, 1u) )
  {
    v7 = 2LL * v4;
    goto LABEL_8;
  }
  *a2 = v8;
  return 0LL;
}
