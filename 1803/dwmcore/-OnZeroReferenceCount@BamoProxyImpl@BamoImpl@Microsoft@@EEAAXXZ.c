/*
 * XREFs of ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18016C420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180169830 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BamoProxyImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  __int64 v1; // r8
  struct Microsoft::BamoImpl::BamoConnectionImpl *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    v3 = *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(v1 + 24) + 24LL);
    if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, *((unsigned int *)this + 6));
    if ( *((_BYTE *)this + 29) )
    {
      Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
        (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
        v3);
      v5 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 48LL))(this);
      if ( v5 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      v6 = v7;
      if ( v7 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
        *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
      }
    }
  }
}
