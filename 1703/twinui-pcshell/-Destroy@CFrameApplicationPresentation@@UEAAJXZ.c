/*
 * XREFs of ?Destroy@CFrameApplicationPresentation@@UEAAJXZ @ 0x180068BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___ @ 0x18006AE34 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::Destroy(CFrameApplicationPresentation *this)
{
  int v2; // ebx
  IUnknown **v3; // rax
  int v4; // ebx
  __int64 v5; // rcx
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  CFrameApplicationPresentation *v9; // [rsp+68h] [rbp+10h]

  *((_DWORD *)this + 12) = 1;
  v9 = this;
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  v7[0] = this;
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  v7[1] = this;
  v7[2] = this;
  v2 = *((_DWORD *)this + 10);
  v3 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___(&v8, v7);
  v4 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v2, 0, *v3, 0LL);
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v7[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7[0] + 16LL))(v7[0]);
  if ( v4 >= 0 )
    ++*((_DWORD *)this + 49);
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v4;
}
