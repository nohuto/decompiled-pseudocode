/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0170654
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01187B4 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0012D20 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C0022DEC (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0045C24 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9148 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z @ 0x1C0196914 (-RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int i; // esi
  __int64 v7; // rdi
  void *v8; // rcx
  unsigned int j; // edi
  __int64 v10; // rsi
  void *v11; // rcx
  unsigned int k; // esi
  __int64 v13; // rdi
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int m; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  ADAPTER_DISPLAY *v25; // rdi
  MONITOR_MGR *v26; // rcx
  ADAPTER_DISPLAY *v27; // rax
  __int64 v28; // rcx
  DXGDODPRESENT *v29; // rcx
  ADAPTER_DISPLAY *v30; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _BYTE v35[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( this[23] != (ADAPTER_DISPLAY *)(this + 23) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 4109LL;
    WdLogEvent5_WdAssertion(v5);
  }
  for ( i = 0; i < *((_DWORD *)this + 20); *(_DWORD *)((char *)this[14] + v7 + 1068) = -1 )
  {
    v7 = 3208LL * i;
    v8 = *(void **)((char *)this[14] + v7 + 1040);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)((char *)this[14] + v7 + 1040) = 0LL;
    }
    ++i;
    *(_DWORD *)((char *)this[14] + v7 + 1048) = 0;
    *((_BYTE *)this[14] + v7 + 1052) = 0;
    *(_DWORD *)((char *)this[14] + v7 + 1064) = -1;
  }
  for ( j = 0; j < *((_DWORD *)this + 20); ++j )
  {
    v10 = 3208LL * j;
    v11 = *(void **)((char *)this[14] + v10 + 864);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *(_QWORD *)((char *)this[14] + v10 + 864) = 0LL;
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 20); ++k )
  {
    v13 = 3208LL * k;
    v14 = *(void **)((char *)this[14] + v13 + 760);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)((char *)this[14] + v13 + 760) = 0LL;
      *(_DWORD *)((char *)this[14] + v13 + 776) = 0;
    }
    v15 = *(void **)((char *)this[14] + v13 + 808);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0);
      *(_QWORD *)((char *)this[14] + v13 + 808) = 0LL;
    }
    v16 = *(void **)((char *)this[14] + v13 + 848);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *(_QWORD *)((char *)this[14] + v13 + 848) = 0LL;
    }
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, (struct DXGFASTMUTEX *const)(this + 50), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
  for ( m = 0; m < *((_DWORD *)this + 20); ++m )
    DISPLAY_SOURCE::ClearAllDisplayState((ADAPTER_DISPLAY *)((char *)this[14] + 3208 * m), v17, v18, v19);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, v17, v18, v19);
  v25 = this[11];
  if ( v25 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v25 + 5));
    (**(void (__fastcall ***)(ADAPTER_DISPLAY *, __int64))v25)(v25, 1LL);
    this[11] = 0LL;
  }
  if ( this[12] )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v23, v24) + 24) = this;
    v26 = this[12];
    if ( v26 )
      MONITOR_MGR::`scalar deleting destructor'(v26);
    this[12] = 0LL;
  }
  v27 = this[2];
  v28 = *((_QWORD *)v27 + 24);
  if ( v28 && !*((_QWORD *)v27 + 286) )
  {
    DpiSetSchedulerCallbackState(v28, 0);
    KeFlushQueuedDpcs();
  }
  v29 = this[33];
  if ( v29 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v29);
    this[33] = 0LL;
  }
  v30 = this[2];
  Global = DXGGLOBAL::GetGlobal((__int64)v29, v21, v23, v24);
  DXGADAPTERSOURCEHASH::RemoveAdapter(
    (struct DXGGLOBAL *)((char *)Global + 840),
    (const struct _LUID *)((char *)v30 + 268));
  if ( v35[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, v32, v33, v34);
}
