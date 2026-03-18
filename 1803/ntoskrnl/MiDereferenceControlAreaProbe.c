/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x14004B034
 * Callers:
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 *     MiSegmentDelete @ 0x1404BC75C (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x14004B068 (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x14024FCB0 (MiQueueControlAreaDelete.c)
 */

__int64 __fastcall MiDereferenceControlAreaProbe(volatile signed __int64 *a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    if ( a2 == 1 )
      return MiQueueControlAreaDelete();
    else
      return MiDeleteControlArea((PVOID)a1);
  }
  return result;
}
