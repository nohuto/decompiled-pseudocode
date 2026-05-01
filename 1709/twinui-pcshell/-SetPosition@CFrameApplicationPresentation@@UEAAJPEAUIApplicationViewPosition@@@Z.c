/*
 * XREFs of ?SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180069740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c375c8f4cb799a2f5bee00a6619de85c___ @ 0x18006D0D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_c375c8f4cb799a2f5bee00a6619de85c___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::SetPosition(
        CFrameApplicationPresentation *this,
        struct IApplicationViewPosition *a2)
{
  __int64 v4; // rdx
  struct IApplicationViewPosition *v5; // rcx
  int v6; // esi
  _QWORD v8[2]; // [rsp+38h] [rbp-28h] BYREF
  struct IApplicationViewPosition *v9; // [rsp+48h] [rbp-18h]
  CFrameApplicationPresentation *v10; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *((_DWORD *)this + 16) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v8[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v8[1] = this;
    v5 = a2;
    v9 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = this;
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_c375c8f4cb799a2f5bee00a6619de85c___(
           v5,
           v4,
           *((unsigned int *)this + 14),
           v8,
           -2LL);
    if ( v9 )
      (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v8[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
    if ( v6 >= 0 )
      ++*((_DWORD *)this + 53);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 16LL))(a2);
    (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return 0LL;
}
