/*
 * XREFs of SepSetTokenPackage @ 0x1405646C8
 * Callers:
 *     SepGetAnonymousToken @ 0x140101C60 (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlIsParentOfChildAppContainer @ 0x1404485C8 (RtlIsParentOfChildAppContainer.c)
 *     RtlCopySid @ 0x14049CB70 (RtlCopySid.c)
 */

__int64 __fastcall SepSetTokenPackage(__int64 a1, unsigned __int8 *a2)
{
  void *v4; // rcx
  ULONG v5; // ebp
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  void *v8; // rcx

  v4 = *(void **)(a1 + 784);
  if ( v4 && !RtlIsParentOfChildAppContainer(v4, a2) )
    return 3221225506LL;
  v5 = (4 * a2[1] + 11) & 0xFFFFFFFC;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x69536553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  RtlCopySid(v5, PoolWithTag, a2);
  v8 = *(void **)(a1 + 784);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 784) = 0LL;
  }
  *(_QWORD *)(a1 + 784) = v7;
  return 0LL;
}
