/*
 * XREFs of ?HitTest@MPCInputRouter@@UEAAJPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800A8F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::HitTest(MPCInputRouter *this, struct tagDITCALLBACKSTRUCT *a2)
{
  if ( *((_BYTE *)this + 812) )
    return MPCInputRouter::HitTestInternal(this, a2);
  else
    return (***((unsigned __int8 (__fastcall ****)(_QWORD, struct tagDITCALLBACKSTRUCT *))this + 23))(
             *((_QWORD *)this + 23),
             a2) == 0
         ? 0x80004005
         : 0;
}
