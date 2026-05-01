/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___ptr64_ @ 0x180137F58
 * Callers:
 *     ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18005BD5C (-OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___ptr64_::CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___ptr64_ @ 0x1800F40A0 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-___ptr64_--CAsyncCallbackWit.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64_(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64_::CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64_(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
