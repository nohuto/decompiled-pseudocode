/*
 * XREFs of ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x1800E8118
 * Callers:
 *     ?s_WorkItemThreadProc@AudioDeviceMgr@@CAKPEAX@Z @ 0x1800E8270 (-s_WorkItemThreadProc@AudioDeviceMgr@@CAKPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800EB5A8 (-FreeNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AudioDeviceMgr::WorkItemThreadProc(AudioDeviceMgr *this)
{
  int v2; // ebp
  DWORD v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v10; // [rsp+30h] [rbp-38h]
  HANDLE Handles[3]; // [rsp+38h] [rbp-30h] BYREF

  v2 = 0;
  Handles[0] = *((HANDLE *)this + 33);
  Handles[1] = *((HANDLE *)this + 32);
  while ( 1 )
  {
    v3 = WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    if ( !v3 )
      break;
    if ( v3 == 1 )
    {
      do
      {
        v4 = 0LL;
        ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
          (__int64)&lpCriticalSection,
          (struct _RTL_CRITICAL_SECTION *)((char *)this + 216));
        v5 = *((_QWORD *)this + 23);
        if ( v5 )
        {
          v6 = (__int64 *)((char *)this + 168);
          v7 = (__int64 *)*((_QWORD *)this + 21);
          if ( !v7 )
            ATL::AtlThrowImpl(-2147467259);
          v4 = v7[2];
          v7[2] = 0LL;
          v2 |= 1u;
          v8 = *v7;
          *v6 = *v7;
          if ( v8 )
            *(_QWORD *)(v8 + 8) = 0LL;
          else
            *((_QWORD *)this + 22) = 0LL;
          ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::FreeNode(v6);
        }
        if ( v10 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v10 = 0;
        }
        if ( v5 )
          (**(void (__fastcall ***)(__int64, AudioDeviceMgr *))v4)(v4, this);
        if ( v4 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
      }
      while ( v5 );
    }
  }
}
