/*
 * XREFs of ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18002E99C
 * Callers:
 *     ?AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x180017EBC (-AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x180002874 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x18002EB08 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ?Add@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCMasterVolumeNotificationProcess@@@Z @ 0x18002EB54 (-Add@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotification.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  LPCRITICAL_SECTION v3; // rdi
  unsigned int v4; // esi
  PRTL_CRITICAL_SECTION_DEBUG i; // rcx
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-30h] BYREF
  ATL::CAtlException *v10; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h]
  unsigned __int64 v14; // [rsp+78h] [rbp+20h]

  v12 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0LL;
        (unsigned __int64)(unsigned int)i < *(_QWORD *)&v3[1].LockCount
     && *((_DWORD *)&v3[1].DebugInfo->Type + (_QWORD)i) != a2;
        i = (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)((_DWORD)i + 1) )
  {
    ;
  }
  if ( i == *(PRTL_CRITICAL_SECTION_DEBUG *)&v3[1].LockCount )
  {
    v14 = 0LL;
    try
    {
      v14 = ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::Add(
              &v3[1],
              &v12);
    }
    catch ( ATL::CAtlException *v9 )
    {
      v7 = v9;
      if ( *(_DWORD *)v9 == -1073741571 )
        _o__resetstkoflw();
      v13 = *(_DWORD *)v7;
      v4 = v13;
      if ( v13 < 0 )
      {
        v3 = lpCriticalSection;
        goto LABEL_6;
      }
      v3 = lpCriticalSection;
    }
    v4 = 0;
    try
    {
      ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v3[1].SpinCount);
    }
    catch ( ATL::CAtlException *v10 )
    {
      v8 = v10;
      if ( *(_DWORD *)v10 == -1073741571 )
        _o__resetstkoflw();
      v13 = *(_DWORD *)v8;
      v4 = v13;
      v3 = lpCriticalSection;
      if ( v13 < 0 )
        ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&lpCriticalSection[1].DebugInfo, v14);
    }
  }
  else
  {
    if ( i >= v3[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(v3[1].SpinCount + 4LL * (_QWORD)i);
  }
LABEL_6:
  LeaveCriticalSection(v3);
  return v4;
}
