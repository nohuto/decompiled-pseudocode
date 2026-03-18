/*
 * XREFs of MiInitializePteInfo @ 0x14082D63C
 * Callers:
 *     MiInitializeSystemSpaceMap @ 0x1405B4D5C (MiInitializeSystemSpaceMap.c)
 *     MiInitializeKernelStacks @ 0x14082EA74 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x14082F554 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiInitializePteInfo(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // r10
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // r9
  int v15; // eax
  char *AnyMultiplexedVm; // rax
  unsigned int v17; // edx

  LODWORD(v7) = 0;
  v8 = 0LL;
  v10 = a3;
  if ( !a3 )
  {
    v7 = ((((a7 + (a6 >> 12) - 1) / a7 + 7) >> 3) + 4095) >> 12;
    v13 = MiReservePtes((__int64)&qword_140389360, (unsigned int)v7, a7);
    v8 = v13;
    if ( !v13 )
      return 0LL;
    v10 = (__int64)(v13 << 25) >> 16;
  }
  if ( !(unsigned int)MiInitializeDynamicBitmap((_QWORD *)a1, v10, (a6 >> 12) / a7, a4) )
  {
    if ( v8 )
      MiReleasePtes((__int64)&qword_140389360, v8, v7, v14);
    return 0LL;
  }
  *(_DWORD *)(a1 + 24) = 2;
  v15 = *(_DWORD *)(a1 + 24);
  if ( a7 == 16 )
    v15 = 6;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 24) = v15;
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = AnyMultiplexedVm;
  return v17;
}
