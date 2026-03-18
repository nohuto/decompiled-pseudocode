/*
 * XREFs of UsbhCopyPnpString @ 0x1C0009138
 * Callers:
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0008F98 (UsbhFdoReturnDeviceConfigInfo.c)
 * Callees:
 *     memmove @ 0x1C0029500 (memmove.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhCopyPnpString(_QWORD *a1, __int64 a2)
{
  PVOID PoolWithTag; // rax
  void *v5; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( !*(_QWORD *)(a2 + 8) || !*(_DWORD *)(a2 + 4) )
    return 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)(a2 + 4), 0x42554855u);
  a1[1] = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, *(unsigned int *)(a2 + 4));
  v5 = (void *)a1[1];
  if ( v5 )
  {
    memmove(v5, *(const void **)(a2 + 8), *(unsigned int *)(a2 + 4));
    return 0LL;
  }
  return 3221225626LL;
}
