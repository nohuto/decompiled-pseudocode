/*
 * XREFs of IopAdjustFileObjectKeepAliveCount @ 0x1401FAAE4
 * Callers:
 *     IoDecrementKeepAliveCount @ 0x1401FA610 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1401FA710 (IoIncrementKeepAliveCount.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     IopGetSetSpecificExtension @ 0x140024EE4 (IopGetSetSpecificExtension.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAdjustFileObjectKeepAliveCount(__int64 a1, __int64 a2, int a3, _DWORD *a4, _QWORD *a5)
{
  _QWORD *Pool; // rsi
  PVOID v6; // rdi
  __int64 result; // rax
  unsigned int v11; // ebx
  __int64 FileObjectExtension; // r14
  KIRQL v13; // al
  __int64 *v14; // rdx
  _DWORD *v15; // rax
  bool v16; // al
  PKSPIN_LOCK SpinLock[7]; // [rsp+30h] [rbp-38h] BYREF
  KIRQL v18; // [rsp+80h] [rbp+18h]

  Pool = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    result = IopGetSetSpecificExtension(a1, 1, 0x20u, 1, SpinLock, 0LL);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    Pool = IopVerifierExAllocatePool(NonPagedPoolNx, 0x20uLL);
    if ( Pool )
    {
      v6 = IopVerifierExAllocatePool(NonPagedPoolNx, 0x38uLL);
      if ( !v6 )
      {
        ExFreePoolWithTag(Pool, 0);
        Pool = 0LL;
      }
    }
    FileObjectExtension = (__int64)SpinLock[0];
  }
  else
  {
    v11 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL);
    if ( !FileObjectExtension )
      return 3221225485LL;
  }
  SpinLock[0] = (PKSPIN_LOCK)(a1 + 184);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v14 = *(__int64 **)(FileObjectExtension + 24);
  v18 = v13;
  while ( v14 )
  {
    if ( v14[1] == a2 )
    {
      if ( a3 )
        ++*((_DWORD *)v14 + 4);
      else
        --*((_DWORD *)v14 + 4);
      *a5 = v14[3];
      *a4 = *((_DWORD *)v14 + 4);
      goto LABEL_29;
    }
    v14 = (__int64 *)*v14;
  }
  if ( a3 )
  {
    if ( Pool )
    {
      memset(Pool, 0, 0x20uLL);
      memset(v6, 0, 0x38uLL);
      *Pool = *(_QWORD *)(FileObjectExtension + 24);
      *(_QWORD *)(FileObjectExtension + 24) = Pool;
      Pool[1] = a2;
      *((_DWORD *)Pool + 4) = 1;
      Pool[3] = v6;
      *((_QWORD *)v6 + 3) = a2;
      *((_QWORD *)v6 + 5) = a1;
      if ( (*(_DWORD *)(a1 + 80) & 0x20000000) != 0 )
      {
        v15 = *(_DWORD **)(a1 + 208);
        v16 = !v15 || (*v15 & 8) == 0;
        *((_BYTE *)v6 + 18) = v16;
      }
      else
      {
        *((_BYTE *)v6 + 18) = 0;
      }
      Pool = 0LL;
      *a5 = v6;
      v6 = 0LL;
      *a4 = 1;
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_29:
  KxReleaseSpinLock(SpinLock[0]);
  __writecr8(v18);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v11;
}
