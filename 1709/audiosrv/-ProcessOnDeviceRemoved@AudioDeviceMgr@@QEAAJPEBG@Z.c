/*
 * XREFs of ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x1800E7A24
 * Callers:
 *     ?Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x1800E7A00 (-Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 *     ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x1800E7CA0 (-ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AudioDeviceMgr::ProcessOnDeviceRemoved(AudioDeviceMgr *this, const unsigned __int16 *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  BSTR bstrString[3]; // [rsp+48h] [rbp-18h] BYREF
  int v14; // [rsp+90h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+48h] BYREF

  bstrString[1] = (BSTR)-2LL;
  v16 = 0LL;
  v12 = 0LL;
  bstrString[0] = 0LL;
  v14 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  v4 = (*(__int64 (__fastcall **)(AudioDeviceMgr *, const unsigned __int16 *, __int64 *, __int64 *))(*(_QWORD *)this + 80LL))(
         this,
         a2,
         &v16,
         &v12);
  if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 40LL))(v12, v16), v4 < 0) )
  {
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
    v5 = *((_QWORD *)this + 10);
    if ( v5 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v5 + 176LL))(v5, v16, &v14);
      if ( v4 < 0 )
        goto LABEL_24;
      if ( v14 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 10);
        *((_DWORD *)this + 71) = GetTickCount();
        *((_DWORD *)this + 70) = 1;
      }
    }
    v6 = *((_QWORD *)this + 11);
    if ( !v6 )
      goto LABEL_20;
    lpCriticalSection = 0LL;
    pv = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v6 + 24LL))(v6, &lpCriticalSection);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(LPCRITICAL_SECTION, LPVOID *))&lpCriticalSection->DebugInfo->Flags)(
             lpCriticalSection,
             &pv);
      if ( v4 >= 0 )
      {
        if ( !(unsigned int)_o__wcsicmp(a2, pv) )
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 11);
        CoTaskMemFree(pv);
        pv = 0LL;
        if ( lpCriticalSection )
          ((void (__fastcall *)(LPCRITICAL_SECTION))lpCriticalSection->DebugInfo->ProcessLocksList.Flink)(lpCriticalSection);
LABEL_20:
        v7 = *((_QWORD *)this + 5);
        if ( v7 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, v16);
        v8 = (*(__int64 (__fastcall **)(__int64, BSTR *))(*(_QWORD *)v16 + 104LL))(v16, bstrString);
        v4 = 0;
        if ( v8 < 0 )
          v4 = v8;
        goto LABEL_24;
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( lpCriticalSection )
      ((void (__fastcall *)(LPCRITICAL_SECTION))lpCriticalSection->DebugInfo->ProcessLocksList.Flink)(lpCriticalSection);
  }
LABEL_24:
  SysFreeString(bstrString[0]);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v4;
}
