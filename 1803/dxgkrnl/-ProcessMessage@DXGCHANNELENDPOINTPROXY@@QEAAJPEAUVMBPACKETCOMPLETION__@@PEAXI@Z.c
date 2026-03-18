/*
 * XREFs of ?ProcessMessage@DXGCHANNELENDPOINTPROXY@@QEAAJPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C01E5408
 * Callers:
 *     ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C01E5480 (-ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::ProcessMessage(
        DXGCHANNELENDPOINTPROXY *this,
        struct VMBPACKETCOMPLETION__ *a2,
        void *a3,
        unsigned int a4)
{
  int v6; // edi

  *((_QWORD *)this + 17) = a2;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, void *, _QWORD))this + 16))(*((_QWORD *)this + 16), a3, a4);
  if ( v6 >= 0 && *((_QWORD *)this + 17) )
  {
    VmbChannelPacketComplete(a2, 0LL, 0LL);
    *((_QWORD *)this + 17) = 0LL;
  }
  return (unsigned int)v6;
}
