/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x1C01C6500
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00AA594 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA6D4 (DxgkAcquireAdapterCoreSync.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C016DE50 (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  void (__fastcall *v11)(__int64, int *); // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _BYTE v30[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( qword_1C006FC08 )
  {
    v5 = *(_QWORD *)(qword_1C006FC08 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 483) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 168), 1u);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 3704), 2LL);
    DXGADAPTER::EnableMsBddFallback(*(DXGADAPTER **)(v5 + 3704), 0);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3704), 2LL);
    v6 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v5 + 2608), 0);
    v9 = v6;
    if ( v6 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v10 + 24) = v9;
      WdLogEvent5_WdError(v10);
    }
    v11 = *(void (__fastcall **)(__int64, int *))(v5 + 992);
    v12 = *(_QWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 5064) = a1;
    v11(v12, &dword_1C006FC10);
    *(_QWORD *)(v5 + 5064) = 0LL;
    if ( qword_1C006FC00 == qword_1C006FC08 )
      qword_1C006FC00 = 0LL;
    dword_1C006FCB0 = 2;
    v19 = *((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13, v15, v16) + 117);
    if ( *(_BYTE *)v19 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v20, v21) + 24) = 206LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, *(struct DXGFASTMUTEX *const *)(v19 + 8), v20, v21);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
      v25 = (_BYTE *)(v19 + 16);
      v26 = 18LL;
      do
      {
        *v25 = 0;
        v25 += 48;
        --v26;
      }
      while ( v26 );
      ++*(_DWORD *)(v19 + 880);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v22, v23, v24) + 24) = 228LL;
      if ( v30[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v27, v28, v29);
    }
    if ( *(_BYTE *)(v5 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v3 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v3);
    return 3221225659LL;
  }
}
