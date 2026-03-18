/*
 * XREFs of MiUnlockVadCore @ 0x1400AE264
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8 (MiCaptureWriteWatchDirtyBit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUnlockVadCore(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0x3FFFFFFFu);
  result = a2;
  __writecr8(a2);
  return result;
}
