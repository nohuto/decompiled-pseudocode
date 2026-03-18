/*
 * XREFs of ObQueryRefTraceInformation @ 0x1406F0D74
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 */

__int64 __fastcall ObQueryRefTraceInformation(char *a1, SIZE_T Length, unsigned int *a3)
{
  unsigned int v3; // r12d
  unsigned int v5; // r14d
  unsigned int v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 v8; // r13
  char *v9; // r12
  __int16 v10; // cx
  unsigned int i; // r9d
  unsigned int j; // r8d
  int v15; // [rsp+88h] [rbp+20h]

  v3 = Length;
  v5 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForWrite(a1, (unsigned int)Length, 8u);
  v6 = 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 2) != 0 )
  {
    v8 = 0;
    v15 = ObpTraceFlags & 0x20;
    if ( (ObpTraceFlags & 0x20) != 0 )
      v6 = ObpRuntimeTraceProcessName.Length + 42;
    if ( (ObpTraceFlags & 0x10) != 0 )
    {
      while ( v8 < 0x10u && *((_DWORD *)&ObpRuntimeTracePoolTags + v8) )
        ++v8;
      if ( v8 )
        v6 += 10 * v8;
    }
    if ( v6 <= v3 )
    {
      v9 = a1 + 40;
      memset(a1, 0, 0x28uLL);
      *a1 = 1;
      a1[1] = (ObpTraceFlags & 0x40) != 0;
      if ( v15 )
      {
        *((_WORD *)a1 + 4) = ObpRuntimeTraceProcessName.Length;
        *((_WORD *)a1 + 5) = ObpRuntimeTraceProcessName.MaximumLength;
        *((_QWORD *)a1 + 2) = v9;
        memmove(a1 + 40, ObpRuntimeTraceProcessName.Buffer, ObpRuntimeTraceProcessName.MaximumLength);
        v9 += 2 * ((unsigned __int64)ObpRuntimeTraceProcessName.MaximumLength >> 1);
      }
      if ( (ObpTraceFlags & 0x10) != 0 )
      {
        v10 = 2 * (5 * v8 - 1);
        *((_WORD *)a1 + 12) = v10;
        *((_WORD *)a1 + 13) = v10 + 2;
        *((_QWORD *)a1 + 4) = v9;
        for ( i = 0; i < v8; ++i )
        {
          for ( j = 0; j < 4; ++j )
            *(_WORD *)&v9[8 * i + 2 * i + 2 * j] = (unsigned __int8)(*((_DWORD *)&ObpRuntimeTracePoolTags + i) >> (8 * j));
          *(_WORD *)&v9[8 * i + 2 * i + 2 * j] = 59;
        }
        *(_WORD *)&v9[10 * v8 - 2] = 0;
      }
    }
    else
    {
      v5 = -1073741820;
    }
  }
  else if ( v3 >= 0x28 )
  {
    *a1 = 0;
  }
  else
  {
    v5 = -1073741820;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741820 )
  {
    if ( a3 )
      *a3 = v6;
  }
  return v5;
}
