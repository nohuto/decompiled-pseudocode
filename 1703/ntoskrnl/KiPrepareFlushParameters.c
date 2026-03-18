/*
 * XREFs of KiPrepareFlushParameters @ 0x140201138
 * Callers:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x1400D7E80 (MiAgeWorkingSetTail.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiPrepareFlushParameters(int a1, unsigned __int64 *a2, _BYTE *a3)
{
  int v3; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 result; // rax

  if ( !KiKvaShadow )
  {
    if ( !a1 )
      goto LABEL_9;
    v3 = a1 - 1;
    if ( !v3 )
    {
      CurrentThread = KeGetCurrentThread();
      *a3 = 0;
      result = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      *a2 = result;
      return result;
    }
LABEL_4:
    if ( v3 == 1 )
      goto LABEL_5;
LABEL_9:
    *a3 = 1;
    goto LABEL_10;
  }
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( !v3 )
      goto LABEL_9;
    goto LABEL_4;
  }
LABEL_5:
  *a3 = 0;
LABEL_10:
  *a2 = 0LL;
  return result;
}
