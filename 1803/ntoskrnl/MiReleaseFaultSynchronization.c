/*
 * XREFs of MiReleaseFaultSynchronization @ 0x14026207C
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x14026194C (MiFaultGetFileExtents.c)
 * Callees:
 *     MiUnlockSystemVa @ 0x14003FA38 (MiUnlockSystemVa.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiReleaseFaultSynchronization(__int64 a1)
{
  __int64 v2; // xmm1_8
  __int64 v3; // rdx
  __int64 result; // rax
  _QWORD v5[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( (*(_DWORD *)(a1 + 84) & 0x20) == 0 )
    return MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  memset(v5, 0, 0x80uLL);
  v2 = *(_QWORD *)(a1 + 72);
  *(_OWORD *)&v5[3] = *(_OWORD *)(a1 + 56);
  v5[5] = v2;
  result = MiUnlockSystemVa((__int64)v5, v3);
  *(_DWORD *)(a1 + 84) &= ~0x20u;
  return result;
}
