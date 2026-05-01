/*
 * XREFs of ?ReleaseResourcesImpl@ResourceSetClientProxy@@IEAAJK@Z @ 0x18000F138
 * Callers:
 *     ?ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x18000EBE0 (-ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x18000F120 (-ReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ?ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ @ 0x18000F054 (-ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z @ 0x18000F264 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::ReleaseResourcesImpl(ResourceSetClientProxy *this, int a2)
{
  int v5; // [rsp+28h] [rbp-20h]
  int Pointer; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)this + 122) == 2 || *((_QWORD *)this + 3) == -1LL )
  {
    return 0;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 55) + 22464LL));
    v5 = a2;
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_180010C20,
                              7u,
                              0LL,
                              *((_QWORD *)this + 2),
                              *((_QWORD *)this + 3),
                              v5).Pointer;
    if ( Pointer < 0 && *((_DWORD *)this + 107) )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 55) + 22464LL));
    }
    else
    {
      *((_DWORD *)this + 106) = 0;
      *((_DWORD *)this + 122) = 2;
      ResourceManagerClientProxy::RemoveProxyResourceSet(
        *((ResourceManagerClientProxy **)this + 55),
        *((_QWORD *)this + 3));
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 55) + 22464LL));
      ResourceSetClientProxy::ReleaseCallback((struct IUnknown **)this);
    }
  }
  return (unsigned int)Pointer;
}
