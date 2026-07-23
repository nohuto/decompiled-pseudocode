/*
 * XREFs of BiQueryBootEntryOrder @ 0x140738214
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140736030 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x140736118 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140737628 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x1401805A0 (ZwQueryBootEntryOrder.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiReleasePrivilege @ 0x14058D134 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14058D184 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(ULONG **a1, ULONG *a2)
{
  ULONG *v2; // rdi
  NTSTATUS v5; // ebx
  ULONG *PoolWithTag; // rax
  ULONG Count; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  Count = 0;
  v5 = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootEntryOrder(0LL, &Count);
    if ( v5 == -1073741789 )
    {
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, 4LL * Count, 0x4B444342u);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
LABEL_10:
        BiReleasePrivilege(&v9);
        return (unsigned int)v5;
      }
      v5 = ZwQueryBootEntryOrder(PoolWithTag, &Count);
    }
    if ( v5 < 0 )
    {
      if ( v2 )
        ExFreePoolWithTag(v2, 0x4B444342u);
    }
    else
    {
      *a2 = Count;
      *a1 = v2;
    }
    goto LABEL_10;
  }
  return (unsigned int)v5;
}
