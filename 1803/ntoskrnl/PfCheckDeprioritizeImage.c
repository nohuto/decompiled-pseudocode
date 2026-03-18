/*
 * XREFs of PfCheckDeprioritizeImage @ 0x14050E5AC
 * Callers:
 *     PfProcessCreateNotification @ 0x14050E2B4 (PfProcessCreateNotification.c)
 *     CcUnmapVacb @ 0x140593090 (CcUnmapVacb.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

_BOOL8 __fastcall PfCheckDeprioritizeImage(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  BOOL v6; // ebx
  __int64 v8; // rcx

  if ( !a1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1403CD7D0, 0LL);
  if ( (_DWORD)qword_1403CD7C4 )
  {
    v3 = 0LL;
    v4 = (1874161 * (HIBYTE(a1) + 37 * (BYTE2(a1) + 37 * (BYTE1(a1) + 37 * ((unsigned __int8)a1 + 11623883))))) & (unsigned int)(qword_1403CD7C4 - 1);
    v5 = *(_QWORD *)((v4 << dword_1403CD7C0) + qword_1403CD7B8);
    if ( v5 )
    {
      v8 = *(_QWORD *)((v4 << dword_1403CD7C0) + qword_1403CD7B8);
      do
      {
        v5 = v8;
        if ( v8 == a1 )
          break;
        if ( !v3 )
        {
          v3 = 2654435761LL * a1 + 1;
          if ( ((-79 * (_BYTE)a1) & 1) != 0 )
            v3 = 2654435761LL * a1;
        }
        v4 = (unsigned int)(qword_1403CD7C4 - 1) & (v3 + v4);
        v5 = *(_QWORD *)((v4 << dword_1403CD7C0) + qword_1403CD7B8);
        v8 = v5;
      }
      while ( v5 );
    }
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 != 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403CD7D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1403CD7D0);
  KeAbPostRelease((ULONG_PTR)&qword_1403CD7D0);
  KeLeaveCriticalRegion();
  return v6;
}
