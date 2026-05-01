/*
 * XREFs of ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18006A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___ @ 0x18006D3F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons(
        CFrameApplicationPresentation *this,
        struct IImmersiveApplication *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  struct IImmersiveApplication *v6; // rcx
  _QWORD v8[3]; // [rsp+38h] [rbp-28h] BYREF
  struct IImmersiveApplication *v9; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *((_DWORD *)this + 16) == 2 )
  {
    v4 = -2147019873;
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
    v8[2] = this;
    v6 = a2;
    v9 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___(
           v6,
           v5,
           *((unsigned int *)this + 14),
           v8,
           -2LL);
    if ( v9 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v8[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
    if ( v4 >= 0 )
      ++*((_DWORD *)this + 53);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return (unsigned int)v4;
}
