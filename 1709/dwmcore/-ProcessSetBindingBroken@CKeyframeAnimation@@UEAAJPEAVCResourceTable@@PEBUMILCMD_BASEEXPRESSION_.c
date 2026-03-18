/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800A5060
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800A1C80 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800A2208 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800A2314 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x18011D914 (-EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1801835E8 (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  char v3; // al
  signed int v6; // eax
  unsigned int v7; // ebx
  signed int v9; // eax
  signed int v10; // eax
  signed int v11; // eax
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+40h] [rbp-30h]
  void *v14[5]; // [rsp+48h] [rbp-28h] BYREF

  v3 = *((_BYTE *)this + 456);
  if ( (v3 & 1) != 0 )
    *((_BYTE *)this + 456) = v3 & 0xFE;
  if ( (*((_BYTE *)this + 192) & 2) == 0 )
    goto LABEL_7;
  v6 = CBaseExpression::NotifyAnimationDisconnected(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x1B9u);
    return v7;
  }
  if ( *((_DWORD *)a3 + 2) && *((_DWORD *)this + 109) == 1 )
  {
    CExpressionValueStack::CExpressionValueStack(
      (CExpressionValueStack *)v12,
      *(struct CExpressionManager **)(*((_QWORD *)this + 2) + 216LL));
    v9 = CExpressionValueStack::EnsureAvailableStackSpace((CExpressionValueStack *)v12, 1u);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1BFu);
    }
    else
    {
      v10 = CKeyframeAnimation::Reset(this, 1, (struct CExpressionValueStack *)v12);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1C2u);
      }
      else
      {
        v11 = CBaseExpression::SetOutputValue(
                this,
                (const struct CExpressionValue *)((char *)v14[0] + 72 * (unsigned int)(v13 - 1)));
        v7 = v11;
        if ( v11 >= 0 )
        {
          --v13;
          v12[0] = &CExpressionValueStack::`vftable';
          DynArrayImpl<1>::~DynArrayImpl<1>(v14);
          goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x1C5u);
      }
    }
    v12[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(v14);
    return v7;
  }
LABEL_6:
  CBaseExpression::EnsureExpressionIsUnregistered(this);
LABEL_7:
  *((_BYTE *)this + 192) |= 0x10u;
  return 0;
}
