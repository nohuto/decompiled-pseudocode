/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x140141830
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1405BD8FC (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x1400DF4A4 (RtlStringCbCopyW.c)
 *     RtlLCIDToCultureName @ 0x140723C40 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  __int16 v5; // ax
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 Length; // si
  unsigned __int16 v9; // cx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(_WORD *)(a2 + 6);
    if ( v5 <= 0 )
    {
      v9 = *(_WORD *)(a2 + 4);
      if ( ((v9 - 4096) & 0xFBFF) != 0 && RtlLCIDToCultureName(v9, a3) )
        return v3;
    }
    else
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * v5)));
      MaximumLength = a3->MaximumLength;
      Length = DestinationString.Length;
      if ( DestinationString.Length <= MaximumLength
        && RtlStringCbCopyW(a3->Buffer, MaximumLength, DestinationString.Buffer) >= 0 )
      {
        a3->Length = Length;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
