/*
 * XREFs of RtlSystemTimeToLocalTime @ 0x180086DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall RtlSystemTimeToLocalTime(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]

  result = ZwQuerySystemInformation(3LL, v5, 48LL, 0LL);
  if ( (int)result >= 0 )
  {
    *a2 = *a1 - v6;
    return 0LL;
  }
  return result;
}
