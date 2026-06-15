/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800A5C2C
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800A5F30 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x18004417C (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCMasterVolumeNotificationProcess@@@Z @ 0x18009881C (-Add@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotification.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, _QWORD))
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // r15
  LPCRITICAL_SECTION v3; // r14
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned int i; // esi
  ATL::CAtlException *v8; // [rsp+28h] [rbp-60h] BYREF
  ATL::CAtlException *v9; // [rsp+30h] [rbp-58h] BYREF
  unsigned int *v10; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  int v13; // [rsp+50h] [rbp-38h]
  unsigned __int64 v19; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v5 = 0LL;
  v19 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
  {
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::Add(
        &v10,
        (_DWORD *)&v3[1].DebugInfo->Type + i);
      v19 = ++v5;
    }
    catch ( ATL::CAtlException *v8 )
    {
      if ( *(_DWORD *)v8 == -1073741571 )
        _o__resetstkoflw();
      v4 = 0;
      v3 = lpCriticalSection;
      v2 = a2;
      v5 = v19;
      continue;
    }
  }
  LeaveCriticalSection(v3);
  while ( v4 < v5 )
  {
    try
    {
      if ( v4 >= v11 )
        ATL::AtlThrowImpl(-2147024809);
      (**v2)(v2, v10[v4]);
    }
    catch ( ATL::CAtlException *v9 )
    {
      if ( *(_DWORD *)v9 == -1073741571 )
        _o__resetstkoflw();
      v2 = a2;
      v5 = v19;
    }
    ++v4;
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&v10);
  return 0LL;
}
