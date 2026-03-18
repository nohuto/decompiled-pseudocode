/*
 * XREFs of ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18013CF80
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x18003D410 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800545B0 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18013CF80 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18013E8A0 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 *     ?InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z @ 0x180187C40 (-InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18013CF80 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CBaseExpression::InsertInOrder(CBaseExpression *this, unsigned __int64 a2)
{
  char v3; // cl
  unsigned int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  CBaseExpression *v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( (int)++*((_DWORD *)this + 37) <= 1 && *((_QWORD *)this + 19) != a2 )
  {
    v5 = CBaseExpression::s_recursionLevel;
    if ( CBaseExpression::s_recursionLevel > 0x10 )
      goto LABEL_16;
    v6 = 0LL;
    ++CBaseExpression::s_recursionLevel;
    if ( *((_DWORD *)this + 60) )
    {
      do
      {
        CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 27) + 8 * v6), a2);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 60) );
    }
    (*(void (__fastcall **)(CBaseExpression *, unsigned __int64))(*(_QWORD *)this + 176LL))(this, a2);
    if ( (*((_BYTE *)this + 208) & 2) != 0 )
    {
      v7 = *((_QWORD *)this + 2);
      v12 = this;
      v8 = *(_QWORD *)(v7 + 240) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v7 + 240) + 172LL));
      v9 = *(_DWORD *)(v8 + 200);
      v10 = v9 + 1;
      if ( v9 + 1 < v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9 + 1 < v9 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v10 > *(_DWORD *)(v8 + 196) )
      {
        v11 = DynArrayImpl<1>::AddMultipleAndSet(v8 + 176, 8u, v8, &v12);
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v8 + 176) + 8LL * v9) = v12;
        *(_DWORD *)(v8 + 200) = v10;
      }
      v3 = 1;
    }
    else
    {
      v3 = 1;
    }
  }
  v5 = CBaseExpression::s_recursionLevel;
LABEL_16:
  *((_QWORD *)this + 19) = a2;
  if ( v3 )
    CBaseExpression::s_recursionLevel = v5 - 1;
  --*((_DWORD *)this + 37);
}
