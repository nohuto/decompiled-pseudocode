/*
 * XREFs of ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180013BD0
 * Callers:
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x180012D50 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x180044210 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     _lambda_66a9d43d200f66016d4a33826e7a51a3_::operator() @ 0x18008F8BC (_lambda_66a9d43d200f66016d4a33826e7a51a3_--operator().c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___ @ 0x18000F6E8 (Windows--Internal--ComTaskPool--QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___.c)
 *     ?InternalRelease@?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180016678 (-InternalRelease@-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::UpdateSizeConstraints(CFrameApplicationPresentation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // edi
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CFrameApplicationPresentation *v8; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 14) == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      -2);
  }
  else
  {
    v8 = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v6[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v6[1] = this;
    v6[2] = this;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___(
           v3,
           v2,
           *((_DWORD *)this + 12),
           v6);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(v6);
    if ( v4 >= 0 )
      ++*((_DWORD *)this + 51);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(&v8);
  }
  return (unsigned int)v4;
}
