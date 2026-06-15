/*
 * XREFs of ?RemoveInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x1800885E4
 * Callers:
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x1800882E0 (-DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x180002874 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180088530 (-RemoveAt@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        _QWORD *a2)
{
  _QWORD *v2; // rsi
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // r12d
  __int64 v5; // r15
  ULONG_PTR *p_SpinCount; // r15
  __int64 i; // r14
  ATL::CAtlException *v9; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    for ( i = 0LL; (unsigned __int64)(unsigned int)i < *(_QWORD *)&v3[1].LockCount; i = (unsigned int)(i + 1) )
    {
      v5 = *v2;
      if ( *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        &v3[1].DebugInfo,
                        (unsigned int)i) == v5 )
      {
        p_SpinCount = &v3[1].SpinCount;
        if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
          ATL::AtlThrowImpl(-2147024809);
        --*(_DWORD *)(*p_SpinCount + 4 * i);
        if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
          ATL::AtlThrowImpl(-2147024809);
        if ( !*(_DWORD *)(*p_SpinCount + 4 * i) )
        {
          ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::RemoveAt(
            (__int64 *)&v3[1],
            (unsigned int)i);
          ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1].SpinCount, (unsigned int)i);
          goto LABEL_16;
        }
      }
    }
  }
  catch ( ATL::CAtlException *v9 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v9;
  }
LABEL_16:
  LeaveCriticalSection(v3);
  if ( *v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
  return v4;
}
