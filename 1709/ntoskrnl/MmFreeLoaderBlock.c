/*
 * XREFs of MmFreeLoaderBlock @ 0x1408383C8
 * Callers:
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiMarkPfnTradable @ 0x1400ADA78 (MiMarkPfnTradable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiWriteWsle @ 0x1400E6D40 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiDeleteBootRange @ 0x140142F9C (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmFreeBootRegistry @ 0x1405BF31C (MmFreeBootRegistry.c)
 */

void MmFreeLoaderBlock()
{
  unsigned int v0; // esi
  __int64 *v1; // r14
  __int64 v2; // rdi
  __int64 *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  _QWORD *PoolWithTag; // rax
  signed __int64 v9; // r13
  LONG *SharedVm; // rdi
  KIRQL v11; // al
  _KPROCESS *v12; // rdx
  __int64 *v13; // rsi
  unsigned __int64 v14; // r12
  unsigned __int64 *v15; // r14
  __int64 v16; // r13
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r15
  __int64 PteShadow; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // r15
  __int64 v25; // r13
  unsigned __int64 v26; // r12
  __int64 v27; // rsi
  unsigned __int8 v28; // al
  unsigned __int64 v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  __int64 *v32; // rcx
  _QWORD *v33; // rbx
  unsigned int v34; // eax
  int v35; // edx
  _QWORD *i; // rbx
  __int64 v37; // r8
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  unsigned __int64 v40; // rdi
  ULONG_PTR v41; // rcx
  unsigned __int64 v42; // rdi
  KIRQL v43; // [rsp+28h] [rbp-E0h]
  unsigned int v44; // [rsp+2Ch] [rbp-DCh]
  __int64 TransitionPte; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 *v46; // [rsp+38h] [rbp-D0h]
  __int64 v47; // [rsp+40h] [rbp-C8h]
  _QWORD *v48; // [rsp+48h] [rbp-C0h]
  char *AnyMultiplexedVm; // [rsp+50h] [rbp-B8h]
  __int64 DemandZeroPte; // [rsp+58h] [rbp-B0h]
  int v51; // [rsp+68h] [rbp-A0h] BYREF
  int v52; // [rsp+6Ch] [rbp-9Ch]
  __int64 v53; // [rsp+70h] [rbp-98h]
  __int64 v54; // [rsp+78h] [rbp-90h]
  __int64 v55; // [rsp+80h] [rbp-88h]

  v0 = 0;
  v1 = (__int64 *)(KeLoaderBlock_0 + 32);
  v2 = 0LL;
  v47 = KeLoaderBlock_0 + 32;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v4 = DemandZeroPte;
  if ( v3 != v1 )
  {
    do
    {
      v5 = v3[4];
      v6 = v2;
      if ( v5 )
      {
        v7 = *((_DWORD *)v3 + 4);
        v2 += v5;
        if ( v7 != 19 )
          v2 = v6;
        if ( v7 == 7 || v7 == 21 || v7 == 14 )
          ++v0;
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v1 );
    v44 = v0;
    if ( v2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v2 + 8, 0x6C4D6D4Du);
      v48 = PoolWithTag;
      v9 = (signed __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v2;
        v51 = 0;
        LOWORD(v52) = 0;
        v54 = 0LL;
        v55 = 0LL;
        v46 = PoolWithTag + 1;
        v53 = 20LL;
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
        v11 = ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
        v13 = (__int64 *)*v1;
        v43 = v11;
        if ( (__int64 *)*v1 != v1 )
        {
          v12 = (_KPROCESS *)0xFFFFF6FB7DBED7F8LL;
          do
          {
            if ( *((_DWORD *)v13 + 4) == 19 && v13[4] )
            {
              v14 = 0LL;
              v15 = v46;
              v16 = 48 * v13[3] - 0x58000000000LL;
              do
              {
                v17 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
                v18 = (__int64)(v17 << 25) >> 16;
                *v15++ = v18;
                PteShadow = *(_QWORD *)v17;
                if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
                  PteShadow = MiReadPteShadow();
                TransitionPte = PteShadow;
                MiMarkPfnTradable(v16, 0);
                MiGetWsleContents(v20, v18);
                MiWriteWsle(v21, v18);
                v22 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&TransitionPte);
                TransitionPte = MiMakeTransitionPte(v22, 4);
                *(_QWORD *)v17 = TransitionPte;
                if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow();
                MiInsertTbFlushEntry(&v51, v18, 1LL, 0);
                ++v14;
                v12 = (_KPROCESS *)0xFFFFF6FB7DBED7F8LL;
                v16 += 48LL;
              }
              while ( v14 < v13[4] );
              v46 = v15;
              v1 = (__int64 *)v47;
            }
            v13 = (__int64 *)*v13;
          }
          while ( v13 != v1 );
          v4 = DemandZeroPte;
          v9 = (signed __int64)v48;
        }
        MiFlushTbList((__int64)&v51, v12);
        v24 = (__int64 *)*v1;
        if ( (__int64 *)*v1 != v1 )
        {
          do
          {
            if ( *((_DWORD *)v24 + 4) == 19 && v24[4] )
            {
              v25 = v24[3];
              v26 = 0LL;
              do
              {
                v27 = 48 * (v26 + v25) - 0x58000000000LL;
                v28 = MiLockPageInline(v27);
                *(_QWORD *)(v27 + 16) = v4;
                *(_BYTE *)(v27 + 34) |= 0x10u;
                v29 = v28;
                MiDecrementShareCount(v27);
                _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v29);
                ++v26;
              }
              while ( v26 < v24[4] );
              v1 = (__int64 *)v47;
            }
            v24 = (__int64 *)*v24;
          }
          while ( v24 != v1 );
          v9 = (signed __int64)v48;
        }
        LOBYTE(v23) = v43;
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v23);
        if ( _InterlockedCompareExchange64(&qword_140389288, v9, 0LL) )
        {
          qword_140389288 = v9;
          MmFreeBootRegistry();
        }
        v0 = v44;
      }
    }
  }
  v30 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v0, 0x6C4D6D4Du);
  v31 = v30;
  if ( v30 )
  {
    v32 = (__int64 *)*v1;
    v33 = v30;
    if ( (__int64 *)*v1 != v1 )
    {
      do
      {
        v34 = *((_DWORD *)v32 + 4);
        if ( v34 <= 0x15 )
        {
          v35 = 2113664;
          if ( _bittest(&v35, v34) )
          {
            if ( v32[4] )
            {
              *v33 = v32[3];
              v33[1] = v32[4];
              v33 += 2;
            }
          }
        }
        v32 = (__int64 *)*v32;
      }
      while ( v32 != v1 );
      if ( v33 != v31 )
      {
        for ( i = v33 - 2; i >= v31; i -= 2 )
        {
          v37 = 48LL * *i;
          v38 = i[1];
          v39 = (_QWORD *)(v37 - 0x57FFFFFFFF8LL);
          v40 = *(_QWORD *)(v37 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v38 )
          {
            v39 += 6;
            v40 += 8LL;
            if ( (*v39 | 0x8000000000000000uLL) != v40 )
            {
              v41 = *(_QWORD *)(v37 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
              v42 = (__int64)(v40 - v41) >> 3;
              MiDeleteBootRange(v41, v42);
              i[1] -= v42;
              *i += v42;
              i += 2;
              if ( v42 )
                goto LABEL_53;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *i - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL, i[1]);
LABEL_53:
          ;
        }
      }
    }
    ExFreePoolWithTag(v31, 0);
  }
}
