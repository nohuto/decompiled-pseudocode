/*
 * XREFs of MiCheckForUserStackOverflow @ 0x1405713E8
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x14017DBC0 (ZwAllocateVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x14017E2C0 (ZwProtectVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCheckForUserStackOverflow(unsigned __int64 a1)
{
  char *v2; // rbx
  struct _KTHREAD *CurrentThread; // r10
  char Queue; // al
  unsigned int *Teb; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  ULONG_PTR v8; // rcx
  unsigned __int64 v9; // rax
  ULONG_PTR v10; // rcx
  _DWORD *v11; // rsi
  char *v12; // rdx
  NTSTATUS v13; // eax
  char *v14; // r8
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  __int16 v17; // ax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  ULONG OldAccessProtection; // [rsp+78h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (char)CurrentThread[1].Queue;
  if ( Queue < 0 || (Queue & 3) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    return 2147483649LL;
  Teb = (unsigned int *)CurrentThread->Teb;
  v6 = *((_QWORD *)Teb + 1);
  v7 = *((_QWORD *)Teb + 655);
  v8 = Teb[1490];
  RegionSize = v8;
  v9 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v11 = Teb + 4;
  if ( v10 )
    v10 += 4096LL;
  if ( v10 < 0x3000 )
    v10 = 12288LL;
  RegionSize = v10;
  if ( a1 >= v6 || a1 < v9 )
  {
    v16 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v16 )
    {
      v17 = *(_WORD *)(v16 + 8);
      if ( v17 == 332 || v17 == 452 )
      {
        v2 = (char *)(Teb + 2048);
        if ( ((unsigned __int8)Teb & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = Teb[2049];
        v19 = Teb[2947];
        v20 = Teb[3038];
        RegionSize = *((unsigned int *)v2 + 990);
        v9 = v19 & 0xFFFFFFFFFFFFF000uLL;
        if ( a1 < v18 && a1 >= v9 )
        {
          v10 = (v20 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          if ( v10 )
            v10 += 4096LL;
          if ( v10 < 0x2000 )
            v10 = 0x2000LL;
          RegionSize = v10;
          v11 = v2 + 8;
          goto LABEL_10;
        }
      }
    }
    return 2147483649LL;
  }
LABEL_10:
  v12 = (char *)((a1 & 0xFFFFFFFFFFFFF000uLL) - v10);
  BaseAddress = v12;
  if ( (unsigned __int64)v12 <= v9 )
  {
    BaseAddress = (PVOID)(v9 + 4096);
  }
  else
  {
    if ( (*(_DWORD *)(CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 188) & 0x10000) != 0 )
    {
      v13 = -1073741523;
    }
    else
    {
      v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x104u);
      v10 = RegionSize;
      v12 = (char *)BaseAddress;
    }
    if ( v13 >= 0 )
    {
      v14 = &v12[v10];
      result = 275LL;
      goto LABEL_15;
    }
    BaseAddress = v12 + 4096;
    RegionSize = v10 - 4096;
  }
  ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldAccessProtection);
  v14 = (char *)BaseAddress;
  result = 3221225725LL;
LABEL_15:
  if ( v2 )
    *v11 = (_DWORD)v14;
  else
    *(_QWORD *)v11 = v14;
  return result;
}
