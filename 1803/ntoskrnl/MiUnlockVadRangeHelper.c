/*
 * XREFs of MiUnlockVadRangeHelper @ 0x1404BFFFC
 * Callers:
 *     MiUnlockVadRange @ 0x1404BFFA8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404C010C (MiLockVadRange.c)
 * Callees:
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     MiVadIsCfgBitmap @ 0x1404C0424 (MiVadIsCfgBitmap.c)
 */

char __fastcall MiUnlockVadRangeHelper(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v5; // r14d
  __int64 v6; // rsi
  _QWORD *Address; // rax
  __int64 v8; // rcx
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 i; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = a4;
  v6 = a3;
  if ( a2 == (_QWORD *)-1LL )
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
    Address = (_QWORD *)MiLocateAddress((unsigned __int64)a2);
    v8 = (__int64)Address;
  }
  while ( v6 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    v11 = v8;
    if ( v10 )
    {
      a2 = *(_QWORD **)v10;
      if ( *(_QWORD *)v10 )
      {
        do
        {
          v10 = (unsigned __int64)a2;
          a2 = (_QWORD *)*a2;
        }
        while ( a2 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(v8 + 16); ; i = *(_QWORD *)(v10 + 16) )
      {
        v10 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v10 || *(_QWORD *)v10 == v11 )
          break;
        v11 = v10;
      }
    }
    if ( !v5 || (LODWORD(Address) = MiVadIsCfgBitmap(), !(_DWORD)Address) && (*(_DWORD *)(v8 + 48) & 0x40000) == 0 )
    {
      if ( v6 == 1 )
      {
        LOBYTE(Address) = (unsigned __int8)MiUnlockVad((__int64)CurrentThread, v8, a3, a4);
        return (char)Address;
      }
      v9 = v8 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40), (__int64)a2, a3, a4);
      LOBYTE(Address) = KeAbPostRelease(v9);
      --v6;
    }
    v8 = v10;
  }
  return (char)Address;
}
