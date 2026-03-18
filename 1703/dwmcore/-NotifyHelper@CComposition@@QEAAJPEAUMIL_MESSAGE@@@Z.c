/*
 * XREFs of ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18005BB24
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180035070 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180036AF0 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18005BBA4 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18005C880 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801293EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18007E104 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CComposition::NotifyHelper(CComposition *this, struct MIL_MESSAGE *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  int v9; // edi

  v2 = *((_DWORD *)this + 120);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    v7 = v2;
    do
    {
      v8 = CChannelContext::PostMessageToChannel(*(CChannelContext **)(v6 + *((_QWORD *)this + 57)), a2);
      v9 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xD0Au);
      if ( !v3 || v3 >= 0 && v9 < 0 )
        v3 = v9;
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  return (unsigned int)v3;
}
