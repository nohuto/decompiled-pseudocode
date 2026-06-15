/*
 * XREFs of ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x1800E74EC
 * Callers:
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x1800E6C28 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?CreateWorkItemThread@AudioDeviceMgr@@AEAAJXZ @ 0x1800E6DF0 (-CreateWorkItemThread@AudioDeviceMgr@@AEAAJXZ.c)
 *     ?EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ @ 0x1800E6EDC (-EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ.c)
 *     ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x1800E84F4 (-CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::Initialize(AudioDeviceMgr *this, struct IUnknown *a2)
{
  unsigned int v3; // ebx
  struct IUnknown **v4; // rcx
  HRESULT Instance; // eax
  int v6; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]

  v3 = 0;
  if ( a2 )
  {
    v4 = (struct IUnknown **)((char *)this + 40);
    if ( *v4 != a2 )
      ATL::AtlComPtrAssign(v4, a2);
  }
  Instance = EndpointCollection::CreateInstance((struct IEndpointCollection **)this + 8);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = EndpointCollection::CreateInstance((struct IEndpointCollection **)this + 9);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               (LPVOID *)this + 6);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = AudioDeviceMgr::CreateWorkItemThread(this);
  if ( Instance < 0 )
  {
    return (unsigned int)Instance;
  }
  else
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 48LL))(
           *((_QWORD *)this + 6),
           ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    if ( v6 < 0 || (*((_DWORD *)this + 14) = 1, v6 = AudioDeviceMgr::EnumEndpointDevices(this), v6 < 0) )
      v3 = v6;
    if ( v9 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v3;
}
