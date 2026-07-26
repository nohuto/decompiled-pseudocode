/*
 * XREFs of ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00BB9F4
 * Callers:
 *     _lambda_ec8793c82e0ed6bcee09c56382ecb370_::operator() @ 0x1C00BB60C (_lambda_ec8793c82e0ed6bcee09c56382ecb370_--operator().c)
 * Callees:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00BBA5C (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C00BBA5C.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00BEC28 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E77E8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildProtocolLink(void *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = a1;
  ndisBindGetProtocolDriver(&P, a3, 0LL);
  v5 = (volatile signed __int32 *)P;
  if ( P )
  {
    Ndis::BindStack::BuildProtocolLink(v4, a2, &P);
    if ( _InterlockedExchangeAdd(v5 + 12, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(P);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
