/*
 * XREFs of MiTryLockVad @ 0x14012E314
 * Callers:
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiDeprioritizeVad @ 0x14012E200 (MiDeprioritizeVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rsi
  PRTL_BALANCED_NODE v4; // rax
  unsigned int v5; // ebx

  if ( *(char *)(a1 + 1752) < 0 )
    return 0LL;
  v3 = (volatile signed __int32 *)(a2 + 40);
  v4 = KeAbPreAcquire(a2 + 40, 0LL, 1);
  if ( _interlockedbittestandset64(v3, 0LL) )
  {
    v5 = 0;
    if ( v4 )
      KeAbPostReleaseEx((ULONG_PTR)v3, (unsigned __int64)v4);
  }
  else
  {
    if ( v4 )
      BYTE2(v4[1].Left) |= 1u;
    v5 = 1;
  }
  if ( v5 == 1 )
    *(_BYTE *)(a1 + 1752) |= 0x80u;
  return v5;
}
