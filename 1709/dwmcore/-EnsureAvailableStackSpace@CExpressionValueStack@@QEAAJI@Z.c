/*
 * XREFs of ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x18011D914
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800A5060 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x1801838A0 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::EnsureAvailableStackSpace(CExpressionValueStack *this, unsigned int a2)
{
  int v2; // ebx
  unsigned int v5; // ebx
  int v6; // ebx
  signed int v7; // eax
  _BYTE v9[64]; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+70h] [rbp-28h]
  char v11; // [rsp+74h] [rbp-24h]

  v2 = *((_DWORD *)this + 4);
  if ( a2 <= ~v2 )
  {
    if ( *((_DWORD *)this + 12) - v2 >= a2 )
      return 0;
    memset_0(v9, 0, sizeof(v9));
    v6 = v2 - *((_DWORD *)this + 12);
    v10 = 18;
    v11 = 0;
    v7 = DynArray<CExpressionValue,1>::AddAndSet((char *)this + 24, a2 + v6, v9);
    v5 = v7;
    if ( v7 >= 0 )
      return 0;
    else
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x48u);
  }
  else
  {
    v5 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x40u);
  }
  return v5;
}
