/*
 * XREFs of ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180065CE4
 * Callers:
 *     _lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::operator() @ 0x1800665DC (_lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_--operator().c)
 *     _lambda_1d725a211fae648eb22a29137fc16fd7_::operator() @ 0x180066A4C (_lambda_1d725a211fae648eb22a29137fc16fd7_--operator().c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180066C80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     _lambda_c4af78c0c8077c37e96163482dfb0569_::operator() @ 0x180066DD4 (_lambda_c4af78c0c8077c37e96163482dfb0569_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler(
        CFrameApplicationPresentation::PresentedWindowChangeHandler *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 56LL))(*(_QWORD *)this, &v4);
  v2 = v4;
  if ( v4 != *((_QWORD *)this + 1) )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 232LL) + 520LL))(*(_QWORD *)(*(_QWORD *)this + 232LL));
    v2 = v4;
  }
  if ( v2 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
