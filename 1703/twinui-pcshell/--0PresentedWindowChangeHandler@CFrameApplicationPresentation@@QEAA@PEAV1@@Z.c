/*
 * XREFs of ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x180065C5C
 * Callers:
 *     _lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::operator() @ 0x1800665DC (_lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_--operator().c)
 *     _lambda_1d725a211fae648eb22a29137fc16fd7_::operator() @ 0x180066A4C (_lambda_1d725a211fae648eb22a29137fc16fd7_--operator().c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180066C80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     _lambda_c4af78c0c8077c37e96163482dfb0569_::operator() @ 0x180066DD4 (_lambda_c4af78c0c8077c37e96163482dfb0569_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CFrameApplicationPresentation::PresentedWindowChangeHandler *__fastcall CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
        CFrameApplicationPresentation::PresentedWindowChangeHandler *this,
        struct CFrameApplicationPresentation *a2)
{
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  v3 = (char *)(*(__int64 (__fastcall **)(struct CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)a2 + 56LL))(
                 a2,
                 &v8);
  v4 = 0LL;
  if ( &v9 != v3 )
  {
    v4 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0LL;
  }
  v5 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return this;
}
