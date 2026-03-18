/*
 * XREFs of UsbDevice_TransferEventHandler @ 0x1C003371C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0016F88 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     Endpoint_TransferEventHandler @ 0x1C00144C0 (Endpoint_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C00162AC (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqq @ 0x1C00353C4 (WPP_RECORDER_SF_ddqq.c)
 */

void __fastcall UsbDevice_TransferEventHandler(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // r8d
  __m128i **v7; // rdx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ddqq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
      a3,
      HIBYTE(*(_DWORD *)(a2 + 12)));
  v6 = *(_DWORD *)(a2 + 12);
  v7 = *(__m128i ***)(a1 + 8LL * (HIWORD(v6) & 0x1F) + 168);
  if ( v7 )
  {
    Endpoint_TransferEventHandler(a2, v7, a3);
  }
  else if ( (*(_BYTE *)a2 & 3) != 1 )
  {
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      3u,
      0xCu,
      0x43u,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      HIBYTE(v6),
      HIWORD(v6) & 0x1F,
      a2);
  }
}
