/*
 * XREFs of sub_18010B5E8 @ 0x18010B5E8
 * Callers:
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     sub_18010B774 @ 0x18010B774 (sub_18010B774.c)
 */

__int64 __fastcall sub_18010B5E8(int a1, int a2, __int64 a3, int a4)
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
  v7 = sub_18010B774(a1, a2, (unsigned int)&DestinationString, a4, (__int64)&v9);
  if ( v7 >= 0 && v9 == 2 )
  {
    v10 = 0LL;
    RtlInitUnicodeString(&v11, L"RedirectedKey");
    ZwQueryValueKey();
    return 0;
  }
  return (unsigned int)v7;
}
