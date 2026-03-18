/*
 * XREFs of UsbDevice_TransferEventHandler @ 0x1C0035B6C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001DE94 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     Endpoint_TransferEventHandler @ 0x1C001B71C (Endpoint_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D4FC (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqq @ 0x1C00377E4 (WPP_RECORDER_SF_ddqq.c)
 */

void __fastcall UsbDevice_TransferEventHandler(__int64 a1, __int64 a2, char a3)
{
  __m128i **v6; // rdx
  int v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ddqq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      *(unsigned __int8 *)(a2 + 15),
      a3,
      HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F);
  v6 = *(__m128i ***)(a1 + 8LL * (HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F) + 168);
  if ( v6 )
  {
    Endpoint_TransferEventHandler(a2, v6, a3);
  }
  else if ( (*(_BYTE *)a2 & 3) != 1 )
  {
    v8 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
    v7 = *(unsigned __int8 *)(a2 + 15);
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      3u,
      0xCu,
      0x41u,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      v7,
      v8,
      a2);
  }
}
