/*
 * XREFs of ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18002F284
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18002D8A0 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180181B78 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18002CCE0 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18002E81C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002F140 (-SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18002F1F8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180030FB0 (-SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x1800C1D3C (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v14; // edi
  CWeakReferenceBase *v15; // rcx
  bool v16; // cf
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, int); // rax
  int v19; // eax
  void *v20; // rcx
  int v21; // eax
  int v23; // eax
  _BYTE *v24; // rax
  int v25; // eax
  _BYTE *v26; // rax
  _BYTE *v27; // rdx
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-28h]
  struct CWeakReferenceBase *v30; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v30 = 0LL;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 208) & 2) != 0 )
    {
      v23 = CBaseExpression::NotifyAnimationStateChanged(a1, 8);
      v14 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x7Cu);
        return v14;
      }
    }
    else
    {
      v25 = CBaseExpression::NotifyAnimationStateChanged(a1, 16);
      v14 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x80u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x88u);
      v8 = v30;
      goto LABEL_22;
    }
    v8 = v30;
  }
  v15 = *(CWeakReferenceBase **)(a1 + 168);
  if ( v15 )
  {
    CWeakReferenceBase::Release(v15);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  if ( v8 && *((_QWORD *)v8 + 1) )
  {
    *(_QWORD *)(a1 + 168) = v8;
    v8 = 0LL;
  }
  *(_BYTE *)(a1 + 208) &= ~2u;
  v16 = *(_QWORD *)(a1 + 168) != 0LL;
  *(_DWORD *)(a1 + 176) = a4;
  v17 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 208) |= v16 ? 2 : 0;
  if ( v17 )
  {
    if ( v17 != a2 )
    {
      v14 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x240u);
      v29 = 150;
      goto LABEL_53;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 160) = a2;
  }
  v18 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 208LL);
  if ( v18 == CBaseExpression::SetOutputType )
  {
    v19 = CBaseExpression::SetOutputType(a1, a5);
  }
  else if ( (char *)v18 == (char *)CKeyframeAnimation::SetOutputType )
  {
    v19 = CKeyframeAnimation::SetOutputType(a1, a5);
  }
  else
  {
    v19 = v18(a1, a5);
  }
  v14 = v19;
  if ( v19 < 0 )
  {
    v29 = 151;
    goto LABEL_53;
  }
  v20 = *(void **)(a1 + 184);
  if ( v20 )
  {
    WPF::ProcessHeapImpl::Free(v20);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  LOBYTE(v14) = a7;
  if ( !a7 )
    goto LABEL_20;
  if ( a6 != 1 )
  {
    if ( a6 == 2 )
    {
      v26 = operator new(0x10uLL);
      v27 = v26;
      if ( v26 )
      {
        v26[4] = 0;
        *(_DWORD *)v26 = 2;
        if ( (unsigned __int8)v14 <= 0x10u && (v28 = 65631, _bittest(&v28, v14)) )
          v27[4] = v14;
        else
          v27[4] = 0;
        *((_QWORD *)v27 + 1) = a8;
      }
      else
      {
        v27 = 0LL;
      }
      *(_QWORD *)(a1 + 184) = v27;
      goto LABEL_20;
    }
    v14 = -2147467259;
    v29 = 172;
LABEL_53:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v29);
    goto LABEL_22;
  }
  v24 = operator new(0xCuLL);
  if ( v24 )
  {
    v24[4] = 0;
    *(_DWORD *)v24 = 1;
    v24[4] = (unsigned __int8)v14 < 5u ? v14 : 0;
    v24[8] = a8;
  }
  *(_QWORD *)(a1 + 184) = v24;
LABEL_20:
  v21 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
  v14 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xB0u);
  else
    v14 = 0;
LABEL_22:
  if ( v8 )
    CWeakReferenceBase::Release(v8);
  return v14;
}
