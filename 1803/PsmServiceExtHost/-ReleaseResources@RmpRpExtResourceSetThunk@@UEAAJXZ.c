/*
 * XREFs of ?ReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x18004D9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpExtResourceSetThunk::ReleaseResources(RmpRpExtResourceSetThunk *this)
{
  return RmSrvResourceSetReleaseResources(*((struct _RM_SERVICE_GLOBALS **)this + 1), *((_QWORD *)this + 2), 0);
}
