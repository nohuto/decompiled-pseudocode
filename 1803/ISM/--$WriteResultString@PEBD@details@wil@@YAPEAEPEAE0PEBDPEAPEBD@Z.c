/*
 * XREFs of ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800050C4
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800023C4 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18000380C (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001740 (memcpy_s.c)
 */

char *__fastcall wil::details::WriteResultString<char const *>(char *a1, __int64 a2, char *a3, _QWORD *a4)
{
  char *v4; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  rsize_t v9; // rdx
  rsize_t v10; // rdi
  char *v11; // rax
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0;
  v4 = &v13;
  if ( a3 )
    v4 = a3;
  if ( v4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v4[v8] );
    v7 = v8 + 1;
  }
  else
  {
    v7 = 1LL;
  }
  v9 = a2 - (_QWORD)a1;
  v10 = v9;
  if ( v7 < v9 )
    v10 = v7;
  memcpy_s(a1, v9, v4, v10);
  if ( a4 )
  {
    v11 = 0LL;
    if ( v10 > 1 )
      v11 = a1;
    *a4 = v11;
  }
  if ( v10 < v7 && v10 )
    a1[v10 - 1] = 0;
  return &a1[v10];
}
