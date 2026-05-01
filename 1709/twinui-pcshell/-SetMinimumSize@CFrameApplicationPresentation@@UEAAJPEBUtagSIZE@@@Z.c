/*
 * XREFs of ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x18006A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_11368385320830d8a241e2fe32d21e6b___ @ 0x18006D508 (Windows--Internal--ComTaskPool--QueueTask__lambda_11368385320830d8a241e2fe32d21e6b___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::SetMinimumSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  this[20] = *a2;
  if ( this[8].cx == 2 )
  {
    v3 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)this + 8LL))(this);
    v7[0] = this;
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)this + 8LL))(this);
    v7[1] = this;
    v7[2] = this;
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_11368385320830d8a241e2fe32d21e6b___(
           v5,
           v4,
           (unsigned int)this[7].cx,
           v7,
           -2LL);
    if ( v7[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7[0] + 16LL))(v7[0]);
    if ( v3 >= 0 )
      ++this[26].cy;
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)this + 16LL))(this);
  }
  return (unsigned int)v3;
}
