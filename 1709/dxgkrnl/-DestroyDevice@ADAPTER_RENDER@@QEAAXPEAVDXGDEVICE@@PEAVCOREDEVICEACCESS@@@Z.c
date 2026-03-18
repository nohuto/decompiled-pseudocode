/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082E60
 * Callers:
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C0082FC8 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00B3724 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007804 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009C68C (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C009C928 (--1DXGDEVICE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0188EDC (-DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, struct COREDEVICEACCESS *a3)
{
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct DXGPROCESS *v8; // rdx
  __int64 v9; // rsi
  ADAPTER_DISPLAY *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct DXGDEVICE **v13; // rcx
  struct DXGDEVICE **v14; // rdx
  struct DXGDEVICE **v15; // rax
  struct DXGDEVICE **v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v17 + 24) = 1565LL;
    WdLogEvent5_WdAssertion(v17);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 82) == 2 )
  {
    if ( this[6] == CurrentThread )
      goto LABEL_5;
    v18 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v18 + 24) = 1568LL;
LABEL_27:
    WdLogEvent5_WdAssertion(v18);
    goto LABEL_5;
  }
  if ( this[4] != CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v18 + 24) = 1572LL;
    goto LABEL_27;
  }
LABEL_5:
  if ( *((_DWORD *)this[2] + 44) == 1 )
  {
    v8 = (struct DXGPROCESS *)*((_QWORD *)a2 + 5);
    v9 = *(_QWORD *)(*((_QWORD *)v8 + 5) + 8LL * *((unsigned int *)this[2] + 50));
    if ( v9 )
    {
      if ( *(struct DXGDEVICE **)(v9 + 40) == a2 )
      {
        ADAPTER_RENDER::DestroyVirtualGpuState((ADAPTER_RENDER *)this, v8);
        *(_QWORD *)(v9 + 40) = 0LL;
      }
    }
  }
  v10 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 288);
  if ( v10 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v10, a2) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v19 + 24) = 1603LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v20 + 24) = 1609LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v13 = (struct DXGDEVICE **)*((_QWORD *)a2 + 3);
  if ( v13[1] != (struct DXGDEVICE *)((char *)a2 + 24)
    || (v14 = (struct DXGDEVICE **)*((_QWORD *)a2 + 4), *v14 != (struct DXGDEVICE *)((char *)a2 + 24)) )
  {
    __fastfail(3u);
  }
  *v14 = (struct DXGDEVICE *)v13;
  v13[1] = (struct DXGDEVICE *)v14;
  DXGDEVICE::DestroyAllDeviceState(a2, a3);
  v15 = *(struct DXGDEVICE ***)a2;
  if ( *((_DWORD *)a2 + 82) == 2 )
  {
    if ( v15[1] != a2 || (v16 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1), *v16 != a2) )
      __fastfail(3u);
  }
  else if ( v15[1] != a2 || (v16 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1), *v16 != a2) )
  {
    __fastfail(3u);
  }
  *v16 = (struct DXGDEVICE *)v15;
  v15[1] = (struct DXGDEVICE *)v16;
  DXGDEVICE::~DXGDEVICE(a2);
  ExFreePoolWithTag(a2, 0);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
}
