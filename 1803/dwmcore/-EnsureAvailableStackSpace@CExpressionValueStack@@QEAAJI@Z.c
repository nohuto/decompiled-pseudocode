/*
 * XREFs of ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x180140644
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003E930 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180029658 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800CD240 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::EnsureAvailableStackSpace(CExpressionValueStack *this, unsigned int a2)
{
  int v2; // edi
  int v5; // ebx
  int v6; // edi
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rsi
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]
  int v13; // [rsp+78h] [rbp-10h]
  char v14; // [rsp+7Ch] [rbp-Ch]
  __int64 v15; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( a2 <= ~v2 )
  {
    if ( *((_DWORD *)this + 12) - v2 >= a2 )
      return 0;
    memset_0(v11, 0, sizeof(v11));
    v6 = v2 - *((_DWORD *)this + 12);
    v12 = 0LL;
    v7 = a2 + v6;
    v13 = 18;
    v14 = 0;
    v8 = DynArrayImpl<1>::AddMultiple((__int64)this + 24, 0x50u, v7, &v15);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xE5u);
    }
    else if ( (_DWORD)v7 )
    {
      v9 = v15;
      do
      {
        CExpressionValue::operator=(v9, (__int64)v11);
        v9 += 80LL;
        --v7;
      }
      while ( v7 );
    }
    if ( v5 >= 0 )
      return 0;
    else
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v5,
        0x5Fu);
  }
  else
  {
    v5 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x57u);
  }
  return (unsigned int)v5;
}
