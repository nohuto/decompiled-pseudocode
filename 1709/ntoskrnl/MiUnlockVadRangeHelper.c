/*
 * XREFs of MiUnlockVadRangeHelper @ 0x140540634
 * Callers:
 *     MiUnlockVadRange @ 0x1405405F8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140540730 (MiLockVadRange.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiVadIsCfgBitmap @ 0x140540A1C (MiVadIsCfgBitmap.c)
 */

char __fastcall MiUnlockVadRangeHelper(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *Address; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  _QWORD *i; // rax
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // rax
  __int64 j; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
  {
    Address = *(_QWORD **)(a1 + 1576);
    v8 = 0LL;
    while ( Address )
    {
      v8 = (__int64)Address;
      Address = (_QWORD *)*Address;
    }
  }
  else
  {
    Address = (_QWORD *)MiLocateAddress(a2);
    v8 = (__int64)Address;
  }
  while ( a3 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    v12 = v8;
    if ( v9 )
    {
      for ( i = *(_QWORD **)v9; i; i = (_QWORD *)*i )
        v9 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(v8 + 16); ; j = *(_QWORD *)(v9 + 16) )
      {
        v9 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v9 || *(_QWORD *)v9 == v12 )
          break;
        v12 = v9;
      }
    }
    if ( !a4 || (LODWORD(Address) = MiVadIsCfgBitmap(), !(_DWORD)Address) && (*(_DWORD *)(v8 + 48) & 0x200000) == 0 )
    {
      if ( a3 == 1 )
      {
        LOBYTE(Address) = (unsigned __int8)MiUnlockVad((__int64)CurrentThread, v8);
        return (char)Address;
      }
      v11 = v8 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
      LOBYTE(Address) = KeAbPostRelease(v11);
      --a3;
    }
    v8 = v9;
  }
  return (char)Address;
}
