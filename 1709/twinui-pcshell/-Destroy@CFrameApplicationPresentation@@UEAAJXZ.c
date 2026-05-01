/*
 * XREFs of ?Destroy@CFrameApplicationPresentation@@UEAAJXZ @ 0x18006AED0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___ @ 0x18006DAF0 (Windows--Internal--ComTaskPool--QueueTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::Destroy(CFrameApplicationPresentation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // edi
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF

  *((_DWORD *)this + 16) = 1;
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  v6[0] = this;
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  v6[1] = this;
  v6[2] = this;
  v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___(
         v3,
         v2,
         *((unsigned int *)this + 14),
         v6);
  if ( v6[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6[0] + 16LL))(v6[0]);
  if ( v4 >= 0 )
    ++*((_DWORD *)this + 53);
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v4;
}
