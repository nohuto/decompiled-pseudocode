/*
 * XREFs of KiEpfComplete @ 0x14020CD5C
 * Callers:
 *     KiEpfDrainCompletionQueue @ 0x14020CEB4 (KiEpfDrainCompletionQueue.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 */

void __fastcall KiEpfComplete(unsigned __int64 a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rax

  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  v3 = *(__int64 **)v2;
  v4 = *(__int64 **)v2;
  if ( *(_QWORD *)v2 == v2 )
  {
LABEL_5:
    ++*(_DWORD *)(v2 + 24);
    v4 = 0LL;
  }
  else
  {
    do
    {
      if ( v4[2] == a1 )
      {
        v5 = (__int64 *)*v4;
        if ( *(__int64 **)(*v4 + 8) != v4 || (v6 = (__int64 **)v4[1], *v6 != v4) )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = (__int64)v6;
        goto LABEL_13;
      }
      v4 = (__int64 *)*v4;
    }
    while ( v4 != (__int64 *)v2 );
    if ( v3 == (__int64 *)v2 )
      goto LABEL_5;
    v4 = *(__int64 **)v2;
    if ( v3[1] != v2 || (v7 = *v3, *(__int64 **)(v7 + 8) != v4) )
      __fastfail(3u);
    *(_QWORD *)v2 = v7;
    *(_QWORD *)(v7 + 8) = v2;
  }
LABEL_13:
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( v4 )
  {
    _InterlockedIncrement(&dword_14036A7C4);
    KeSignalGate((__int64)(v4 + 3), 0);
  }
}
