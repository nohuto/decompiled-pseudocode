/*
 * XREFs of MiCountSystemImageCommitment @ 0x14014BA18
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x14014B984 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiGetSubsectionDriverProtos @ 0x1400B6F28 (MiGetSubsectionDriverProtos.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     ExReleaseSpinLockExclusive @ 0x140110B40 (ExReleaseSpinLockExclusive.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14014BC98 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rcx
  unsigned __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  char *AnyMultiplexedVm; // r14
  int v8; // r12d
  __int64 v9; // rdi
  LONG *SharedVm; // rbx
  KIRQL v11; // al
  unsigned __int64 v12; // r9
  unsigned __int8 v13; // bp
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int i; // r11d
  __int64 PteShadow; // rax
  __int64 v20; // r10
  __int64 v21; // rax
  LONG *v22; // rax
  KIRQL v24; // [rsp+60h] [rbp+8h]
  __int64 v25; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 196) & 0x12) != 0 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v2 = *(_QWORD *)(a1 + 48);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v2) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v3 = *(_QWORD *)(a1 + 112);
  if ( !v3 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v4 = MiSectionControlArea(v3);
  if ( !*(_QWORD *)(v4 + 144) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v5 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v8 = *(_DWORD *)(v4 + 56) & 0x800;
  v9 = 0LL;
  v25 = MiFreePrivateFixupEntryForSystemImage(v2);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v11 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v12 = v4 + 128;
  v24 = v11;
  v13 = v11;
  if ( v4 != -128LL )
  {
    v14 = v25;
    do
    {
      if ( (*(_BYTE *)(v12 + 32) & 0x3Eu) >= 8 || MiGetSubsectionDriverProtos((_QWORD *)v12) )
      {
        v15 = *(unsigned int *)(v12 + 44);
        v9 += v15;
        v6 += 8 * v15;
      }
      else
      {
        for ( i = 0; i < *(_DWORD *)(v12 + 44); v6 += 8LL )
        {
          if ( !v14
            || (v16 = (__int64)(v6 - v5) >> 3, !_bittest(*(const signed __int32 **)(*(_QWORD *)(v14 + 40) + 8LL), v16)) )
          {
            PteShadow = *(_QWORD *)v6;
            if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
            v25 = PteShadow;
            if ( !PteShadow )
              goto LABEL_31;
            if ( !v8 )
            {
              if ( (PteShadow & 1) != 0 )
              {
                MI_GET_PFN_FROM_PTE(&v25, v16, v17, v12);
                if ( (MiGetWsleContents(0LL, (__int64)(v6 << 25) >> 16) & 0xF) != 9
                  && (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0
                  && *(__int64 *)(v20 + 8) < 0 )
                {
                  v21 = v9 + 1;
                  if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
                    v21 = v9;
                  v9 = v21;
                  goto LABEL_31;
                }
              }
              else if ( (PteShadow & 0x400) != 0 && !MI_PROTO_FORMAT_COMBINED(PteShadow) )
              {
                goto LABEL_31;
              }
            }
          }
          ++v9;
LABEL_31:
          ++i;
        }
      }
      v12 = *(_QWORD *)(v12 + 16);
    }
    while ( v12 );
    v13 = v24;
  }
  MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v13);
  v22 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  ExReleaseSpinLockExclusive(v22, v13);
  return v9;
}
