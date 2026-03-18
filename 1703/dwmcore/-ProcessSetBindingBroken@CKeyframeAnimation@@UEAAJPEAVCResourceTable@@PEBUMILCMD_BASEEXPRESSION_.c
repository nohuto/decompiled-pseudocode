/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180030E90
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x18001EFBC (-EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180020AF0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x18002F018 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@IEAAXXZ @ 0x18002F1C4 (-EnsureExpressionIsUnregistered@CBaseExpression@@IEAAXXZ.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800338D0 (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  char v3; // al
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _QWORD v12[3]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-30h] BYREF

  v3 = *((_BYTE *)this + 392);
  if ( (v3 & 1) != 0 )
    *((_BYTE *)this + 392) = v3 & 0xFE;
  if ( (*((_BYTE *)this + 208) & 2) == 0 )
    goto LABEL_7;
  v6 = CBaseExpression::NotifyAnimationDisconnected(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x33Du);
    return v7;
  }
  if ( *((_DWORD *)a3 + 2) && *((_DWORD *)this + 95) == 1 )
  {
    CExpressionValueStack::CExpressionValueStack(
      (CExpressionValueStack *)v12,
      *(struct CExpressionManager **)(*((_QWORD *)this + 2) + 240LL));
    *((_QWORD *)this + 42) = v12;
    v9 = CExpressionValueStack::EnsureAvailableStackSpace((CExpressionValueStack *)v12, 1u);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x344u);
    }
    else
    {
      v10 = Components::Animations::Animation::ApiReset(*((Components::Animations::Animation **)this + 40), 1);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x347u);
      }
      else
      {
        v11 = CBaseExpression::SetOutputValue(
                this,
                (const struct CExpressionValue *)(*(_QWORD *)(*((_QWORD *)this + 42) + 24LL)
                                                + 72LL * (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 42) + 16LL) - 1)));
        v7 = v11;
        if ( v11 >= 0 )
        {
          --*(_DWORD *)(*((_QWORD *)this + 42) + 16LL);
          *((_QWORD *)this + 42) = 0LL;
          v12[0] = &CExpressionValueStack::`vftable';
          DynArrayImpl<1>::~DynArrayImpl<1>(v13);
          goto LABEL_6;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x34Au);
      }
    }
    v12[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(v13);
    return v7;
  }
LABEL_6:
  CBaseExpression::EnsureExpressionIsUnregistered(this);
LABEL_7:
  *((_BYTE *)this + 208) |= 8u;
  return 0;
}
