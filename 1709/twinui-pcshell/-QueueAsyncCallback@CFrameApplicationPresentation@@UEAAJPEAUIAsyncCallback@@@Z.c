/*
 * XREFs of ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x18006AA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___ @ 0x18006D8F0 (Windows--Internal--ComTaskPool--QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::QueueAsyncCallback(
        CFrameApplicationPresentation *this,
        struct IAsyncCallback *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  struct IAsyncCallback *v6; // rcx
  struct IAsyncCallback *v7; // rcx
  _QWORD v9[2]; // [rsp+28h] [rbp-20h] BYREF
  struct IAsyncCallback *v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  struct IAsyncCallback *v12; // [rsp+70h] [rbp+28h] BYREF
  struct IAsyncCallback *v13; // [rsp+78h] [rbp+30h]
  struct IAsyncCallback **v14; // [rsp+80h] [rbp+38h]
  CFrameApplicationPresentation *v15; // [rsp+88h] [rbp+40h]

  v13 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v12 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v14 = &v12;
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
    v15 = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v9[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v9[1] = this;
    v6 = v12;
    v10 = v12;
    if ( v12 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v12 + 8LL))(v12);
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___(
           v6,
           v5,
           *((unsigned int *)this + 14),
           v9,
           -2LL);
    if ( v10 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
    if ( v4 >= 0 )
      ++*((_DWORD *)this + 53);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v4;
}
