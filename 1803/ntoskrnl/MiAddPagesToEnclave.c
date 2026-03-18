/*
 * XREFs of MiAddPagesToEnclave @ 0x140750E84
 * Callers:
 *     MiCommitEnclavePages @ 0x1407514F0 (MiCommitEnclavePages.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140002458 (MiGetPteFromCopyList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiCreatePteCopyList @ 0x1400C613C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1400C8214 (MiReleasePteCopyList.c)
 *     MiGetVmPartition @ 0x1400D2E10 (MiGetVmPartition.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiInitializeEnclavePfn @ 0x1402646F8 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x14026482C (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x1402648EC (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1402649B4 (MiWriteEnclavePte.c)
 *     KeAddEnclavePage @ 0x140741D10 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x140752384 (MiGetPageForEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140752CD4 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiAddPagesToEnclave(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  int v5; // eax
  __int64 result; // rax
  _QWORD *VmPartition; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rcx
  int v22; // r10d
  char v23; // cl
  char v24; // al
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  int v27; // eax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 ValidPte; // rax
  char v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-80h]
  __int64 PageForEnclave; // [rsp+40h] [rbp-78h]
  int v38; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v39; // [rsp+50h] [rbp-68h]
  __int64 v40; // [rsp+58h] [rbp-60h]
  unsigned __int64 PteFromCopyList; // [rsp+60h] [rbp-58h]
  unsigned int v42[20]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v43; // [rsp+C0h] [rbp+8h]

  v5 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)v42 = 0LL;
  if ( (v5 & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  VmPartition = (_QWORD *)MiGetVmPartition((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12]);
  v11 = *(_QWORD *)(a1 + 104);
  v12 = 0LL;
  v39 = VmPartition;
  if ( v11 >= a2 || (v12 = a2 - v11, result = MiReserveEnclavePages(a1, VmPartition, a2 - v11), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    {
      v15 = 0LL;
      v20 = 0LL;
    }
    else
    {
      v13 = (_QWORD *)MiReservePtes((__int64)&qword_1403CC5E0, 1u);
      v15 = (unsigned __int64)v13;
      if ( !v13 )
        goto LABEL_8;
      *v13 = MiMakeValidPte((unsigned __int64)v13, qword_1403CC420, 536870913LL, v14);
      if ( MiPteInShadowRange(v15) )
        MiWritePteShadow(v18, v17, v19);
      v20 = (__int64)(v15 << 25) >> 16;
    }
    v21 = 20LL;
    if ( a2 <= 0x14 )
      v21 = a2;
    MiCreatePteCopyList(v21 + 1, v21 + 1, (__int64)v42);
    if ( v42[1] )
    {
      v22 = 4;
      v23 = (a5 >> 1) & 2 | 0x35;
      if ( (a5 & 2) == 0 )
        v23 = (a5 >> 1) & 2 | 0x31;
      if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
        v22 = a5;
      v24 = v23 | 0x40;
      v43 = v22;
      if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
        v24 = v23;
      v35 = v24;
      v25 = (__int64)(a3 << 25) >> 16;
      v36 = v25;
      v40 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
      while ( 1 )
      {
        if ( a3 > a4 )
        {
          v16 = 0;
          goto LABEL_33;
        }
        if ( (MI_READ_PTE_LOCK_FREE(a3) & 1) == 0 )
        {
          v26 = v12 - 1;
          if ( v12 != a2 )
            v26 = v12;
          --a2;
          v12 = v26;
          PageForEnclave = MiGetPageForEnclave(a1, v39);
          PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v42, PageForEnclave, -1LL);
          v27 = KeAddEnclavePage(v40, v20, (__int64)(PteFromCopyList << 25) >> 16, v25, v35, &v38);
          v28 = PteFromCopyList;
          v16 = v27;
          *(_QWORD *)PteFromCopyList = ZeroPte;
          if ( MiPteInShadowRange(v28) )
            MiWritePteShadow(v30, v29, v31);
          if ( v16 < 0 )
          {
            MiReturnEnclavePage(PageForEnclave);
            if ( v16 == -1073740657 )
              v16 = -1073741823;
LABEL_33:
            MiReleasePteCopyList((__int64)v42);
            if ( v15 )
              MiReleasePtes((__int64)&qword_1403CC5E0, v15, 1uLL);
            if ( v12 )
              MiReturnReservedEnclavePages(a1, v12);
            return (unsigned int)v16;
          }
          MiInitializeEnclavePfn(PageForEnclave, a3, v43);
          v32 = v43;
          LODWORD(v32) = v43 | 0x80000000;
          ValidPte = MiMakeValidPte(a3, PageForEnclave, v32, v33);
          MiWriteEnclavePte(a3, ValidPte, 0);
          v25 = v36 + 4096;
          v36 += 4096LL;
        }
        a3 += 8LL;
      }
    }
LABEL_8:
    v16 = -1073741670;
    goto LABEL_33;
  }
  return result;
}
