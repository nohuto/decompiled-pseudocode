/*
 * XREFs of ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z @ 0x180007A10
 * Callers:
 *     ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x180005730 (-Register3DCompositor@@YAHPEAUIUnknown@@@Z.c)
 *     ?Unregister3DCompositor@@YAHXZ @ 0x180005860 (-Unregister3DCompositor@@YAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall MPC3DStateHelper::On3DCompositorStateChanged(PSRWLOCK SRWLock, unsigned __int8 a2)
{
  bool v4; // si

  AcquireSRWLockExclusive(SRWLock);
  v4 = BYTE4(SRWLock[2].Ptr) != a2;
  if ( BYTE4(SRWLock[2].Ptr) != a2 )
  {
    BYTE6(SRWLock[2].Ptr) = a2;
    HIBYTE(SRWLock[2].Ptr) = a2;
    (*(void (__fastcall **)(PVOID, __int64 (__fastcall *)(), PSRWLOCK, __int64))(*(_QWORD *)SRWLock[1].Ptr + 128LL))(
      SRWLock[1].Ptr,
      lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_,
      SRWLock,
      4LL);
  }
  ReleaseSRWLockExclusive(SRWLock);
  return v4;
}
