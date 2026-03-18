/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x140152114
 * Callers:
 *     MiDeprioritizeVad @ 0x14012E200 (MiDeprioritizeVad.c)
 *     MmTrimPagedPool @ 0x1405D9B2C (MmTrimPagedPool.c)
 * Callees:
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x1400EDFC4 (MiUpdatePfnPriority.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // r9
  unsigned __int8 v11; // r12
  LONG *SharedVm; // rbx
  KIRQL v13; // al
  int PfnPriority; // eax
  __int64 v15; // r15
  __int64 v16; // rcx
  char v17; // bl
  __int64 v18; // r8
  __int64 v19; // rcx
  LONG *v20; // rax
  char v22; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+24h] [rbp-DCh]
  int v24; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+44h] [rbp-BCh]
  int v28; // [rsp+48h] [rbp-B8h]
  int v29; // [rsp+4Ch] [rbp-B4h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  v29 = 0;
  v23 = a4 & 7;
  v30 = 0LL;
  v31 = 0LL;
  v26 = MiTbFlushType(a3);
  v24 = dword_140388C68;
  v27 = 4;
  v28 = 20;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = v8 + 8 * v9;
  if ( (v10 & 0x10) != 0 )
  {
    v11 = 17;
    v22 = 17;
  }
  else
  {
    SharedVm = MiGetSharedVm(v7);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v11 = v13;
    v22 = v13;
  }
  LOBYTE(PfnPriority) = MiIsAddressValid(v8);
  if ( !(_BYTE)PfnPriority )
    v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v8 < v25 )
  {
    do
    {
      if ( (v8 & 0xFFF) != 0 || (LOBYTE(PfnPriority) = MiIsAddressValid(v8), (_BYTE)PfnPriority) )
      {
        PfnPriority = *(_DWORD *)v8;
        if ( (*(_DWORD *)v8 & 1) != 0 )
        {
          v15 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v8) - 0x58000000000LL;
          LOBYTE(PfnPriority) = MiGetWsleContents(v16, (__int64)(v8 << 25) >> 16);
          v17 = PfnPriority & 0xF;
          if ( (PfnPriority & 0xF) != 9 )
          {
            v18 = *(_QWORD *)(v15 + 8);
            if ( v18 >= 0 )
              LOBYTE(PfnPriority) = MiDemoteCombinedPte(a3, v8, v18 | 0x8000000000000000uLL);
            if ( (a4 & 8) == 0 )
            {
              PfnPriority = MiGetPfnPriority(v15);
              if ( v23 != PfnPriority )
              {
                MiLockPageAtDpcInline(v19);
                MiUpdatePfnPriority(v15);
                LOBYTE(PfnPriority) = -1;
                _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
            }
            if ( (a4 & 0x20) != 0 && v17 != 8 )
            {
              if ( v24 )
                MI_WSLE_LOG_ACCESS(a3, (_BYTE *)v8);
              MiInsertTbFlushEntry(&v26, (__int64)(v8 << 25) >> 16, 1LL, 0);
              LOBYTE(PfnPriority) = v28;
              if ( v29 == v28 )
              {
                LOBYTE(PfnPriority) = MiFreeWsleList(a3, (__int64)&v26, 0);
                v29 = 0;
              }
            }
          }
        }
      }
      else
      {
        v8 += 4088LL;
      }
      v8 += 8LL;
    }
    while ( v8 < v25 );
    v11 = v22;
  }
  if ( v29 )
    LOBYTE(PfnPriority) = MiFreeWsleList(a3, (__int64)&v26, 0);
  if ( v11 != 17 )
  {
    MiPreUnlockWorkingSetExclusive(a3, v11);
    v20 = MiGetSharedVm(a3);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v20, retaddr);
    else
      *v20 = 0;
    LOBYTE(PfnPriority) = v11;
    __writecr8(v11);
  }
  return PfnPriority;
}
