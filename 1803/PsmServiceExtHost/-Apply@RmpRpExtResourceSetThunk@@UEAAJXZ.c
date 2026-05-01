/*
 * XREFs of ?Apply@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x18004D6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpExtResourceSetThunk::Apply(RmpRpExtResourceSetThunk *this)
{
  return RmSrvResourceSetApply(*((struct _RM_SERVICE_GLOBALS **)this + 1), *((_QWORD *)this + 2));
}
