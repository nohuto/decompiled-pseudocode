/*
 * XREFs of sub_180109D60 @ 0x180109D60
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 * Callees:
 *     sub_18008CEF0 @ 0x18008CEF0 (sub_18008CEF0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     sub_180109DC0 @ 0x180109DC0 (sub_180109DC0.c)
 */

__int64 __fastcall sub_180109D60(unsigned __int16 *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v3 = sub_18008CEF0(a1, &v5);
  if ( v3 >= 0 )
  {
    v3 = sub_180109DC0(v5, a2);
    if ( v3 >= 0 )
      v3 = 0;
  }
  if ( v5 )
    ZwClose();
  return (unsigned int)v3;
}
