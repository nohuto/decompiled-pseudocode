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

__int64 __fastcall PpmUpdateIdleVeto(char a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 InterruptTimePrecise; // rcx
  __int64 v13; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  LARGE_INTEGER v21; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a3 + 32);
  v7 = (_QWORD *)(a3 + 8);
  v8 = *(_QWORD **)(a3 + 8);
  if ( !a1 )
  {
    while ( v8 != v7 )
    {
      if ( *((_DWORD *)v8 + 4) == a2 )
      {
        if ( (*((_DWORD *)v8 + 5))-- == 1 )
        {
          v10 = *v8;
          if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v11 = (_QWORD *)v8[1], (_QWORD *)*v11 != v8) )
            __fastfail(3u);
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          if ( v6 )
          {
            *v8 = 0LL;
            v8[1] = 0LL;
            InterruptTimePrecise = RtlGetInterruptTimePrecise(&v21);
            v8[5] += InterruptTimePrecise - v8[4];
            v13 = v8[6];
            v8[4] = 0LL;
            if ( v13 )
            {
              v8[6] = 0LL;
              v8[7] += InterruptTimePrecise - v13;
            }
            if ( *(_BYTE *)(a3 + 25) )
              PopUpdateNonAttributedCpuTimeReference(0LL);
          }
          else
          {
            ExFreePoolWithTag(v8, 0x694D5050u);
          }
          if ( (_QWORD *)*v7 == v7 )
            _InterlockedExchange((volatile __int32 *)a3, 0);
        }
        return v3;
      }
      v8 = (_QWORD *)*v8;
    }
    return (unsigned int)-1073741811;
  }
  while ( v8 != v7 )
  {
    if ( *((_DWORD *)v8 + 4) == a2 )
    {
      v16 = *((_DWORD *)v8 + 5);
      if ( v16 == -1 )
        return (unsigned int)-1073741675;
      else
        *((_DWORD *)v8 + 5) = v16 + 1;
      return v3;
    }
    v8 = (_QWORD *)*v8;
  }
  if ( v6 )
  {
    if ( a2 > *(_DWORD *)(a3 + 28) )
      return (unsigned int)-1073741811;
    v15 = (_QWORD *)(v6 + ((unsigned __int64)(a2 - 1) << 6));
    v17 = RtlGetInterruptTimePrecise(&v21);
    v15[4] = v17;
    if ( !*(_BYTE *)(a3 + 24) )
      v15[6] = v17;
    if ( *(_BYTE *)(a3 + 25) )
    {
      LOBYTE(v18) = 1;
      PopUpdateNonAttributedCpuTimeReference(v18);
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x694D5050u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x40uLL);
  }
  *((_DWORD *)v15 + 4) = a2;
  *((_DWORD *)v15 + 5) = 1;
  v19 = (_QWORD *)v7[1];
  if ( (_QWORD *)*v19 != v7 )
    __fastfail(3u);
  *v15 = v7;
  v15[1] = v19;
  *v19 = v15;
  v7[1] = v15;
  _InterlockedExchange((volatile __int32 *)a3, 1);
  return v3;
}
