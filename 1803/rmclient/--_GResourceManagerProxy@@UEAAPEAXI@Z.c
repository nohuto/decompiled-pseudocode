/*
 * XREFs of ??_GResourceManagerProxy@@UEAAPEAXI@Z @ 0x18000C400
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006ABC (--3@YAXPEAX@Z.c)
 */

RPC_BINDING_HANDLE *__fastcall ResourceManagerProxy::`scalar deleting destructor'(RPC_BINDING_HANDLE *this, char a2)
{
  *this = &ResourceManagerProxy::`vftable';
  RpcBindingFree(this + 1);
  this[1] = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
