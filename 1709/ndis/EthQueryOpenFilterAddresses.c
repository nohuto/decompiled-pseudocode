/*
 * XREFs of EthQueryOpenFilterAddresses @ 0x1C00634B8
 * Callers:
 *     ndisQueryOpenEthMulticastList @ 0x1C00DD7F0 (ndisQueryOpenEthMulticastList.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C000F620 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0017B40 (NdisAcquireRWLockRead.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 */

void __fastcall EthQueryOpenFilterAddresses(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5, char *a6)
{
  int v10; // ecx
  char *v11; // rbp
  __int64 v12; // rbx
  _DWORD *v13; // rax
  int v14; // ecx
  _DWORD *v15; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+58h] [rbp+20h] BYREF

  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(a2 + 288), &LockState, 0);
  v10 = *(_DWORD *)(a3 + 456);
  if ( a4 < 6 * v10 )
  {
    v15 = a5;
    *a1 = -1073741823;
    *v15 = 0;
  }
  else
  {
    v11 = a6;
    v12 = 0LL;
    if ( v10 )
    {
      do
      {
        memmove(v11, (const void *)(*(_QWORD *)(a3 + 448) + 4 * (v12 + 2 * v12 + 1)), 6uLL);
        v11 += 6;
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *(_DWORD *)(a3 + 456) );
    }
    v13 = a5;
    v14 = *(_DWORD *)(a3 + 456);
    *a1 = 0;
    *v13 = v14;
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(a2 + 288), &LockState);
}
