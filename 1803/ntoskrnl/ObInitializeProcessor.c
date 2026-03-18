/*
 * XREFs of ObInitializeProcessor @ 0x140622178
 * Callers:
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x140006260 (MmIsThisAnNtAsSystem.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1404792DC (ExInitializeSystemLookasideList.c)
 */

__int64 __fastcall ObInitializeProcessor(_QWORD *a1)
{
  __int16 v2; // bp
  __int16 v3; // di
  PVOID PoolWithTag; // rax
  void *v5; // rbx
  PVOID v6; // rax
  void *v7; // rbx
  __int64 result; // rax

  if ( MmIsThisAnNtAsSystem() )
  {
    v2 = 64;
    v3 = 32;
  }
  else
  {
    v2 = 32;
    v3 = 16;
  }
  a1[265] = &ObpCreateInfoLookasideList;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4943624Fu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
    ExInitializeSystemLookasideList((__int64)PoolWithTag, 512, 64, 1229152847, v2, (__int64)&ExSystemLookasideListHead);
  else
    v5 = &ObpCreateInfoLookasideList;
  a1[264] = v5;
  a1[267] = &ObpNameBufferLookasideList;
  v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4D4E624Fu);
  v7 = v6;
  if ( v6 )
    ExInitializeSystemLookasideList((__int64)v6, 1, 248, 1296982607, v3, (__int64)&ExSystemLookasideListHead);
  else
    v7 = &ObpNameBufferLookasideList;
  result = 0LL;
  a1[266] = v7;
  return result;
}
