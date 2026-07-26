/*
 * XREFs of _lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_ @ 0x1C00FB260
 * Callers:
 *     <none>
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FAC90 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 */

unsigned __int64 __fastcall lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_(
        _NDIS_MINIPORT_BLOCK *a1,
        volatile signed __int32 **a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx

  result = (unsigned __int64)*a2;
  v4 = *((_QWORD *)*a2 + 5);
  if ( v4 && *(int *)(v4 + 64) < 0 )
    result = (unsigned __int64)Ndis::BindStack::CreateDynamicBinding((__int64)&a1->Bindings, a2, a1, 8);
  v5 = *a2;
  if ( *a2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 12, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v5 )
        return (unsigned __int64)KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v5);
    }
  }
  return result;
}
