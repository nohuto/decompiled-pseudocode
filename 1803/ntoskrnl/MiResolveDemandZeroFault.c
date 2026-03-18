/*
 * XREFs of MiResolveDemandZeroFault @ 0x1400196F0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiResolvePrivateZeroFault @ 0x140017760 (MiResolvePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiCheckVirtualAddress @ 0x14003E120 (MiCheckVirtualAddress.c)
 *     MiCheckUserVirtualAddress @ 0x14003E2E0 (MiCheckUserVirtualAddress.c)
 *     MiCreateSharedZeroPages @ 0x1400A2810 (MiCreateSharedZeroPages.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiExpandSharedZeroCluster @ 0x14013C370 (MiExpandSharedZeroCluster.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // r9
  unsigned __int64 v7; // r15
  int v9; // r10d
  unsigned __int64 v10; // r11
  _BYTE *v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // r10d
  unsigned __int64 v14; // r12
  _KPROCESS *Process; // r13
  unsigned __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  char v24; // r14
  char v25; // r13
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // r11
  int v31; // r14d
  __int16 v32; // dx
  bool v33; // zf
  __int16 v34; // dx
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r13d
  unsigned __int64 v38; // rdx
  char v39; // al
  int v40; // r10d
  __int64 v41; // rcx
  __int64 v42; // r14
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v44; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v46; // eax
  unsigned __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // r12
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // r15
  unsigned int v52; // ebx
  unsigned __int64 v53; // rdx
  int v54; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 Address; // rax
  unsigned int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rax
  unsigned __int64 v64; // r8
  __int64 v65; // rax
  int v66; // [rsp+30h] [rbp-59h] BYREF
  __int64 v67; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v68; // [rsp+40h] [rbp-49h] BYREF
  int v69; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v70; // [rsp+50h] [rbp-39h]
  int v71; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 *v72; // [rsp+68h] [rbp-21h]
  unsigned __int64 v73; // [rsp+70h] [rbp-19h]
  unsigned __int64 v74; // [rsp+78h] [rbp-11h]
  int v75; // [rsp+80h] [rbp-9h]
  int v76; // [rsp+84h] [rbp-5h]
  int v77; // [rsp+90h] [rbp+7h]
  unsigned __int64 v78; // [rsp+98h] [rbp+Fh]
  __int64 v79; // [rsp+A0h] [rbp+17h]
  __int64 v80; // [rsp+A8h] [rbp+1Fh]
  int v81; // [rsp+F0h] [rbp+67h]

  v4 = a1[7];
  v5 = 0LL;
  v6 = a3;
  v71 = 0;
  v7 = a2;
  v80 = 0LL;
  v9 = 0;
  if ( (*(_BYTE *)(v4 + 184) & 7) == 0 )
  {
    v9 = 64;
    v71 = 64;
  }
  v10 = a1[2];
  v11 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v10 & 1) == 0 )
  {
    v11 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
    goto LABEL_5;
  }
  if ( *v11 == 2 )
  {
    v9 |= 1u;
LABEL_84:
    v71 = v9;
    goto LABEL_6;
  }
  if ( *v11 != 1 )
  {
LABEL_5:
    if ( (v10 & 1) == 0 || *v11 != 5 )
      goto LABEL_6;
    v9 |= 8u;
    goto LABEL_84;
  }
  v9 |= 2u;
  v71 = v9;
LABEL_6:
  v12 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) != 0 && *(_BYTE *)v12 == 4 || (v9 & 0xB) != 0 )
  {
    if ( (v10 & 1) != 0 && *(_BYTE *)v12 == 4 )
      v80 = *(_QWORD *)(v12 + 40);
    if ( (v9 & 2) != 0 && (*(_DWORD *)(v12 + 80) & 0x4000) != 0 )
    {
      v9 |= 4u;
      v71 = v9;
    }
    if ( (v9 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) > 0x1000uLL )
    {
      v9 |= 0x10u;
      v71 = v9;
    }
  }
  else
  {
    v12 = 0LL;
  }
  v78 = v12;
  v72 = a1;
  if ( (v9 & 6) != 2 )
  {
    if ( (v9 & 8) != 0 && (*(_DWORD *)(v12 + 48) & 8) != 0 )
    {
      if ( a3 )
      {
        LOBYTE(a2) = 17;
        MiUnlockProtoPoolPage(a3, a2);
      }
      return 3221225495LL;
    }
    v13 = 0;
    v14 = *a1;
    Process = KeGetCurrentThread()->ApcState.Process;
    v67 = 0LL;
    if ( (v10 & 1) != 0 )
    {
      v16 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v16 == 4 )
        v13 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v16 + 40) + 588LL)] + 192)
                                  + 146LL);
    }
    else
    {
      v16 = 0LL;
    }
    if ( (*(_BYTE *)(v4 + 184) & 7) == 0 )
    {
      v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
      if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( !v16 && !*(_QWORD *)(v17 + 360) && !*(_QWORD *)(v17 + 368) && *(_BYTE *)(v17 + 320) != 1 )
          goto LABEL_19;
        Address = MiLocateAddress(v14, v17, 0xFFFFF68000000000uLL, a3);
        if ( !Address || (v57 = *(_DWORD *)(Address + 48), v67 = Address, (v13 = (v57 >> 8) & 0x3F) != 0) )
        {
          v6 = a3;
        }
        else
        {
          v6 = a3;
          if ( (v57 & 0x4000) == 0 )
            v13 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F;
        }
      }
      if ( v16 && !v13 && KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v13 = CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
      }
    }
LABEL_19:
    v77 = v13;
    v73 = v14;
    v72 = a1;
    if ( !v67 && v7 <= 0xFFFFF6BFFFFFFF78uLL && v7 >= 0xFFFFF68000000000uLL )
    {
      v18 = *(_QWORD *)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
      if ( *(_DWORD *)(v18 + 1144) )
      {
        if ( *(_KPROCESS **)(v18 + 1264) == Process )
        {
          v59 = MiLocateAddress(v14, v18, 0xFFFFF68000000000uLL, v6);
          v6 = a3;
          v67 = v59;
        }
      }
    }
    v19 = *(_QWORD *)v7;
    v79 = v67;
    v20 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
    {
      v20 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(v20 + 640) != 1 && (v19 & 1) != 0 && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v20 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v60 = *(_QWORD *)(v20 + 1544);
        if ( v60 )
        {
          v61 = *(_QWORD *)(v60 + 8 * ((v7 >> 3) & 0x1FF));
          v62 = v19 | 0x20;
          v20 = (unsigned __int8)v61;
          LOBYTE(v20) = v61 & 0x20;
          if ( (v61 & 0x20) == 0 )
            v62 = v19;
          v19 = v62;
          if ( (v61 & 0x42) != 0 )
            v19 = v62 | 0x42;
        }
      }
    }
    if ( !v6 )
    {
      v21 = a1[2];
      v22 = (v19 >> 5) & 0x1F;
      if ( (v21 & 1) != 0 && *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (v19 & 0x400) != 0 )
        LODWORD(v22) = 4;
      v75 = v22;
      v76 = v22;
      v74 = 0LL;
      return MiResolvePrivateZeroFault((__int64)&v71);
    }
    v24 = v71;
    v68 = 1LL;
    v25 = 0;
    v78 = v12;
    v26 = 24;
    v66 = 24;
    v27 = 0LL;
    v74 = v7;
    if ( (v71 & 0x15) != 0 && (v71 & 0x40) != 0 )
    {
      v58 = MiCheckVirtualAddress(v14, &v66, &v67);
      v6 = a3;
      v27 = v58;
      v26 = v66;
      v75 = v66;
      v76 = v66;
    }
    else
    {
      v28 = v67;
      if ( v67 )
      {
        v20 = *(unsigned int *)(v67 + 48);
        if ( (v20 & 0x4000) == 0 && (v20 & 0x20000) != 0 )
        {
          v25 = 1;
          v63 = MiCheckUserVirtualAddress(v14, &v66);
          v6 = a3;
          v27 = v63;
          v26 = v66;
        }
      }
      v75 = v26;
      v76 = v26;
      if ( v25 != 1 )
        goto LABEL_34;
    }
    if ( (v24 & 4) != 0 )
    {
      v20 = v26 >> 3;
      if ( (_DWORD)v20 != 1 && ((_DWORD)v20 != 3 || (v26 & 7) == 0) )
      {
        LOBYTE(v20) = 17;
        MiUnlockProtoPoolPage(v6, v20);
        return 0LL;
      }
    }
    if ( v27 && v67 && v26 != 24 && (v26 & 0xFFFFFFF8) != 0x10 )
      v68 = MiExpandSharedZeroCluster(&v71, v20, v28, v6);
LABEL_34:
    v29 = MiCreateSharedZeroPages(&v71, &v68);
    v30 = a3;
    v31 = v29;
    v69 = 0;
    v81 = v29;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v69);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
      v31 = v81;
      v30 = a3;
    }
    *(_BYTE *)(v30 + 34) &= ~0x20u;
    v32 = *(_WORD *)(v30 + 32);
    if ( !v32 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, (v30 + 0x58000000000LL) / 48, *(_BYTE *)(v30 + 34) & 7, 0LL);
    v33 = v32 == 1;
    v34 = v32 - 1;
    *(_WORD *)(v30 + 32) = v34;
    if ( v33 && (unsigned int)MiIsPfnFileOnly(v30) )
      goto LABEL_148;
    v35 = *(_QWORD *)(v30 + 40);
    if ( (*(_QWORD *)(v30 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v35 & 0x10000000000000LL) != 0 )
        goto LABEL_56;
    }
    else if ( (v35 & 0x10000000000000LL) != 0 )
    {
      goto LABEL_56;
    }
    v36 = *(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v34 )
    {
      if ( v34 == 1 )
      {
        if ( !v36 && (*(_BYTE *)(v30 + 34) & 8) == 0 )
          goto LABEL_56;
      }
      else if ( v34 != 2 || !v36 || (*(_BYTE *)(v30 + 34) & 8) == 0 )
      {
        goto LABEL_56;
      }
      v37 = 0;
    }
    else
    {
      v37 = 1;
    }
    v38 = *(_QWORD *)(v30 + 8) | 0x8000000000000000uLL;
    if ( v38 > 0xFFFFF6BFFFFFFF78uLL || v38 < 0xFFFFF68000000000uLL )
    {
      v39 = *(_BYTE *)(v30 + 35);
      if ( (v39 & 0x20) != 0 )
      {
        *(_BYTE *)(v30 + 35) = v39 & 0xDF;
LABEL_55:
        if ( v37 )
        {
LABEL_148:
          MiPfnReferenceCountIsZero(v30, (v30 + 0x58000000000LL) / 48);
          v30 = a3;
        }
LABEL_56:
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v31 < 0 || (v71 & 4) != 0 )
          return (unsigned int)v31;
        v47 = v73;
        v48 = (unsigned int)((v14 - v73) >> 12);
        v49 = 0LL;
        v50 = v7 - 8 * v48;
        v51 = *a1;
        v70 = *a1;
        if ( (v71 & 8) != 0 )
          v49 = v12;
        v52 = v81;
        if ( v68 )
        {
          do
          {
            v53 = *(_QWORD *)v50;
            if ( v50 >= 0xFFFFF6FB7DBED000uLL
              && v50 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x1800000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v53 & 1) != 0
              && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
            {
              v64 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v64 )
              {
                v65 = *(_QWORD *)(v64 + 8 * ((v50 >> 3) & 0x1FF));
                LODWORD(v64) = v53 | 0x20;
                if ( (v65 & 0x20) == 0 )
                  v64 = *(_QWORD *)v50;
                LODWORD(v53) = v64;
                if ( (v65 & 0x42) != 0 )
                  LODWORD(v53) = v64 | 0x42;
              }
            }
            *a1 = v47;
            v54 = MiCompleteProtoPteFault((_DWORD)a1, v53, a4, 1, v49);
            v47 += 4096LL;
            if ( !v5 && v54 < 0 )
              v52 = v54;
            __incgsdword(0x2E9Cu);
            ++v5;
            v50 += 8LL;
          }
          while ( v5 < v68 );
          v51 = v70;
        }
        *a1 = v51;
        return v52;
      }
    }
    v40 = 0;
    if ( (v35 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v30 + 16) & 0x400LL) != 0 )
    {
      v40 = 1;
    }
    else if ( v38 <= 0xFFFFF6BFFFFFFF78uLL && v38 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v30 + 35) & 0x20) != 0 )
    {
      v40 = 1;
    }
    else if ( v37 == 1 && (*(_QWORD *)(v30 + 24) & 0x4000000000000000LL) != 0 )
    {
      v40 = 1;
    }
    v41 = (v35 >> 40) & 0x3FF;
    v42 = *(_QWORD *)(qword_1403CBD88 + 8 * v41);
    if ( v40 == 1 )
    {
      MiReturnCommit(*(_QWORD *)(qword_1403CBD88 + 8 * v41), 1uLL);
      v30 = a3;
    }
    if ( (ULONG_PTR *)v42 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v44 = 1LL;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v46 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v33 = (_DWORD)CachedResidentAvailable == v46;
            LODWORD(CachedResidentAvailable) = v46;
            if ( v33 )
              goto LABEL_54;
          }
          while ( v46 != -1 && (unsigned __int64)(v46 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v44 = (int)CachedResidentAvailable - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_1403CFB00, v44);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 7104), 1uLL);
    }
LABEL_54:
    v31 = v81;
    goto LABEL_55;
  }
  if ( a3 )
  {
    LOBYTE(a2) = 17;
    MiUnlockProtoPoolPage(a3, a2);
  }
  return 0LL;
}
