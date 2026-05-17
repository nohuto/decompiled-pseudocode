/*
 * XREFs of sub_180004004 @ 0x180004004
 * Callers:
 *     sub_180003CFC @ 0x180003CFC (sub_180003CFC.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenEvent @ 0x1800A5B00 (ZwOpenEvent.c)
 */

__int64 __fastcall sub_180004004(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 *v3; // r8
  unsigned int v4; // ebx
  int v5; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v6; // [rsp+28h] [rbp-38h]
  int v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h]
  int *v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  __int128 v11; // [rsp+50h] [rbp-10h]
  __int64 v12; // [rsp+78h] [rbp+18h] BYREF
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v6 = L"\\KernelObjects\\SystemErrorPortReady";
  v5 = 4718662;
  v9 = &v5;
  v7 = 48;
  v8 = 0LL;
  v10 = 0;
  v11 = 0LL;
  result = ZwOpenEvent(&v12, 1048577LL, &v7);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)v1 != -1 )
      v13 = -10000 * v1;
    v3 = &v13;
    if ( (_DWORD)v1 == -1 )
      v3 = 0LL;
    v4 = ZwWaitForSingleObject(v12, 0LL, v3);
    ZwClose(v12);
    return v4;
  }
  return result;
}
