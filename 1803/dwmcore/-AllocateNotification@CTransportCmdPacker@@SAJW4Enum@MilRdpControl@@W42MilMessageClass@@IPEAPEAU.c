/*
 * XREFs of ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x180020D80
 * Callers:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180021138 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CTransportCmdPacker::AllocateNotification(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v7; // edi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx

  v7 = 0;
  v8 = HeapAlloc(WPF::g_processHeap, 0, 0x44uLL);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x44uLL);
    *v9 = 10;
    v9[1] = 68;
    *a4 = v9;
    *a5 = v9 + 10;
    v9[10] = a2;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x41u);
  }
  operator delete(0LL);
  return v7;
}
