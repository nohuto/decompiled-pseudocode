/*
 * XREFs of RaidAdapterFindUnitAtPassive @ 0x1C0006240
 * Callers:
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall RaidAdapterFindUnitAtPassive(__int64 a1, int a2)
{
  unsigned __int8 v2; // bl
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 *v6; // rcx
  __int64 *v7; // rdi
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v4 = 0LL;
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v6 = *(__int64 **)(a1 + 120);
  v7 = (__int64 *)(a1 + 120);
  v8 = v6 == v7;
  if ( v6 != v7 )
  {
    do
    {
      v5 = v6 - 6;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)v6 + 10)) | ((((unsigned __int8)*((_DWORD *)v6 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v6 + 10))) << 8)) == (BYTE2(a2) | ((BYTE1(a2) | (v2 << 8)) << 8)) )
        break;
      v6 = (__int64 *)*v6;
    }
    while ( v6 != v7 );
    v8 = v6 == v7;
  }
  if ( !v8 )
    v4 = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
