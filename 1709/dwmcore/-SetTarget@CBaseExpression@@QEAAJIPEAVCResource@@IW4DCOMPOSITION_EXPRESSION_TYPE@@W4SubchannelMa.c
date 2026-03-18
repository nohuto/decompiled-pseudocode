/*
 * XREFs of ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A23EC
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800A25F8 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180188EE8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800A0E50 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A1DB0 (-SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800A1DBC (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800A2348 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A2E74 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A50E0 (-SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  signed int WeakReferenceBase; // eax
  unsigned int v14; // ebx
  CWeakReferenceBase *v15; // rcx
  bool v16; // cf
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, int); // rax
  int v19; // eax
  void *v20; // rcx
  signed int v22; // eax
  signed int v23; // eax
  _BYTE *v24; // rax
  _BYTE *v25; // rax
  _BYTE *v26; // rdx
  int v27; // eax
  DWORD v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-28h]
  struct CWeakReferenceBase *v30; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v30 = 0LL;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 192) & 2) != 0 )
    {
      v22 = CBaseExpression::NotifyAnimationStateChanged(a1, 8LL);
      v14 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x8Eu);
        return v14;
      }
    }
    else
    {
      v23 = CBaseExpression::NotifyAnimationStateChanged(a1, 16LL);
      v14 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x92u);
        return v14;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 192) & 4) != 0 )
  {
    CExpressionManager::UnregisterExpression(
      *(CExpressionManager **)(*(_QWORD *)(a1 + 16) + 216LL),
      (struct CBaseExpression *)a1);
    *(_BYTE *)(a1 + 192) &= ~4u;
  }
  if ( a3 )
  {
    WeakReferenceBase = CComposition::GetWeakReferenceBase(*(CComposition **)(a1 + 16), a3, &v30);
    v14 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WeakReferenceBase, 0x9Au);
      v8 = v30;
      goto LABEL_21;
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
  *(_BYTE *)(a1 + 192) &= ~2u;
  v16 = *(_QWORD *)(a1 + 168) != 0LL;
  *(_DWORD *)(a1 + 176) = a4;
  *(_BYTE *)(a1 + 192) |= v16 ? 2 : 0;
  v17 = CBaseExpression::SetChannelHandle((CBaseExpression *)a1, a2);
  v14 = v17;
  if ( v17 < 0 )
  {
    v29 = 168;
LABEL_51:
    v28 = v17;
    goto LABEL_52;
  }
  v18 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 248LL);
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
    v29 = 169;
  }
  else
  {
    v20 = *(void **)(a1 + 184);
    if ( v20 )
    {
      WPF::ProcessHeapImpl::Free(v20);
      *(_QWORD *)(a1 + 184) = 0LL;
    }
    LOBYTE(v14) = a7;
    if ( !a7 )
      goto LABEL_19;
    if ( a6 == 1 )
    {
      v24 = operator new(0xCuLL);
      if ( v24 )
      {
        v24[4] = 0;
        *(_DWORD *)v24 = 1;
        v24[4] = (unsigned __int8)v14 < 5u ? v14 : 0;
        v24[8] = a8;
      }
      *(_QWORD *)(a1 + 184) = v24;
LABEL_19:
      v17 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
      v14 = v17;
      if ( v17 >= 0 )
      {
        v14 = 0;
        goto LABEL_21;
      }
      v29 = 194;
      goto LABEL_51;
    }
    if ( a6 == 2 )
    {
      v25 = operator new(0x10uLL);
      v26 = v25;
      if ( v25 )
      {
        v25[4] = 0;
        *(_DWORD *)v25 = 2;
        if ( (unsigned __int8)v14 <= 0x10u && (v27 = 65631, _bittest(&v27, v14)) )
          v26[4] = v14;
        else
          v26[4] = 0;
        *((_QWORD *)v26 + 1) = a8;
      }
      else
      {
        v26 = 0LL;
      }
      *(_QWORD *)(a1 + 184) = v26;
      goto LABEL_19;
    }
    v14 = -2147467259;
    v29 = 190;
  }
  v28 = v14;
LABEL_52:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, v29);
LABEL_21:
  if ( v8 )
    CWeakReferenceBase::Release(v8);
  return v14;
}
