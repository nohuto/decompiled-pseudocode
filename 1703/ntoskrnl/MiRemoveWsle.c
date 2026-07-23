/*
 * XREFs of MiRemoveWsle @ 0x1400D4A00
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiWsleFree @ 0x1400D6AB0 (MiWsleFree.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiTerminateWsle @ 0x140105650 (MiTerminateWsle.c)
 * Callees:
 *     MiWriteWsle @ 0x14006D3C8 (MiWriteWsle.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x14020E1D0 (MiLogRemoveWsleEvent.c)
 */

char __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 v7; // rcx
  int v8; // edi
  unsigned __int8 v9; // r8
  _QWORD *v10; // rcx
  char result; // al
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 *v14; // r12
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // r14
  __int64 **v19; // rax
  __int64 v20; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int64 *v21; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( (*(_BYTE *)(a1 + 192) & 7) == 4 )
  {
    if ( PsNtosImageBase
      && (a2 < PsNtosImageEnd && a2 >= (unsigned __int64)PsNtosImageBase
       || a2 < PsHalImageEnd && a2 >= (unsigned __int64)PsHalImageBase) )
    {
      LODWORD(xmmword_14036C0E0) = xmmword_14036C0E0 - 1;
    }
    else if ( a2 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState + ((a2 >> 39) & 0x1FF) + 6400) == 12 )
    {
      --DWORD1(xmmword_14036C0E0);
    }
  }
  v7 = *(unsigned __int8 *)(a1 + 192);
  --*(_QWORD *)(a1 + 136);
  LOBYTE(v7) = v7 & 7;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = 0;
    if ( (_BYTE)v7 )
      goto LABEL_8;
LABEL_4:
    v9 = a3 & 0xF;
    --*(_QWORD *)(a1 + 8LL * v9 + 40);
    if ( v9 == 7 )
    {
      v7 = *(unsigned __int16 *)(a1 + 172);
      v12 = *(_QWORD *)(qword_14036C8F8 + 8 * v7);
      v13 = *(_QWORD *)(v12 + 5544);
      if ( *(_QWORD *)(a1 + 96) < *(_QWORD *)(v13 + 64) )
      {
        v14 = (__int64 *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 24) )
        {
          if ( *(__int64 **)(v12 + 5560) != v14 )
          {
            v21 = (volatile signed __int64 *)&qword_14036CF80;
            v20 = 0LL;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v20, &qword_14036CF80);
            }
            else
            {
              v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&qword_14036CF80, (__int64)&v20);
              if ( v15 )
                KxWaitForLockOwnerShip((__int64)&v20, v15);
            }
            if ( *(_BYTE *)(v13 + 53) || !*v14 )
            {
              *(_BYTE *)(v13 + 54) = 1;
            }
            else
            {
              v7 = *v14;
              v17 = *(__int64 **)(a1 + 32);
              if ( *(__int64 **)(*v14 + 8) != v14 || (__int64 *)*v17 != v14 )
                __fastfail(3u);
              *v17 = v7;
              v18 = v12 + 5552;
              *(_QWORD *)(v7 + 8) = v17;
              v19 = *(__int64 ***)(v18 + 8);
              if ( *v19 != (__int64 *)v18 )
                __fastfail(3u);
              *v14 = v18;
              *(_QWORD *)(a1 + 32) = v19;
              *v19 = v14;
              *(_QWORD *)(v18 + 8) = v14;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v20, retaddr);
            }
            else
            {
              _m_prefetchw(&v20);
              v16 = v20;
              if ( !v20 )
              {
                v7 = (__int64)&v20;
                if ( (__int64 *)_InterlockedCompareExchange64(v21, 0LL, (signed __int64)&v20) == &v20 )
                  goto LABEL_5;
                v16 = KxWaitForLockChainValid(&v20);
              }
              v20 = 0LL;
              _InterlockedXor64((volatile signed __int64 *)(v16 + 8), 1uLL);
            }
          }
        }
      }
    }
LABEL_5:
    if ( v8 != 1 )
      goto LABEL_8;
    goto LABEL_6;
  }
  --*(_QWORD *)(a1 + 120);
  v8 = 1;
  if ( (a3 & 0xF) != 8 )
    goto LABEL_4;
LABEL_6:
  if ( a4 == 9 )
    MiWriteWsle(v7, a2);
LABEL_8:
  v10 = &unk_14036D540;
  result = *(_BYTE *)(a1 + 192) & 7;
  if ( result != 2 )
    v10 = 0LL;
  if ( v10 )
  {
    --v10[1];
    if ( v8 == 1 )
      --v10[2];
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
    return MiLogRemoveWsleEvent(a2, *(_BYTE *)(a1 + 192) & 7);
  return result;
}
