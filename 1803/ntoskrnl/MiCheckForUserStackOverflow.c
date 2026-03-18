/*
 * XREFs of MiCheckForUserStackOverflow @ 0x14055FF64
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1401A77C0 (ZwAllocateVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1401A7EC0 (ZwProtectVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCheckForUserStackOverflow(unsigned __int64 a1)
{
  char *v2; // rbx
  struct _KTHREAD *CurrentThread; // r11
  char Queue; // al
  unsigned int *Teb; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  ULONG_PTR v8; // rcx
  _DWORD *v9; // rdi
  ULONG_PTR v10; // rax
  char *v11; // r8
  NTSTATUS v12; // eax
  char *v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  __int16 v16; // ax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  ULONG_PTR v19; // rcx
  void *v20; // rdx
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
  v7 = *((_QWORD *)Teb + 655) & 0xFFFFFFFFFFFFF000uLL;
  v8 = (Teb[1490] + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  RegionSize = v8;
  v9 = Teb + 4;
  v10 = v8;
  if ( v8 )
  {
    v10 = v8 + 4096;
    v8 = v10;
    RegionSize = v10;
  }
  if ( v10 < 0x3000 )
  {
    v8 = 12288LL;
    RegionSize = 12288LL;
    v10 = 12288LL;
  }
  if ( a1 >= v6 || a1 < v7 )
  {
    v15 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v15 )
    {
      v16 = *(_WORD *)(v15 + 8);
      if ( v16 == 332 || v16 == 452 )
      {
        v2 = (char *)(Teb + 2048);
        if ( ((unsigned __int8)Teb & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = Teb[2049];
        v18 = Teb[2947];
        v19 = Teb[3038];
        RegionSize = v19;
        v7 = v18 & 0xFFFFFFFFFFFFF000uLL;
        if ( a1 < v17 && a1 >= v7 )
        {
          v8 = (v19 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v10 = v8;
          RegionSize = v8;
          if ( v8 )
          {
            v8 += 4096LL;
            RegionSize = v8;
            v10 = v8;
          }
          if ( v10 < 0x2000 )
          {
            v8 = 0x2000LL;
            RegionSize = 0x2000LL;
            v10 = 0x2000LL;
          }
          v9 = Teb + 2050;
          goto LABEL_10;
        }
      }
    }
    return 2147483649LL;
  }
LABEL_10:
  v11 = (char *)((a1 & 0xFFFFFFFFFFFFF000uLL) - v10);
  BaseAddress = v11;
  if ( (unsigned __int64)v11 <= v7 )
  {
    v20 = (void *)(v7 + 4096);
  }
  else
  {
    if ( (*(_DWORD *)(CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 188) & 0x10000) != 0 )
    {
      v12 = -1073741523;
    }
    else
    {
      v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x104u);
      v8 = RegionSize;
      v11 = (char *)BaseAddress;
    }
    if ( v12 >= 0 )
    {
      v13 = &v11[v8];
      result = 275LL;
      goto LABEL_15;
    }
    RegionSize = v8 - 4096;
    v20 = v11 + 4096;
  }
  BaseAddress = v20;
  ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldAccessProtection);
  v13 = (char *)BaseAddress;
  result = 3221225725LL;
LABEL_15:
  if ( v2 )
    *v9 = (_DWORD)v13;
  else
    *(_QWORD *)v9 = v13;
  return result;
}
