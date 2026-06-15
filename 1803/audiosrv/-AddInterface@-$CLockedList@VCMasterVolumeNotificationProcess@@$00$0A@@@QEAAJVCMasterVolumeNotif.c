/*
 * XREFs of ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x180009708
 * Callers:
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x180009360 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x180009920 (-GrowBuffer@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotif.c)
 *     ?RemoveAt@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180049A24 (-RemoveAt@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotific.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  LPCRITICAL_SECTION v3; // rdi
  unsigned int v4; // esi
  __int64 i; // rdx
  bool v6; // zf
  char *v7; // r14
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r14
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // rbx
  LPCRITICAL_SECTION v12; // [rsp+20h] [rbp-48h]
  ATL::CAtlException *v13; // [rsp+30h] [rbp-38h] BYREF
  ATL::CAtlException *v14; // [rsp+38h] [rbp-30h] BYREF
  char *v16; // [rsp+88h] [rbp+20h]

  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v6 = (unsigned int)i == *(_QWORD *)&v3[1].LockCount;
    if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&v3[1].LockCount )
      break;
    if ( *((_DWORD *)&v3[1].DebugInfo->Type + i) == a2 )
    {
      v6 = (unsigned int)i == *(_QWORD *)&v3[1].LockCount;
      break;
    }
  }
  if ( v6 )
  {
    try
    {
      v12 = v3 + 1;
      v7 = *(char **)&v3[1].LockCount;
      if ( v7 >= v3[1].OwningThread
        && !(unsigned __int8)ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::GrowBuffer(
                               &v3[1],
                               v7 + 1) )
      {
        ATL::AtlThrowImpl(-2147024882);
      }
      *((_DWORD *)&v3[1].DebugInfo->Type + (_QWORD)v7) = a2;
      ++*(_QWORD *)&v3[1].LockCount;
      v16 = v7;
    }
    catch ( ATL::CAtlException *v13 )
    {
      v10 = v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v4 = *(_DWORD *)v10;
      if ( *(int *)v10 < 0 )
      {
        v3 = lpCriticalSection;
        goto LABEL_12;
      }
      v3 = lpCriticalSection;
    }
    v4 = 0;
    try
    {
      DebugInfo = v3[2].DebugInfo;
      if ( (unsigned __int64)DebugInfo >= *(_QWORD *)&v3[2].LockCount
        && !(unsigned __int8)ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::GrowBuffer(
                               &v3[1].SpinCount,
                               (char *)&DebugInfo->Type + 1) )
      {
        ATL::AtlThrowImpl(-2147024882);
      }
      *(_DWORD *)(v3[1].SpinCount + 4LL * (_QWORD)DebugInfo) = 1;
      ++v3[2].DebugInfo;
    }
    catch ( ATL::CAtlException *v14 )
    {
      v11 = v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        _o__resetstkoflw();
      v4 = *(_DWORD *)v11;
      if ( *(int *)v11 < 0 )
        ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::RemoveAt(
          v12,
          v16);
      v3 = lpCriticalSection;
    }
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(v3[1].SpinCount + 4 * i);
  }
LABEL_12:
  LeaveCriticalSection(v3);
  return v4;
}
