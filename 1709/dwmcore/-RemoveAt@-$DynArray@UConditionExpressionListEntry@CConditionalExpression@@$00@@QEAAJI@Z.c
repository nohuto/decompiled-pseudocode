/*
 * XREFs of ?RemoveAt@?$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z @ 0x18015EFF0
 * Callers:
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x18015E290 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801CB584 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall DynArray<CConditionalExpression::ConditionExpressionListEntry,1>::RemoveAt(
        __int64 *a1,
        unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  __int64 v5; // r15
  unsigned int v6; // r12d
  __int64 *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  if ( a2 < v2 )
  {
    v5 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v6 = a2 + 1;
        v7 = (__int64 *)(v5 + 16LL * a2);
        v8 = 2LL * (a2 + 1);
        v9 = *(_QWORD *)(v5 + 16LL * (a2 + 1));
        if ( *v7 != v9 )
        {
          v12 = *(_QWORD *)(v5 + 16LL * (a2 + 1));
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v12);
          v10 = *v7;
          *v7 = v9;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v7 + 1, v5 + 8 + 8 * v8);
        a2 = v6;
      }
      while ( v6 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
  }
  return v3;
}
