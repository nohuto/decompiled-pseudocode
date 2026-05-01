/*
 * XREFs of ?SetExternalResourcePriorities@RmpRpExtResourceSetThunk@@UEAAJKQEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18004DA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RmpRpExtResourceSetThunk::SetExternalResourcePriorities(
        RmpRpExtResourceSetThunk *this,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  return RmSrvResourceSetExternalResourcePriorities(
           *((struct _RM_SERVICE_GLOBALS **)this + 1),
           *((_QWORD *)this + 2),
           a2,
           a3);
}
