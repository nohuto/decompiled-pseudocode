/*
 * XREFs of ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18003BD74
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18003CC4C (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801977E8 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801BE32C (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18003A920 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003B550 (-SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18003BCD0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C8AC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E9C0 (-SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::SetTarget(
        __int64 a1,
        int a2,
        struct CResource *a3,
        int a4,
        unsigned int a5,
        int a6,
        char a7,
        __int64 a8)
{
  struct CWeakReferenceBase *v8; // rsi
  int WeakReferenceBase; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // eax
  __int64 (__fastcall *v17)(__int64, int); // rax
  int v18; // eax
  void *v19; // rcx
  int v20; // eax
  int v22; // eax
  int v23; // eax
  _BYTE *v24; // rax
  _BYTE *v25; // rax
  _BYTE *v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // [rsp+20h] [rbp-28h]
  struct CWeakReferenceBase *v30; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v30 = 0LL;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 208) & 2) != 0 )
    {
      v22 = CBaseExpression::NotifyAnimationStateChanged(a1, 8LL);
      v14 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x8Eu);
        return v14;
      }
    }
    else
    {
      v23 = CBaseExpression::NotifyAnimationStateChanged(a1, 16LL);
      v14 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x92u);
        return v14;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 208) & 4) != 0 )
  {
    CExpressionManager::UnregisterExpression(
      *(CExpressionManager **)(*(_QWORD *)(a1 + 16) + 240LL),
      (struct CBaseExpression *)a1);
    *(_BYTE *)(a1 + 208) &= ~4u;
  }
  if ( a3 )
  {
    WeakReferenceBase = CComposition::GetWeakReferenceBase(*(CComposition **)(a1 + 16), a3, &v30);
    v14 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WeakReferenceBase, 0x9Au);
      v8 = v30;
      goto LABEL_22;
    }
    v8 = v30;
  }
  v15 = *(_QWORD *)(a1 + 176);
  if ( v15 )
  {
    CWeakReferenceBase::Release(*(CWeakReferenceBase **)(a1 + 176));
    *(_QWORD *)(a1 + 176) = 0LL;
    v15 = 0LL;
  }
  if ( v8 && *((_QWORD *)v8 + 1) )
  {
    *(_QWORD *)(a1 + 176) = v8;
    v8 = 0LL;
    v15 = *(_QWORD *)(a1 + 176);
  }
  *(_BYTE *)(a1 + 208) &= ~2u;
  *(_DWORD *)(a1 + 184) = a4;
  *(_BYTE *)(a1 + 208) |= v15 != 0 ? 2 : 0;
  v16 = *(_DWORD *)(a1 + 168);
  if ( v16 )
  {
    if ( v16 != a2 )
    {
      v14 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x282u);
      v29 = 168;
      goto LABEL_51;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 168) = a2;
  }
  v17 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 248LL);
  if ( v17 == CBaseExpression::SetOutputType )
  {
    v18 = CBaseExpression::SetOutputType(a1, a5);
  }
  else if ( (char *)v17 == (char *)CKeyframeAnimation::SetOutputType )
  {
    v18 = CKeyframeAnimation::SetOutputType(a1, a5);
  }
  else
  {
    v18 = v17(a1, a5);
  }
  v14 = v18;
  if ( v18 < 0 )
  {
    v29 = 169;
    goto LABEL_51;
  }
  v19 = *(void **)(a1 + 192);
  if ( v19 )
  {
    operator delete(v19, 8uLL);
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  LOBYTE(v14) = a7;
  if ( !a7 )
    goto LABEL_20;
  if ( a6 != 1 )
  {
    if ( a6 == 2 )
    {
      v25 = operator new(0x10uLL);
      v26 = v25;
      if ( v25 )
      {
        v25[4] = 0;
        *(_DWORD *)v25 = 2;
        if ( (unsigned __int8)v14 > 0x10u || (v27 = 65631, !_bittest(&v27, v14)) )
          LOBYTE(v14) = 0;
        v28 = a8;
        v26[4] = v14;
        *((_QWORD *)v26 + 1) = v28;
      }
      else
      {
        v26 = 0LL;
      }
      *(_QWORD *)(a1 + 192) = v26;
      goto LABEL_20;
    }
    v14 = -2147467259;
    v29 = 190;
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v29);
    goto LABEL_22;
  }
  v24 = operator new(0xCuLL);
  if ( v24 )
  {
    *(_DWORD *)v24 = 1;
    v24[4] = (unsigned __int8)v14 < 5u ? v14 : 0;
    v24[8] = a8;
  }
  *(_QWORD *)(a1 + 192) = v24;
LABEL_20:
  v20 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
  v14 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC2u);
  else
    v14 = 0;
LABEL_22:
  if ( v8 )
    CWeakReferenceBase::Release(v8);
  return v14;
}
