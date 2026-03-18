/*
 * XREFs of KiPrepareFlushParameters @ 0x14015A520
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140037AE0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x14014F598 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401685E4 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

void __fastcall KiPrepareFlushParameters(int a1, unsigned __int64 *a2, char *a3)
{
  char v3; // al
  int v4; // ecx

  if ( KiKvaShadow )
  {
    if ( !a1 || a1 == 2 )
    {
      v3 = 0;
      goto LABEL_4;
    }
LABEL_3:
    v3 = 1;
LABEL_4:
    *a2 = 0LL;
    *a3 = v3;
    return;
  }
  if ( !a1 )
    goto LABEL_3;
  v4 = a1 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      goto LABEL_3;
    *a2 = 0LL;
  }
  else
  {
    *a2 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  }
  *a3 = 0;
}
