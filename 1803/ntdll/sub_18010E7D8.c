/*
 * XREFs of sub_18010E7D8 @ 0x18010E7D8
 * Callers:
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     sub_18010E964 @ 0x18010E964 (sub_18010E964.c)
 */

__int64 __fastcall sub_18010E7D8(int a1, int a2, __int64 a3, int a4)
{
  int v7; // edi
  int v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h]
  UNICODE_STRING v11; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  v7 = sub_18010E964(a1, a2, (unsigned int)&DestinationString, a4, (__int64)&v9);
  if ( v7 >= 0 && v9 == 2 )
  {
    v10 = 0LL;
    RtlInitUnicodeString(&v11, L"RedirectedKey");
    ZwQueryValueKey();
    return 0;
  }
  return (unsigned int)v7;
}
