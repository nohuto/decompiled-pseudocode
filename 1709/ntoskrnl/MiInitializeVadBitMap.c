/*
 * XREFs of MiInitializeVadBitMap @ 0x14045E85C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x14045E94C (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiInitializeVadBitMap(int a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v2; // esi
  int v4; // ebp
  __int64 Process; // r14
  __int64 v6; // rdx
  int *i; // rdi
  unsigned __int64 v8; // rcx
  int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v4 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v6 = *(_QWORD *)(Process + 1296);
  *(_DWORD *)(v6 + 132) = (unsigned __int64)(*(_QWORD *)(Process + 1152) - 65537LL) >> 16;
  for ( i = (int *)(v6 + 64); ; i += 10 )
  {
    v8 = (unsigned int)i[3] >> 15 << 12;
    *i = i[3] & 0x7FFF;
    *((_QWORD *)i - 1) = qword_140388950 + 4 * (v8 >> 2);
    if ( a1 == 1 )
      *(i - 4) = 0;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    v9 = MiExpandVadBitMap(i - 4, 1LL);
    i[2] = *i;
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( !v9 )
      break;
    if ( (unsigned int)++v4 >= 2 )
      return v2;
  }
  return (unsigned int)-1073741801;
}
