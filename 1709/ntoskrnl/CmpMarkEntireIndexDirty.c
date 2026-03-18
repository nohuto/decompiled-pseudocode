/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x14069B540
 * Callers:
 *     CmpLightWeightDuplicateParentLists @ 0x14069F3DC (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkEntireIndexDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  _WORD *v5; // rdi
  char v6; // bl
  int v7; // ebp
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = BugCheckParameter3;
  HvpGetCellContextReinitialize((__int64)&v9);
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, char *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v4,
                  &v9);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  v6 = HvpMarkCellDirty(BugCheckParameter2, v3, 1);
  if ( v6 )
  {
    if ( *v5 == 26994 && (v7 = 0, v5[1]) )
    {
      while ( 1 )
      {
        v6 = HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)&v5[2 * v7 + 2], 1);
        if ( !v6 )
          break;
        if ( ++v7 >= (unsigned int)(unsigned __int16)v5[1] )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v6 = 1;
    }
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  return v6;
}
