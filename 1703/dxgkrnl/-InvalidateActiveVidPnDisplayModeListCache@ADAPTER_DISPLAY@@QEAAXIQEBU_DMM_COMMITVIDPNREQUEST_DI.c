/*
 * XREFs of ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0117F18
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0113970 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0174908 (DxgkInvalidateVidPnDisplayModeListCache.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     Template_pqcctttq @ 0x1C0022FF8 (Template_pqcctttq.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
        PERESOURCE **this,
        __int64 a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int i; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+28h] [rbp-40h]
  char v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+40h] [rbp-28h]
  int v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+50h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v13 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DxgkLogCodePointPacket(0x1Cu, 0xFFFFFFFD, 0, 0, *(__int64 *)((char *)this[2] + 268));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v20 = 0;
    v19 = 0;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    LODWORD(v14) = -3;
    Template_pqcctttq(v9, v8, v10, this, v14, v15, v16, v17, v18, v19, v20);
  }
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( i != -3 )
    {
      v12 = 401LL * i;
      BYTE4(this[14][v12 + 131]) = 0;
      LODWORD(this[14][v12 + 133]) = -1;
      HIDWORD(this[14][v12 + 133]) = -1;
    }
  }
}
