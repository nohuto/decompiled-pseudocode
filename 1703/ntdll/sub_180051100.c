/*
 * XREFs of sub_180051100 @ 0x180051100
 * Callers:
 *     sub_180050C68 @ 0x180050C68 (sub_180050C68.c)
 *     sub_180050FCC @ 0x180050FCC (sub_180050FCC.c)
 *     sub_180051190 @ 0x180051190 (sub_180051190.c)
 *     sub_180104D80 @ 0x180104D80 (sub_180104D80.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180053EE0 @ 0x180053EE0 (sub_180053EE0.c)
 *     sub_180104B00 @ 0x180104B00 (sub_180104B00.c)
 */

__int64 __fastcall sub_180051100(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 result; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 144) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 176));
    return sub_180053EE0(&DestinationString);
  }
  v3 = *(unsigned __int16 *)(a1 + 8);
  v4 = qword_1801593C0;
  v5 = v3 & 0xFFFF7FFF;
  v8 = v3 & 0xFFFF7FFF;
  if ( !qword_1801593C0 )
    return 4201LL;
  if ( v5 < 0x40 )
  {
LABEL_4:
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 16LL * v5 + 8));
    if ( (*(_BYTE *)(qword_1801593C0 + 16LL * v5) & 1) == 0 )
    {
      *a2 = *(_QWORD *)(qword_1801593C0 + 16LL * v5);
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v5 + 8));
    return 4201LL;
  }
  result = sub_180104B00(v3, &v8);
  if ( !(_DWORD)result )
  {
    v5 = v8;
    v4 = qword_1801593C0;
    goto LABEL_4;
  }
  return result;
}
