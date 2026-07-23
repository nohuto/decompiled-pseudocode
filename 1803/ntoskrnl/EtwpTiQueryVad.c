/*
 * XREFs of EtwpTiQueryVad @ 0x14056B8D4
 * Callers:
 *     EtwTiLogQueueApcThread @ 0x1404D930C (EtwTiLogQueueApcThread.c)
 *     EtwTiLogSetContextThread @ 0x14056B5D8 (EtwTiLogSetContextThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1401A7920 (ZwQueryVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpTiQueryVad(__int64 a1, _KPROCESS *a2, PVOID *a3, unsigned int a4, char a5)
{
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // edi
  PVOID *v11; // rbx
  char *v12; // r14
  NTSTATUS VirtualMemory; // eax
  PVOID PoolWithTag; // rax
  _BYTE v16[48]; // [rsp+30h] [rbp-78h] BYREF

  if ( a2 == KeGetCurrentThread()->ApcState.Process )
  {
    v8 = 0;
  }
  else
  {
    KiStackAttachProcess(a2, 0, (__int64)v16);
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
            goto LABEL_9;
          }
          ExFreePoolWithTag(*v11, 0x6E734954u);
        }
        *v11 = 0LL;
      }
LABEL_9:
      ++v10;
      v12 += 48;
      ++a3;
      v11 += 6;
    }
    while ( v10 < a4 );
  }
  if ( v8 )
    KiUnstackDetachProcess((__int64)v16, 0LL);
  return v9;
}
