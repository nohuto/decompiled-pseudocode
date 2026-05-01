/*
 * XREFs of ?NotifySizeApplied@EyeControlApp@@QEAAXIIII@Z @ 0x18030BC3C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58___::Invoke @ 0x180258FE0 (CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58___--Invoke.c)
 * Callees:
 *     <none>
 */

void __fastcall EyeControlApp::NotifySizeApplied(EyeControlApp *this, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int16 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 2);
    v8 = v5;
    v7 = 1;
    CoreUICallSend(
      v6,
      &v8,
      1LL,
      0LL,
      v7,
      &Microsoft::CoreUI::MessageCall::ECCallbacks_g_parameters_dlShF08DRQv6gwc32CE595KWE1o,
      a2,
      a3,
      a4,
      a5);
  }
}
