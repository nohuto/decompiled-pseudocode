/*
 * XREFs of MiTryLockVad @ 0x140033F8C
 * Callers:
 *     MiDeprioritizeVad @ 0x140033E78 (MiDeprioritizeVad.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // ebx

  if ( *(char *)(a1 + 1744) < 0 )
    return 0LL;
  v3 = (volatile signed __int32 *)(a2 + 40);
  v4 = KeAbPreAcquire(a2 + 40, 0LL);
  if ( _interlockedbittestandset64(v3, 0LL) )
  {
    v5 = 0;
    if ( v4 )
      KeAbPostReleaseEx((ULONG_PTR)v3);
  }
  else
  {
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    v5 = 1;
  }
  if ( v5 == 1 )
    *(_BYTE *)(a1 + 1744) |= 0x80u;
  return v5;
}
