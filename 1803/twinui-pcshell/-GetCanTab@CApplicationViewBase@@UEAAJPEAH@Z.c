/*
 * XREFs of ?GetCanTab@CApplicationViewBase@@UEAAJPEAH@Z @ 0x180142900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::GetCanTab(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v4; // rbx
  int Ptr_high; // r8d
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v10; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+10h]

  *a2 = 0;
  v4 = this + 6;
  AcquireSRWLockShared(this + 6);
  v11 = v4;
  Ptr_high = HIDWORD(this[16].Ptr);
  if ( !Ptr_high )
  {
    v6 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, char *))this->Ptr + 57))(this, &v10);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDC,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_6;
    }
    Ptr_high = 2 - (v10 != 0);
    HIDWORD(this[16].Ptr) = Ptr_high;
  }
  *a2 = Ptr_high == 1;
  v7 = 0;
LABEL_6:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v7;
}
