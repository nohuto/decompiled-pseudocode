/*
 * XREFs of MmStoreFreeVirtualMemory @ 0x140430BB4
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140120FFC (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiFreeVadRange @ 0x140016C10 (MiFreeVadRange.c)
 *     MiUnlockPageTableRange @ 0x140017450 (MiUnlockPageTableRange.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 */

__int64 __fastcall MmStoreFreeVirtualMemory(unsigned __int64 a1)
{
  unsigned int *v2; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  char v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v2 = MiObtainReferencedVad(a1, &v7);
  v3 = v2[6] | ((unsigned __int64)*((unsigned __int8 *)v2 + 32) << 32);
  v4 = v2[7] | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32);
  MiUnlockPageTableRange(a1, (v4 << 12) | 0xFFF);
  v6 = 0;
  return MiFreeVadRange((__int64)v2, (int)&v6, v3, v4, (__int64)KeGetCurrentThread()->ApcState.Process);
}
