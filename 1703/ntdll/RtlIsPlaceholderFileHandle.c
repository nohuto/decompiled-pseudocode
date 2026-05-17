/*
 * XREFs of RtlIsPlaceholderFileHandle @ 0x1800F83E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationFile @ 0x1800A5520 (ZwQueryInformationFile.c)
 *     sub_1800F84A0 @ 0x1800F84A0 (sub_1800F84A0.c)
 */

__int64 __fastcall RtlIsPlaceholderFileHandle(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  unsigned int v4; // [rsp+60h] [rbp+18h]
  unsigned int v5; // [rsp+64h] [rbp+1Ch]

  result = ZwQueryInformationFile();
  if ( (int)result >= 0 )
  {
    *a2 = sub_1800F84A0(v4, v5);
    return 0LL;
  }
  return result;
}
