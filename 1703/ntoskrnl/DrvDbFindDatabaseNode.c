/*
 * XREFs of DrvDbFindDatabaseNode @ 0x14044C7CC
 * Callers:
 *     DrvDbGetObjectDatabaseNode @ 0x140486E48 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbDispatchDriverDatabase @ 0x1404E8770 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14059D9EC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSuspendDatabase @ 0x14059E34C (DrvDbSuspendDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14059E3E8 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbRegisterDatabase @ 0x1405CD5B4 (DrvDbRegisterDatabase.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140742D74 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140744354 (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall DrvDbFindDatabaseNode(__int64 a1, const WCHAR *a2, const UNICODE_STRING **a3)
{
  NTSTATUS inited; // edi
  const UNICODE_STRING **v6; // rsi
  const UNICODE_STRING *i; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  inited = RtlInitUnicodeStringEx(&String2, a2);
  if ( inited >= 0 )
  {
    v6 = (const UNICODE_STRING **)(a1 + 16);
    inited = -1073741772;
    for ( i = *v6; i != (const UNICODE_STRING *)v6; i = *(const UNICODE_STRING **)&i->Length )
    {
      if ( RtlEqualUnicodeString(i + 1, &String2, 1u) )
      {
        inited = 0;
        *a3 = i;
        return (unsigned int)inited;
      }
    }
  }
  return (unsigned int)inited;
}
