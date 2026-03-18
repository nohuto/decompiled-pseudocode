/*
 * XREFs of ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C00A0618
 * Callers:
 *     Win32UserInitialize @ 0x1C01F2A58 (Win32UserInitialize.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00A0378 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 */

__int64 DispBroker::DispBrokerClient::Init(void)
{
  void **PoolWithTag; // rax
  unsigned int v1; // ebx
  void **v2; // rdi
  struct _ERESOURCE *v3; // rax
  NTSTATUS v4; // eax

  PoolWithTag = (void **)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x44535042u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    DispBroker::DispBrokerClientReference::Assign(PoolWithTag, 0LL);
    v2[1] = (void *)-50000000LL;
  }
  else
  {
    v2 = 0LL;
  }
  DispBroker::DispBrokerClient::s_pSessionBroker = v2;
  v3 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  DispBroker::DispBrokerClient::s_pSessionLock = v3;
  if ( !v3 || !DispBroker::DispBrokerClient::s_pSessionBroker )
    return 3221225495LL;
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v1;
}
