/*
 * XREFs of ??0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationFrameWrapper@@PEAUIApplicationFrameTitleBar@@@Z @ 0x180198998
 * Callers:
 *     _lambda_1195b550ee03e899c4c093f0587694a4_::operator() @ 0x18019D820 (_lambda_1195b550ee03e899c4c093f0587694a4_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

KBViewInfo *__fastcall KBViewInfo::KBViewInfo(
        KBViewInfo *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct IApplicationFrameWrapper *a3,
        struct IApplicationFrameTitleBar *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( *(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)this != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *(_QWORD *)this;
    *(_QWORD *)this = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((struct IApplicationFrameWrapper **)this + 1) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IApplicationFrameWrapper *))(*(_QWORD *)a3 + 8LL))(a3);
    v9 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((struct IApplicationFrameTitleBar **)this + 2) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)a4 + 8LL))(a4);
    v10 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a4;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return this;
}
