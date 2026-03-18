/*
 * XREFs of ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18012C23C
 * Callers:
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800301A0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180132968 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 *     ?InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z @ 0x18016B650 (-InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseExpression::InsertInOrder(CBaseExpression *this, __int64 a2)
{
  char v2; // bp
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // eax
  CBaseExpression *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( (int)++*((_DWORD *)this + 35) <= 1 && *((_QWORD *)this + 18) != a2 )
  {
    v5 = CBaseExpression::s_recursionLevel;
    if ( CBaseExpression::s_recursionLevel > 0x10 )
      goto LABEL_14;
    v2 = 1;
    ++CBaseExpression::s_recursionLevel;
    (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 160LL))(this);
    if ( (*((_BYTE *)this + 208) & 2) != 0 )
    {
      v6 = *((_QWORD *)this + 2);
      v12 = this;
      v7 = (unsigned int)this;
      v8 = *(_QWORD *)(v6 + 240) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v6 + 240) + 172LL));
      v9 = *(unsigned int *)(v8 + 200);
      v10 = v9 + 1;
      if ( (int)v9 + 1 >= (unsigned int)v9 )
        v7 = v9 + 1;
      if ( v10 < (unsigned int)v9 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10 < (unsigned int)v9 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v7 > *(_DWORD *)(v8 + 196) )
      {
        v11 = DynArrayImpl<1>::AddMultipleAndSet(v8 + 176, 8u, v8, &v12);
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v8 + 176) + 8 * v9) = v12;
        *(_DWORD *)(v8 + 200) = v7;
      }
    }
  }
  v5 = CBaseExpression::s_recursionLevel;
LABEL_14:
  *((_QWORD *)this + 18) = a2;
  if ( v2 )
    CBaseExpression::s_recursionLevel = v5 - 1;
  --*((_DWORD *)this + 35);
}
