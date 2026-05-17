/*
 * XREFs of RtlCheckRegistryKey @ 0x18000A060
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x180009D80 (RtlCheckPortableOperatingSystem.c)
 * Callees:
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall RtlCheckRegistryKey(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  result = sub_18000AF44(a1, a2, 0LL, &v4);
  if ( (int)result >= 0 )
  {
    if ( (v2 & 0x40000000) == 0 )
      ZwClose(v4);
    return 0LL;
  }
  return result;
}
