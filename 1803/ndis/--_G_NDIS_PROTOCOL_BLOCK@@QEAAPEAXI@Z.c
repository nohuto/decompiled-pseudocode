/*
 * XREFs of ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C005BDB0
 * Callers:
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1C00C18B0 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E77E8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_NDIS_PROTOCOL_BLOCK *__fastcall _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(_NDIS_PROTOCOL_BLOCK *this)
{
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // rcx

  p = this->Bind._p;
  if ( p && _InterlockedExchangeAdd((volatile signed __int32 *)&p->RefCount, 0xFFFFFFFF) == 1 )
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(p);
  return this;
}
