/*
 * XREFs of ViFaultsAddAppNoDuplicates @ 0x1407761E8
 * Callers:
 *     ViFaultsAddAllApps @ 0x140776080 (ViFaultsAddAllApps.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     ViFaultsIsAppTarget @ 0x1407764E8 (ViFaultsIsAppTarget.c)
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
      v9 = (UNICODE_STRING **)qword_140348048;
      if ( *(PVOID **)qword_140348048 != &ViFaultApplicationsList )
        __fastfail(3u);
      *(_QWORD *)&v6->Length = &ViFaultApplicationsList;
      v6->Buffer = (wchar_t *)v9;
      *v9 = v6;
      qword_140348048 = (__int64)v6;
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
