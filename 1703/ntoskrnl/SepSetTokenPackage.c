/*
 * XREFs of SepSetTokenPackage @ 0x1404F1A70
 * Callers:
 *     SepGetAnonymousToken @ 0x14003D7D8 (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlIsParentOfChildAppContainer @ 0x14041E978 (RtlIsParentOfChildAppContainer.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
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
