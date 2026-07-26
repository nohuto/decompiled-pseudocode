/*
 * XREFs of ndisOidPreRcvFilterFreeQueue @ 0x1C003AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003A17C (ndisFindReceiveQueueByQueueId.c)
 */

char __fastcall ndisOidPreRcvFilterFreeQueue(__int64 a1)
{
  __int64 v1; // r14
  char v2; // bp
  __int64 v3; // r15
  _BYTE *v4; // rsi
  __int64 v6; // rcx
  unsigned int v7; // r12d
  __int64 *ReceiveQueueByQueueId; // rax
  __int64 *v9; // r12
  KIRQL v10; // r10
  _BYTE *OidSourceHandle; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 1;
  v3 = *(_QWORD *)a1;
  v4 = 0LL;
  v6 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0xCu )
    {
      *(_DWORD *)(v1 + 56) = 12;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      if ( !*(_QWORD *)a1 )
        return 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = 12;
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        goto LABEL_8;
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2688046;
      ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, v7);
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      v9 = ReceiveQueueByQueueId;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v10);
      if ( !v9 )
        goto LABEL_8;
      OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v4 = OidSourceHandle;
      if ( (_BYTE *)v9[9] == v4 )
        return 0;
      else
LABEL_8:
        *(_DWORD *)(a1 + 40) = -1073741811;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v2;
}
