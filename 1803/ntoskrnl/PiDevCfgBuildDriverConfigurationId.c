/*
 * XREFs of PiDevCfgBuildDriverConfigurationId @ 0x1405D6C60
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1405D6820 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1401476F8 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401477A8 (RtlUnicodeStringPrintfEx.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall PiDevCfgBuildDriverConfigurationId(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  int v5; // r9d
  unsigned int v7; // ecx
  SIZE_T v8; // rcx
  NTSTATUS v9; // ebx
  UNICODE_STRING v10; // xmm0
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING RemainingString; // [rsp+40h] [rbp-10h] BYREF

  v2 = a1 + 72;
  v3 = a1 + 40;
  v5 = *(unsigned __int16 *)(a1 + 40) + *(unsigned __int16 *)(a1 + 72);
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v7 = v5 + 4;
  if ( *(_QWORD *)(a1 + 96) )
    v7 = v5 + *(unsigned __int16 *)(a1 + 88) + 6;
  if ( (unsigned __int64)v7 + 2 > 0xFFFE )
  {
    v9 = -1073741562;
    goto LABEL_10;
  }
  DestinationString.Length = v7;
  v8 = (unsigned __int16)(v7 + 2);
  DestinationString.MaximumLength = v8;
  DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine(v8);
  if ( !DestinationString.Buffer )
  {
    v9 = -1073741670;
    goto LABEL_10;
  }
  v9 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"%wZ:%wZ", v3, v2);
  if ( v9 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 96) )
    {
LABEL_9:
      v10 = DestinationString;
      *(_QWORD *)&DestinationString.Length = 0LL;
      *a2 = v10;
      DestinationString.Buffer = 0LL;
      goto LABEL_10;
    }
    v9 = RtlUnicodeStringPrintf(&RemainingString, L",%wZ", a1 + 88);
    if ( v9 >= 0 )
    {
      DestinationString.Length += RemainingString.Length;
      goto LABEL_9;
    }
  }
LABEL_10:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v9;
}
