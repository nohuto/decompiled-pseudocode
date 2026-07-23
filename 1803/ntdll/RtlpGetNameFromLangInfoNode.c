/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x18007F9D0
 * Callers:
 *     sub_1800E82D0 @ 0x1800E82D0 (sub_1800E82D0.c)
 *     sub_1800FB5E4 @ 0x1800FB5E4 (sub_1800FB5E4.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_1800377C0 @ 0x1800377C0 (sub_1800377C0.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, _UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  __int16 v5; // ax
  USHORT Length; // si
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(_WORD *)(a2 + 6);
    if ( v5 <= 0 )
    {
      if ( ((*(_WORD *)(a2 + 4) - 4096) & 0xFBFF) != 0 && RtlLCIDToCultureName(*(unsigned __int16 *)(a2 + 4), a3) )
        return v3;
    }
    else
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * v5)));
      Length = DestinationString.Length;
      if ( DestinationString.Length <= a3->MaximumLength
        && (int)sub_1800377C0(a3->Buffer, a3->MaximumLength, (__int64)DestinationString.Buffer) >= 0 )
      {
        a3->Length = Length;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
