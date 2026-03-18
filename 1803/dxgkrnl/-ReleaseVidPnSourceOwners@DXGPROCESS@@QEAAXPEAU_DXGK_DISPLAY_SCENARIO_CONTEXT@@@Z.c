/*
 * XREFs of ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CB0C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C01B9220 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000AEAC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0014AA4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0014B58 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A4EC (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall DXGPROCESS::ReleaseVidPnSourceOwners(DXGPROCESS *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  char *v4; // r14
  _QWORD *v5; // rdi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v7; // rbx
  ADAPTER_DISPLAY **v8; // rsi
  ADAPTER_DISPLAY *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD v12[2]; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v16[40]; // [rsp+70h] [rbp+1Fh] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 14) + 8LL) != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 2868LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v4 = (char *)this + 168;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 168, 0LL);
  *((_QWORD *)this + 22) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 34);
  v13[0] = (char *)this + 272;
  while ( 1 )
  {
    v13[1] = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v13);
    v7 = Current;
    if ( !Current )
      break;
    v8 = (ADAPTER_DISPLAY **)*((_QWORD *)Current + 211);
    if ( v8 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, (struct DXGADAPTER *const)v8, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14) >= 0 )
      {
        v9 = v8[307];
        if ( !v9 )
        {
          v11 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v11 + 24) = 2904LL;
          WdLogEvent5_WdAssertion(v11);
          v9 = v8[307];
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v9, v7) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v8[307], v7) )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v14);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(v7, a2, 0);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v16);
      COREACCESS::~COREACCESS((COREACCESS *)v15);
      if ( v12[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12);
    }
    v5 = (_QWORD *)*v5;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
