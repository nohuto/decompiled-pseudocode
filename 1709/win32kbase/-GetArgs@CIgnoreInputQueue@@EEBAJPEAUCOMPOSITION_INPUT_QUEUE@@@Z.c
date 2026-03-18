/*
 * XREFs of ?GetArgs@CIgnoreInputQueue@@EEBAJPEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0003770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIgnoreInputQueue::GetArgs(CIgnoreInputQueue *this, struct COMPOSITION_INPUT_QUEUE *a2)
{
  *(_DWORD *)a2 = (*(__int64 (__fastcall **)(CIgnoreInputQueue *))(*(_QWORD *)this + 16LL))(this);
  return 0LL;
}
