/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x1C01E062C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C011BC30 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00B8910 (DxgkAcquireAdapterCoreSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0171620 (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  void (__fastcall *v9)(__int64, int *); // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  _BYTE *v16; // rax
  __int64 v17; // rcx
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( qword_1C0060A88 )
  {
    v4 = *(_QWORD *)(qword_1C0060A88 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3728), 2);
    DXGADAPTER::EnableMsBddFallback(*(DXGADAPTER **)(v4 + 3728), 0);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3728), 2);
    v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v4 + 2608), 0);
    v7 = v5;
    if ( v5 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdError(v8);
    }
    v9 = *(void (__fastcall **)(__int64, int *))(v4 + 992);
    v10 = *(_QWORD *)(v4 + 48);
    *(_QWORD *)(v4 + 5200) = a1;
    v9(v10, &dword_1C0060A90);
    *(_QWORD *)(v4 + 5200) = 0LL;
    if ( qword_1C0060A80 == qword_1C0060A88 )
      qword_1C0060A80 = 0LL;
    dword_1C0060B30 = 2;
    v14 = *((_QWORD *)DXGGLOBAL::GetGlobal(v11) + 117);
    if ( *(_BYTE *)v14 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = 201LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, *(struct DXGFASTMUTEX *const *)(v14 + 8));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
      v16 = (_BYTE *)(v14 + 16);
      v17 = 18LL;
      do
      {
        *v16 = 0;
        v16 += 32;
        --v17;
      }
      while ( v17 );
      ++*(_DWORD *)(v14 + 592);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v15) + 24) = 223LL;
      if ( v18[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    }
    if ( *(_BYTE *)(v4 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v2 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v2);
    return 3221225659LL;
  }
}
