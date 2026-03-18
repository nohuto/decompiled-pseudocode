/*
 * XREFs of ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180173C30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800A1C80 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800A2208 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x180172DFC (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x180173460 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBindingBroken(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  unsigned int v3; // ebx
  signed int v6; // eax
  __int64 StopValue; // rax
  __int64 v8; // xmm0_8
  signed int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  int v12; // [rsp+38h] [rbp-80h]
  _BYTE v13[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v14[64]; // [rsp+50h] [rbp-68h] BYREF
  int v15; // [rsp+90h] [rbp-28h]
  char v16; // [rsp+94h] [rbp-24h]

  v3 = 0;
  if ( (*((_BYTE *)this + 192) & 2) != 0 )
  {
    v6 = CBaseExpression::NotifyAnimationDisconnected(this);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x228u);
    }
    else if ( *((_DWORD *)a3 + 2) )
    {
      memset_0(v14, 0, sizeof(v14));
      v15 = 18;
      v16 = 0;
      StopValue = CNaturalAnimation::GetStopValue((__int64)this, (__int64)v13);
      v8 = *(_QWORD *)StopValue;
      LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
      v11 = v8;
      v12 = StopValue;
      CNaturalAnimation::ExpressionValueFromInternalValue((__int64)this, &v11, (__int64)v14);
      v9 = CBaseExpression::SetOutputValue(this, (const struct CExpressionValue *)v14);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x22Eu);
    }
  }
  return v3;
}
