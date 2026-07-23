/*
 * XREFs of EtwpTiQueryVad @ 0x14074C920
 * Callers:
 *     EtwTiLogQueueApcThread @ 0x1404D9734 (EtwTiLogQueueApcThread.c)
 *     EtwTiLogSetContextThread @ 0x14074B560 (EtwTiLogSetContextThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14017DD20 (ZwQueryVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpTiQueryVad(__int64 a1, _KPROCESS *a2, PVOID *a3, unsigned int a4, char a5)
{
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // edi
  PVOID *v11; // rbx
  char *v12; // r15
  NTSTATUS VirtualMemory; // eax
  PVOID PoolWithTag; // rax
  $709EDFC2F9E0D4565D6AA3C4377BC643 v16; // [rsp+30h] [rbp-78h] BYREF

  if ( a2 == KeGetCurrentThread()->ApcState.Process )
  {
    v8 = 0;
  }
  else
  {
    KiStackAttachProcess(a2, 0, (__int64)&v16);
    v8 = 1;
  }
  v9 = 0;
  v10 = 0;
  if ( a4 )
  {
    v11 = (PVOID *)(a1 + 40);
    v12 = (char *)(a1 + 8);
    do
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        *a3,
                        MemoryRegionInformation,
                        v12,
                        0x20uLL,
                        0LL);
      *((_DWORD *)v11 - 10) = VirtualMemory;
      if ( VirtualMemory >= 0 )
      {
        v9 |= 1 << v10;
        if ( a5 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E734954u);
          *v11 = PoolWithTag;
          if ( !PoolWithTag
            || ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 *a3,
                 MemoryMappedFilenameInformation,
                 PoolWithTag,
                 0x200uLL,
                 0LL) >= 0 )
          {
            goto LABEL_12;
          }
          ExFreePoolWithTag(*v11, 0x6E734954u);
        }
        *v11 = 0LL;
      }
LABEL_12:
      ++v10;
      v12 += 48;
      ++a3;
      v11 += 6;
    }
    while ( v10 < a4 );
  }
  if ( v8 )
    KiUnstackDetachProcess(&v16, 0LL);
  return v9;
}
