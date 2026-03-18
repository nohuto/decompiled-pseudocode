/*
 * XREFs of KiThawSingleThread @ 0x140120CB4
 * Callers:
 *     KeThawProcess @ 0x14011FF68 (KeThawProcess.c)
 *     KeForceResumeProcess @ 0x1401202A4 (KeForceResumeProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 */

char __fastcall KiThawSingleThread(__int64 a1, __int64 a2, char a3)
{
  volatile signed __int32 *v3; // rdi
  char result; // al
  __int64 v8; // r8

  v3 = (volatile signed __int32 *)(a2 + 736);
  result = KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736));
  if ( (*(_DWORD *)(a2 + 120) & 0x2000) != 0 || a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xDu);
    if ( !*(_BYTE *)(a2 + 644) )
    {
      LOBYTE(v8) = a3;
      result = KiResumeThread(a2, a1, v8);
    }
  }
  _InterlockedAnd(v3, 0xFFFFFF7F);
  return result;
}
