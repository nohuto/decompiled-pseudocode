/*
 * XREFs of ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C01E5480
 * Callers:
 *     ProcessRingPacket @ 0x1C01E5900 (ProcessRingPacket.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ProcessMessage@DXGCHANNELENDPOINTPROXY@@QEAAJPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C01E5408 (-ProcessMessage@DXGCHANNELENDPOINTPROXY@@QEAAJPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x1C01E553C (-ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::ProcessPacket(
        struct _EX_RUNDOWN_REF *this,
        unsigned int a2,
        struct VMBPACKETCOMPLETION__ *a3,
        void *a4,
        unsigned int a5)
{
  int v9; // ebx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF
  DXGCHANNELENDPOINTPROXY *v12; // [rsp+50h] [rbp+8h] BYREF

  v9 = -1073741823;
  if ( ExAcquireRundownProtection(this + 6) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)&this[7], 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    v9 = DXGVMBUSCHANNEL::ProxyFromSubscriberTag((DXGVMBUSCHANNEL *)this, a2, &v12);
    if ( v9 >= 0 )
      v9 = DXGCHANNELENDPOINTPROXY::ProcessMessage(v12, a3, a4, a5);
    ExReleaseRundownProtection(this + 6);
    if ( v11[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  }
  return (unsigned int)v9;
}
