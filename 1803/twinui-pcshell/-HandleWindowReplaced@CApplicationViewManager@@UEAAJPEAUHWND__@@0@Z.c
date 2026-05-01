/*
 * XREFs of ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x18013BC40
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::HandleWindowReplaced(RTL_SRWLOCK *this, HWND a2, HWND a3)
{
  RTL_SRWLOCK *v5; // rbx
  volatile signed __int64 **Ptr; // rdi
  volatile signed __int64 **v7; // rbp
  HWND v9; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+20h]

  v5 = this + 48;
  v10 = this + 48;
  AcquireSRWLockShared(this + 48);
  Ptr = (volatile signed __int64 **)this[49].Ptr;
  v7 = &Ptr[(__int64)this[50].Ptr];
  while ( Ptr != v7 )
  {
    if ( (*(int (__fastcall **)(volatile signed __int64 *, HWND *))(**Ptr + 72))(*Ptr, &v9) >= 0 && v9 == a3 )
    {
      CApplicationViewManager::RaiseApplicationViewChanged((CWinRTApplicationView *)this, *Ptr, 12, 0LL);
      break;
    }
    ++Ptr;
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return 0LL;
}
