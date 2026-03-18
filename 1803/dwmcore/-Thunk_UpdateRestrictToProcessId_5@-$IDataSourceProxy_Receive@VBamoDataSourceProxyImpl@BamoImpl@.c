/*
 * XREFs of ?Thunk_UpdateRestrictToProcessId_5@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016CC70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_UpdateRestrictToProcessId_5(
        __int64 a1,
        _DWORD **a2)
{
  bool v2; // zf
  int v4; // eax
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 28) == 0;
  *(_DWORD *)(a1 + 32) = **a2;
  if ( !v2 )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v8,
      *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 56LL))(a1 - 16);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x953,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v5 = v8;
    if ( v8 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
      *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
