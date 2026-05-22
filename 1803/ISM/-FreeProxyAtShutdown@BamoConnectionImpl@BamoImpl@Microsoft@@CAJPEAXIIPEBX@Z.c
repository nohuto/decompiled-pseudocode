/*
 * XREFs of ?FreeProxyAtShutdown@BamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAXIIPEBX@Z @ 0x18001AF30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoConnectionImpl::FreeProxyAtShutdown(
        void *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  void (__fastcall ***v6)(_QWORD); // rax

  if ( a4 )
  {
    v4 = *(_QWORD *)a4;
    a4[29] = 1;
    v5 = (*(__int64 (__fastcall **)(_BYTE *))(v4 + 48))(a4);
    _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5) + 8));
    v6 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
    (**v6)(v6);
  }
  return 0LL;
}
