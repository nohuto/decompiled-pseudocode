/*
 * XREFs of ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x18005642C
 * Callers:
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x18005F730 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x180055DE0 (-CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ?EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ @ 0x180055FE8 (-EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ.c)
 *     ?CreateWorkItemThread@AudioDeviceMgr@@AEAAJXZ @ 0x180056310 (-CreateWorkItemThread@AudioDeviceMgr@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::Initialize(AudioDeviceMgr *this, struct IUnknown *a2)
{
  unsigned int v3; // ebx
  struct IUnknown **v4; // rcx
  HRESULT Instance; // eax
  int v6; // eax

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
               &GUID_85af062d_e5a9_4a92_a30d_784b7ce995e0,
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
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 72LL))(
           *((_QWORD *)this + 6),
           ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    if ( v6 < 0 || (*((_DWORD *)this + 14) = 1, v6 = AudioDeviceMgr::EnumEndpointDevices(this), v6 < 0) )
      v3 = v6;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  }
  return v3;
}
