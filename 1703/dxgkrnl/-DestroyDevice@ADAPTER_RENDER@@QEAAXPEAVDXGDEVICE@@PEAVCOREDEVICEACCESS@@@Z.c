/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CF778
 * Callers:
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF8A8 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00FB684 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B680 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C002A06C (-DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C00C90A8 (--1DXGDEVICE@@QEAA@XZ.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, PERESOURCE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  ADAPTER_DISPLAY *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGDEVICE **v19; // rdx
  struct DXGDEVICE **v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGDEVICE **v24; // rcx
  struct DXGDEVICE **v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v26 + 24) = 1520LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 82) == 2 )
  {
    if ( this[6] == CurrentThread )
      goto LABEL_5;
    v27 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v27 + 24) = 1523LL;
LABEL_25:
    WdLogEvent5_WdAssertion(v27);
    goto LABEL_5;
  }
  if ( this[4] != CurrentThread )
  {
    v27 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v27 + 24) = 1527LL;
    goto LABEL_25;
  }
LABEL_5:
  v11 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 285);
  if ( v11 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v11, a2) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v11, v12, v13, v14);
    *(_QWORD *)(v28 + 24) = 1537LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !DXGPROCESS::GetCurrent((__int64)v11) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v29 + 24) = 1543LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v19 = (struct DXGDEVICE **)*((_QWORD *)a2 + 3);
  v20 = (struct DXGDEVICE **)*((_QWORD *)a2 + 4);
  if ( v19[1] != (struct DXGDEVICE *)((char *)a2 + 24) || *v20 != (struct DXGDEVICE *)((char *)a2 + 24) )
    __fastfail(3u);
  *v20 = (struct DXGDEVICE *)v19;
  v19[1] = (struct DXGDEVICE *)v20;
  DXGDEVICE::DestroyAllDeviceState(a2, a3);
  v24 = *(struct DXGDEVICE ***)a2;
  v25 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 82) == 2 )
  {
    if ( v24[1] != a2 || *v25 != a2 )
      __fastfail(3u);
  }
  else if ( v24[1] != a2 || *v25 != a2 )
  {
    __fastfail(3u);
  }
  *v25 = (struct DXGDEVICE *)v24;
  v24[1] = (struct DXGDEVICE *)v25;
  if ( this[143] == a2 )
    ADAPTER_RENDER::DestroyVirtualGpuState((ADAPTER_RENDER *)this);
  DXGDEVICE::~DXGDEVICE(a2, v21, v22, v23);
  ExFreePoolWithTag(a2, 0);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
}
