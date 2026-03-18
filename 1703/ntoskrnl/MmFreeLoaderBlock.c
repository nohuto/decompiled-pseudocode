/*
 * XREFs of MmFreeLoaderBlock @ 0x140817414
 * Callers:
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiWriteWsle @ 0x14006D3C8 (MiWriteWsle.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiDeleteBootRange @ 0x14015D2A0 (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmFreeBootRegistry @ 0x1405BD3CC (MmFreeBootRegistry.c)
 */

void MmFreeLoaderBlock()
{
  unsigned int v0; // esi
  __int64 *v1; // r14
  __int64 v2; // rdi
  __int64 *v3; // rdx
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // rcx
  unsigned int v7; // eax
  _QWORD *PoolWithTag; // rax
  signed __int64 v9; // r12
  LONG *SharedVm; // rdi
  KIRQL v11; // al
  _KPROCESS *v12; // rdx
  __int64 *v13; // rdi
  __int64 *v14; // r12
  unsigned __int64 v15; // r15
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 TransitionPte; // rax
  unsigned __int64 v25; // rcx
  __int64 *v26; // r15
  __int64 v27; // r12
  unsigned __int64 v28; // r13
  __int64 v29; // rsi
  unsigned __int8 v30; // al
  unsigned __int64 v31; // rdi
  _QWORD *v32; // rax
  _QWORD *v33; // rsi
  __int64 *v34; // rcx
  _QWORD *v35; // rbx
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  unsigned __int64 v40; // rdi
  ULONG_PTR v41; // rcx
  unsigned __int64 v42; // rdi
  unsigned __int8 v43; // [rsp+28h] [rbp-E0h]
  unsigned int v44; // [rsp+2Ch] [rbp-DCh]
  __int64 v45; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *v46; // [rsp+38h] [rbp-D0h]
  char *AnyMultiplexedVm; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v48; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v49; // [rsp+50h] [rbp-B8h]
  __int64 DemandZeroPte; // [rsp+58h] [rbp-B0h]
  __int64 v51; // [rsp+60h] [rbp-A8h]
  int v52; // [rsp+68h] [rbp-A0h] BYREF
  int v53; // [rsp+6Ch] [rbp-9Ch]
  __int64 v54; // [rsp+70h] [rbp-98h]
  __int64 v55; // [rsp+78h] [rbp-90h]
  __int64 v56; // [rsp+80h] [rbp-88h]

  v0 = 0;
  v1 = (__int64 *)(KeLoaderBlock_0 + 32);
  v2 = 0LL;
  v51 = KeLoaderBlock_0 + 32;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v4 = DemandZeroPte;
  v5 = 2113664;
  if ( v3 != v1 )
  {
    do
    {
      v6 = v3[4];
      if ( v6 )
      {
        v7 = *((_DWORD *)v3 + 4);
        if ( v7 == 19 )
          v2 += v6;
        if ( v7 <= 0x15 && _bittest(&v5, v7) )
          ++v0;
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v1 );
    v44 = v0;
    if ( v2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v2 + 8, 0x6C4D6D4Du);
      v46 = PoolWithTag;
      v9 = (signed __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v2;
        v52 = 0;
        LOWORD(v53) = 0;
        v55 = 0LL;
        v56 = 0LL;
        v45 = (__int64)(PoolWithTag + 1);
        v54 = 20LL;
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
        v11 = ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
        v13 = (__int64 *)*v1;
        v43 = v11;
        if ( (__int64 *)*v1 != v1 )
        {
          v14 = (__int64 *)v45;
          do
          {
            if ( *((_DWORD *)v13 + 4) == 19 && v13[4] )
            {
              v15 = 0LL;
              v16 = (_QWORD *)(48 * v13[3] - 0x57FFFFFFFF8LL);
              do
              {
                v48 = *v16 | 0x8000000000000000uLL;
                v17 = v48;
                v18 = (__int64)(v48 << 25) >> 16;
                *v14++ = v18;
                v49 = v18;
                v45 = MI_READ_PTE_LOCK_FREE(v17);
                MiGetWsleContents(v19, v20);
                MiWriteWsle(v21, v22);
                v23 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v45);
                TransitionPte = MiMakeTransitionPte(v23, 4);
                v25 = v48;
                v45 = TransitionPte;
                *(_QWORD *)v48 = TransitionPte;
                if ( MiPteInShadowRange(v25) )
                  MiWritePteShadow();
                MiInsertTbFlushEntry((__int64)&v52, v49, 1LL, 0);
                ++v15;
                v16 += 6;
              }
              while ( v15 < v13[4] );
            }
            v13 = (__int64 *)*v13;
          }
          while ( v13 != v1 );
          v4 = DemandZeroPte;
          v9 = (signed __int64)v46;
        }
        MiFlushTbList((__int64)&v52, v12);
        v26 = (__int64 *)*v1;
        if ( (__int64 *)*v1 != v1 )
        {
          do
          {
            if ( *((_DWORD *)v26 + 4) == 19 && v26[4] )
            {
              v27 = v26[3];
              v28 = 0LL;
              do
              {
                v29 = 48 * (v27 + v28) - 0x58000000000LL;
                v30 = MiLockPageInline(v29);
                *(_QWORD *)(v29 + 16) = v4;
                *(_BYTE *)(v29 + 34) |= 0x10u;
                v31 = v30;
                MiDecrementShareCount(v29);
                _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v31);
                ++v28;
              }
              while ( v28 < v26[4] );
              v1 = (__int64 *)v51;
            }
            v26 = (__int64 *)*v26;
          }
          while ( v26 != v1 );
          v9 = (signed __int64)v46;
        }
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v43);
        if ( _InterlockedCompareExchange64(&qword_14036CFC8, v9, 0LL) )
        {
          qword_14036CFC8 = v9;
          MmFreeBootRegistry();
        }
        v0 = v44;
        v5 = 2113664;
      }
    }
  }
  v32 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v0, 0x6C4D6D4Du);
  v33 = v32;
  if ( v32 )
  {
    v34 = (__int64 *)*v1;
    v35 = v32;
    if ( (__int64 *)*v1 != v1 )
    {
      do
      {
        v36 = *((_DWORD *)v34 + 4);
        if ( v36 <= 0x15 && _bittest(&v5, v36) )
        {
          if ( v34[4] )
          {
            *v35 = v34[3];
            v35[1] = v34[4];
            v35 += 2;
          }
        }
        v34 = (__int64 *)*v34;
      }
      while ( v34 != v1 );
      if ( v35 != v33 )
      {
LABEL_47:
        while ( 1 )
        {
          v35 -= 2;
          if ( v35 < v33 )
            break;
          v37 = 48LL * *v35;
          v38 = v35[1];
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
              v35[1] -= v42;
              *v35 += v42;
              v35 += 2;
              if ( v42 )
                goto LABEL_47;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *v35 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL, v35[1]);
        }
      }
    }
    ExFreePoolWithTag(v33, 0);
  }
}
