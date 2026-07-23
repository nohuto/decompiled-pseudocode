/*
 * XREFs of MiRemoveWsle @ 0x140055F20
 * Callers:
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsle @ 0x140058F20 (MiTerminateWsle.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x1402158F0 (MiLogRemoveWsleEvent.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

char __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, char a3, int a4)
{
  char v7; // cl
  char v8; // cl
  int v9; // r12d
  unsigned __int8 v10; // r10
  __int64 *v11; // rcx
  __int64 PteShadow; // rax
  __int64 *v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rbp
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 **v23; // rcx
  __int64 **v24; // rcx
  __int64 v25; // rax
  volatile signed __int64 *v26; // rdx
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  _QWORD *v29; // rcx
  char result; // al
  __int64 v31; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int64 *v32; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v34; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 192) & 7) == 4 )
  {
    if ( PsNtosImageBase
      && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
       || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
    {
      LODWORD(xmmword_140388420) = xmmword_140388420 - 1;
    }
    else if ( a2 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[794] + ((a2 >> 39) & 0x1FF)) == 12 )
    {
      --DWORD1(xmmword_140388420);
    }
  }
  v7 = *(_BYTE *)(a1 + 192);
  --*(_QWORD *)(a1 + 136);
  v8 = v7 & 7;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 0;
    if ( v8 )
      goto LABEL_56;
LABEL_16:
    v10 = a3 & 0xF;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v11 = (__int64 *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      PteShadow = *v11;
      if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v11, *v11);
      v34 = PteShadow;
      v13 = (__int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v34) - 0x58000000000LL);
      v14 = *v13;
      v15 = (unsigned __int64)*v13 >> 4;
      if ( (v15 & 0x3FF) != 0 )
      {
        v16 = (v14 >> 14) & 7;
        if ( v10 == v16 )
        {
          v17 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(16 * (v15 - 1))) & 0x3FF0;
LABEL_26:
          *v13 = v17;
          goto LABEL_27;
        }
        if ( v10 > v16 )
        {
          v17 = v14 ^ ((unsigned int)v14 ^ (v10 << 14)) & 0x1C000 | 0x3FF0;
          goto LABEL_26;
        }
      }
    }
LABEL_27:
    --*(_QWORD *)(a1 + 8LL * v10 + 40);
    if ( v10 == 7 )
    {
      v18 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172));
      v19 = *(_QWORD *)(v18 + 5680);
      if ( *(_QWORD *)(a1 + 96) < *(_QWORD *)(v19 + 64) )
      {
        v20 = (__int64 *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 24) )
        {
          if ( *(__int64 **)(v18 + 5696) != v20 )
          {
            v32 = (volatile signed __int64 *)&qword_140389240;
            v31 = 0LL;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v31, &qword_140389240);
            }
            else
            {
              v21 = _InterlockedExchange64((volatile __int64 *)&qword_140389240, (__int64)&v31);
              if ( v21 )
                KxWaitForLockOwnerShip(&v31);
            }
            if ( *(_BYTE *)(v19 + 53) || !*v20 )
            {
              *(_BYTE *)(v19 + 54) = 1;
            }
            else
            {
              v22 = (__int64 *)*v20;
              if ( *(__int64 **)(*v20 + 8) != v20 || (v23 = *(__int64 ***)(a1 + 32), *v23 != v20) )
                __fastfail(3u);
              *v23 = v22;
              v22[1] = (__int64)v23;
              v24 = *(__int64 ***)(v18 + 5696);
              if ( *v24 != (__int64 *)(v18 + 5688) )
                __fastfail(3u);
              *v20 = v18 + 5688;
              *(_QWORD *)(a1 + 32) = v24;
              *v24 = v20;
              *(_QWORD *)(v18 + 5696) = v20;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v31, retaddr);
              goto LABEL_50;
            }
            _m_prefetchw(&v31);
            v25 = v31;
            if ( !v31 )
            {
              if ( (__int64 *)_InterlockedCompareExchange64(v32, 0LL, (signed __int64)&v31) == &v31 )
                goto LABEL_50;
              v25 = KxWaitForLockChainValid(&v31, v21);
            }
            v31 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v25 + 8), 1uLL);
          }
        }
      }
    }
LABEL_50:
    if ( v9 != 1 )
      goto LABEL_56;
    goto LABEL_51;
  }
  --*(_QWORD *)(a1 + 120);
  v9 = 1;
  if ( (a3 & 0xF) != 8 )
    goto LABEL_16;
LABEL_51:
  if ( a4 == 9 || a4 == 10 && (*(_BYTE *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
  {
    v26 = (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v27 = *v26;
    do
    {
      v28 = v27;
      v27 = _InterlockedCompareExchange64(v26, ((unsigned __int64)(a4 & 0xF) << 56) | v27 & 0x80FFFFFFFFFFFFFFuLL, v27);
    }
    while ( v28 != v27 );
  }
LABEL_56:
  v29 = &unk_140389800;
  result = *(_BYTE *)(a1 + 192) & 7;
  if ( result != 2 )
    v29 = 0LL;
  if ( v29 )
  {
    --v29[1];
    if ( v9 == 1 )
      --v29[2];
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
    return MiLogRemoveWsleEvent(a2, *(_BYTE *)(a1 + 192) & 7);
  return result;
}
