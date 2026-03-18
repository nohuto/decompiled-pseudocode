/*
 * XREFs of MiLockVadCore @ 0x1400E4AF0
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiSetVadFlags @ 0x1400E4A50 (MiSetVadFlags.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockVadCore(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = *(_DWORD *)(a1 + 48);
  do
  {
    while ( v4 < 0 )
    {
      if ( (v4 & 0x40000000) != 0 )
      {
        v7 = 0;
        do
        {
          KeYieldProcessorEx(&v7);
          v4 = *(_DWORD *)(a1 + 48);
        }
        while ( v4 < 0 );
      }
      else
      {
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v4 | 0x40000000, v4);
      }
    }
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v4 & 0x3FFFFFFF | 0x80000000, v4);
  }
  while ( v5 != v4 );
  return CurrentIrql;
}
