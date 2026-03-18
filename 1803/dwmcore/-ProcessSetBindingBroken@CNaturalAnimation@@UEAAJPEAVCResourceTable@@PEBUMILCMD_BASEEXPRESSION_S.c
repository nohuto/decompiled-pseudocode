/*
 * XREFs of ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18019CE30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BCFC (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18003B420 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x18019C08C (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x18019C728 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBindingBroken(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 StopValue; // rax
  __int64 v8; // xmm0_8
  int v9; // eax
  __int64 v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+40h] [rbp-21h]
  _BYTE v13[16]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v14[64]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v15; // [rsp+98h] [rbp+37h]
  int v16; // [rsp+A0h] [rbp+3Fh]
  char v17; // [rsp+A4h] [rbp+43h]

  v3 = 0;
  if ( (*((_BYTE *)this + 208) & 2) != 0 )
  {
    v6 = CBaseExpression::NotifyAnimationDisconnected(this);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x212u);
    }
    else if ( *((_DWORD *)a3 + 2) )
    {
      memset_0(v14, 0, sizeof(v14));
      v15 = 0LL;
      v16 = 18;
      v17 = 0;
      StopValue = CNaturalAnimation::GetStopValue((__int64)this, (__int64)v13);
      v8 = *(_QWORD *)StopValue;
      LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
      v11 = v8;
      v12 = StopValue;
      CNaturalAnimation::ExpressionValueFromInternalValue((__int64)this, &v11, (__int64)v14);
      v9 = CBaseExpression::SetOutputValue(this, (const struct CExpressionValue *)v14);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x218u);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return v3;
}
