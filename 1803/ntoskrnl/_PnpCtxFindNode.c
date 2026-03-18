/*
 * XREFs of _PnpCtxFindNode @ 0x1407E6C80
 * Callers:
 *     _PnpCtxRegisterMachineNode @ 0x1407E6DF4 (_PnpCtxRegisterMachineNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PnpCtxFindNode(__int64 a1, const WCHAR *a2, __int64 a3, const UNICODE_STRING **a4)
{
  const UNICODE_STRING **v6; // rsi
  const UNICODE_STRING *i; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a4 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v6 = (const UNICODE_STRING **)(a1 + 8);
  for ( i = *v6; i != (const UNICODE_STRING *)v6; i = *(const UNICODE_STRING **)&i->Length )
  {
    if ( RtlEqualUnicodeString(i + 2, &DestinationString, 1u) )
    {
      *a4 = i;
      return *a4 == 0LL ? 0xC0000034 : 0;
    }
  }
  return *a4 == 0LL ? 0xC0000034 : 0;
}
