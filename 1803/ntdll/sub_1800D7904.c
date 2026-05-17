/*
 * XREFs of sub_1800D7904 @ 0x1800D7904
 * Callers:
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenEvent @ 0x18009B2C0 (ZwOpenEvent.c)
 */

__int64 sub_1800D7904()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  int v2; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+28h] [rbp-38h]
  int v4; // [rsp+30h] [rbp-30h]
  __int64 v5; // [rsp+38h] [rbp-28h]
  int *v6; // [rsp+40h] [rbp-20h]
  int v7; // [rsp+48h] [rbp-18h]
  __int128 v8; // [rsp+50h] [rbp-10h]

  v3 = L"\\KernelObjects\\SystemErrorPortReady";
  v2 = 4718662;
  v6 = &v2;
  v4 = 48;
  v5 = 0LL;
  v7 = 0;
  v8 = 0LL;
  result = ZwOpenEvent();
  if ( (int)result >= 0 )
  {
    v1 = ZwWaitForSingleObject();
    ZwClose();
    return v1;
  }
  return result;
}
