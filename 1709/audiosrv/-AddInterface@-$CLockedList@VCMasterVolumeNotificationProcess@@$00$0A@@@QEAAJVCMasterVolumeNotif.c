/*
 * XREFs of ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18006C7D0
 * Callers:
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18006C960 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     ??A?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z @ 0x18006C3E8 (--A-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z.c)
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x18006C504 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ?Add@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCMasterVolumeNotificationProcess@@@Z @ 0x18006C5BC (-Add@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotification.c)
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x18006D604 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface(
        struct _RTL_CRITICAL_SECTION *a1,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v4; // esi
  unsigned int i; // r15d
  bool v6; // zf
  _DWORD *v7; // rax
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v12; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+80h] [rbp+18h]
  unsigned __int64 v16; // [rsp+88h] [rbp+20h]

  v14 = a2;
  v3 = a1;
  v4 = 0;
  EnterCriticalSection(a1);
  for ( i = 0; ; ++i )
  {
    v6 = i == *(_QWORD *)&v3[1].LockCount;
    if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
      break;
    if ( *(_DWORD *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](&v3[1].DebugInfo, i) == a2 )
    {
      v6 = i == *(_QWORD *)&v3[1].LockCount;
      break;
    }
  }
  if ( v6 )
  {
    v16 = 0LL;
    try
    {
      v16 = ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::Add(
              &v3[1].DebugInfo,
              &v14);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v9 = v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v15 = *(_DWORD *)v9;
      v4 = v15;
      if ( v15 < 0 )
      {
        v3 = a1;
        goto LABEL_15;
      }
      v3 = a1;
    }
    v4 = 0;
    try
    {
      ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v3[1].SpinCount);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v10 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v15 = *(_DWORD *)v10;
      v4 = v15;
      v3 = a1;
      if ( v15 < 0 )
        ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&a1[1], v16);
    }
  }
  else
  {
    v7 = (_DWORD *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](&v3[1].SpinCount, i);
    ++*v7;
  }
LABEL_15:
  LeaveCriticalSection(v3);
  return v4;
}
