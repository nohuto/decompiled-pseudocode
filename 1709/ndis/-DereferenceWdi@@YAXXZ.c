/*
 * XREFs of ?DereferenceWdi@@YAXXZ @ 0x1C00FB2C0
 * Callers:
 *     NdisMDeregisterWdiMiniportDriver @ 0x1C00FB590 (NdisMDeregisterWdiMiniportDriver.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00FB600 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     WPP_SF_Z @ 0x1C0040B38 (WPP_SF_Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDC84 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void DereferenceWdi(void)
{
  bool v0; // al
  KLockHolder v1; // [rsp+20h] [rbp-28h] BYREF

  v1.m_State = Unlocked;
  v1.m_Lock = (KPushLockBase *)&g_WdiLoadLock;
  v1.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v1);
  if ( !--g_WdiRefCount )
  {
    g_WdiLoadState = 3;
    KeClearEvent(&g_WdiLoadInProgress);
    v0 = g_WdiLoadedByNdis;
    g_WdiLoadedByNdis = 0;
    if ( v0 )
    {
      KLockHolder::ReleaseExclusive(&v1);
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_Z(0xEu, &WPP_2fbf7e1b1d8b38a156e756bb4fc60700_Traceguids, &DriverServiceName.Length);
      ZwUnloadDriver((PUNICODE_STRING)&DriverServiceName);
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_Z(0xFu, &WPP_2fbf7e1b1d8b38a156e756bb4fc60700_Traceguids, &DriverServiceName.Length);
      KLockHolder::AcquireExclusive(&v1);
    }
    else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_(0x10u, &WPP_2fbf7e1b1d8b38a156e756bb4fc60700_Traceguids);
    }
    g_WdiLoadState = 0;
    KeSetEvent(&g_WdiLoadInProgress, 0, 0);
  }
  KLockHolder::~KLockHolder(&v1);
}
