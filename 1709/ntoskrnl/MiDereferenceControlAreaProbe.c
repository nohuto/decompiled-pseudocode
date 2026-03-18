/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x14001F474
 * Callers:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x140211860 (MiQueueControlAreaDelete.c)
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
