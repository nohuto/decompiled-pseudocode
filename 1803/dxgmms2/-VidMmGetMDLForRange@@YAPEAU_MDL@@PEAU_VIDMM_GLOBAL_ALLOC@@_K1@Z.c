/*
 * XREFs of ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C007A6B4
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C0079844 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 *     ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007A5A0 (-ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00AEF30 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AF5C0 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1C00B1354 (-TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

struct _MDL *__fastcall VidMmGetMDLForRange(struct _VIDMM_GLOBAL_ALLOC *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  struct _MDL *result; // rax

  if ( (*((_DWORD *)a1 + 20) & 0x5000) != 0 )
    return (struct _MDL *)*((_QWORD *)a1 + 64);
  v4 = (_QWORD *)*((_QWORD *)a1 + 13);
  v5 = v4[3];
  if ( v5 )
    return (struct _MDL *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v4[1] + 24LL)
                                                                                       + 96LL))(
                            *(_QWORD *)(v4[1] + 24LL),
                            v5,
                            a2,
                            a3);
  result = (struct _MDL *)v4[11];
  if ( result )
    return *(struct _MDL **)&result->Size;
  return result;
}
