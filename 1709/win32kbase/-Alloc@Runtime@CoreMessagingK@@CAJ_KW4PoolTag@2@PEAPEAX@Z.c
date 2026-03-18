/*
 * XREFs of ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C00888F0
 * Callers:
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1C0086EA8 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C0088780 (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 * Callees:
 *     ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C0088938 (-AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall CoreMessagingK::Runtime::Alloc(size_t a1, __int64 a2, void **a3)
{
  int v5; // ebx

  v5 = CoreMessagingK::Runtime::AllocUninitialized(a1, a2, a3);
  if ( v5 >= 0 )
    memset(*a3, 0, a1);
  return (unsigned int)v5;
}
