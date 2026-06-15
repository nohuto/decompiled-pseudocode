/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18006CC1C
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x18006D150 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x18005B6FC (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??A?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z @ 0x18006C3E8 (--A-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z.c)
 *     ?Add@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCMasterVolumeNotificationProcess@@@Z @ 0x18006C5BC (-Add@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotification.c)
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
  _DWORD *v7; // rax
  unsigned int *v8; // rax
  ATL::CAtlException *v10; // [rsp+28h] [rbp-60h] BYREF
  ATL::CAtlException *v11; // [rsp+30h] [rbp-58h] BYREF
  void *v12[3]; // [rsp+38h] [rbp-50h] BYREF
  int v13; // [rsp+50h] [rbp-38h]
  unsigned __int64 v16; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  v5 = 0LL;
  v16 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
  {
    try
    {
      v7 = (_DWORD *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](&v3[1].DebugInfo, i);
      ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::Add(
        v12,
        v7);
      v16 = ++v5;
    }
    catch ( ATL::CAtlException *v10 )
    {
      if ( *(_DWORD *)v10 == -1073741571 )
        _o__resetstkoflw();
      v4 = 0;
      v3 = lpCriticalSection;
      v2 = a2;
      v5 = v16;
      continue;
    }
  }
  LeaveCriticalSection(v3);
  while ( v4 < v5 )
  {
    try
    {
      v8 = (unsigned int *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](v12, v4);
      (**v2)(v2, *v8);
    }
    catch ( ATL::CAtlException *v11 )
    {
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v2 = a2;
      v5 = v16;
    }
    ++v4;
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>(v12);
  return 0LL;
}
