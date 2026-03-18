/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C01C66BC
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C01C4520 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006310 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00AA594 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA6D4 (DxgkAcquireAdapterCoreSync.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall *v8)(__int64, int *, __int64, __int64); // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _BYTE *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  _BYTE v43[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( qword_1C006FC08 )
  {
    v5 = *(_QWORD *)(qword_1C006FC08 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 483) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 168), 1u);
    if ( *(_QWORD *)(v5 + 3704) )
    {
      v8 = *(void (__fastcall **)(__int64, int *, __int64, __int64))(v5 + 984);
      v9 = *(_QWORD *)(v5 + 48);
      *(_QWORD *)(v5 + 5064) = a1;
      LOBYTE(v7) = byte_1C006F9DB;
      LOBYTE(v6) = dword_1C006FCB0 == 1;
      v8(v9, &dword_1C006FC10, v6, v7);
      *(_QWORD *)(v5 + 5064) = 0LL;
      byte_1C006F9DB = 0;
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 3704), 2LL);
      v10 = *(_QWORD *)(v5 + 3704);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v10) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
        *(_QWORD *)(v15 + 24) = 7237LL;
        WdLogEvent5_WdAssertion(v15);
      }
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v10) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        *(_QWORD *)(v20 + 24) = 7239LL;
        WdLogEvent5_WdAssertion(v20);
      }
      *(_DWORD *)(v10 + 176) = 1;
      *(_BYTE *)(v10 + 180) = 0;
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3704), 2LL);
      v21 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v5 + 2608), 1u);
      v24 = v21;
      if ( v21 < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v23, v22);
        *(_QWORD *)(v25 + 24) = v24;
        WdLogEvent5_WdError(v25);
      }
      memset(&dword_1C006FC10, 0, 0x20uLL);
      dword_1C006FC28 = -1;
      memset(&xmmword_1C006FC30, 0, 0x80uLL);
      qword_1C006FC00 = qword_1C006FC08;
      dword_1C006FCB0 = 4;
      v32 = *((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26, v28, v29) + 117);
      if ( *(_BYTE *)v32 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v30, v33, v34) + 24) = 206LL;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v43, *(struct DXGFASTMUTEX *const *)(v32 + 8), v33, v34);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
        v38 = (_BYTE *)(v32 + 16);
        v39 = 18LL;
        do
        {
          *v38 = 0;
          v38 += 48;
          --v39;
        }
        while ( v39 );
        ++*(_DWORD *)(v32 + 880);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v35, v36, v37) + 24) = 228LL;
        if ( v43[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43, v40, v41, v42);
      }
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
