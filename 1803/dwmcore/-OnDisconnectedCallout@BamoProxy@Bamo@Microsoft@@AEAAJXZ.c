/*
 * XREFs of ?OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ @ 0x180153CA4
 * Callers:
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153664 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::BamoProxy::OnDisconnectedCallout(Microsoft::Bamo::BamoProxy *this)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 48LL))(this);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 24LL) + 24LL));
  v3 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 40LL))(this);
  v4 = v7;
  v5 = v3;
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
    *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
  }
  return v5;
}
