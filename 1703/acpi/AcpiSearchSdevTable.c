/*
 * XREFs of AcpiSearchSdevTable @ 0x1C00A4338
 * Callers:
 *     AcpiIsDeviceSecure @ 0x1C008E07C (AcpiIsDeviceSecure.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiSearchSdevTable(__int64 a1, const UNICODE_STRING *a2, _DWORD *a3)
{
  const char *v3; // rdi
  char v4; // si
  unsigned __int64 v5; // rbp
  int i; // r14d
  unsigned __int16 v9; // ax
  LONG v10; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  *a3 = -1;
  v3 = (const char *)(a1 + 36);
  v4 = 0;
  v5 = a1 + *(unsigned int *)(a1 + 4);
  for ( i = 0; (unsigned __int64)(v3 + 4) <= v5; ++i )
  {
    v9 = *((_WORD *)v3 + 1);
    if ( v9 < 4u || (unsigned __int64)&v3[v9] > v5 )
      break;
    if ( !*(_WORD *)v3 )
    {
      RtlInitAnsiString(&DestinationString, &v3[*((unsigned __int16 *)v3 + 2)]);
      RtlAnsiStringToUnicodeString(&String2, &DestinationString, 1u);
      v10 = RtlCompareUnicodeString(a2, &String2, 1u);
      RtlFreeUnicodeString(&String2);
      if ( !v10 )
      {
        v4 = 1;
        *a3 = i;
        return v4;
      }
    }
    v3 += *((unsigned __int16 *)v3 + 1);
  }
  return v4;
}
