/*
 * XREFs of RtlCheckRegistryKey @ 0x180056420
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x180089440 (RtlCheckPortableOperatingSystem.c)
 * Callees:
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall RtlCheckRegistryKey(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  result = sub_180056CCC(a1, a2, 0LL, &v4);
  if ( (int)result >= 0 )
  {
    if ( (v2 & 0x40000000) == 0 )
      ZwClose(v4);
    return 0LL;
  }
  return result;
}
