/*
 * XREFs of ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180086CB0
 * Callers:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180086B6C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800FF1BC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180086D40 (memcpy_s.c)
 */

char *__fastcall wil::details::WriteResultString<char const *>(char *a1, __int64 a2, char *a3, _QWORD *a4)
{
  char *v5; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  rsize_t v9; // rdx
  rsize_t v10; // rdi
  char *v11; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  v5 = &v13;
  if ( a3 )
    v5 = a3;
  if ( v5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v5[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 1LL;
  }
  v9 = a2 - (_QWORD)a1;
  v10 = v8;
  if ( v8 >= v9 )
    v10 = v9;
  memcpy_s(a1, v9, v5, v10);
  if ( a4 )
  {
    v11 = a1;
    if ( v10 <= 1 )
      v11 = 0LL;
    *a4 = v11;
  }
  if ( v10 < v8 && v10 )
    a1[v10 - 1] = 0;
  return &a1[v10];
}
