/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18006D78C
 * Callers:
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18006CA00 (-DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     ??A?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z @ 0x18006C3E8 (--A-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z.c)
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x18006D604 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 */

__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  LPCRITICAL_SECTION v3; // rdi
  unsigned int v4; // r14d
  _DWORD *v5; // rax
  unsigned int i; // r15d
  ATL::CAtlException *v8; // [rsp+28h] [rbp-30h] BYREF

  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
    {
      if ( *(_DWORD *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](&v3[1].DebugInfo, i) == a2 )
      {
        v5 = (_DWORD *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](&v3[1].SpinCount, i);
        --*v5;
        if ( !*(_DWORD *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](
                           &v3[1].SpinCount,
                           i) )
        {
          ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1].DebugInfo, i);
          ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1].SpinCount, i);
          goto LABEL_10;
        }
      }
    }
  }
  catch ( ATL::CAtlException *v8 )
  {
    v3 = lpCriticalSection;
    v4 = *(_DWORD *)v8;
  }
LABEL_10:
  LeaveCriticalSection(v3);
  return v4;
}
