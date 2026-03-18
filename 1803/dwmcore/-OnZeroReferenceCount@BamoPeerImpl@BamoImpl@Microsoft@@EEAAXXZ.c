/*
 * XREFs of ?OnZeroReferenceCount@BamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152DC4 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPeerImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoPeerImpl *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v4,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*((_QWORD *)this + 3) + 24LL));
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = v4;
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    *(_DWORD *)(v3 + 136) = GetCurrentThreadId();
  }
}
