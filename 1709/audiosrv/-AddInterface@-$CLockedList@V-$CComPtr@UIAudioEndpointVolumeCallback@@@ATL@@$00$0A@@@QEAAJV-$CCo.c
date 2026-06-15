/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x18006C61C
 * Callers:
 *     ?AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x18006C9D0 (-AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x18005B9A8 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ??A?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z @ 0x18006C3E8 (--A-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z.c)
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x18006C504 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ?Add@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA_KAEBV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@@Z @ 0x18006C558 (-Add@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComPtr@UI.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x180079238 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::AddInterface(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  unsigned int i; // esi
  bool v5; // zf
  __int64 v6; // r15
  _DWORD *v7; // rax
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v12; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+80h] [rbp+18h]
  unsigned __int64 v16; // [rsp+88h] [rbp+20h]

  v2 = a1;
  v3 = 0;
  EnterCriticalSection(a1);
  for ( i = 0; ; ++i )
  {
    v5 = i == *(_QWORD *)&v2[1].LockCount;
    if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
      break;
    v6 = *a2;
    if ( *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v2[1]) == v6 )
    {
      v5 = i == *(_QWORD *)&v2[1].LockCount;
      break;
    }
  }
  if ( !v5 )
  {
    v7 = (_DWORD *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](&v2[1].SpinCount, i);
    ++*v7;
    goto LABEL_14;
  }
  try
  {
    v16 = ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::Add(
            &v2[1].DebugInfo,
            a2);
  }
  catch ( ATL::CAtlException *v11 )
  {
    v9 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _o__resetstkoflw();
    v3 = *(_DWORD *)v9;
    if ( *(int *)v9 < 0 )
    {
      v2 = a1;
      goto LABEL_14;
    }
    v2 = a1;
  }
  v3 = 0;
  try
  {
    ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v2[1].SpinCount);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v10 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v15 = *(_DWORD *)v10;
    v3 = *(_DWORD *)v10;
    v2 = a1;
    if ( v15 < 0 )
      ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
        (void **)&a1[1].DebugInfo,
        v16);
  }
LABEL_14:
  LeaveCriticalSection(v2);
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v3;
}
