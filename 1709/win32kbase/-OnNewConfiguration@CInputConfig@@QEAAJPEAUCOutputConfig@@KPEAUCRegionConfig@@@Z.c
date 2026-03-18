/*
 * XREFs of ?OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C012FC84
 * Callers:
 *     NtDWMSetInputSystemOutputConfig @ 0x1C00E5A50 (NtDWMSetInputSystemOutputConfig.c)
 * Callees:
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00092D0 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ?_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C0061268 (-_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 */

__int64 __fastcall CInputConfig::OnNewConfiguration(
        CInputConfig *this,
        struct COutputConfig *a2,
        int a3,
        struct CRegionConfig *a4)
{
  struct _SINGLE_LIST_ENTRY *v4; // rbx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v4 = gpInputConfig;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded(
    (CInpLockExclusiveIfNeeded *)&v11,
    (struct CInpPushLock *)&CInputConfig::slock);
  if ( LOBYTE(v4[5].Next) )
    LOBYTE(v4[5].Next) = 0;
  v8 = CInputConfig::_OnNewConfiguration((CInputConfig *)v4, a2, a3, a4);
  if ( !v12 )
  {
    v9 = v11;
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  return v8;
}
