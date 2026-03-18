/*
 * XREFs of ValidFilter @ 0x140594A04
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x14054CCBC (PiDqQueryValidateQueryData.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     FilterEval @ 0x1405297BC (FilterEval.c)
 *     _PnpValidatePropertyData @ 0x14052FC20 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall ValidFilter(unsigned int a1, _DWORD *a2)
{
  int v4; // edi
  _DWORD *i; // rbx
  int v7; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+38h] [rbp-50h] BYREF
  _BYTE *v9; // [rsp+40h] [rbp-48h]
  _BYTE v10[48]; // [rsp+48h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  v7 = 0;
  v9 = v10;
  v8 = 1;
  if ( (unsigned int)FilterEval((int)GetPropertyFromPropArray, (int)&v8, a1, a2, (__int64)&v7) != -1073741811 )
  {
    v4 = 0;
    if ( !a1 )
      return 1LL;
    for ( i = a2 + 10;
          !*((_QWORD *)i - 1) && (unsigned int)PnpValidatePropertyData(*((__int64 **)i + 1), i[1], *i) != 1;
          i += 14 )
    {
      if ( ++v4 >= a1 )
        return 1LL;
    }
  }
  return 0LL;
}
