/*
 * XREFs of ObQueryRefTraceInformation @ 0x14075A144
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

__int64 __fastcall ObQueryRefTraceInformation(char *a1, SIZE_T Length, unsigned int *a3)
{
  unsigned int *v3; // r13
  unsigned int v4; // r12d
  unsigned int v6; // r14d
  unsigned int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 j; // r8
  __int64 i; // r9
  unsigned __int16 v12; // r13
  char *v13; // r12
  __int16 v14; // cx
  __int64 v15; // r15
  int v18; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = Length;
  v6 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForWrite(a1, (unsigned int)Length, 8u);
  v7 = 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 2) != 0 )
  {
    v12 = 0;
    v18 = ObpTraceFlags & 0x20;
    if ( (ObpTraceFlags & 0x20) != 0 )
      v7 = ObpRuntimeTraceProcessName.Length + 42;
    if ( (ObpTraceFlags & 0x10) != 0 )
    {
      v9 = (__int64)&ObpRuntimeTracePoolTags;
      while ( v12 < 0x10u && *((_DWORD *)&ObpRuntimeTracePoolTags + v12) )
        ++v12;
      if ( v12 )
        v7 += 10 * v12;
    }
    if ( v7 <= v4 )
    {
      v13 = a1 + 40;
      memset(a1, 0, 0x28uLL);
      *a1 = 1;
      a1[1] = (ObpTraceFlags & 0x40) != 0;
      if ( v18 )
      {
        *((_WORD *)a1 + 4) = ObpRuntimeTraceProcessName.Length;
        *((_WORD *)a1 + 5) = ObpRuntimeTraceProcessName.MaximumLength;
        *((_QWORD *)a1 + 2) = v13;
        memmove(a1 + 40, ObpRuntimeTraceProcessName.Buffer, ObpRuntimeTraceProcessName.MaximumLength);
        v13 += 2 * ((unsigned __int64)ObpRuntimeTraceProcessName.MaximumLength >> 1);
      }
      if ( (ObpTraceFlags & 0x10) != 0 )
      {
        v14 = 2 * (5 * v12 - 1);
        *((_WORD *)a1 + 12) = v14;
        *((_WORD *)a1 + 13) = v14 + 2;
        *((_QWORD *)a1 + 4) = v13;
        for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(i + 1) )
        {
          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
          {
            v15 = (unsigned int)(j + 5 * i);
            if ( (unsigned int)j >= 4 )
              break;
            v9 = (unsigned int)(*((_DWORD *)&ObpRuntimeTracePoolTags + (unsigned int)i) >> (8 * j));
            LOWORD(v9) = (unsigned __int8)(*((_DWORD *)&ObpRuntimeTracePoolTags + (unsigned int)i) >> (8 * j));
            *(_WORD *)&v13[2 * v15] = v9;
          }
          *(_WORD *)&v13[2 * v15] = 59;
        }
        *(_WORD *)&v13[10 * v12 - 2] = 0;
      }
      v3 = a3;
    }
    else
    {
      v6 = -1073741820;
      v3 = a3;
    }
  }
  else if ( v4 >= 0x28 )
  {
    *a1 = 0;
  }
  else
  {
    v6 = -1073741820;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock, v9, j, i);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741820 )
  {
    if ( v3 )
      *v3 = v7;
  }
  return v6;
}
