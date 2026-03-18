/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0173D5C
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0116864 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0170FCC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0011A50 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C0020CB4 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0036DBC (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00AEE8C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z @ 0x1C01AB93C (-RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this)
{
  __int64 v2; // rax
  unsigned int i; // esi
  __int64 v4; // rdi
  void *v5; // rcx
  unsigned int j; // edi
  __int64 v7; // rsi
  ReferenceCounted *v8; // rcx
  unsigned int k; // esi
  __int64 v10; // rdi
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  unsigned int m; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  ADAPTER_DISPLAY *v17; // rdi
  MONITOR_MGR *v18; // rcx
  ADAPTER_DISPLAY *v19; // rax
  __int64 v20; // rcx
  DXGDODPRESENT *v21; // rcx
  ADAPTER_DISPLAY *v22; // rbx
  struct DXGGLOBAL *Global; // rax
  _BYTE v24[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( this[23] != (ADAPTER_DISPLAY *)(this + 23) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 4671LL;
    WdLogEvent5_WdAssertion(v2);
  }
  for ( i = 0; i < *((_DWORD *)this + 20); *(_DWORD *)((char *)this[14] + v4 + 1108) = -1 )
  {
    v4 = 3760LL * i;
    v5 = *(void **)((char *)this[14] + v4 + 1080);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)((char *)this[14] + v4 + 1080) = 0LL;
    }
    ++i;
    *(_DWORD *)((char *)this[14] + v4 + 1088) = 0;
    *((_BYTE *)this[14] + v4 + 1092) = 0;
    *(_DWORD *)((char *)this[14] + v4 + 1104) = -1;
  }
  for ( j = 0; j < *((_DWORD *)this + 20); ++j )
  {
    v7 = 3760LL * j;
    v8 = *(ReferenceCounted **)((char *)this[14] + v7 + 904);
    if ( v8 )
    {
      ReferenceCounted::Release(v8);
      *(_QWORD *)((char *)this[14] + v7 + 904) = 0LL;
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 20); ++k )
  {
    v10 = 3760LL * k;
    v11 = *(void **)((char *)this[14] + v10 + 760);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *(_QWORD *)((char *)this[14] + v10 + 760) = 0LL;
      *(_DWORD *)((char *)this[14] + v10 + 776) = 0;
    }
    v12 = *(void **)((char *)this[14] + v10 + 808);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *(_QWORD *)((char *)this[14] + v10 + 808) = 0LL;
    }
    v13 = *(void **)((char *)this[14] + v10 + 848);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *(_QWORD *)((char *)this[14] + v10 + 848) = 0LL;
    }
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(this + 50));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  for ( m = 0; m < *((_DWORD *)this + 20); ++m )
    DISPLAY_SOURCE::ClearAllDisplayState((ADAPTER_DISPLAY *)((char *)this[14] + 3760 * m));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  v17 = this[11];
  if ( v17 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v17 + 5));
    (**(void (__fastcall ***)(ADAPTER_DISPLAY *, __int64))v17)(v17, 1LL);
    this[11] = 0LL;
  }
  if ( this[12] )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15) + 24) = this;
    v18 = this[12];
    if ( v18 )
      MONITOR_MGR::`scalar deleting destructor'(v18);
    this[12] = 0LL;
  }
  v19 = this[2];
  v20 = *((_QWORD *)v19 + 24);
  if ( v20 && !*((_QWORD *)v19 + 289) )
  {
    DpiSetSchedulerCallbackState(v20, 0);
    KeFlushQueuedDpcs();
  }
  v21 = this[33];
  if ( v21 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v21);
    this[33] = 0LL;
  }
  v22 = this[2];
  Global = DXGGLOBAL::GetGlobal((__int64)v21);
  DXGADAPTERSOURCEHASH::RemoveAdapter(
    (struct DXGGLOBAL *)((char *)Global + 840),
    (const struct _LUID *)((char *)v22 + 268));
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
}
