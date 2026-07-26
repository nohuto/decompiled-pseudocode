/*
 * XREFs of ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C00FE478
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00FE120 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00BEDEC (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall ndisMpHookGetHook(__int64 a1)
{
  struct MINIPORT_HOOK_DRIVER *v2; // rcx
  char v3; // al
  char *v4; // rdi
  struct _EX_RUNDOWN_REF *v5; // rcx
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v7.m_State = Unlocked;
  v7.m_Lock = (KPushLockBase *)&g_MiniportHookDriversLock;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v7);
  v2 = g_MiniportHookDrivers;
  v3 = *((_BYTE *)g_MiniportHookDrivers + 128);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  if ( v3 )
  {
    v4 = (char *)v2 + 152;
    v5 = (struct _EX_RUNDOWN_REF *)((char *)v2 + 136);
    *(_QWORD *)(a1 + 8) = v5;
    if ( v4 && ExAcquireRundownProtection(v5) )
    {
      ++*(_DWORD *)(a1 + 16);
      *(_QWORD *)a1 = v4;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a1;
  }
  KLockHolder::~KLockHolder(&v7);
  return a1;
}
