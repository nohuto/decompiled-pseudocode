/*
 * XREFs of MiFindPlaceholderVadToReplace @ 0x14026842C
 * Callers:
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiCheckSecuredVad @ 0x1404D73E0 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiFindPlaceholderVadToReplace(unsigned __int64 a1, __int64 a2, char a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 Address; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r11
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9

  CurrentThread = KeGetCurrentThread();
  Address = MiLocateAddress(a1);
  v10 = Address;
  if ( !Address )
    goto LABEL_11;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(Address + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  v12 = *(unsigned int *)(v10 + 48);
  if ( (v12 & 0x20000000) != 0
    || (v13 = *(unsigned int *)(v10 + 52),
        LODWORD(v13) = v13 & 0x7FFFFFFF,
        (v13 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31)) != 0x7FFFFFFFDLL)
    || (v14 = *(unsigned int *)(v10 + 24), (v14 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12 != a1)
    || (v11 = *(unsigned __int8 *)(v10 + 33),
        v15 = *(unsigned int *)(v10 + 28),
        (((v15 | (v11 << 32)) << 12) | 0xFFF) != a2) )
  {
    MiUnlockVad((__int64)CurrentThread, v10, v11, v12);
LABEL_11:
    *a4 = -1073741800;
    return 0LL;
  }
  if ( (v12 & 0x8000000) == 0
    || (v16 = MiCheckSecuredVad(v10, (_DWORD)v14 << 12, ((int)v15 - (int)v14 + 1) << 12, 85, a3), *a4 = v16, v16 >= 0) )
  {
    *a4 = 0;
    return v10;
  }
  MiUnlockVad((__int64)CurrentThread, v10, v17, v18);
  return 0LL;
}
