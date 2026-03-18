/*
 * XREFs of PiDevCfgBuildDriverConfigurationId @ 0x1405A284C
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1405A20B0 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1401331BC (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x140133230 (RtlUnicodeStringPrintfEx.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall PiDevCfgBuildDriverConfigurationId(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned int v4; // r9d
  NTSTATUS v7; // ebx
  UNICODE_STRING v8; // xmm0
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING RemainingString; // [rsp+40h] [rbp-10h] BYREF

  v2 = a1 + 40;
  v3 = a1 + 72;
  v4 = *(unsigned __int16 *)(a1 + 72) + *(unsigned __int16 *)(a1 + 40) + 4;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    v4 += *(unsigned __int16 *)(a1 + 88) + 2;
  if ( (unsigned __int64)v4 + 2 > 0xFFFE )
  {
    v7 = -1073741562;
    goto LABEL_10;
  }
  DestinationString.Length = v4;
  DestinationString.MaximumLength = v4 + 2;
  DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v4 + 2));
  if ( !DestinationString.Buffer )
  {
    v7 = -1073741670;
    goto LABEL_10;
  }
  v7 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"%wZ:%wZ", v2, v3);
  if ( v7 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 96) )
    {
LABEL_9:
      v8 = DestinationString;
      *(_QWORD *)&DestinationString.Length = 0LL;
      *a2 = v8;
      DestinationString.Buffer = 0LL;
      goto LABEL_10;
    }
    v7 = RtlUnicodeStringPrintf(&RemainingString, L",%wZ", a1 + 88);
    if ( v7 >= 0 )
    {
      DestinationString.Length += RemainingString.Length;
      goto LABEL_9;
    }
  }
LABEL_10:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v7;
}
