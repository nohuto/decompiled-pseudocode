/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C002A83C
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0017E58 (VidSchiRundownUnorderedWaiterDevice.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 976) )
  {
    if ( a3 < 6 )
    {
      return (unsigned int)-2147483631;
    }
    else if ( *(_DWORD *)(a1 + 976) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 1888), &LockHandle);
      v5 = (_QWORD **)(a1 + 256);
      for ( i = *v5; i != v5; i = (_QWORD *)*i )
        VidSchiRundownUnorderedWaiterDevice((__int64)(i - 10));
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  return v3;
}
