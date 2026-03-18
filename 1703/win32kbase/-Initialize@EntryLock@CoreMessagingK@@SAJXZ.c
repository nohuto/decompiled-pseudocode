/*
 * XREFs of ?Initialize@EntryLock@CoreMessagingK@@SAJXZ @ 0x1C006CFAC
 * Callers:
 *     CoreMsgInitialize @ 0x1C006B0BC (CoreMsgInitialize.c)
 * Callees:
 *     <none>
 */

__int64 CoreMessagingK::EntryLock::Initialize(void)
{
  struct _KMUTANT *PoolWithTag; // rax
  unsigned int v1; // ebx

  PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x4C454D43u);
  v1 = 0;
  if ( PoolWithTag )
  {
    Object = PoolWithTag;
    KeInitializeMutex(PoolWithTag, 0);
    CoreMessagingK::EntryLock::s_Initialized = 1;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
