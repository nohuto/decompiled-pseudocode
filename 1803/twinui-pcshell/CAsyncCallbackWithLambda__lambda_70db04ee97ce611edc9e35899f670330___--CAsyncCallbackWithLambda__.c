/*
 * XREFs of CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___::CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___ @ 0x18018CFA0
 * Callers:
 *     CreateAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___ @ 0x18018C94C (CreateAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180092760 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___::CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>(a1);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)a1 = off_18032CCD8;
  *(_QWORD *)(a1 + 8) = off_18032F710;
  return a1;
}
