/*
 * XREFs of EthQueryOpenFilterAddresses @ 0x1C0063FFC
 * Callers:
 *     ndisQueryOpenEthMulticastList @ 0x1C00DF4CC (ndisQueryOpenEthMulticastList.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005220 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C00069C0 (NdisAcquireRWLockRead.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 */

void __fastcall EthQueryOpenFilterAddresses(
        int *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char *a6)
{
  unsigned int v10; // r9d
  char *v11; // rsi
  int v12; // ebx
  unsigned int i; // edi
  unsigned int *v14; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+58h] [rbp+20h] BYREF

  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(a2 + 288), &LockState, 0);
  v10 = *(_DWORD *)(a3 + 456);
  if ( a4 < 6 * v10 )
  {
    v10 = 0;
    v12 = -1073741823;
  }
  else
  {
    v11 = a6;
    v12 = 0;
    for ( i = 0; i < v10; ++i )
    {
      memmove(v11, (const void *)(*(_QWORD *)(a3 + 448) + 4 * (3LL * i + 1)), 6uLL);
      v10 = *(_DWORD *)(a3 + 456);
      v11 += 6;
    }
  }
  v14 = a5;
  *a1 = v12;
  *v14 = v10;
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(a2 + 288), &LockState);
}
