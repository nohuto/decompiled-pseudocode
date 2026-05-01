/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034___ @ 0x180222DC0
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___ @ 0x180223284 (CreationThreadDispatcher--RunSync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180092760 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_a108a8c11bb5b98786bc6ab4691e60b5_::_lambda_a108a8c11bb5b98786bc6ab4691e60b5_ @ 0x180223388 (_lambda_a108a8c11bb5b98786bc6ab4691e60b5_--_lambda_a108a8c11bb5b98786bc6ab4691e60b5_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034_(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    lambda_a108a8c11bb5b98786bc6ab4691e60b5_::_lambda_a108a8c11bb5b98786bc6ab4691e60b5_(v6 + 6, a2);
    v4 = v6;
    *v6 = off_180435418;
    v6[1] = off_180435440;
  }
  result = a1;
  *a1 = v4;
  return result;
}
