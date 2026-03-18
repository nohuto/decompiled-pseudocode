/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x140118FA8
 * Callers:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x140118FDC (MiDeleteControlArea.c)
 */

__int64 __fastcall MiDereferenceControlAreaProbe(__int64 a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    if ( a2 == 1 )
      return MiQueueControlAreaDelete();
    else
      return MiDeleteControlArea();
  }
  return result;
}
