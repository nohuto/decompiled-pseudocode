/*
 * XREFs of ExFetchLicenseData @ 0x140756FC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v8; // rdx
  unsigned int v9; // [rsp+50h] [rbp+18h]

  v9 = 0;
  if ( !a3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
  if ( BYTE1(NlsMbCodePageTag) )
    goto LABEL_4;
  v8 = (unsigned int *)Data;
  if ( off_1407F3028 )
    v8 = (unsigned int *)off_1407F3028;
  if ( !v8 )
  {
LABEL_4:
    v9 = -1073741595;
  }
  else
  {
    *a3 = *v8;
    if ( a1 && a2 && a2 >= *v8 )
    {
      memmove(a1, v8, *v8);
      if ( a2 >= 0x14 )
        *((_DWORD *)a1 + 3) &= ~1u;
    }
    else
    {
      v9 = -1073741789;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
