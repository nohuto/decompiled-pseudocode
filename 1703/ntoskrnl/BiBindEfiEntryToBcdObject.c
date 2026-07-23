/*
 * XREFs of BiBindEfiEntryToBcdObject @ 0x1407363F8
 * Callers:
 *     BiBindEfiEntries @ 0x140736328 (BiBindEfiEntries.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     BiGetKeyName @ 0x14058BC84 (BiGetKeyName.c)
 *     BiCreateObject @ 0x140734C70 (BiCreateObject.c)
 */

__int64 __fastcall BiBindEfiEntryToBcdObject(__int64 a1, GUID *a2)
{
  int KeyName; // ebx
  GUID v4; // xmm0
  PCWSTR SourceString; // [rsp+30h] [rbp-40h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v8[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  SourceString = 0LL;
  BcdObjectHandle = 0LL;
  if ( (a2[3].Data1 & 4) != 0 )
  {
    return 0;
  }
  else
  {
    v8[1] = 270532607;
    v8[0] = 1;
    KeyName = BiCreateObject(a1, 0LL, v8, 1u, &BcdObjectHandle);
    if ( KeyName >= 0 )
    {
      KeyName = BiGetKeyName(BcdObjectHandle, &SourceString);
      if ( KeyName >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        KeyName = RtlGUIDFromString(&DestinationString, &Guid);
        if ( KeyName >= 0 )
        {
          v4 = Guid;
          a2[3].Data1 |= 4u;
          a2[1] = v4;
        }
      }
      if ( SourceString )
        ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
    }
    if ( BcdObjectHandle )
      BcdCloseObject(BcdObjectHandle);
  }
  return (unsigned int)KeyName;
}
