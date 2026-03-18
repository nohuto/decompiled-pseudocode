/*
 * XREFs of ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x1C01E49F8
 * Callers:
 *     ?PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x1C01E53D0 (-PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z.c)
 *     ?SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z @ 0x1C01E57A0 (-SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::AddMessageToChannel(
        DXGVMBUSCHANNEL *this,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int *a6,
        bool a7)
{
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v19[24]; // [rsp+40h] [rbp-18h] BYREF

  v11 = -1073741823;
  if ( a3 && a4 > 8 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (DXGVMBUSCHANNEL *)((char *)this + 56), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    if ( ((unsigned __int8)a3 & 7) != 0 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v13 + 24) = 408LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( (a4 & 7) != 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v14 + 24) = 409LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( (a5 & 7) != 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v15 + 24) = 410LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( a6 && (*a6 & 7) != 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v16 + 24) = 411LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( *a3 != a2 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v17 + 24) = 413LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v11 = VmbChannelSendSynchronousRequest(
            *((_QWORD *)this + 2),
            a3,
            a4,
            0LL,
            a7,
            a5 & -(__int64)a7,
            (unsigned __int64)a6 & -(__int64)a7,
            0LL);
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  return v11;
}
