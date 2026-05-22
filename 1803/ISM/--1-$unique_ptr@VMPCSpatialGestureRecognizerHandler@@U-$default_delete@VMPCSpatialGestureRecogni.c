/*
 * XREFs of ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x180059ED4
 * Callers:
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$4 @ 0x1800E68CC (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
