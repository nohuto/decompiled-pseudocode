/*
 * XREFs of sub_1800DF04C @ 0x1800DF04C
 * Callers:
 *     sub_1800DEEF4 @ 0x1800DEEF4 (sub_1800DEEF4.c)
 *     sub_1800DEFA0 @ 0x1800DEFA0 (sub_1800DEFA0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_1800DF04C(__int64 a1, const WCHAR *a2, _DWORD *a3)
{
  int ValueKey; // ecx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  int v7; // [rsp+4Ch] [rbp-2Ch]
  int v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  ValueKey = ZwQueryValueKey();
  result = 3221225524LL;
  if ( ValueKey >= 0 )
  {
    if ( v7 == 4 && v8 == 4 )
    {
      *a3 = v9;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  else if ( ValueKey != -1073741772 )
  {
    return (unsigned int)ValueKey;
  }
  return result;
}
