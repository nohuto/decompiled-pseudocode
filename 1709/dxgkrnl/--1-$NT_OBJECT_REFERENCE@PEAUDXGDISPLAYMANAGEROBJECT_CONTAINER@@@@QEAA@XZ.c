/*
 * XREFs of ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C00E8BDC
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00E89D0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkDispMgrSourceOperation @ 0x1C01DA190 (DxgkDispMgrSourceOperation.c)
 *     DxgkDispMgrTargetOperation @ 0x1C01DA300 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(
        void **a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = ObfDereferenceObjectWithTag(v2, 0x4B677844u);
    *a1 = 0LL;
  }
  return result;
}
