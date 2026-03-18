/*
 * XREFs of MiUnlockVadRangeHelper @ 0x14054B70C
 * Callers:
 *     MiUnlockVadRange @ 0x14054B6D0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x14054B808 (MiLockVadRange.c)
 * Callees:
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiVadIsCfgBitmap @ 0x14054BAF4 (MiVadIsCfgBitmap.c)
 */

_QWORD *__fastcall MiUnlockVadRangeHelper(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  _QWORD *i; // rax
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // rax
  __int64 j; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
  {
    result = *(_QWORD **)(a1 + 1576);
    v8 = 0LL;
    while ( result )
    {
      v8 = (__int64)result;
      result = (_QWORD *)*result;
    }
  }
  else
  {
    result = (_QWORD *)MiLocateAddress(a2);
    v8 = (__int64)result;
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
    if ( !a4 || (result = (_QWORD *)MiVadIsCfgBitmap(), !(_DWORD)result) && (*(_DWORD *)(v8 + 48) & 0x200000) == 0 )
    {
      if ( a3 == 1 )
        return (_QWORD *)MiUnlockVad((__int64)CurrentThread, v8);
      v11 = v8 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
      result = (_QWORD *)KeAbPostRelease(v11);
      --a3;
    }
    v8 = v9;
  }
  return result;
}
