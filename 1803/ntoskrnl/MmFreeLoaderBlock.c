/*
 * XREFs of MmFreeLoaderBlock @ 0x1408B2894
 * Callers:
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiMarkPfnTradable @ 0x1400B3390 (MiMarkPfnTradable.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiWriteWsle @ 0x14013FAB0 (MiWriteWsle.c)
 *     MiDeleteBootRange @ 0x140178A94 (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MmFreeBootRegistry @ 0x1406335E4 (MmFreeBootRegistry.c)
 *     MiFreeRegistryPageRange @ 0x1408B2D58 (MiFreeRegistryPageRange.c)
 */

void MmFreeLoaderBlock()
{
  __int64 *v0; // rdi
  unsigned int v1; // esi
  __int64 v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  _QWORD *PoolWithTag; // rax
  signed __int64 v8; // r12
  char *AnyMultiplexedVm; // r13
  unsigned __int8 v10; // al
  __int64 v11; // r8
  __int64 *v12; // rbx
  __int64 v13; // r12
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r15
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  char WsleContents; // al
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
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
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdi
  unsigned __int8 v43; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v44; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v45; // [rsp+30h] [rbp-D8h]
  unsigned int v46; // [rsp+38h] [rbp-D0h]
  __int64 TransitionPte; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v49; // [rsp+50h] [rbp-B8h]
  unsigned __int64 *v50; // [rsp+58h] [rbp-B0h]
  _QWORD *v51; // [rsp+60h] [rbp-A8h]
  __int64 v52; // [rsp+68h] [rbp-A0h]
  __int64 v53; // [rsp+70h] [rbp-98h]
  int v54; // [rsp+78h] [rbp-90h] BYREF
  __int16 v55; // [rsp+7Ch] [rbp-8Ch]
  __int64 v56; // [rsp+80h] [rbp-88h]
  __int64 v57; // [rsp+88h] [rbp-80h]
  __int64 v58; // [rsp+90h] [rbp-78h]

  v0 = (__int64 *)(KeLoaderBlock_0 + 32);
  v49 = 0LL;
  v1 = 0;
  v53 = KeLoaderBlock_0 + 32;
  v2 = 0LL;
  v3 = *(__int64 **)(KeLoaderBlock_0 + 32);
  if ( v3 != (__int64 *)(KeLoaderBlock_0 + 32) )
  {
    do
    {
      v4 = v3[4];
      v5 = v2;
      if ( v4 )
      {
        v6 = *((_DWORD *)v3 + 4);
        v2 += v4;
        if ( v6 != 19 )
          v2 = v5;
        if ( v6 == 7 || v6 == 21 || v6 == 14 )
          ++v1;
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v0 );
    v46 = v1;
    if ( v2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v2 + 8, 0x624D6D4Du);
      v51 = PoolWithTag;
      v8 = (signed __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v2;
        v56 = 20LL;
        v50 = PoolWithTag + 1;
        v54 = 0;
        v55 = 0;
        v57 = 0LL;
        v58 = 0LL;
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v12 = (__int64 *)*v0;
        v43 = v10;
        if ( (__int64 *)*v0 != v0 )
        {
          v11 = 0xFFFFF68000000000uLL;
          v13 = 0LL;
          do
          {
            if ( *((_DWORD *)v12 + 4) == 19 && v12[4] )
            {
              v14 = 0LL;
              v44 = v12[3];
              v48 = 0LL;
              v15 = 0LL;
              v52 = 0LL;
              v16 = v44;
              v17 = 48 * v44 - 0x58000000000LL;
              do
              {
                v45 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
                v18 = (v45 << 25) - v15;
                v19 = v50;
                v20 = v18 >> 16;
                *v50 = v20;
                v50 = v19 + 1;
                v21 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                TransitionPte = v21;
                if ( v14 != v21 )
                {
                  if ( v14 )
                  {
                    MiFlushTbList((__int64)&v54, 0x8000000000000000uLL, 0xFFFFF68000000000uLL);
                    MiFreeRegistryPageRange(v49, v13);
                    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v14);
                    v21 = TransitionPte;
                  }
                  v14 = v21;
                  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v21, 0LL);
                }
                TransitionPte = MI_READ_PTE_LOCK_FREE(v45);
                MiMarkPfnTradable(v17, 0);
                WsleContents = MiGetWsleContents(v22, v20);
                MiWriteWsle(v24, v20, WsleContents & 0xF0 | 0xA);
                v25 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte);
                TransitionPte = MiMakeTransitionPte((v25 >> 12) & 0xFFFFFFFFFLL, 4);
                *(_QWORD *)v45 = TransitionPte;
                if ( MiPteInShadowRange(v45) )
                  MiWritePteShadow(v27, v26, v28);
                if ( HIDWORD(v56) )
                {
                  ++v13;
                }
                else
                {
                  v13 = 1LL;
                  v49 = v16 + v48;
                }
                MiInsertTbFlushEntry((__int64)&v54, v20, 1LL, 0);
                v17 += 48LL;
                v15 = v52;
                v29 = v48 + 1;
                v48 = v29;
              }
              while ( v29 < v12[4] );
              v0 = (__int64 *)v53;
              MiFlushTbList((__int64)&v54, v29, 0xFFFFF68000000000uLL);
              MiFreeRegistryPageRange(v49, v13);
              MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v14);
              v11 = 0xFFFFF68000000000uLL;
            }
            v12 = (__int64 *)*v12;
          }
          while ( v12 != v0 );
          v8 = (signed __int64)v51;
          v1 = v46;
          v10 = v43;
        }
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10, v11);
        if ( _InterlockedCompareExchange64(&qword_1403CC508, v8, 0LL) )
        {
          qword_1403CC508 = v8;
          MmFreeBootRegistry();
        }
      }
    }
  }
  v30 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v1, 0x624D6D4Du);
  v31 = v30;
  if ( v30 )
  {
    v32 = (__int64 *)*v0;
    v33 = v30;
    if ( (__int64 *)*v0 != v0 )
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
      while ( v32 != v0 );
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
                goto LABEL_47;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *i - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL, i[1]);
LABEL_47:
          ;
        }
      }
    }
    ExFreePoolWithTag(v31, 0);
  }
}
