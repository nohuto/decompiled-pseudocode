/*
 * XREFs of _lambda_83b48329e18951eff7b4bb7ab50c44d3_::operator() @ 0x180254970
 * Callers:
 *     ?IndexOf@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x1802554A0 (-IndexOf@-$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_83b48329e18951eff7b4bb7ab50c44d3_::operator()(__int64 *a1)
{
  __int64 v1; // rax
  __int64 *v2; // r9
  __int128 v3; // xmm1
  __int64 *v4; // r8
  __int64 v5; // xmm0_8
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  _OWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v1 = a1[1];
  v2 = (__int64 *)a1[3];
  v3 = *(_OWORD *)(v1 + 16);
  v4 = (__int64 *)a1[2];
  v11[0] = *(_OWORD *)v1;
  v5 = *(_QWORD *)(v1 + 32);
  v6 = *a1;
  v7 = *v2;
  v8 = *v4;
  v11[1] = v3;
  v9 = *(_QWORD *)(v6 + 40);
  v12 = v5;
  return (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64, __int64))(*(_QWORD *)v9 + 72LL))(v9, v11, v8, v7);
}
