/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_84a34e4095d1745ec45b032db64765f5___ @ 0x1801AA714
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_5671f6d4fec33abe381e1d9c920ba336___ @ 0x1801ABAB4 (CreationThreadDispatcher--RunSync__lambda_5671f6d4fec33abe381e1d9c920ba336___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180092760 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_84a34e4095d1745ec45b032db64765f5_(_QWORD *a1, __int128 *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int128 v7; // xmm0
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    v7 = *a2;
    v4 = v6;
    *v6 = off_18032F758;
    v6[1] = off_18032F710;
    *((_OWORD *)v6 + 3) = v7;
  }
  result = a1;
  *a1 = v4;
  return result;
}
