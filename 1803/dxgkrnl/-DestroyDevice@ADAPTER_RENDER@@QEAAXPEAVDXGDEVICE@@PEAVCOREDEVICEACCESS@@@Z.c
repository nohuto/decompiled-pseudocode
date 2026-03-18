/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A59D4
 * Callers:
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5B18 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01CE7F0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0014AA4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0DE0 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C00F107C (--1DXGDEVICE@@QEAA@XZ.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017352C (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, struct COREDEVICEACCESS *a3)
{
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rsi
  ADAPTER_DISPLAY *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGDEVICE **v12; // rcx
  struct DXGDEVICE **v13; // rdx
  struct DXGDEVICE **v14; // rax
  struct DXGDEVICE **v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = 1825LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 82) == 2 )
  {
    if ( this[6] == CurrentThread )
      goto LABEL_5;
    v17 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v17 + 24) = 1828LL;
LABEL_24:
    WdLogEvent5_WdAssertion(v17);
    goto LABEL_5;
  }
  if ( this[4] != CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v17 + 24) = 1832LL;
    goto LABEL_24;
  }
LABEL_5:
  if ( *((_DWORD *)this[2] + 44) == 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 48LL) + 8LL * *((unsigned int *)this[2] + 50));
    if ( v8 )
    {
      if ( *(struct DXGDEVICE **)(v8 + 40) == a2 )
      {
        DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(this[187], a2);
        *(_QWORD *)(v8 + 40) = 0LL;
      }
    }
  }
  v9 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 307);
  if ( v9 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v9, a2) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v18 + 24) = 1867LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v19 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v19 + 24) = 1873LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v12 = (struct DXGDEVICE **)*((_QWORD *)a2 + 3);
  if ( v12[1] != (struct DXGDEVICE *)((char *)a2 + 24)
    || (v13 = (struct DXGDEVICE **)*((_QWORD *)a2 + 4), *v13 != (struct DXGDEVICE *)((char *)a2 + 24)) )
  {
    __fastfail(3u);
  }
  *v13 = (struct DXGDEVICE *)v12;
  v12[1] = (struct DXGDEVICE *)v13;
  DXGDEVICE::DestroyAllDeviceState(a2, a3);
  v14 = *(struct DXGDEVICE ***)a2;
  if ( *((_DWORD *)a2 + 82) == 2 )
  {
    if ( v14[1] != a2 || (v15 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1), *v15 != a2) )
      __fastfail(3u);
  }
  else if ( v14[1] != a2 || (v15 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1), *v15 != a2) )
  {
    __fastfail(3u);
  }
  *v15 = (struct DXGDEVICE *)v14;
  v14[1] = (struct DXGDEVICE *)v15;
  DXGDEVICE::~DXGDEVICE(a2);
  ExFreePoolWithTag(a2, 0);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
}
