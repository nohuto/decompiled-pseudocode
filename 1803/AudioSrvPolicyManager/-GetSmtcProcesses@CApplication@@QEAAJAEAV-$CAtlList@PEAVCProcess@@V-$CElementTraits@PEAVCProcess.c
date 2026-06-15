/*
 * XREFs of ?GetSmtcProcesses@CApplication@@QEAAJAEAV?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@@Z @ 0x180012B74
 * Callers:
 *     ?GetNotificationDataSize@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEA_K@Z @ 0x180024ACC (-GetNotificationDataSize@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x180024CC4 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F7F4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCTrackedEndpoint@@V?$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCTrackedEndpoint@@@Z @ 0x180017498 (-AddHead@-$CAtlList@PEAVCTrackedEndpoint@@V-$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GetSmtcProcesses(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v11; // [rsp+30h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h]
  int v16; // [rsp+80h] [rbp+18h]
  _QWORD *v17; // [rsp+88h] [rbp+20h]

  v15 = a2;
  v14 = a1;
  v2 = a2;
  v3 = a1;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  try
  {
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(v2);
  }
  catch ( ATL::CAtlException *v10 )
  {
    v8 = v10;
    if ( *(_DWORD *)v10 == -1073741571 )
      _o__resetstkoflw();
    v16 = *(_DWORD *)v8;
    v4 = v16;
    if ( v16 < 0 )
      goto LABEL_11;
    v3 = v14;
    v2 = v15;
  }
  v5 = *(_QWORD **)(v3 + 72);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    v17 = v5;
    v14 = v6;
    if ( !*(_DWORD *)(v6 + 472) && *(_DWORD *)(v6 + 540) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v4 = 0;
      try
      {
        ATL::CAtlList<CTrackedEndpoint *,ATL::CElementTraits<CTrackedEndpoint *>>::AddHead(v2, &v14);
      }
      catch ( ATL::CAtlException *v11 )
      {
        v9 = v11;
        if ( *(_DWORD *)v11 == -1073741571 )
          _o__resetstkoflw();
        v16 = *(_DWORD *)v9;
        v4 = v16;
        if ( v16 < 0 )
          break;
        v2 = v15;
        v5 = v17;
      }
    }
  }
LABEL_11:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
