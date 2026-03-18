/*
 * XREFs of ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C0091BC4
 * Callers:
 *     Win32UserInitialize @ 0x1C01D6270 (Win32UserInitialize.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009252C (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 */

__int64 DispBroker::DispBrokerClient::Init(void)
{
  DispBroker::DispBrokerClientReference *PoolWithTag; // rax
  unsigned int v1; // ebx
  DispBroker::DispBrokerClientReference *v2; // rdi
  struct _ERESOURCE *v3; // rax
  NTSTATUS v4; // eax

  PoolWithTag = (DispBroker::DispBrokerClientReference *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x44535042u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    DispBroker::DispBrokerClientReference::Assign(PoolWithTag, 0LL);
    DispBroker::DispBrokerClient::s_pSessionBroker = v2;
  }
  else
  {
    DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
  }
  v3 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  DispBroker::DispBrokerClient::s_pSessionLock = v3;
  if ( !v3 || !DispBroker::DispBrokerClient::s_pSessionBroker )
    return 3221225495LL;
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v1;
}
