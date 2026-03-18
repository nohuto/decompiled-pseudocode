/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003E930
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BCFC (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18003B420 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18003BC9C (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003D088 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x180051B3C (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800CCF78 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x180140644 (-EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  char v3; // al
  char v6; // al
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  _QWORD v15[5]; // [rsp+48h] [rbp-28h] BYREF

  v3 = *((_BYTE *)this + 508);
  if ( (v3 & 1) != 0 )
    *((_BYTE *)this + 508) = v3 & 0xFE;
  v6 = *((_BYTE *)this + 208);
  if ( (v6 & 2) == 0 )
    goto LABEL_7;
  v7 = CBaseExpression::NotifyAnimationDisconnected(this);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x20Du);
    return v8;
  }
  if ( *((_DWORD *)a3 + 2) && *((_DWORD *)this + 122) == 1 )
  {
    CExpressionValueStack::CExpressionValueStack(
      (CExpressionValueStack *)v13,
      *(struct CExpressionManager **)(*((_QWORD *)this + 2) + 240LL));
    v10 = CExpressionValueStack::EnsureAvailableStackSpace((CExpressionValueStack *)v13, 1u);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x213u);
    }
    else
    {
      v11 = CKeyframeAnimation::Reset(this, 1, (struct CExpressionValueStack *)v13);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x216u);
      }
      else
      {
        v12 = CBaseExpression::SetOutputValue(
                this,
                (const struct CExpressionValue *)(v15[0] + 80LL * (unsigned int)(v14 - 1)));
        v8 = v12;
        if ( v12 >= 0 )
        {
          --v14;
          v13[0] = &CExpressionValueStack::`vftable';
          DynArrayImpl<1>::~DynArrayImpl<1>(v15);
          goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x219u);
      }
    }
    v13[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(v15);
    return v8;
  }
LABEL_6:
  CBaseExpression::EnsureExpressionIsUnregistered(this);
  v6 = *((_BYTE *)this + 208);
LABEL_7:
  *((_BYTE *)this + 208) = v6 | 0x10;
  return 0;
}
