/*
 * XREFs of PiDqSerializationAlloc @ 0x140449420
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqSerializationAlloc(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  void *v7; // rcx
  PVOID PoolWithTag; // rax

  if ( *a3 > *(_DWORD *)(a1 + 24) )
  {
    v7 = *(void **)(a1 + 16);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x58706E50u);
    if ( *a3 < 0x1000u )
      *a3 = 4096;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)*a3, 0x58706E50u);
    *(_QWORD *)(a1 + 16) = PoolWithTag;
    if ( PoolWithTag )
      *(_DWORD *)(a1 + 24) = *a3;
    else
      *(_DWORD *)(a1 + 24) = 0;
  }
  *a3 = *(_DWORD *)(a1 + 24);
  result = *(_QWORD *)(a1 + 16);
  *a2 = result;
  return result;
}
