/*
 * XREFs of ?ReadVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C018E480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ReadVirtualFunctionConfigBlock(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK *a2)
{
  __int64 v3; // rax

  v3 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v3 + 24) = a2->VirtualFunctionIndex;
  WdLogEvent5_WdError(v3);
  return 3221225659LL;
}
