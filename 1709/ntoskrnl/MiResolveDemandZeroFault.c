/*
 * XREFs of MiResolveDemandZeroFault @ 0x140044CE0
 * Callers:
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiProtoFault @ 0x1401269B8 (MiProtoFault.c)
 * Callees:
 *     MiExpandSharedZeroCluster @ 0x14000BD64 (MiExpandSharedZeroCluster.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiCheckVirtualAddress @ 0x140109690 (MiCheckVirtualAddress.c)
 *     MiCheckUserVirtualAddress @ 0x140109820 (MiCheckUserVirtualAddress.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 */

__int64 MiResolveDemandZeroFault(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // r11
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  char v9; // r15
  int v10; // r14d
  unsigned __int64 v11; // r12
  int v13; // r10d
  __int64 v14; // rdi
  _KPROCESS *Process; // r13
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 Address; // rax
  unsigned int v19; // r10d
  __int16 v20; // ax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v22; // r10
  unsigned __int64 *v23; // r15
  __int64 v24; // rdx
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  char v29; // si
  __int64 v30; // rdx
  char v31; // r14
  unsigned int v32; // eax
  __int64 v33; // rax
  int v34; // ecx
  int v35; // eax
  int v36; // r12d
  __int64 v37; // rdx
  bool v38; // zf
  __int16 v39; // dx
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  int v42; // esi
  unsigned __int64 v43; // rdx
  char v44; // al
  int v45; // ecx
  __int64 v46; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v48; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v50; // eax
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rsi
  unsigned __int64 *v54; // rbx
  __int64 v55; // r15
  int v56; // r14d
  unsigned __int64 v57; // r13
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v62; // [rsp+48h] [rbp-69h] BYREF
  int v63; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int64 v64; // [rsp+58h] [rbp-59h]
  unsigned int v65; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 v66; // [rsp+68h] [rbp-49h]
  unsigned __int64 v67; // [rsp+70h] [rbp-41h]
  unsigned __int64 *v68; // [rsp+78h] [rbp-39h]
  unsigned int v69; // [rsp+80h] [rbp-31h]
  unsigned int v70; // [rsp+84h] [rbp-2Dh]
  char v71; // [rsp+88h] [rbp-29h]
  int v72; // [rsp+8Ch] [rbp-25h]
  __int64 v73; // [rsp+90h] [rbp-21h]
  unsigned __int64 v74; // [rsp+98h] [rbp-19h]
  __int64 v75; // [rsp+A0h] [rbp-11h]
  __int64 v76; // [rsp+A8h] [rbp-9h]
  __int64 v80; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va; // [rsp+120h] [rbp+6Fh]
  __int64 v82; // [rsp+128h] [rbp+77h]
  __int64 v83; // [rsp+130h] [rbp+7Fh]
  va_list va1; // [rsp+138h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v80 = va_arg(va1, _QWORD);
  v82 = va_arg(va1, _QWORD);
  v83 = va_arg(va1, _QWORD);
  v4 = v80;
  v76 = 0LL;
  v7 = 0LL;
  v8 = a1;
  v9 = *(_BYTE *)(a4 + 192) & 7;
  if ( !v9 )
    v7 = 32LL;
  v65 = v7;
  v10 = v80 & 1;
  if ( (v80 & 1) != 0 && *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v7 = (unsigned int)v7 | 1;
    goto LABEL_11;
  }
  if ( (v80 & 1) != 0 )
  {
    if ( *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v7 = (unsigned int)v7 | 2;
    }
    else
    {
      if ( *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
        goto LABEL_12;
      v7 = (unsigned int)v7 | 8;
    }
LABEL_11:
    v65 = v7;
LABEL_12:
    if ( *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      goto LABEL_15;
  }
  if ( (v7 & 0xB) == 0 )
  {
    v11 = 0LL;
    v64 = 0LL;
    goto LABEL_21;
  }
LABEL_15:
  v11 = v80 & 0xFFFFFFFFFFFFFFFEuLL;
  v64 = v80 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v80 & 1) != 0 && *(_BYTE *)v11 == 4 )
    v76 = *(_QWORD *)(v11 + 40);
  if ( (v7 & 2) != 0 && (*(_DWORD *)(v11 + 80) & 0x4000) != 0 )
  {
    v7 = (unsigned int)v7 | 4;
    v65 = v7;
  }
LABEL_21:
  v74 = v11;
  v73 = a4;
  if ( (v7 & 6) == 2 )
  {
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    return 0LL;
  }
  if ( (v7 & 8) != 0 && (*(_DWORD *)(v11 + 48) & 8) != 0 )
  {
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    return 3221225495LL;
  }
  v13 = 0;
  v14 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v61 = 0LL;
  if ( (v80 & 1) != 0 )
  {
    v16 = v80 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      v13 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v16 + 40) + 588LL)] + 192)
                                + 146LL);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v9 )
  {
    v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_45;
    if ( !v16 && !*(_QWORD *)(v17 + 256) && !*(_QWORD *)(v17 + 264) && *(_BYTE *)(v17 + 232) != 1 )
    {
LABEL_50:
      v14 = v61;
      goto LABEL_51;
    }
    Address = MiLocateAddress(a1);
    v14 = Address;
    if ( Address )
    {
      v19 = *(_DWORD *)(Address + 48);
      v61 = Address;
      v20 = v19;
      v13 = (v19 >> 8) & 0x3F;
      if ( !v13 && (v20 & 0x8000) == 0 )
        v13 = (*(_DWORD *)(**(_QWORD **)(v14 + 72) + 56LL) >> 20) & 0x3F;
    }
    else
    {
LABEL_45:
      v14 = v61;
    }
    if ( v16 && !v13 )
    {
      if ( KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v13 = CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
      }
      goto LABEL_50;
    }
  }
LABEL_51:
  v71 = v83;
  v72 = v13;
  v22 = a1;
  v73 = a4;
  v66 = a1;
  v67 = a1;
  if ( v14 )
  {
    v23 = (unsigned __int64 *)a2;
  }
  else
  {
    v23 = (unsigned __int64 *)a2;
    if ( a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
    {
      v24 = *(_QWORD *)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2));
      if ( *(_DWORD *)(v24 + 1144) )
      {
        if ( *(_KPROCESS **)(v24 + 1264) == Process )
        {
          v14 = MiLocateAddress(a1);
          v61 = v14;
        }
      }
    }
  }
  PteShadow = *v23;
  v75 = v14;
  v26 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v23 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v23 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v23, PteShadow);
  if ( !a3 )
  {
    v27 = (PteShadow >> 5) & 0x1F;
    if ( v10 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v28 = 4;
    }
    else
    {
      if ( (PteShadow & 0x400) != 0 )
        LODWORD(v27) = 4;
      v28 = v27;
    }
    v69 = v28;
    v70 = v28;
    v68 = 0LL;
    return MiResolvePrivateZeroFault(&v65, v26);
  }
  v29 = v65;
  v30 = 0LL;
  v31 = 0;
  v74 = v11;
  v68 = v23;
  v62 = 1LL;
  v32 = 24;
  LODWORD(v80) = 24;
  if ( (v65 & 5) != 0 && (v65 & 0x20) != 0 )
  {
    v33 = MiCheckVirtualAddress(v22, (__int64 *)va, &v61);
    v14 = v61;
    v30 = v33;
    v32 = v80;
    v69 = v80;
    v70 = v80;
  }
  else
  {
    if ( v14 )
    {
      v34 = *(_DWORD *)(v14 + 48);
      if ( (v34 & 0x8000) == 0 && (v34 & 0x100000) != 0 )
      {
        v31 = 1;
        v30 = MiCheckUserVirtualAddress(v22, (__int64 *)va, v14, 0LL);
        v32 = v80;
      }
    }
    v69 = v32;
    v70 = v32;
    if ( v31 != 1 )
      goto LABEL_87;
  }
  if ( (v29 & 4) != 0 && v32 >> 3 != 1 && (v32 >> 3 != 3 || (v32 & 7) == 0) )
  {
    MiUnlockProtoPoolPage(a3, 0x11u);
    return 0LL;
  }
  if ( v30 && v14 && v32 != 24 && (v32 & 0xFFFFFFF8) != 0x10 )
    v62 = MiExpandSharedZeroCluster((__int64)&v65);
LABEL_87:
  v35 = MiCreateSharedZeroPages(&v65, &v62, v7, v8);
  v63 = 0;
  v36 = v35;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v63);
    while ( *(__int64 *)(a3 + 24) < 0 );
  }
  *(_BYTE *)(a3 + 34) &= ~0x20u;
  v37 = *(unsigned __int16 *)(a3 + 32);
  if ( !(_WORD)v37 )
    MiBadRefCount(a3, v37);
  v38 = (_WORD)v37 == 1;
  v39 = v37 - 1;
  *(_WORD *)(a3 + 32) = v39;
  if ( !v38 || !(unsigned int)MiIsPfnFileOnly(a3) )
  {
    v40 = *(_QWORD *)(a3 + 40);
    if ( (v40 & 0x10000000000000LL) != 0 )
      goto LABEL_132;
    v41 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v39 )
    {
      v42 = 1;
LABEL_103:
      v43 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
      if ( v43 > 0xFFFFF6BFFFFFFF78uLL || v43 < 0xFFFFF68000000000uLL )
      {
        v44 = *(_BYTE *)(a3 + 35);
        if ( (v44 & 0x20) != 0 )
        {
          *(_BYTE *)(a3 + 35) = v44 & 0xDF;
          goto LABEL_130;
        }
      }
      v45 = 0;
      if ( (v40 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
      {
        v45 = 1;
      }
      else if ( v43 <= 0xFFFFF6BFFFFFFF78uLL && v43 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a3 + 35) & 0x20) != 0 )
      {
        v45 = 1;
      }
      else if ( v42 == 1 && (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) != 0 )
      {
        v45 = 1;
      }
      v46 = *(_QWORD *)(qword_140388AF0 + 8 * ((v40 >> 40) & 0x3FF));
      if ( v45 == 1 )
        MiReturnCommit(v46, 1uLL);
      if ( (ULONG_PTR *)v46 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v48 = 1LL;
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v50 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v38 = (_DWORD)CachedResidentAvailable == v50;
              LODWORD(CachedResidentAvailable) = v50;
              if ( v38 )
                break;
              if ( v50 == -1 || (unsigned __int64)(v50 + 1LL) > 0x100 )
                goto LABEL_125;
            }
LABEL_130:
            if ( !v42 )
              goto LABEL_132;
            goto LABEL_131;
          }
LABEL_125:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v48 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_14038B840, v48);
        goto LABEL_130;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 6016), 1uLL);
      goto LABEL_130;
    }
    if ( v39 == 1 )
    {
      if ( v41 )
      {
LABEL_101:
        v42 = 0;
        goto LABEL_103;
      }
    }
    else if ( v39 != 2 || !v41 )
    {
      goto LABEL_132;
    }
    if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
      goto LABEL_132;
    goto LABEL_101;
  }
LABEL_131:
  MiPfnReferenceCountIsZero(a3, (a3 + 0x58000000000LL) / 48);
LABEL_132:
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v36 >= 0 && (v65 & 4) == 0 )
  {
    v51 = a1;
    v52 = 0LL;
    v53 = v66;
    v54 = &v23[-(unsigned int)((a1 - v66) >> 12)];
    if ( v62 )
    {
      v55 = v82;
      v56 = (v65 >> 3) & 1;
      v57 = v64;
      do
      {
        v58 = *v54;
        if ( (unsigned __int64)v54 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v54 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          LODWORD(v58) = MiReadPteShadow(v54, *v54);
          v51 = a1;
        }
        v59 = 0LL;
        if ( v56 && ((v53 ^ v51) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          v59 = v57;
        v60 = MiCompleteProtoPteFault(a4, (unsigned __int8)v83, v53, v58, v55, 1, v59);
        v53 += 4096LL;
        if ( !v52 && v60 < 0 )
          v36 = v60;
        __incgsdword(0x2E9Cu);
        ++v52;
        v51 = a1;
        ++v54;
      }
      while ( v52 < v62 );
    }
  }
  return (unsigned int)v36;
}
