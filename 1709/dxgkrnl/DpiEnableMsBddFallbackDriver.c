/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C01E07E8
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C011BC30 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C01DDF40 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0002870 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00B8910 (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  void (__fastcall *v7)(__int64, int *, __int64, __int64); // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdx
  _BYTE *v23; // rax
  __int64 v24; // rcx
  _BYTE v25[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( qword_1C0060A88 )
  {
    v4 = *(_QWORD *)(qword_1C0060A88 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    if ( *(_QWORD *)(v4 + 3728) )
    {
      v7 = *(void (__fastcall **)(__int64, int *, __int64, __int64))(v4 + 984);
      v8 = *(_QWORD *)(v4 + 48);
      *(_QWORD *)(v4 + 5200) = a1;
      LOBYTE(v6) = byte_1C006085B;
      LOBYTE(v5) = dword_1C0060B30 == 1;
      v7(v8, &dword_1C0060A90, v5, v6);
      *(_QWORD *)(v4 + 5200) = 0LL;
      byte_1C006085B = 0;
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3728), 2);
      v9 = *(_QWORD *)(v4 + 3728);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v11 + 24) = 7343LL;
        WdLogEvent5_WdAssertion(v11);
      }
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v9) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v13 + 24) = 7345LL;
        WdLogEvent5_WdAssertion(v13);
      }
      *(_DWORD *)(v9 + 176) = 1;
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3728), 2);
      v14 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v4 + 2608), 1u);
      v16 = v14;
      if ( v14 < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v17 + 24) = v16;
        WdLogEvent5_WdError(v17);
      }
      memset(&dword_1C0060A90, 0, 0x20uLL);
      dword_1C0060AA8 = -1;
      memset(&xmmword_1C0060AB0, 0, 0x80uLL);
      qword_1C0060A80 = qword_1C0060A88;
      dword_1C0060B30 = 4;
      v21 = *((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 117);
      if ( *(_BYTE *)v21 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19) + 24) = 201LL;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, *(struct DXGFASTMUTEX *const *)(v21 + 8));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
        v23 = (_BYTE *)(v21 + 16);
        v24 = 18LL;
        do
        {
          *v23 = 0;
          v23 += 32;
          --v24;
        }
        while ( v24 );
        ++*(_DWORD *)(v21 + 592);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v22) + 24) = 223LL;
        if ( v25[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
      }
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
