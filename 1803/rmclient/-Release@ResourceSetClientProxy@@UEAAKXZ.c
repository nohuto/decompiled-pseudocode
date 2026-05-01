/*
 * XREFs of ?Release@ResourceSetClientProxy@@UEAAKXZ @ 0x18000ED40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z @ 0x18000F024 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::Release(ResourceSetClientProxy *this)
{
  signed __int32 v2; // ebp
  char v3; // si
  unsigned __int32 v4; // edi

  while ( 1 )
  {
    v2 = *((_DWORD *)this + 105);
    v3 = 0;
    v4 = v2 - 1;
    if ( v2 == 1 && *((_QWORD *)this + 3) )
    {
      v3 = 1;
      EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 54) + 576LL));
    }
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)this + 105, v4, v2) )
      break;
    if ( v3 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 54) + 576LL));
  }
  if ( v2 == 1 )
  {
    if ( v3 )
    {
      ResourceManagerClientProxy::RemoveProxyResourceSet(
        *((ResourceManagerClientProxy **)this + 54),
        *((_QWORD *)this + 3));
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 54) + 576LL));
    }
    if ( this )
      (*(void (__fastcall **)(ResourceSetClientProxy *, __int64))(*(_QWORD *)this + 168LL))(this, 1LL);
  }
  return v4;
}
