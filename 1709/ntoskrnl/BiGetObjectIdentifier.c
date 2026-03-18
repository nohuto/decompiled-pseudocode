/*
 * XREFs of BiGetObjectIdentifier @ 0x1405AFE70
 * Callers:
 *     BcdQueryObject @ 0x1405AE960 (BcdQueryObject.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     BiGetKeyName @ 0x1405AFEC4 (BiGetKeyName.c)
 */

__int64 __fastcall BiGetObjectIdentifier(__int64 a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp+18h] BYREF

  result = BiGetKeyName(a1, &SourceString);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v4 = RtlGUIDFromString(&DestinationString, a2);
    ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
    return v4;
  }
  return result;
}
