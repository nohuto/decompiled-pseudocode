/*
 * XREFs of ?PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ @ 0x180141EDC
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18013DA90 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?SetWindowBand@ViewWrapperBase@@UEAAJK@Z @ 0x18013F2F0 (-SetWindowBand@ViewWrapperBase@@UEAAJK@Z.c)
 *     ?SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x18013F350 (-SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::PushDesiredZbidToWindow(ViewWrapperBase *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 33);
  if ( v1 )
  {
    if ( *((_DWORD *)this + 54) )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 22) + 464LL) + 32LL))(
        *(_QWORD *)(*((_QWORD *)this + 22) + 464LL),
        v1,
        0LL);
  }
}
