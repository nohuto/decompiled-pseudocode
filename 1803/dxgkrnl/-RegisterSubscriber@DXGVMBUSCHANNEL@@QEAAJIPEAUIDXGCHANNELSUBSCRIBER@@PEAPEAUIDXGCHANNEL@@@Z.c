/*
 * XREFs of ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C01E55D4
 * Callers:
 *     ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x1C01E6324 (-CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E64E8 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z @ 0x1C01E4C54 (-Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z.c)
 *     ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x1C01E553C (-ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::RegisterSubscriber(
        DXGVMBUSCHANNEL *this,
        int a2,
        struct IDXGCHANNELSUBSCRIBER *a3,
        struct IDXGCHANNEL **a4)
{
  int v8; // edi
  __int64 v9; // rcx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rax
  struct DXGCHANNELENDPOINTPROXY *v13; // rcx
  char *v14; // rax
  char **v15; // rdx
  char *v16; // rbx
  bool v17; // zf
  struct DXGCHANNELENDPOINTPROXY *v19; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[32]; // [rsp+28h] [rbp-20h] BYREF

  v8 = -1073740008;
  if ( (unsigned int)DXGVMBUSCHANNEL::ProxyFromSubscriberTag(this, a2, &v19) == -1073741275 )
  {
    v8 = DXGCHANNELENDPOINTPROXY::Create(a2, a3, this, &v19);
    if ( v8 >= 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (DXGVMBUSCHANNEL *)((char *)this + 56), 1);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      _m_prefetchw((char *)this + 8);
      v10 = *((_DWORD *)this + 2);
      while ( v10 )
      {
        v9 = (unsigned int)(v10 + 1);
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v9, v10);
        if ( v11 == v10 )
          goto LABEL_7;
      }
      v12 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v12 + 24) = 348LL;
      WdLogEvent5_WdAssertion(v12);
LABEL_7:
      v13 = v19;
      if ( v19 )
        v14 = (char *)v19 + 16;
      else
        v14 = 0LL;
      v15 = (char **)*((_QWORD *)this + 5);
      v16 = (char *)this + 32;
      if ( *v15 != v16 )
        __fastfail(3u);
      *(_QWORD *)v14 = v16;
      *((_QWORD *)v14 + 1) = v15;
      *v15 = v14;
      v17 = v20[8] == 0;
      *((_QWORD *)v16 + 1) = v14;
      *a4 = v13;
      if ( !v17 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    }
  }
  return (unsigned int)v8;
}
