/*
 * XREFs of ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180066088
 * Callers:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1800677B4 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180079100 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x18006764C (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 */

char *__fastcall wil::details::WriteResultString<char const *>(
        char *Destination,
        const char *a2,
        wil::details *a3,
        _QWORD *a4)
{
  wil::details *v4; // r10
  unsigned __int64 v7; // rax
  const void *v8; // r10
  __int64 v9; // rdx
  rsize_t v10; // rdx
  rsize_t v11; // rbx
  rsize_t v12; // rsi
  char *v13; // rax
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = (wil::details *)&v15;
  v15 = 0;
  if ( a3 )
    v4 = a3;
  v7 = wil::details::ResultStringSize(v4, a2);
  v10 = v9 - (_QWORD)Destination;
  v11 = v10;
  v12 = v7;
  if ( v7 < v10 )
    v11 = v7;
  memcpy_s(Destination, v10, v8, v11);
  if ( a4 )
  {
    v13 = Destination;
    if ( v11 <= 1 )
      v13 = 0LL;
    *a4 = v13;
  }
  if ( v11 < v12 && v11 )
    Destination[v11 - 1] = 0;
  return &Destination[v11];
}
