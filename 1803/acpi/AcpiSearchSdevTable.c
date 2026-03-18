/*
 * XREFs of AcpiSearchSdevTable @ 0x1C008865C
 * Callers:
 *     AcpiIsDeviceSecure @ 0x1C00884E4 (AcpiIsDeviceSecure.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiSearchSdevTable(__int64 a1, const UNICODE_STRING *a2, _DWORD *a3)
{
  __int64 v3; // rdi
  char v4; // si
  unsigned __int64 v5; // rbp
  int i; // r14d
  unsigned __int16 v9; // cx
  LONG v10; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  *a3 = -1;
  v3 = a1 + 36;
  v4 = 0;
  v5 = a1 + *(unsigned int *)(a1 + 4);
  for ( i = 0; v3 + 4 <= v5; ++i )
  {
    v9 = *(_WORD *)(v3 + 2);
    if ( v9 < 4u || v3 + (unsigned __int64)v9 > v5 )
      break;
    if ( !*(_BYTE *)v3 )
    {
      RtlInitAnsiString(&DestinationString, (PCSZ)(v3 + *(unsigned __int16 *)(v3 + 4)));
      RtlAnsiStringToUnicodeString(&String2, &DestinationString, 1u);
      v10 = RtlCompareUnicodeString(a2, &String2, 1u);
      RtlFreeUnicodeString(&String2);
      if ( !v10 )
      {
        v4 = 1;
        *a3 = i;
        return v4;
      }
      v9 = *(_WORD *)(v3 + 2);
    }
    v3 += v9;
  }
  return v4;
}
