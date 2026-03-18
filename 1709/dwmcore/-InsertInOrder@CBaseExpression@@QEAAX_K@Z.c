/*
 * XREFs of ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800A2700
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800A2700 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800A3DF0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800A7EA0 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18011BD2C (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 *     ?InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z @ 0x18015EAA0 (-InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800A2700 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800A7EA0 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseExpression::InsertInOrder(CBaseExpression *this, unsigned __int64 a2)
{
  char v3; // cl
  unsigned int v5; // eax
  __int64 v6; // rbp
  void (*v7)(CExpression *__hidden, unsigned __int64); // rax
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // eax
  signed int v13; // eax
  unsigned int v14; // [rsp+50h] [rbp+8h]
  CBaseExpression *v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( (int)++*((_DWORD *)this + 35) > 1 || *((_QWORD *)this + 18) == a2 )
  {
LABEL_3:
    v5 = CBaseExpression::s_recursionLevel;
    goto LABEL_4;
  }
  v5 = CBaseExpression::s_recursionLevel;
  if ( CBaseExpression::s_recursionLevel <= 0x10 )
  {
    LOBYTE(v14) = 1;
    v6 = 0LL;
    ++CBaseExpression::s_recursionLevel;
    if ( *((_DWORD *)this + 56) )
    {
      do
      {
        CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 25) + 8 * v6), a2);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 56) );
    }
    v7 = *(void (**)(CExpression *__hidden, unsigned __int64))(*(_QWORD *)this + 176LL);
    if ( v7 == CExpression::InsertDependenciesInOrder )
      CExpression::InsertDependenciesInOrder(this, a2);
    else
      ((void (__fastcall *)(CBaseExpression *, unsigned __int64))v7)(this, a2);
    if ( (*((_BYTE *)this + 192) & 2) != 0 )
    {
      v8 = *((_QWORD *)this + 2);
      v9 = v14;
      v15 = this;
      v10 = *(_QWORD *)(v8 + 216) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v8 + 216) + 172LL));
      v11 = *(unsigned int *)(v10 + 200);
      v12 = v11 + 1;
      if ( (int)v11 + 1 >= (unsigned int)v11 )
        v9 = v11 + 1;
      if ( v12 < (unsigned int)v11 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12 < (unsigned int)v11 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v9 > *(_DWORD *)(v10 + 196) )
      {
        v13 = DynArrayImpl<1>::AddMultipleAndSet(v10 + 176, 8u, v10, &v15);
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v10 + 176) + 8 * v11) = v15;
        *(_DWORD *)(v10 + 200) = v9;
      }
      v3 = 1;
    }
    else
    {
      v3 = 1;
    }
    goto LABEL_3;
  }
LABEL_4:
  *((_QWORD *)this + 18) = a2;
  if ( v3 )
    CBaseExpression::s_recursionLevel = v5 - 1;
  --*((_DWORD *)this + 35);
}
