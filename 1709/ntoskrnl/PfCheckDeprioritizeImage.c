/*
 * XREFs of PfCheckDeprioritizeImage @ 0x14043F0C0
 * Callers:
 *     CcUnmapVacb @ 0x14056F9B0 (CcUnmapVacb.c)
 *     PfProcessCreateNotification @ 0x14057F7DC (PfProcessCreateNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

_BOOL8 __fastcall PfCheckDeprioritizeImage(unsigned int a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  unsigned __int64 i; // r10
  __int64 *v5; // rax
  __int64 v6; // rax
  BOOL v7; // ebx

  v1 = a1;
  if ( !a1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14038D3B0, 0LL);
  if ( dword_14038D3A4 )
  {
    v3 = 0LL;
    for ( i = (37
             * (BYTE6(v1)
              + 37
              * (BYTE5(v1)
               + 37
               * (BYTE4(v1)
                + 37 * (BYTE3(v1) + 37 * (BYTE2(v1) + 37 * (BYTE1(v1) + 37 * ((unsigned __int8)v1 + 11623883)))))))
             + HIBYTE(v1)) & (unsigned int)(dword_14038D3A4 - 1); ; i = (unsigned int)(dword_14038D3A4 - 1) & (v3 + i) )
    {
      v5 = (__int64 *)(qword_14038D398 + (i << dword_14038D3A0));
      if ( !*v5 || *v5 == (unsigned int)v1 )
        break;
      if ( !v3 )
      {
        v3 = 2654435761LL * (unsigned int)v1 + 1;
        if ( ((-79 * (_BYTE)v1) & 1) != 0 )
          v3 = 2654435761LL * (unsigned int)v1;
      }
    }
    v6 = *v5;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 != 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14038D3B0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14038D3B0);
  KeAbPostRelease((ULONG_PTR)&qword_14038D3B0);
  KeLeaveCriticalRegion();
  return v7;
}
