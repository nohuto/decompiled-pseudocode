/*
 * XREFs of MmHardFaultBytesRequired @ 0x1404A6A80
 * Callers:
 *     CcFetchDataForRead @ 0x14007AE80 (CcFetchDataForRead.c)
 * Callees:
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MmHardFaultBytesRequired(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 *v7; // r9
  __int64 *v8; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = ((a2 & 0xFFF) + a3 + 4095) >> 12;
  v5 = MiOffsetToProtos(**(_DWORD ***)(a1 + 40), a2, &v11);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = (__int64 *)(v6 + 8 * v11);
  v8 = (__int64 *)(v6 + 8LL * *(unsigned int *)(v5 + 44));
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    if ( v7 >= v8 )
    {
      v5 = *(_QWORD *)(v5 + 16);
      v7 = *(__int64 **)(v5 + 8);
      v8 = &v7[*(unsigned int *)(v5 + 44)];
    }
    PteShadow = *v7;
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    if ( (PteShadow & 1) == 0
      && ((PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0
                                   && (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow, v6, v4)) )
    {
      break;
    }
    ++v7;
    if ( !--v3 )
      return 0LL;
  }
  return 1LL;
}
