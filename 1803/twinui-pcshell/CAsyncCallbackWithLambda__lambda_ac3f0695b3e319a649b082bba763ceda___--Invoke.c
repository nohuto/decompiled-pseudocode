/*
 * XREFs of CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::Invoke @ 0x18012EF40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda___::Invoke(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v1 = *(_QWORD *)(a1 + 48);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 144LL))(v1, &v3) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 104LL))(v3, 64LL, 64LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  return 0LL;
}
