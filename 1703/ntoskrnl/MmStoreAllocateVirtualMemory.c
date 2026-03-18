/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1404543B0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140120FFC (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiFreeVadRange @ 0x140016C10 (MiFreeVadRange.c)
 *     MiLockPageTableRange @ 0x140035428 (MiLockPageTableRange.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiAddSecureEntry @ 0x1405127E0 (MiAddSecureEntry.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v2; // rsi
  int v3; // eax
  char *v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 PteAddress; // rax
  char v8; // [rsp+30h] [rbp-40h]
  _QWORD v9[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+A0h] [rbp+30h] BYREF
  char v11; // [rsp+A8h] [rbp+38h] BYREF
  unsigned __int64 v12; // [rsp+B0h] [rbp+40h] BYREF
  PVOID P; // [rsp+B8h] [rbp+48h] BYREF

  v10 = a1;
  memset(v9, 0, sizeof(v9));
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  v2 = 0LL;
  v12 = 0LL;
  v8 = 0;
  v3 = MiAllocateVirtualMemory(-1LL, &v12, 0LL, &v10, 12288, 2, v8, 1, &P);
  v4 = (char *)P;
  if ( v3 >= 0 )
  {
    v5 = ((*((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF;
    if ( MiAddSecureEntry((_DWORD)P, v12, (*((_DWORD *)P + 7) << 12) | 0xFFFu, -2147483647, 1) )
    {
      PteAddress = MiGetPteAddress(v5);
      MiDecommitPages(v12, PteAddress, CurrentThread->ApcState.Process, (__int64)v4, 1, v9);
      if ( (int)MiLockPageTableRange(v12, v5) >= 0 )
      {
        MiUnlockAndDereferenceVad(v4);
        v2 = v12;
        v4 = 0LL;
        P = 0LL;
      }
    }
  }
  if ( v4 )
  {
    v11 = 0;
    MiFreeVadRange(
      (__int64)P,
      (int)&v11,
      *((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
      *((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
      (__int64)KeGetCurrentThread()->ApcState.Process);
  }
  return v2;
}
