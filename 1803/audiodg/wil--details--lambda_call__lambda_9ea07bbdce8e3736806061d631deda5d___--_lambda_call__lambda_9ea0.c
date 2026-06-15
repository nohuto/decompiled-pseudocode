/*
 * XREFs of wil::details::lambda_call__lambda_9ea07bbdce8e3736806061d631deda5d___::_lambda_call__lambda_9ea07bbdce8e3736806061d631deda5d___ @ 0x1400302F0
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$2 @ 0x1400202E8 (_CAudioDeviceGraph--Initialize_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_9ea07bbdce8e3736806061d631deda5d___::_lambda_call__lambda_9ea07bbdce8e3736806061d631deda5d___(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    v2 = *(_QWORD *)(v1 + 144);
    if ( v2 )
    {
      *(_QWORD *)(v1 + 144) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
}
