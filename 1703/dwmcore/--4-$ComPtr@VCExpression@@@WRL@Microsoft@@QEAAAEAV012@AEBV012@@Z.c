/*
 * XREFs of ??4?$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016AFA4
 * Callers:
 *     ?RemoveAt@?$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z @ 0x18016B7FC (-RemoveAt@-$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CExpression>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v6 = *a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v6);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
