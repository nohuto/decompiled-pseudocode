/*
 * XREFs of PpmUpdateIdleVeto @ 0x14023CA00
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x14023CC50 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x14023CDC0 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140243650 (PopUpdateNonAttributedCpuTimeReference.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, ULONG a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  LARGE_INTEGER *v7; // r14
  LARGE_INTEGER *i; // rdi
  LARGE_INTEGER *QuadPart; // rax
  LARGE_INTEGER **v11; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rcx
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER *j; // rcx
  LARGE_INTEGER *PoolWithTag; // rax
  LARGE_INTEGER *v16; // rdi
  LONG HighPart; // eax
  LARGE_INTEGER v18; // rax
  LARGE_INTEGER v19; // rcx
  LARGE_INTEGER **v20; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a3 + 32);
  v7 = (LARGE_INTEGER *)(a3 + 8);
  if ( !a1 )
  {
    for ( i = (LARGE_INTEGER *)v7->QuadPart; i != v7; i = (LARGE_INTEGER *)i->QuadPart )
    {
      if ( i[2].LowPart == a2 )
      {
        if ( i[2].HighPart-- == 1 )
        {
          QuadPart = (LARGE_INTEGER *)i->QuadPart;
          if ( *(LARGE_INTEGER **)(i->QuadPart + 8) != i || (v11 = (LARGE_INTEGER **)i[1].QuadPart, *v11 != i) )
            __fastfail(3u);
          *v11 = QuadPart;
          QuadPart[1].QuadPart = (LONGLONG)v11;
          if ( v6 )
          {
            i->QuadPart = 0LL;
            i[1].QuadPart = 0LL;
            InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
            i[5].QuadPart += InterruptTimePrecise.QuadPart - i[4].QuadPart;
            v13 = i[6];
            i[4].QuadPart = 0LL;
            if ( v13.QuadPart )
            {
              i[6].QuadPart = 0LL;
              i[7].QuadPart += InterruptTimePrecise.QuadPart - v13.QuadPart;
            }
            if ( *(_BYTE *)(a3 + 25) )
              PopUpdateNonAttributedCpuTimeReference(0LL);
          }
          else
          {
            ExFreePoolWithTag(i, 0x694D5050u);
          }
          if ( (LARGE_INTEGER *)v7->QuadPart == v7 )
            _InterlockedExchange((volatile __int32 *)a3, 0);
        }
        return v3;
      }
    }
    return (unsigned int)-1073741811;
  }
  for ( j = (LARGE_INTEGER *)v7->QuadPart; j != v7; j = (LARGE_INTEGER *)j->QuadPart )
  {
    if ( j[2].LowPart == a2 )
    {
      HighPart = j[2].HighPart;
      if ( HighPart == -1 )
        return (unsigned int)-1073741675;
      else
        j[2].HighPart = HighPart + 1;
      return v3;
    }
  }
  if ( v6 )
  {
    if ( a2 > *(_DWORD *)(a3 + 28) )
      return (unsigned int)-1073741811;
    v16 = (LARGE_INTEGER *)(v6 + ((unsigned __int64)(a2 - 1) << 6));
    v18 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v16[4] = v18;
    if ( !*(_BYTE *)(a3 + 24) )
      v16[6] = v18;
    if ( *(_BYTE *)(a3 + 25) )
    {
      LOBYTE(v19.LowPart) = 1;
      ((void (__fastcall *)(_QWORD))PopUpdateNonAttributedCpuTimeReference)((LARGE_INTEGER)v19.QuadPart);
    }
  }
  else
  {
    PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x694D5050u);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x40uLL);
  }
  v16[2].LowPart = a2;
  v16[2].HighPart = 1;
  v20 = (LARGE_INTEGER **)v7[1].QuadPart;
  if ( *v20 != v7 )
    __fastfail(3u);
  v16->QuadPart = (LONGLONG)v7;
  v16[1].QuadPart = (LONGLONG)v20;
  *v20 = v16;
  v7[1].QuadPart = (LONGLONG)v16;
  _InterlockedExchange((volatile __int32 *)a3, 1);
  return v3;
}
