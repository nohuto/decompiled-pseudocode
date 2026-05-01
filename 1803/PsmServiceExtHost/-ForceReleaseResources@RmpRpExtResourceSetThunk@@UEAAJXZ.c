/*
 * XREFs of ?ForceReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x18004D790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpExtResourceSetThunk::ForceReleaseResources(RmpRpExtResourceSetThunk *this)
{
  return RmSrvResourceSetReleaseResources(*((struct _RM_SERVICE_GLOBALS **)this + 1), *((_QWORD *)this + 2), 3);
}
