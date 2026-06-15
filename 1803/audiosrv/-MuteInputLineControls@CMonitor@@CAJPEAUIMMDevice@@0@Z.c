/*
 * XREFs of ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x1800E39F8
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x1800E292C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?GetTopologyPartForDevice@CMonitor@@CAJPEAUIMMDevice@@PEAPEAUIPart@@@Z @ 0x1800E2710 (-GetTopologyPartForDevice@CMonitor@@CAJPEAUIMMDevice@@PEAPEAUIPart@@@Z.c)
 *     ?MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z @ 0x1800E3774 (-MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitor::MuteInputLineControls(struct IMMDevice *a1, struct IMMDevice *a2)
{
  int TopologyPartForDevice; // ebx
  int v5; // eax
  CAudioSessionManager *v6; // rax
  __int64 v7; // rcx
  struct IPartsList *v9; // [rsp+30h] [rbp-20h] BYREF
  struct IPart *v10[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  struct IPart *v12; // [rsp+88h] [rbp+38h] BYREF

  v10[1] = (struct IPart *)-2LL;
  v12 = 0LL;
  v10[0] = 0LL;
  v9 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x40u,
      (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids,
      a1,
      a2);
  }
  TopologyPartForDevice = CMonitor::GetTopologyPartForDevice(a1, &v12);
  if ( TopologyPartForDevice >= 0 )
  {
    TopologyPartForDevice = CMonitor::GetTopologyPartForDevice(a2, v10);
    if ( TopologyPartForDevice >= 0 )
    {
      v11 = 0LL;
      TopologyPartForDevice = ((__int64 (__fastcall *)(struct IPart *, __int64 *))v12->lpVtbl->GetTopologyObject)(
                                v12,
                                &v11);
      if ( TopologyPartForDevice >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, struct IPart *, struct IPart *, _QWORD, struct IPartsList **))(*(_QWORD *)v11 + 72LL))(
               v11,
               v12,
               v10[0],
               0LL,
               &v9);
        TopologyPartForDevice = v5;
        if ( v5 < 0 )
        {
          if ( v5 == -2147023728 )
          {
            v6 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x41u,
                (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids);
              v6 = WPP_GLOBAL_Control;
            }
            TopologyPartForDevice = 0;
          }
          else
          {
            v6 = WPP_GLOBAL_Control;
          }
          v7 = v11;
          if ( !v11 )
          {
LABEL_22:
            if ( TopologyPartForDevice >= 0 )
              goto LABEL_29;
            goto LABEL_25;
          }
          goto LABEL_20;
        }
        TopologyPartForDevice = CMonitor::MuteControlsOnPath(v9);
      }
      v7 = v11;
      if ( !v11 )
      {
LABEL_21:
        v6 = WPP_GLOBAL_Control;
        goto LABEL_22;
      }
LABEL_20:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      goto LABEL_21;
    }
  }
  v6 = WPP_GLOBAL_Control;
LABEL_25:
  if ( v6 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v6 + 7) & 0x800000) != 0
    && *((_BYTE *)v6 + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)v6 + 2),
      0x42u,
      (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids,
      TopologyPartForDevice);
  }
LABEL_29:
  if ( v9 )
    ((void (__fastcall *)(struct IPartsList *))v9->lpVtbl->Release)(v9);
  if ( v10[0] )
    ((void (__fastcall *)(struct IPart *))v10[0]->lpVtbl->Release)(v10[0]);
  if ( v12 )
    ((void (__fastcall *)(struct IPart *))v12->lpVtbl->Release)(v12);
  return (unsigned int)TopologyPartForDevice;
}
