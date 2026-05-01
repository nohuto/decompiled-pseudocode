/*
 * XREFs of ??1ModernResourceManagerProxy@@UEAA@XZ @ 0x18000CF48
 * Callers:
 *     ??_GModernResourceManagerProxy@@UEAAPEAXI@Z @ 0x18000CF90 (--_GModernResourceManagerProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ModernResourceManagerProxy::~ModernResourceManagerProxy(ModernResourceManagerProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &ModernResourceManagerProxy::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v3);
  RpcBindingFree((RPC_BINDING_HANDLE *)this + 2);
}
