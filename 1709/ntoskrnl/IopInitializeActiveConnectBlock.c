/*
 * XREFs of IopInitializeActiveConnectBlock @ 0x1404EC388
 * Callers:
 *     IopConnectInterrupt @ 0x1404EBE88 (IopConnectInterrupt.c)
 *     IoDisconnectInterrupt @ 0x14058E500 (IoDisconnectInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1405E1B70 (IopAcquireReleaseConnectLockInternal.c)
 */

void *__fastcall IopInitializeActiveConnectBlock(__int64 a1, __int64 *a2)
{
  void *result; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 i; // rcx
  __int64 v8; // rax
  __int64 **v9; // rax
  unsigned int v10; // eax
  __int64 **v11; // rcx

  result = memset(a2, 0, 0x50uLL);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    a2[1] = (__int64)a2;
    *a2 = (__int64)a2;
    KeInitializeEvent((PRKEVENT)(a2 + 5), SynchronizationEvent, 1u);
    *((_DWORD *)a2 + 16) = 1;
    LOBYTE(v5) = 1;
    v6 = *(_DWORD *)(a1 + 64);
    *((_DWORD *)a2 + 4) = v6;
    IopAcquireReleaseConnectLockInternal(0LL, v5, 2LL);
    for ( i = ActiveConnectList; ; i = *(_QWORD *)i )
    {
      if ( (__int64 *)i == &ActiveConnectList )
        goto LABEL_4;
      v10 = *(_DWORD *)(i + 16);
      if ( v10 == v6 )
        break;
      if ( v10 > v6 )
        goto LABEL_4;
    }
    if ( !i )
    {
LABEL_4:
      a2[3] = (__int64)(a2 + 5);
      a2[4] = (__int64)(a2 + 8);
      goto LABEL_5;
    }
    a2[3] = *(_QWORD *)(i + 24);
    a2[4] = *(_QWORD *)(i + 32);
    _InterlockedIncrement(*(volatile signed __int32 **)(i + 32));
LABEL_5:
    v8 = ActiveConnectList;
    if ( (__int64 *)ActiveConnectList == &ActiveConnectList )
      goto LABEL_6;
    while ( *(_DWORD *)(v8 + 16) <= *((_DWORD *)a2 + 4) )
    {
      v8 = *(_QWORD *)v8;
      if ( (__int64 *)v8 == &ActiveConnectList )
        goto LABEL_21;
    }
    v11 = *(__int64 ***)(v8 + 8);
    if ( *v11 != (__int64 *)v8 )
      __fastfail(3u);
    *a2 = v8;
    a2[1] = (__int64)v11;
    *v11 = a2;
    *(_QWORD *)(v8 + 8) = a2;
LABEL_21:
    if ( (__int64 *)v8 == &ActiveConnectList )
    {
LABEL_6:
      v9 = (__int64 **)qword_140384808;
      if ( *(__int64 **)qword_140384808 != &ActiveConnectList )
        __fastfail(3u);
      *a2 = (__int64)&ActiveConnectList;
      a2[1] = (__int64)v9;
      *v9 = a2;
      qword_140384808 = (__int64)a2;
    }
    return (void *)IopAcquireReleaseConnectLockInternal(0LL, 0LL, 2LL);
  }
  return result;
}
