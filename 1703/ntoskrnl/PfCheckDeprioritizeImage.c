/*
 * XREFs of PfCheckDeprioritizeImage @ 0x140563FB4
 * Callers:
 *     CcUnmapVacb @ 0x140515A10 (CcUnmapVacb.c)
 *     PfProcessCreateNotification @ 0x140563D18 (PfProcessCreateNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14036DF50, 0LL);
  if ( (_DWORD)qword_14036DF44 )
  {
    v3 = 0LL;
    for ( i = (37
             * (BYTE6(v1)
              + 37
              * (BYTE5(v1)
               + 37
               * (BYTE4(v1)
                + 37 * (BYTE3(v1) + 37 * (BYTE2(v1) + 37 * (BYTE1(v1) + 37 * ((unsigned __int8)v1 + 11623883)))))))
             + HIBYTE(v1)) & (unsigned int)(qword_14036DF44 - 1); ; i = (unsigned int)(qword_14036DF44 - 1) & (v3 + i) )
    {
      v5 = (__int64 *)(qword_14036DF38 + (i << dword_14036DF40));
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14036DF50, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14036DF50);
  KeAbPostRelease((ULONG_PTR)&qword_14036DF50);
  KeLeaveCriticalRegion();
  return v7;
}
