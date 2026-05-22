/*
 * XREFs of ?GetClosestInteractiveBounds@MPCMouseProcessor@@UEAA?AUtagRECT@@XZ @ 0x18004B770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

struct tagRECT *__fastcall MPCMouseProcessor::GetClosestInteractiveBounds(
        MPCMouseProcessor *this,
        struct tagRECT *__return_ptr retstr)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 78) + 24LL))(*((_QWORD *)this + 78));
  return retstr;
}
