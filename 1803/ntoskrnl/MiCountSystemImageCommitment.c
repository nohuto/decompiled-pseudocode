/*
 * XREFs of MiCountSystemImageCommitment @ 0x140169A08
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x140169974 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140169C50 (MiFreePrivateFixupEntryForSystemImage.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 SessionVm; // rax
  int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rbp
  LONG *SharedVm; // rbx
  KIRQL v13; // al
  unsigned __int64 v14; // r9
  int v15; // edx
  unsigned __int64 v16; // r10
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v20; // r11
  __int64 v21; // rax
  KIRQL v22; // [rsp+60h] [rbp+8h]
  unsigned __int64 v23; // [rsp+68h] [rbp+10h]
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF

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
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  v23 = SessionVm;
  v8 = *(_DWORD *)(v4 + 56) & 0x800;
  v9 = SessionVm;
  v10 = 0LL;
  v11 = MiFreePrivateFixupEntryForSystemImage(v2);
  SharedVm = MiGetSharedVm(v9);
  v13 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v14 = v4 + 128;
  v22 = v13;
  if ( v4 != -128LL )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(v14 + 52) & 0x3FFFFFFF;
      v16 = (unsigned int)(*(_DWORD *)(v14 + 44) - v15);
      if ( (*(_BYTE *)(v14 + 32) & 0x3Eu) >= 8 )
      {
        v6 += 8LL * (unsigned int)(*(_DWORD *)(v14 + 44) - v15);
      }
      else
      {
        if ( !MiGetSubsectionDriverProtos((_QWORD *)v14) )
        {
          v17 = 0;
          if ( v16 )
          {
            while ( 1 )
            {
              if ( v11 && _bittest(*(const signed __int32 **)(*(_QWORD *)(v11 + 40) + 8LL), (__int64)(v6 - v5) >> 3) )
                goto LABEL_27;
              v18 = MI_READ_PTE_LOCK_FREE(v6);
              v24 = v18;
              if ( v18 )
                break;
LABEL_17:
              ++v17;
              v6 += 8LL;
              if ( v17 >= v16 )
                goto LABEL_18;
            }
            if ( !v8 )
            {
              if ( (v18 & 1) != 0 )
              {
                MI_READ_PTE_LOCK_FREE((unsigned __int64)&v24);
                if ( (MiGetWsleContents(0xFFFFFFFFFLL, (__int64)(v6 << 25) >> 16) & 0xF) != 9
                  && (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0
                  && *(__int64 *)(v20 + 8) < 0 )
                {
                  v21 = v10 + 1;
                  if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
                    v21 = v10;
                  v10 = v21;
                  goto LABEL_17;
                }
              }
              else if ( (v18 & 0x400) != 0 && !MI_PROTO_FORMAT_COMBINED(v18) )
              {
                goto LABEL_17;
              }
            }
LABEL_27:
            ++v10;
            goto LABEL_17;
          }
          goto LABEL_18;
        }
        v6 += 8 * v16;
      }
      v10 += v16;
LABEL_18:
      v14 = *(_QWORD *)(v14 + 16);
      if ( !v14 )
      {
        v9 = v23;
        v13 = v22;
        break;
      }
    }
  }
  MiUnlockWorkingSetExclusive(v9, v13);
  return v10;
}
