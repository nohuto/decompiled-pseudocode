/*
 * XREFs of MiResolveDemandZeroFault @ 0x1400BA780
 * Callers:
 *     MiProtoFault @ 0x14006B9C4 (MiProtoFault.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiExpandSharedZeroCluster @ 0x140076550 (MiExpandSharedZeroCluster.c)
 *     MiCheckUserVirtualAddress @ 0x14007C120 (MiCheckUserVirtualAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiCheckVirtualAddress @ 0x1400C20D0 (MiCheckVirtualAddress.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  char v8; // r11
  int v9; // r10d
  int v12; // edi
  unsigned __int64 v13; // r13
  __int64 v14; // rbx
  int v15; // r15d
  unsigned __int64 v16; // r10
  __int64 v17; // rdx
  char v18; // r15
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v24; // rdx
  char v25; // di
  unsigned int v26; // ecx
  __int64 v27; // rbx
  int v28; // r11d
  __int16 v29; // dx
  bool v30; // zf
  __int16 v31; // dx
  unsigned __int64 v32; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v34; // rax
  int v35; // edi
  unsigned __int64 v36; // rdx
  int v37; // r9d
  __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned __int64 v40; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v42; // eax
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // r12
  int v45; // ebx
  __int64 v46; // rax
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // rdx
  int v49; // eax
  __int64 Address; // rax
  unsigned int v51; // eax
  char v52; // cl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // [rsp+28h] [rbp-79h]
  _KPROCESS *Process; // [rsp+40h] [rbp-61h]
  unsigned __int64 v58; // [rsp+40h] [rbp-61h]
  __int64 v59; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v60; // [rsp+50h] [rbp-51h] BYREF
  int v61; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v63; // [rsp+68h] [rbp-39h]
  unsigned __int64 v64; // [rsp+70h] [rbp-31h]
  unsigned __int64 v65; // [rsp+78h] [rbp-29h]
  int v66; // [rsp+80h] [rbp-21h]
  int v67; // [rsp+84h] [rbp-1Dh]
  char v68; // [rsp+88h] [rbp-19h]
  int v69; // [rsp+8Ch] [rbp-15h]
  __int64 v70; // [rsp+90h] [rbp-11h]
  unsigned __int64 v71; // [rsp+98h] [rbp-9h]
  __int64 v72; // [rsp+A0h] [rbp-1h]
  __int64 v73; // [rsp+A8h] [rbp+7h]
  int v75; // [rsp+108h] [rbp+67h] BYREF

  v8 = *(_BYTE *)(a4 + 192) & 7;
  v73 = 0LL;
  v9 = 0;
  if ( !v8 )
    v9 = 32;
  v62 = v9;
  v12 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v52 = *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v52 == 2 )
    {
      v9 |= 1u;
      goto LABEL_73;
    }
    if ( v52 == 1 )
    {
      v9 |= 2u;
      goto LABEL_73;
    }
  }
  if ( (a5 & 1) != 0 )
  {
    v52 = *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v52 != 5 )
    {
LABEL_74:
      if ( v52 == 4 )
        goto LABEL_75;
      goto LABEL_5;
    }
    v9 |= 8u;
LABEL_73:
    v62 = v9;
    goto LABEL_74;
  }
LABEL_5:
  if ( (v9 & 0xB) == 0 )
  {
    v13 = 0LL;
    goto LABEL_7;
  }
LABEL_75:
  v13 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a5 & 1) != 0 && *(_BYTE *)v13 == 4 )
    v73 = *(_QWORD *)(v13 + 40);
  if ( (v9 & 2) != 0 && (*(_DWORD *)(v13 + 80) & 0x4000) != 0 )
  {
    v9 |= 4u;
    v62 = v9;
  }
LABEL_7:
  v71 = v13;
  v70 = a4;
  if ( (v9 & 6) == 2 )
    return 0LL;
  v14 = 0LL;
  v15 = 0;
  v59 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a5 & 1) != 0 )
  {
    v16 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      v15 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v16 + 40) + 588LL)] + 192)
                                + 146LL);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v8 )
  {
    v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_70;
    if ( !v16 && !*(_QWORD *)(v17 + 256) && !*(_QWORD *)(v17 + 264) && *(_BYTE *)(v17 + 232) != 1 )
    {
      v14 = v59;
      goto LABEL_17;
    }
    Address = MiLocateAddress(a1);
    v14 = Address;
    if ( Address )
    {
      v59 = Address;
      v51 = *(_DWORD *)(Address + 48);
      v15 = (v51 >> 8) & 0x3F;
      if ( !v15 && (v51 & 0x8000) == 0 )
        v15 = (*(_DWORD *)(**(_QWORD **)(v14 + 72) + 56LL) >> 20) & 0x3F;
    }
    else
    {
LABEL_70:
      v14 = v59;
    }
    if ( v16 && !v15 && (unsigned __int8)KeIsAttachedProcess() )
    {
      CurrentThread = KeGetCurrentThread();
      v14 = v59;
      v15 = CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
    }
  }
LABEL_17:
  v69 = v15;
  v18 = a7;
  v68 = a7;
  v63 = a1;
  v64 = a1;
  v70 = a4;
  if ( !v14 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
  {
    v19 = *(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(Process[1].SecurePid));
    if ( *(_DWORD *)(v19 + 1192) )
    {
      if ( *(_KPROCESS **)(v19 + 1296) == Process )
      {
        v14 = MiLocateAddress(a1);
        v59 = v14;
      }
    }
  }
  v72 = v14;
  v20 = MI_READ_PTE_LOCK_FREE(a2);
  if ( !a3 )
  {
    v22 = (v20 >> 5) & 0x1F;
    if ( v12 && *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (v20 & 0x400) != 0 )
      LODWORD(v22) = 4;
    v66 = v22;
    v67 = v22;
    v65 = 0LL;
    return MiResolvePrivateZeroFault(&v62);
  }
  v71 = v13;
  v60 = 1LL;
  v24 = 0LL;
  v25 = 0;
  v65 = a2;
  v26 = 24;
  v75 = 24;
  if ( (v62 & 5) != 0 && (v62 & 0x20) != 0 )
  {
    v54 = MiCheckVirtualAddress(a1, &v75, &v59);
    v26 = v75;
    v24 = v54;
    v14 = v59;
    v66 = v75;
    v67 = v75;
  }
  else
  {
    if ( v14 && (*(_DWORD *)(v14 + 48) & 0x108000) == 0x100000 )
    {
      v25 = 1;
      v55 = MiCheckUserVirtualAddress(a1, &v75, v14, 0);
      v26 = v75;
      v24 = v55;
    }
    v66 = v26;
    v67 = v26;
    if ( v25 != 1 )
      goto LABEL_31;
  }
  if ( (v62 & 4) != 0 && v26 >> 3 != 1 && (v26 >> 3 != 3 || (v26 & 7) == 0) )
  {
    MiUnlockProtoPoolPage(a3, 0x11u);
    return 0LL;
  }
  if ( v24 && v14 && v26 != 24 && (v26 & 0xFFFFFFF8) != 0x10 )
    v60 = MiExpandSharedZeroCluster((__int64)&v62);
LABEL_31:
  v27 = a3;
  v28 = MiCreateSharedZeroPages((__int64)&v62, &v60);
  v61 = 0;
  LODWORD(a5) = v28;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v61);
      while ( (*(_QWORD *)(a3 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
    v28 = a5;
  }
  v29 = *(_WORD *)(a3 + 32);
  *(_BYTE *)(a3 + 34) &= ~0x20u;
  if ( !v29 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a3 + 0x58000000000LL) / 48, *(_BYTE *)(a3 + 34) & 7, *(unsigned __int16 *)(a3 + 32));
  v30 = v29 == 1;
  v31 = v29 - 1;
  *(_WORD *)(a3 + 32) = v31;
  if ( v30 && (unsigned int)MiIsPfnFileOnly(a3) )
  {
LABEL_121:
    MiPfnReferenceCountIsZero(v27, (v27 + 0x58000000000LL) / 48, CurrentPrcb);
    v28 = a5;
    goto LABEL_53;
  }
  v32 = *(_QWORD *)(a3 + 40);
  CurrentPrcb = (struct _KPRCB *)((*(_QWORD *)(a3 + 24) >> 62) & 1LL);
  if ( (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (v32 & 0x10000000000000LL) != 0 )
      goto LABEL_53;
LABEL_36:
    v34 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v31 )
    {
      if ( v31 == 1 )
      {
        if ( !v34 && (*(_BYTE *)(a3 + 34) & 8) == 0 )
          goto LABEL_53;
      }
      else if ( v31 != 2 || !v34 || (*(_BYTE *)(a3 + 34) & 8) == 0 )
      {
        goto LABEL_53;
      }
      v35 = 0;
    }
    else
    {
      v35 = 1;
    }
    v36 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
    if ( (v36 > 0xFFFFF6BFFFFFFF78uLL || v36 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(a3 + 35) >> 5) & 1) != 0 )
    {
      *(_BYTE *)(a3 + 35) &= ~0x20u;
LABEL_52:
      if ( !v35 )
        goto LABEL_53;
      goto LABEL_121;
    }
    v37 = 0;
    if ( (v32 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
    {
      v37 = 1;
    }
    else if ( v36 <= 0xFFFFF6BFFFFFFF78uLL
           && v36 >= 0xFFFFF68000000000uLL
           && ((*(unsigned __int8 *)(a3 + 35) >> 5) & 1) != 0 )
    {
      v37 = 1;
    }
    else if ( v35 == 1 && (_DWORD)CurrentPrcb )
    {
      v37 = 1;
    }
    v38 = (v32 >> 40) & 0x3FF;
    v39 = *(_QWORD *)(qword_14036C8F8 + 8 * v38);
    if ( v37 == 1 )
    {
      MiReturnCommit(*(_QWORD *)(qword_14036C8F8 + 8 * v38), 1LL);
      v28 = a5;
    }
    if ( (ULONG_PTR *)v39 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v40 = 1LL;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v42 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v30 = (_DWORD)CachedResidentAvailable == v42;
            LODWORD(CachedResidentAvailable) = v42;
            if ( v30 )
              goto LABEL_51;
          }
          while ( v42 != -1 && (unsigned __int64)(v42 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v40 = (int)CachedResidentAvailable - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_1403818C0, v40);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 5824), 1uLL);
    }
LABEL_51:
    v27 = a3;
    goto LABEL_52;
  }
  if ( (v32 & 0x10000000000000LL) == 0 )
    goto LABEL_36;
LABEL_53:
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v28 >= 0 && (v62 & 4) == 0 )
  {
    v58 = v63;
    v43 = 0LL;
    v44 = a2 - 8LL * (unsigned int)((a1 - v63) >> 12);
    if ( v60 )
    {
      v45 = (v62 >> 3) & 1;
      do
      {
        v46 = MI_READ_PTE_LOCK_FREE(v44);
        v48 = 0LL;
        if ( v45 && ((v47 ^ a1) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          v48 = v13;
        LODWORD(v56) = 1;
        v49 = MiCompleteProtoPteFault(a4, v18, v47, v46, a6, v56, v48);
        v58 += 4096LL;
        if ( v43 || v49 >= 0 )
        {
          v28 = a5;
        }
        else
        {
          v28 = v49;
          LODWORD(a5) = v49;
        }
        __incgsdword(0x2E9Cu);
        ++v43;
        v44 += 8LL;
      }
      while ( v43 < v60 );
    }
  }
  return (unsigned int)v28;
}
