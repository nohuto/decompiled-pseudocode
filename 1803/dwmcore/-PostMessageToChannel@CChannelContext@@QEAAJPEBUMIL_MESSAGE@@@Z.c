/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180021138
 * Callers:
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x18001E310 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800207A8 (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002D5D0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180173110 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x180020D80 (-AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18005E8C8 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(
        CChannelContext *this,
        const struct MIL_MESSAGE *a2,
        __int64 a3)
{
  int v5; // eax
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  _OWORD *v8; // rcx
  const struct UCE_RDP_HEADER *v9; // rdx
  int v10; // eax
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF
  _OWORD *v13; // [rsp+60h] [rbp+18h] BYREF

  lpMem = 0LL;
  v13 = 0LL;
  v5 = CTransportCmdPacker::AllocateNotification((__int64)this, *(_DWORD *)a2, a3, &lpMem, &v13);
  v6 = lpMem;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xAAu);
  }
  else
  {
    v8 = v13;
    v9 = (const struct UCE_RDP_HEADER *)lpMem;
    *v13 = *(_OWORD *)a2;
    *((_QWORD *)v8 + 2) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v8 + 6) = *((_DWORD *)a2 + 6);
    v6[4] = *((_DWORD *)this + 4);
    v10 = CConnection::PostMessageToClient(*((CConnection **)this + 4), v9);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB2u);
  }
  operator delete(v6);
  return v7;
}
