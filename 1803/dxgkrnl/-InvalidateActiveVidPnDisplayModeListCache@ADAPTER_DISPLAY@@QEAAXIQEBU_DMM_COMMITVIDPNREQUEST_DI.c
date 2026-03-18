/*
 * XREFs of ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0155AE8
 * Callers:
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C015C590 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0215AC0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqcctttq @ 0x1C0028344 (McTemplateK0pqcctttq.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
        PERESOURCE **this,
        __int64 a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int i; // edx
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-48h]
  char v12; // [rsp+28h] [rbp-40h]
  char v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+50h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 2713LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DxgkLogCodePointPacket(0x1Cu, 0xFFFFFFFD, 0, 0, *(__int64 *)((char *)this[2] + 268));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    v12 = 0;
    LODWORD(v11) = -3;
    McTemplateK0pqcctttq(v7, v6, v8, this, v11, v12, v13, v14, v15, v16, v17);
  }
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( i != -3 )
    {
      v10 = 470LL * i;
      BYTE4(this[14][v10 + 136]) = 0;
      LODWORD(this[14][v10 + 138]) = -1;
      HIDWORD(this[14][v10 + 138]) = -1;
    }
  }
}
