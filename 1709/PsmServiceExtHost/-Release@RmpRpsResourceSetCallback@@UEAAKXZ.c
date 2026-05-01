/*
 * XREFs of ?Release@RmpRpsResourceSetCallback@@UEAAKXZ @ 0x1800168B0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x1800160C8 (-AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@E.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpsResourceSetCallback::Release(RmpRpsResourceSetCallback *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
  {
    *(_QWORD *)this = &RmpRpsResourceSetCallback::`vftable';
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
    operator delete(this);
  }
  return v2;
}
