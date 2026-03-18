/*
 * XREFs of ?OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C0131D38
 * Callers:
 *     NtDWMSetInputSystemOutputConfig @ 0x1C00B34F0 (NtDWMSetInputSystemOutputConfig.c)
 * Callees:
 *     ?_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C0053798 (-_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0053C00 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::OnNewConfiguration(
        CInputConfig *this,
        struct COutputConfig *a2,
        int a3,
        struct CRegionConfig *a4)
{
  struct _SINGLE_LIST_ENTRY *v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v4 = gpInputConfig;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded((CInpLockExclusiveIfNeeded *)&v13, a2);
  if ( LOBYTE(v4[5].Next) )
  {
    if ( v4[1].Next )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    LOBYTE(v4[5].Next) = 0;
  }
  v10 = CInputConfig::_OnNewConfiguration((CInputConfig *)v4, a2, a3, a4);
  if ( !v14 )
  {
    v11 = v13;
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  return v10;
}
