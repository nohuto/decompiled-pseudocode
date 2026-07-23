/*
 * XREFs of PpmUpdateIdleVeto @ 0x140273FE0
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x140274230 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402743A0 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14027A6C4 (PopUpdateNonAttributedCpuTimeReference.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, ULONG a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  LARGE_INTEGER *v7; // rsi
  LARGE_INTEGER *v8; // rdi
  LONGLONG QuadPart; // rax
  LARGE_INTEGER **v11; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rcx
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER *PoolWithTag; // rax
  LARGE_INTEGER *v15; // rdi
  LONG HighPart; // eax
  LARGE_INTEGER v17; // rax
  LARGE_INTEGER v18; // rcx
  LARGE_INTEGER **v19; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a3 + 32);
  v7 = (LARGE_INTEGER *)(a3 + 8);
  v8 = *(LARGE_INTEGER **)(a3 + 8);
  if ( !a1 )
  {
    while ( v8 != v7 )
    {
      if ( v8[2].LowPart == a2 )
      {
        if ( v8[2].HighPart-- == 1 )
        {
          QuadPart = v8->QuadPart;
          if ( *(LARGE_INTEGER **)(v8->QuadPart + 8) != v8 || (v11 = (LARGE_INTEGER **)v8[1].QuadPart, *v11 != v8) )
            __fastfail(3u);
          *v11 = (LARGE_INTEGER *)QuadPart;
          *(_QWORD *)(QuadPart + 8) = v11;
          if ( v6 )
          {
            v8->QuadPart = 0LL;
            v8[1].QuadPart = 0LL;
            InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
            v8[5].QuadPart += InterruptTimePrecise.QuadPart - v8[4].QuadPart;
            v13 = v8[6];
            v8[4].QuadPart = 0LL;
            if ( v13.QuadPart )
            {
              v8[6].QuadPart = 0LL;
              v8[7].QuadPart += InterruptTimePrecise.QuadPart - v13.QuadPart;
            }
            if ( *(_BYTE *)(a3 + 25) )
              PopUpdateNonAttributedCpuTimeReference(0LL);
          }
          else
          {
            ExFreePoolWithTag(v8, 0x694D5050u);
          }
          if ( (LARGE_INTEGER *)v7->QuadPart == v7 )
            _InterlockedExchange((volatile __int32 *)a3, 0);
        }
        return v3;
      }
      v8 = (LARGE_INTEGER *)v8->QuadPart;
    }
    return (unsigned int)-1073741811;
  }
  while ( v8 != v7 )
  {
    if ( v8[2].LowPart == a2 )
    {
      HighPart = v8[2].HighPart;
      if ( HighPart == -1 )
        return (unsigned int)-1073741675;
      else
        v8[2].HighPart = HighPart + 1;
      return v3;
    }
    v8 = (LARGE_INTEGER *)v8->QuadPart;
  }
  if ( v6 )
  {
    if ( a2 > *(_DWORD *)(a3 + 28) )
      return (unsigned int)-1073741811;
    v15 = (LARGE_INTEGER *)(v6 + ((unsigned __int64)(a2 - 1) << 6));
    v17 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v15[4] = v17;
    if ( !*(_BYTE *)(a3 + 24) )
      v15[6] = v17;
    if ( *(_BYTE *)(a3 + 25) )
    {
      LOBYTE(v18.LowPart) = 1;
      ((void (__fastcall *)(_QWORD))PopUpdateNonAttributedCpuTimeReference)((LARGE_INTEGER)v18.QuadPart);
    }
  }
  else
  {
    PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x694D5050u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x40uLL);
  }
  v15[2].LowPart = a2;
  v15[2].HighPart = 1;
  v19 = (LARGE_INTEGER **)v7[1].QuadPart;
  if ( *v19 != v7 )
    __fastfail(3u);
  v15->QuadPart = (LONGLONG)v7;
  v15[1].QuadPart = (LONGLONG)v19;
  *v19 = v15;
  v7[1].QuadPart = (LONGLONG)v15;
  _InterlockedExchange((volatile __int32 *)a3, 1);
  return v3;
}
