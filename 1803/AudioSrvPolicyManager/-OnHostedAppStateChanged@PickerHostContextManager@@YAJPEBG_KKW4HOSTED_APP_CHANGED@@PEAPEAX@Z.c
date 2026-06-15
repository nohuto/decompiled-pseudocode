/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180020204
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x1800218F0 (PbmReportHostedAppStateChange.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800201C8 (WPP_SF_q.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180020444 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180020504 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x180020C98 (-AddHead@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        CPickerHostContext **a5)
{
  int v5; // r12d
  unsigned int v6; // r13d
  CPickerHostContext **v7; // r15
  LPCRITICAL_SECTION v8; // r14
  __int64 v9; // rdx
  _QWORD *i; // rdi
  HANDLE ProcessHeap; // rax
  CPickerHostContext *v12; // rax
  __int64 v13; // rcx
  CPickerHostContext *v14; // rdi
  int v15; // edi
  ATL::CAtlException *v17; // rbx
  __int64 *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-A8h] BYREF
  int v20; // [rsp+30h] [rbp-78h]
  CPickerHostContext *v21; // [rsp+38h] [rbp-70h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-68h] BYREF
  char v23; // [rsp+48h] [rbp-60h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  ATL::CAtlException *v25; // [rsp+58h] [rbp-50h] BYREF
  LPCRITICAL_SECTION v26; // [rsp+60h] [rbp-48h] BYREF
  char v27; // [rsp+68h] [rbp-40h]

  v24 = -2LL;
  v5 = a4;
  v6 = a3;
  v26 = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v27 = 0;
  ATL::CCritSecLock::Lock(&v26);
  v7 = a5;
  v8 = (LPCRITICAL_SECTION)*a5;
  if ( *a5 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
    v23 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    for ( i = (_QWORD *)PickerHostContextManager::s_PickerHostContextList; i; i = (_QWORD *)*i )
    {
      if ( (LPCRITICAL_SECTION)i[2] == v8 )
        goto LABEL_7;
    }
    i = 0LL;
LABEL_7:
    if ( !i
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, v8);
    }
    if ( v23 )
      LeaveCriticalSection(lpCriticalSection);
    if ( i )
      goto LABEL_24;
  }
  ProcessHeap = GetProcessHeap();
  v12 = (CPickerHostContext *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v14 = v12;
  if ( v12 )
  {
    memset_0(v12, 0, 0x30uLL);
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    *((_QWORD *)v14 + 4) = 0LL;
    *((_DWORD *)v14 + 10) = 10;
  }
  else
  {
    v14 = 0LL;
  }
  v21 = v14;
  v8 = (LPCRITICAL_SECTION)v14;
  lpCriticalSection = (LPCRITICAL_SECTION)v14;
  if ( v14 )
  {
    try
    {
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(v13, &lpCriticalSection);
    }
    catch ( ATL::CAtlException *v25 )
    {
      v18 = &v19;
      v17 = v25;
      if ( *(_DWORD *)v25 == -1073741571 )
        _o__resetstkoflw();
      v20 = *(_DWORD *)v17;
      v15 = v20;
      if ( v20 < 0 )
      {
        CPickerHostContext::`scalar deleting destructor'(v21, (unsigned int)v18);
        goto LABEL_25;
      }
      v7 = a5;
      v5 = a4;
      v6 = a3;
      v8 = lpCriticalSection;
      v14 = v21;
    }
    *v7 = v14;
LABEL_24:
    v15 = CPickerHostContext::AddHostedAppInteractivityNotification(v8, a1, a2, v6, v5);
LABEL_25:
    if ( v15 >= 0 )
      goto LABEL_31;
    goto LABEL_26;
  }
  v15 = -2147024882;
LABEL_26:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, v15);
  }
  AudPolicyLogError("PickerHostContextManager::OnHostedAppStateChanged", 87, v15);
LABEL_31:
  if ( v27 )
    LeaveCriticalSection(v26);
  return (unsigned int)v15;
}
