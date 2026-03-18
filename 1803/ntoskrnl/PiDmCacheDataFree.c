/*
 * XREFs of PiDmCacheDataFree @ 0x1405D3614
 * Callers:
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140507E74 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectProcessPropertyChange @ 0x1405D2E6C (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmCacheDataFree(__int64 a1)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)a1 - 5;
  if ( v2 )
  {
    if ( v2 == 1 )
      PiDmObjectRelease(*(unsigned int **)(a1 + 16));
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x5A706E50u);
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
