/*
 * XREFs of ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C01B74FC
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C01BC834 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     NtDxgkVailConnect @ 0x1C01E8CF0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C01E8F80 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C0024530 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGPROCESS::ReferenceVailObject(DxgkCompositionObject **this)
{
  __int64 v2; // rax
  DxgkCompositionObject *v3; // rcx

  if ( *((struct _KTHREAD **)this[14] + 1) != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 1158LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = this[55];
  if ( !v3 )
    return 0LL;
  DxgkCompositionObject::AddRef(v3);
  return this[55];
}
