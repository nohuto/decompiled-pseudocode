/*
 * XREFs of ViFaultsAddAppNoDuplicates @ 0x1407B7FE4
 * Callers:
 *     ViFaultsAddAllApps @ 0x1407B7E7C (ViFaultsAddAllApps.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x14054A990 (RtlUpcaseUnicodeString.c)
 *     ViFaultsIsAppTarget @ 0x1407B82E4 (ViFaultsIsAppTarget.c)
 */

__int64 __fastcall ViFaultsAddAppNoDuplicates(void *Src, __int64 a2)
{
  unsigned int v4; // ebp
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v6; // rsi
  const WCHAR *p_Length; // rbx
  KIRQL v8; // bl
  UNICODE_STRING **v9; // rax

  v4 = 0;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * a2 + 34, 0x41466656u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    p_Length = &PoolWithTag[2].Length;
    memmove(&PoolWithTag[2], Src, 2 * a2);
    p_Length[a2] = 0;
    RtlInitUnicodeString(v6 + 1, p_Length);
    RtlUpcaseUnicodeString(v6 + 1, v6 + 1, 0);
    v8 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
    if ( (unsigned int)ViFaultsIsAppTarget(&v6[1]) )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v9 = (UNICODE_STRING **)qword_140361AB8;
      if ( *(PVOID **)qword_140361AB8 != &ViFaultApplicationsList )
        __fastfail(3u);
      *(_QWORD *)&v6->Length = &ViFaultApplicationsList;
      v6->Buffer = (wchar_t *)v9;
      *v9 = v6;
      qword_140361AB8 = (__int64)v6;
    }
    KxReleaseSpinLock(&ViFaultInjectionLock);
    __writecr8(v8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
