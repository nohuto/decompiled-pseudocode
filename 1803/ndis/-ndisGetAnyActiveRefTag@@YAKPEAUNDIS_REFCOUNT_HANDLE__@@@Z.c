/*
 * XREFs of ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0011FEC
 * Callers:
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 * Callees:
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0012084 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 */

ULONG __fastcall ndisGetAnyActiveRefTag(struct NDIS_REFCOUNT_HANDLE__ *a1)
{
  struct _NDIS_REFCOUNT_BLOCK *v1; // rax
  int v2; // ebx
  struct _NDIS_REFCOUNT_BLOCK *v3; // rdi
  ULONG result; // eax
  int v5; // eax
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rdx
  _DWORD *i; // rdx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)a1);
  v2 = 0;
  v3 = v1;
  if ( !v1 )
    return -2;
  if ( v1->Type )
  {
    if ( v1->Type != 1 || !v1->NumRefTags )
      return (v3->Flags & 2) != 0 ? 255 : -2;
    for ( i = (_DWORD *)v1->RefWithStack + 14; ((*i >> 1) & 0x7FFF) == *i >> 17; i += 16 )
    {
      if ( ++v2 >= (unsigned int)v1->NumRefTags )
        return (v3->Flags & 2) != 0 ? 255 : -2;
    }
    return v2;
  }
  else
  {
    BitMapHeader.SizeOfBitMap = v1->NumRefTags;
    BitMapHeader.Buffer = v1->TaggedRefCounts.RefMask;
    result = RtlFindSetBits(&BitMapHeader, 1u, 0);
    if ( result != -1 )
      return result;
    v5 = 0;
    if ( !v3->NumOverflowTaggedEntries )
      return (v3->Flags & 2) != 0 ? 255 : -2;
    Tags = v3->TaggedRefCounts.Tags;
    while ( !Tags[v5].RefCount )
    {
      if ( ++v5 >= (unsigned int)v3->NumOverflowTaggedEntries )
        return (v3->Flags & 2) != 0 ? 255 : -2;
    }
    return Tags[v5].Tag;
  }
}
