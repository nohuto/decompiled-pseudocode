/*
 * XREFs of ??1UtcWrapperBase@Diagnostics@Microsoft@@UEAA@XZ @ 0x18009F71C
 * Callers:
 *     ??_EUtcWrapperBase@Diagnostics@Microsoft@@UEAAPEAXI@Z @ 0x18001CA90 (--_EUtcWrapperBase@Diagnostics@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::Diagnostics::UtcWrapperBase::~UtcWrapperBase(Microsoft::Diagnostics::UtcWrapperBase *this)
{
  RPC_BINDING_HANDLE *v1; // rcx

  *(_QWORD *)this = &Microsoft::Diagnostics::UtcWrapperBase::`vftable';
  v1 = (RPC_BINDING_HANDLE *)((char *)this + 8);
  if ( *v1 )
    RpcBindingFree(v1);
}
