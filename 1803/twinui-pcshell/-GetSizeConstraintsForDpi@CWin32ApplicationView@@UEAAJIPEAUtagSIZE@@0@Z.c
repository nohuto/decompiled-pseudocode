/*
 * XREFs of ?GetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18002A910
 * Callers:
 *     ?GetSizeConstraints@CApplicationViewBase@@UEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@1@Z @ 0x180024EE0 (-GetSizeConstraints@CApplicationViewBase@@UEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@1@Z.c)
 * Callees:
 *     ?GetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEBA?AUAPP_SIZE_CONSTRAINTS@@I@Z @ 0x180073D00 (-GetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEBA-AUAPP_SIZE_CONSTRAINTS@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetSizeConstraintsForDpi(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v8; // rdi
  PVOID Ptr; // rcx
  void (__fastcall *v10)(PVOID, _QWORD *, _QWORD); // rax
  _QWORD v12[6]; // [rsp+28h] [rbp-30h] BYREF

  v8 = this + 6;
  AcquireSRWLockShared(this + 6);
  Ptr = this[27].Ptr;
  v10 = *(void (__fastcall **)(PVOID, _QWORD *, _QWORD))(*(_QWORD *)Ptr + 24LL);
  if ( (char *)v10 == (char *)AppSizeConstraintsCache::GetSizeConstraintsForDpi )
    AppSizeConstraintsCache::GetSizeConstraintsForDpi(Ptr, v12, a2);
  else
    v10(Ptr, v12, a2);
  if ( a3 )
    *a3 = (struct tagSIZE)v12[0];
  if ( a4 )
    *a4 = (struct tagSIZE)v12[1];
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return 0LL;
}
