/*
 * XREFs of ?RmpResourceSetPropertyOverridesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18004193C
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@@Z @ 0x180045834 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_T.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::RmpResourceSetPropertyOverridesToResourceSetInfo(
        ExecutionModel *this,
        struct _RM_RESOURCE_SET_PROPERTIES *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)this + 5);
  if ( (v3 & 8) != 0 )
    *((_QWORD *)a2 + 9) = *((_QWORD *)this + 9);
  if ( (v3 & 4) != 0 )
    *((_QWORD *)a2 + 3) = *((_QWORD *)this + 8);
  if ( (v3 & 2) != 0 )
    *((_QWORD *)a2 + 8) = *((_QWORD *)this + 7);
  if ( (v3 & 1) != 0 )
    *((_QWORD *)a2 + 46) = *((_QWORD *)this + 6);
  if ( (v3 & 0x200) != 0 )
    *((_DWORD *)a2 + 11) ^= (*((_DWORD *)a2 + 11) ^ *((_DWORD *)this + 24)) & 0x20;
}
