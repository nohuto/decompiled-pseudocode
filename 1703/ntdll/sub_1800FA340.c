/*
 * XREFs of sub_1800FA340 @ 0x1800FA340
 * Callers:
 *     sub_18006CFF8 @ 0x18006CFF8 (sub_18006CFF8.c)
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18006E1E4 @ 0x18006E1E4 (sub_18006E1E4.c)
 */

__int64 __fastcall sub_1800FA340(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = -1;
  v8 = 4;
  v7 = 4;
  if ( !a2 || !a1 )
    return 3221225485LL;
  *a2 = 0;
  RtlInitUnicodeString(&DestinationString, L"MachineUILock");
  result = sub_18006E1E4(a1, (__int64)&DestinationString, &v8, &v6, &v7);
  if ( (int)result >= 0 )
  {
    if ( v6 == 1 )
    {
      *a2 = 1;
    }
    else if ( v6 )
    {
      return 3221225473LL;
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
