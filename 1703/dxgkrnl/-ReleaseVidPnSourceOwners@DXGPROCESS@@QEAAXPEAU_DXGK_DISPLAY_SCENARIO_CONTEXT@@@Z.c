/*
 * XREFs of ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D5FD4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C01A2C40 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0002724 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B680 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B734 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018750C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall DXGPROCESS::ReleaseVidPnSourceOwners(
        DXGPROCESS *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  char *v7; // r14
  _QWORD *v8; // rsi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v10; // rbx
  ADAPTER_DISPLAY **v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD v18[2]; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v20[8]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v21[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v22[40]; // [rsp+70h] [rbp+1Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 10) + 8LL) != CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, CurrentThread, a4);
    *(_QWORD *)(v16 + 24) = 2520LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v7 = (char *)this + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  v8 = (_QWORD *)*((_QWORD *)this + 28);
  v19[0] = (char *)this + 224;
  while ( 1 )
  {
    v19[1] = v8;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v19);
    v10 = Current;
    if ( !Current )
      break;
    v11 = (ADAPTER_DISPLAY **)*((_QWORD *)Current + 225);
    if ( v11 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, (struct DXGADAPTER *const)v11, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20) >= 0 )
      {
        if ( !v11[285] )
        {
          v17 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
          *(_QWORD *)(v17 + 24) = 2556LL;
          WdLogEvent5_WdAssertion(v17);
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v11[285], v10)
          || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v11[285], v10) )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v20);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(v10, a2);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v22);
      COREACCESS::~COREACCESS((COREACCESS *)v21);
      if ( v18[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
    }
    v8 = (_QWORD *)*v8;
  }
  *((_QWORD *)v7 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
}
