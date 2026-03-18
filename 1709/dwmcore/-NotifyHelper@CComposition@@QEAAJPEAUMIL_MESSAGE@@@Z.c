/*
 * XREFs of ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800AAB4C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180029AA0 (-PostRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x18002AF50 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800AABCC (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x180128838 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180137474 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18000B0A8 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::NotifyHelper(CComposition *this, struct MIL_MESSAGE *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v4; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  signed int v9; // eax
  int v10; // edi

  v3 = *((_DWORD *)this + 108);
  v4 = 0;
  if ( v3 )
  {
    v7 = 0LL;
    v8 = v3;
    do
    {
      v9 = CChannelContext::PostMessageToChannel(*(CConnection ***)(v7 + *((_QWORD *)this + 51)), a2, a3);
      v10 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xBB3u);
      if ( !v4 || v4 >= 0 && v10 < 0 )
        v4 = v10;
      v7 += 8LL;
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)v4;
}
