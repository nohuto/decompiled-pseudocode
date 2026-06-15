/*
 * XREFs of ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x180055EE4
 * Callers:
 *     ?s_WorkItemThreadProc@AudioDeviceMgr@@CAKPEAX@Z @ 0x18005FCF0 (-s_WorkItemThreadProc@AudioDeviceMgr@@CAKPEAX@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAA?AV?$CAutoPtr@VWorkItemBase@@@2@XZ @ 0x180117350 (-RemoveHead@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AudioDeviceMgr::WorkItemThreadProc(HANDLE *this)
{
  DWORD v2; // eax
  __int64 v3; // rbx
  HANDLE v4; // rsi
  __int64 *v5; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-28h] BYREF
  char v7; // [rsp+30h] [rbp-20h]
  HANDLE Handles[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h]

  Handles[0] = this[28];
  Handles[1] = this[27];
  while ( 1 )
  {
    v2 = WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    if ( !v2 )
      break;
    if ( v2 == 1 )
    {
      do
      {
        v3 = 0LL;
        v10 = 0LL;
        ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
          &lpCriticalSection,
          this + 22);
        v4 = this[18];
        if ( v4 )
        {
          v5 = (__int64 *)ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveHead(
                            this + 16,
                            &v9);
          v3 = *v5;
          *v5 = 0LL;
          v10 = v3;
          if ( v9 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
          v9 = 0LL;
        }
        if ( v7 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v7 = 0;
        }
        if ( v4 )
          (**(void (__fastcall ***)(__int64, HANDLE *))v3)(v3, this);
        if ( v3 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1LL);
      }
      while ( v4 );
    }
  }
}
