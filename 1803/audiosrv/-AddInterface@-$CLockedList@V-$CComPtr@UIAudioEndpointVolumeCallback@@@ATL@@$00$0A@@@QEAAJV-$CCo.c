/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x1800A5804
 * Callers:
 *     ?AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x1800A5A00 (-AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x180097F84 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Add@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA_KAEBV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@@Z @ 0x1800A57A4 (-Add@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComPtr@UI.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800A63D4 (-RemoveAt@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComP.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::AddInterface(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // r15
  struct _RTL_CRITICAL_SECTION *v5; // r14
  bool v6; // zf
  __int64 v7; // r12
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // rbx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+20h] [rbp-68h]
  ATL::CAtlException *v12; // [rsp+30h] [rbp-58h] BYREF
  ATL::CAtlException *v13; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+A8h] [rbp+20h]

  v2 = a1;
  v3 = 0;
  EnterCriticalSection(a1);
  v4 = 0LL;
  v5 = v2 + 1;
  while ( 1 )
  {
    v6 = (unsigned int)v4 == *(_QWORD *)&v2[1].LockCount;
    if ( (unsigned __int64)(unsigned int)v4 >= *(_QWORD *)&v2[1].LockCount )
      break;
    v7 = *a2;
    v5 = v2 + 1;
    if ( *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                      &v2[1].DebugInfo,
                      (unsigned int)v4) == v7 )
    {
      v6 = (unsigned int)v4 == *(_QWORD *)&v2[1].LockCount;
      break;
    }
    v4 = (unsigned int)(v4 + 1);
  }
  if ( v6 )
  {
    try
    {
      v11 = v5;
      v16 = ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::Add(
              v5,
              a2);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v9 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v3 = *(_DWORD *)v9;
      if ( *(int *)v9 < 0 )
      {
        v2 = a1;
        goto LABEL_17;
      }
      v2 = a1;
    }
    v3 = 0;
    try
    {
      ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v2[1].SpinCount);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v10 = v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v3 = *(_DWORD *)v10;
      if ( *(int *)v10 < 0 )
        ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::RemoveAt(
          v11,
          v16);
      v2 = a1;
    }
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)v4 >= v2[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(v2[1].SpinCount + 4 * v4);
  }
LABEL_17:
  LeaveCriticalSection(v2);
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v3;
}
