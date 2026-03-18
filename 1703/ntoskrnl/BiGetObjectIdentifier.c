/*
 * XREFs of BiGetObjectIdentifier @ 0x14058BC30
 * Callers:
 *     BcdQueryObject @ 0x14058A484 (BcdQueryObject.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     BiGetKeyName @ 0x14058BC84 (BiGetKeyName.c)
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
