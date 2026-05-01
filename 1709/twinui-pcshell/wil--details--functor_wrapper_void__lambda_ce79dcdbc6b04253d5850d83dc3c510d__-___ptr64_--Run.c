/*
 * XREFs of wil::details::functor_wrapper_void__lambda_ce79dcdbc6b04253d5850d83dc3c510d__&___ptr64_::Run @ 0x18009D200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_ce79dcdbc6b04253d5850d83dc3c510d______ptr64_::Run(
        __int64 a1)
{
  _DWORD **v1; // rdi
  int v2; // ebx
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+24h] [rbp-14h]
  int v6; // [rsp+2Ch] [rbp-Ch]

  v1 = *(_DWORD ***)(a1 + 8);
  v2 = 0;
  v5 = 0LL;
  v6 = 0;
  pvParam = 16;
  if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
    v2 = v5 & 1;
  **v1 = v2;
  return 0LL;
}
