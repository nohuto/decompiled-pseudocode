/*
 * XREFs of MiCountSystemImageCommitment @ 0x1401443B8
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x140144324 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14001DF40 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetSubsectionDriverProtos @ 0x140097F34 (MiGetSubsectionDriverProtos.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14014463C (MiFreePrivateFixupEntryForSystemImage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  __int64 v1; // r11
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rsi
  char *AnyMultiplexedVm; // r14
  int v8; // r13d
  __int64 v9; // rdi
  LONG *SharedVm; // rbx
  KIRQL v11; // al
  unsigned __int64 v12; // r9
  unsigned __int8 v13; // r12
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // r11d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rax
  LONG *v21; // rax
  KIRQL v23; // [rsp+60h] [rbp+8h]
  __int64 v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 48);
  if ( (*(_DWORD *)(a1 + 196) & 0x12) != 0 )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48)) )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v3 = *(_QWORD *)(v1 + 112);
  if ( !v3 )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v4 = MiSectionControlArea(v3);
  if ( !*(_QWORD *)(v4 + 144) )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v5 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = v5;
  v6 = v5;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v8 = *(_DWORD *)(v4 + 56) & 0x800;
  v9 = 0LL;
  v24 = MiFreePrivateFixupEntryForSystemImage(v2);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v11 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v12 = v4 + 128;
  v23 = v11;
  v13 = v11;
  if ( v4 != -128LL )
  {
    v14 = v24;
    do
    {
      if ( (*(_BYTE *)(v12 + 32) & 0x3Eu) >= 8 || MiGetSubsectionDriverProtos((_QWORD *)v12) )
      {
        v15 = *(unsigned int *)(v12 + 44);
        v9 += v15;
        v6 += 8 * v15;
        goto LABEL_30;
      }
      v16 = 0;
      if ( *(_DWORD *)(v12 + 44) )
      {
        while ( 1 )
        {
          if ( v14 && _bittest(*(const signed __int32 **)(*(_QWORD *)(v14 + 40) + 8LL), (v6 - v5) >> 3) )
            goto LABEL_27;
          v17 = MI_READ_PTE_LOCK_FREE(v6);
          v24 = v17;
          if ( v17 )
            break;
LABEL_28:
          ++v16;
          v6 += 8LL;
          if ( v16 >= *(_DWORD *)(v12 + 44) )
          {
            v5 = v25;
            goto LABEL_30;
          }
        }
        if ( !v8 )
        {
          if ( (v17 & 1) != 0 )
          {
            MI_GET_PAGE_FRAME_FROM_PTE(&v24);
            if ( (MiGetWsleContents(v18, v6 << 25 >> 16) & 0xF) != 9
              && (*(_QWORD *)(v19 + 40) & 0x200000000000000LL) != 0
              && *(__int64 *)(v19 + 8) < 0 )
            {
              v20 = v9 + 1;
              if ( (*(_DWORD *)(v19 + 16) & 0x400LL) != 0 )
                v20 = v9;
              v9 = v20;
              goto LABEL_28;
            }
          }
          else if ( (v17 & 0x400) != 0 && !MI_PROTO_FORMAT_COMBINED(v17) )
          {
            goto LABEL_28;
          }
        }
LABEL_27:
        ++v9;
        goto LABEL_28;
      }
LABEL_30:
      v12 = *(_QWORD *)(v12 + 16);
    }
    while ( v12 );
    v13 = v23;
  }
  MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v13);
  v21 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  ExReleaseSpinLockExclusive(v21, v13);
  return v9;
}
