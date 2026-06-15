/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x1800027CC
 * Callers:
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x180002780 (-DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x180002874 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  LPCRITICAL_SECTION v3; // rsi
  unsigned int v4; // r14d
  unsigned int v5; // edi
  ULONG_PTR *p_SpinCount; // r15
  unsigned int i; // edx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF

  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    for ( i = 0; ; ++i )
    {
      v5 = i;
      if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
        break;
      if ( *((_DWORD *)&v3[1].DebugInfo->Type + i) == a2 )
      {
        p_SpinCount = &v3[1].SpinCount;
        if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= v3[2].DebugInfo )
          ATL::AtlThrowImpl(-2147024809);
        --*(_DWORD *)(*p_SpinCount + 4LL * i);
        if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= v3[2].DebugInfo )
          ATL::AtlThrowImpl(-2147024809);
        if ( !*(_DWORD *)(*p_SpinCount + 4LL * i) )
        {
          ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1], i);
          ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1].SpinCount, v5);
          goto LABEL_14;
        }
      }
    }
  }
  catch ( ATL::CAtlException *v9 )
  {
    v3 = lpCriticalSection;
    v4 = *(_DWORD *)v9;
  }
LABEL_14:
  LeaveCriticalSection(v3);
  return v4;
}
