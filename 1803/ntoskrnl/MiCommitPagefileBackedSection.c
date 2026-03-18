/*
 * XREFs of MiCommitPagefileBackedSection @ 0x1404D7638
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiChargeSegmentCommit @ 0x1404D7760 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MiCommitPagefileBackedSection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v10; // rbp
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 ProtoPteAddress; // r14
  int v15; // eax
  __int64 *v16; // rbx
  __int64 result; // rax
  __int64 *v18; // rbp
  __int64 *i; // rcx
  __int64 v20; // rax
  __int64 *v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-40h] BYREF

  v10 = a3;
  if ( (a5 | MmCompatibleProtectionMask[(*(_DWORD *)(a2 + 48) >> 3) & 7] | 0x700) != (MmCompatibleProtectionMask[(*(_DWORD *)(a2 + 48) >> 3) & 7] | 0x700) )
    return 3221225550LL;
  v12 = a3 >> 12;
  v13 = a4 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a2, a3 >> 12, 0, &v21);
  MiGetProtoPteAddress(a2, v13, 0, &v22);
  v15 = MiVadPureReserve(a2);
  v16 = v21;
  if ( v15 )
  {
    v18 = v21;
    for ( i = v21; ; i = v18 )
    {
      result = MiAddViewsForSection(i, 1uLL, 8u);
      if ( (int)result < 0 )
        break;
      if ( v18 == v22 )
      {
        if ( !ProtoPteAddress )
        {
          v20 = MiGetProtoPteAddress(a2, v12, 0, &v21);
          v16 = v21;
          ProtoPteAddress = v20;
        }
        v10 = a3;
        goto LABEL_3;
      }
      v18 = (__int64 *)v18[2];
    }
  }
  else
  {
LABEL_3:
    if ( (unsigned int)MiChargeSegmentCommit(v16, ProtoPteAddress, v13 - v12 + 1) )
      return MiSetProtectionOnSection(a1, a2, v10, a4, a5, 0, a8, a9);
    else
      return 3221225773LL;
  }
  return result;
}
