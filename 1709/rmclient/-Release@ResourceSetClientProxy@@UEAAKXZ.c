/*
 * XREFs of ?Release@ResourceSetClientProxy@@UEAAKXZ @ 0x18000EF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z @ 0x18000F264 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::Release(ResourceSetClientProxy *this)
{
  signed __int32 v2; // ebp
  char v3; // si
  unsigned __int32 v4; // edi

  while ( 1 )
  {
    v2 = *((_DWORD *)this + 107);
    v3 = 0;
    v4 = v2 - 1;
    if ( v2 == 1 && *((_QWORD *)this + 3) )
    {
      v3 = 1;
      EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 55) + 22464LL));
    }
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)this + 107, v4, v2) )
      break;
    if ( v3 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 55) + 22464LL));
  }
  if ( v2 == 1 )
  {
    if ( v3 )
    {
      ResourceManagerClientProxy::RemoveProxyResourceSet(
        *((ResourceManagerClientProxy **)this + 55),
        *((_QWORD *)this + 3));
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 55) + 22464LL));
    }
    if ( this )
      (*(void (__fastcall **)(ResourceSetClientProxy *, __int64))(*(_QWORD *)this + 168LL))(this, 1LL);
  }
  return v4;
}
