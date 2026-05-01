/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_fbeb6cf24a95e12fb2104fc8e714a5e8___ @ 0x1802198F8
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae___ @ 0x18021A7E4 (CreationThreadDispatcher--RunSync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180092760 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_fbeb6cf24a95e12fb2104fc8e714a5e8_(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    v6[6] = *a2;
    *a2 = 0LL;
    v4 = v6;
    *v6 = off_180434158;
    v6[1] = off_180434110;
  }
  result = a1;
  *a1 = v4;
  return result;
}
