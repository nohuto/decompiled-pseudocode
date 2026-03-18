/*
 * XREFs of UsbhAllocateTimeoutObject @ 0x1C0009AA4
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0006380 (UsbhDriverResetPort.c)
 *     UsbhReset1Complete @ 0x1C00092A0 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x1C0009460 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhReset1Timeout @ 0x1C0052560 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0052B00 (UsbhReset2Timeout.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 */

__int64 __fastcall UsbhAllocateTimeoutObject(int a1, __int64 a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v7; // r10d

  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x14uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *a3 = PoolWithTag;
    *PoolWithTag = 0LL;
    v7 = 0;
    PoolWithTag[1] = 0LL;
    *((_DWORD *)PoolWithTag + 4) = 0;
    *(_DWORD *)PoolWithTag = 1867468116;
    *((_DWORD *)PoolWithTag + 4) = *(_DWORD *)(a2 + 400);
  }
  else
  {
    *a3 = 0LL;
    Log(a1, 1024, 1635020577, a2, 0LL);
  }
  return v7;
}
