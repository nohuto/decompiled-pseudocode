/*
 * XREFs of ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C01E5268
 * Callers:
 *     ProcessChannelClosed @ 0x1C01E5870 (ProcessChannelClosed.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C01E5118 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelClosed(DXGVMBUSCHANNEL *this)
{
  _QWORD **v1; // rdi
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD **)((char *)this + 32);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGVMBUSCHANNEL *)((char *)this + 56), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v2 = *v1;
  while ( v2 != v1 )
  {
    v3 = (unsigned __int64)(v2 - 2);
    v4 = v2;
    v2 = (_QWORD *)*v2;
    DXGCHANNELENDPOINTPROXY::NotifyChannelClosed((DXGCHANNELENDPOINTPROXY *)(v3 & -(__int64)(v4 != 0LL)));
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
}
