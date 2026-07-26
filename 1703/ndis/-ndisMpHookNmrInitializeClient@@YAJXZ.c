/*
 * XREFs of ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01128C4
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     ??0MINIPORT_HOOK_DRIVER@@QEAA@XZ @ 0x1C00A8C44 (--0MINIPORT_HOOK_DRIVER@@QEAA@XZ.c)
 *     ?FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ @ 0x1C00A8CAC (-FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00A8CE8 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

NTSTATUS ndisMpHookNmrInitializeClient(void)
{
  _QWORD *PoolWithTag; // rax
  __int64 v1; // rdi
  struct MINIPORT_HOOK_DRIVER *v2; // rbx
  MINIPORT_HOOK_DRIVER *v3; // rsi
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x108uLL, 0x6448704Du);
  if ( PoolWithTag )
  {
    v1 = 2LL;
    v2 = (struct MINIPORT_HOOK_DRIVER *)(PoolWithTag + 1);
    *PoolWithTag = 2LL;
    v3 = (MINIPORT_HOOK_DRIVER *)(PoolWithTag + 1);
    do
    {
      MINIPORT_HOOK_DRIVER::MINIPORT_HOOK_DRIVER(v3);
      v3 = (MINIPORT_HOOK_DRIVER *)((char *)v3 + 128);
      --v1;
    }
    while ( v1 );
  }
  else
  {
    v2 = 0LL;
  }
  g_MiniportHookDrivers = v2;
  if ( !v2 )
    return -1073741670;
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_MiniportHookDriversLock);
  *(_BYTE *)v2 = 1;
  MINIPORT_HOOK_DRIVER::FillDefaultHandlers(v2);
  result = NmrRegisterClient(&ClientCharacteristics, 0LL, &ndisMpHookNmrClientHandle);
  v5 = result;
  if ( result < 0 )
  {
    if ( g_MiniportHookDrivers )
    {
      if ( g_MiniportHookDrivers != (struct MINIPORT_HOOK_DRIVER *)8 )
        ExFreePoolWithTag((char *)g_MiniportHookDrivers - 8, 0x6448704Du);
    }
    g_MiniportHookDrivers = 0LL;
    return v5;
  }
  return result;
}
