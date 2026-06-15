/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180016D74
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x1800183E0 (PbmReportHostedAppStateChange.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180016D38 (WPP_SF_q.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180016F9C (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180017058 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x1800177B4 (-AddHead@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 *     memset @ 0x1800275FE (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        LPCRITICAL_SECTION *a4)
{
  LPCRITICAL_SECTION *v4; // r15
  unsigned int v5; // r12d
  unsigned int v6; // r13d
  LPCRITICAL_SECTION v7; // rdi
  __int64 v8; // rdx
  _QWORD *i; // rsi
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  ATL::CAtlException *v15; // rbx
  __int64 *v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-98h] BYREF
  int v18; // [rsp+20h] [rbp-78h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-70h] BYREF
  char v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  ATL::CAtlException *v22; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION v23; // [rsp+48h] [rbp-50h] BYREF
  char v24; // [rsp+50h] [rbp-48h]

  v21 = -2LL;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v23 = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v24 = 0;
  ATL::CCritSecLock::Lock(&v23);
  v7 = *v4;
  if ( *v4 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
    v20 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    for ( i = (_QWORD *)PickerHostContextManager::s_PickerHostContextList; i; i = (_QWORD *)*i )
    {
      if ( (LPCRITICAL_SECTION)i[2] == v7 )
        goto LABEL_7;
    }
    i = 0LL;
LABEL_7:
    if ( !i
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, v7);
    }
    if ( v20 )
      LeaveCriticalSection(lpCriticalSection);
    if ( i )
      goto LABEL_24;
  }
  ProcessHeap = GetProcessHeap();
  v11 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v7 = v11;
  if ( v11 )
  {
    memset(v11, 0, 0x30uLL);
    v7->DebugInfo = 0LL;
    *(_QWORD *)&v7->LockCount = 0LL;
    v7->OwningThread = 0LL;
    v7->LockSemaphore = 0LL;
    v7->SpinCount = 0LL;
    LODWORD(v7[1].DebugInfo) = 10;
    lpCriticalSection = v7;
  }
  else
  {
    v7 = 0LL;
    lpCriticalSection = 0LL;
  }
  if ( v7 )
  {
    try
    {
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(v12, &lpCriticalSection);
    }
    catch ( ATL::CAtlException *v22 )
    {
      v16 = &v17;
      v15 = v22;
      if ( *(_DWORD *)v22 == -1073741571 )
        _o__resetstkoflw();
      v18 = *(_DWORD *)v15;
      v13 = v18;
      if ( v18 < 0 )
      {
        CPickerHostContext::`scalar deleting destructor'((CPickerHostContext *)lpCriticalSection, (unsigned int)v16);
        goto LABEL_25;
      }
      v4 = a4;
      v5 = a3;
      v6 = a2;
      v7 = lpCriticalSection;
    }
    *v4 = v7;
LABEL_24:
    v13 = CPickerHostContext::AddHostedAppInteractivityNotification(v7, a1, v6, v5);
LABEL_25:
    if ( v13 >= 0 )
      goto LABEL_31;
    goto LABEL_26;
  }
  v13 = -2147024882;
LABEL_26:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, v13);
  }
  AudPolicyLogError("PickerHostContextManager::OnHostedAppStateChanged", 84, v13);
LABEL_31:
  if ( v24 )
    LeaveCriticalSection(v23);
  return (unsigned int)v13;
}
