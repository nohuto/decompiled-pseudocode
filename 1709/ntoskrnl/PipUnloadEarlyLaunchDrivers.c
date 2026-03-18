/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x140856CD0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x140181080 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 */

__int64 __fastcall PipUnloadEarlyLaunchDrivers(__int64 a1)
{
  unsigned __int16 *v1; // rdi
  unsigned __int16 *v2; // rbx
  unsigned __int16 *v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  __int128 v11; // [rsp+50h] [rbp-18h]

  v1 = (unsigned __int16 *)(a1 + 64);
  v2 = *(unsigned __int16 **)(a1 + 64);
  if ( v2 != (unsigned __int16 *)(a1 + 64) )
  {
    do
    {
      v3 = v2;
      v2 = *(unsigned __int16 **)v2;
      if ( *((int *)v3 + 14) >= 0 )
        IopUnloadDriver(v3 + 16, 1);
    }
    while ( v2 != v1 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    v8 = 0LL;
    p_DestinationString = &DestinationString;
    v7 = 48;
    v10 = 576;
    v11 = 0LL;
    return ZwUnloadKey2((__int64)&v7, 1LL, v4);
  }
  return result;
}
