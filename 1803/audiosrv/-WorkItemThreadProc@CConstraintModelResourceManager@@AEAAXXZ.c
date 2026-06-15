/*
 * XREFs of ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800DACF8
 * Callers:
 *     ?s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800DAE10 (-s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_W.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800D89B0 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAA?AV?$CAutoPtr@VReacquireResourceWorkItem@@@2@XZ @ 0x1800DA6D4 (-RemoveHead@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VR.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConstraintModelResourceManager::WorkItemThreadProc(CConstraintModelResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rsi
  char *v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v7; // [rsp+30h] [rbp-38h]
  LPCRITICAL_SECTION v8; // [rsp+38h] [rbp-30h] BYREF
  char v9; // [rsp+40h] [rbp-28h]
  void *v10; // [rsp+70h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  while ( 1 )
  {
    v3 = 0LL;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      v2);
    v4 = *((_QWORD *)this + 36);
    v5 = (char *)this + 272;
    if ( v4 )
    {
      if ( !*(_QWORD *)v5 )
        ATL::AtlThrowImpl(-2147467259);
      v3 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
    }
    if ( v7 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v7 = 0;
    }
    if ( !v4 )
      break;
    CConstraintModelResourceManager::DoReacquireSaDeviceResource(this, *(_DWORD *)v3, (unsigned __int64 **)(v3 + 8));
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>((__int64)&v8, v2);
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::RemoveHead(
      (__int64 *)this + 34,
      (__int64 *)&v10);
    if ( v10 )
      operator delete(v10, (const struct std::nothrow_t *)0x18);
    v10 = 0LL;
    if ( v9 )
    {
      LeaveCriticalSection(v8);
      v9 = 0;
    }
  }
}
