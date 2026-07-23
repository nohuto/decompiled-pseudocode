/*
 * XREFs of MmDeleteKernelStack @ 0x140130270
 * Callers:
 *     PspDeleteKernelStack @ 0x1400B2D90 (PspDeleteKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14012FA80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeInitThread @ 0x140470370 (KeInitThread.c)
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     KeUserModeCallback @ 0x1405B80E0 (KeUserModeCallback.c)
 *     KeFreeCalloutStack @ 0x1405F3CF0 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x1406047B0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteKernelStack @ 0x140025C60 (MiDeleteKernelStack.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1402614BC (MiLogKernelStackEvent.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(unsigned __int64 a1, char a2)
{
  char v2; // bp
  __int64 v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v19; // rcx
  signed __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // r11
  _SLIST_HEADER *v23; // r9
  __int64 v24; // r8
  __int64 v25; // rdi
  int v26; // r15d
  int v27; // r10d
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rsi
  __int64 v31; // rbx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  unsigned __int64 v58; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v59; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v60; // [rsp+30h] [rbp-88h] BYREF
  __int64 v61; // [rsp+38h] [rbp-80h] BYREF
  __int64 v62; // [rsp+40h] [rbp-78h]
  __int64 v63; // [rsp+48h] [rbp-70h]
  unsigned __int64 v64; // [rsp+50h] [rbp-68h]
  __int64 v65; // [rsp+58h] [rbp-60h]
  _SLIST_ENTRY *v66; // [rsp+60h] [rbp-58h]
  _SLIST_HEADER *v67; // [rsp+68h] [rbp-50h]
  int v68; // [rsp+C0h] [rbp+8h]
  int v70; // [rsp+D0h] [rbp+18h] BYREF
  int v71; // [rsp+D8h] [rbp+20h] BYREF

  v2 = a2;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 2) != 0 )
  {
    v36 = 18LL;
    if ( (v2 & 1) == 0 )
      v36 = (unsigned __int8)byte_1403CC2BC;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v36 << 12), v36, 0LL);
  }
  v4 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v5 = v4 - 0x98000000008LL;
  v64 = v4 - 0x98000000008LL;
  v6 = *(_QWORD *)(v4 - 0x98000000008LL);
  v7 = v6;
  if ( (unsigned __int64)(v4 - 0x98000000008LL) >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v37 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v37 )
    {
      v7 = v6 | 0x20;
      v38 = *(_QWORD *)(v37 + 8 * ((v5 >> 3) & 0x1FF));
      if ( (v38 & 0x20) == 0 )
        v7 = *(_QWORD *)(v4 - 0x98000000008LL);
      if ( (v38 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v59 = v7;
  if ( (unsigned __int64)&v59 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v59 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v39 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 8 * (((unsigned __int64)&v59 >> 3) & 0x1FF));
      v41 = v7 | 0x20;
      if ( (v40 & 0x20) == 0 )
        v41 = v7;
      v7 = v41;
      if ( (v40 & 0x42) != 0 )
        v7 = v41 | 0x42;
    }
  }
  if ( *(ULONG_PTR **)(qword_1403CBD88
                     + 8 * ((*(_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL)) != &MiSystemPartition
    || (v2 & 1) != 0 )
  {
    return MiDeleteKernelStack(v5, v2);
  }
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v42 )
    {
      v43 = *(_QWORD *)(v42 + 8 * ((v5 >> 3) & 0x1FF));
      v44 = v6 | 0x20;
      if ( (v43 & 0x20) == 0 )
        v44 = v6;
      v6 = v44;
      if ( (v43 & 0x42) != 0 )
        v6 = v44 | 0x42;
    }
  }
  v60 = v6;
  if ( (unsigned __int64)&v60 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v60 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v45 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v45 )
    {
      v46 = *(_QWORD *)(v45 + 8 * (((unsigned __int64)&v60 >> 3) & 0x1FF));
      v47 = v6 | 0x20;
      if ( (v46 & 0x20) == 0 )
        v47 = v6;
      v6 = v47;
      if ( (v46 & 0x42) != 0 )
        v6 = v47 | 0x42;
    }
  }
  v8 = 0;
  v9 = *(_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 58;
  v10 = 2LL;
  if ( (v2 & 4) == 0 )
    goto LABEL_24;
  while ( 1 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(v5);
    v58 = v11;
    if ( (unsigned __int64)&v58 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v58 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v48 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v48 )
      {
        v49 = *(_QWORD *)(v48 + 8 * (((unsigned __int64)&v58 >> 3) & 0x1FF));
        if ( (v49 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v49 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
      else
      {
        v11 = v58;
      }
    }
    v14 = 48 * (v13 & (v11 >> 12)) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v12);
    v70 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v70);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    v16 = MI_READ_PTE_LOCK_FREE(v5);
    if ( v58 == v16 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  v17 = (*(_QWORD *)v14 & 0xFFFFFFFFFFELL) != 0 ? 8 * (*(_QWORD *)v14 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL) : 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  v2 = a2;
  if ( v17 != -32LL )
    goto LABEL_24;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->ParentNode->Affinity.Reserved[0] != v9
    || CurrentPrcb->CachedStack
    || (v19 = (__int64)(v5 << 25) >> 16,
        *(_QWORD *)(v19 + 4064) = v19 ^ qword_1403CC500,
        (result = _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentPrcb->CachedStack, v19 + 4080, 0LL)) != 0) )
  {
    v8 = 1;
LABEL_24:
    v21 = 400LL * v9;
    v22 = v8;
    v65 = v21;
    while ( 1 )
    {
      v62 = v22;
      v23 = (_SLIST_HEADER *)((char *)&qword_1403CB6A8[2 * v22 + 7] + v21);
      v67 = v23;
      if ( LOWORD(v23->Alignment) < SLODWORD(v23[1].Alignment) )
      {
        v24 = (__int64)(v5 << 25) >> 16;
        v66 = (_SLIST_ENTRY *)v24;
        *(_QWORD *)(v24 + 0xFE0) = v24 ^ qword_1403CC500;
        if ( v22 == 1 )
          return (signed __int64)RtlpInterlockedPushEntrySList(v23, (PSLIST_ENTRY)(v24 + 4080));
        v25 = KeGetCurrentIrql();
        v63 = v25;
        __writecr8(v10);
        v26 = -1;
        v27 = 1;
        v28 = v5 - 8LL * (unsigned __int8)byte_1403CC2BC;
        v68 = 1;
        v29 = v28 + 8LL * ((unsigned int)(unsigned __int8)byte_1403CC2BC + 1);
        v30 = v28 + 8;
        if ( v28 + 8 >= v29 )
          goto LABEL_45;
        do
        {
          v31 = *(_QWORD *)v30;
          if ( v30 >= 0xFFFFF6FB7DBED000uLL
            && v30 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x1800000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v31 & 1) != 0
            && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
          {
            v50 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v50 )
            {
              v51 = *(_QWORD *)(v50 + 8 * ((v30 >> 3) & 0x1FF));
              v52 = v31 | 0x20;
              if ( (v51 & 0x20) == 0 )
                v52 = *(_QWORD *)v30;
              v31 = v52;
              if ( (v51 & 0x42) != 0 )
                v31 = v52 | 0x42;
            }
          }
          v61 = v31;
          if ( (v31 & 1) != 0 )
          {
            v32 = v31;
            if ( (unsigned __int64)&v61 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v61 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x1800000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
            {
              v53 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              v32 = v31;
              if ( v53 )
              {
                v32 = v31 | 0x20;
                v54 = *(_QWORD *)(v53 + 8 * (((unsigned __int64)&v61 >> 3) & 0x1FF));
                if ( (v54 & 0x20) == 0 )
                  v32 = v31;
                if ( (v54 & 0x42) != 0 )
                  v32 |= 0x42uLL;
              }
            }
            v33 = 48 * ((v32 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v71 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v71);
                while ( *(__int64 *)(v33 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) );
              v27 = v68;
            }
            v34 = *(_QWORD *)v30;
            if ( v30 >= 0xFFFFF6FB7DBED000uLL
              && v30 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x1800000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v34 & 1) != 0
              && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
            {
              v55 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v55 )
              {
                v56 = *(_QWORD *)(v55 + 8 * ((v30 >> 3) & 0x1FF));
                v57 = v34 | 0x20;
                if ( (v56 & 0x20) == 0 )
                  v57 = *(_QWORD *)v30;
                v34 = v57;
                if ( (v56 & 0x42) != 0 )
                  v34 = v57 | 0x42;
              }
            }
            if ( v31 == v34 )
            {
              v35 = *(_QWORD *)(v33 + 40) >> 58;
              if ( v26 == -1 )
              {
                v26 = (unsigned __int16)v35;
              }
              else if ( v26 != (unsigned __int16)v35 )
              {
                v27 = 0;
                v68 = 0;
              }
              *(_QWORD *)v33 &= 0xFFFFF00000000001uLL;
              v30 += 8LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v30 += 8LL;
          }
        }
        while ( v30 < v29 );
        v5 = v64;
        v2 = a2;
        if ( v27 == 1 )
        {
          v24 = (__int64)v66;
          v23 = v67;
          LOBYTE(v25) = v63;
LABEL_45:
          RtlpInterlockedPushEntrySList(v23, (PSLIST_ENTRY)(v24 + 4080));
          result = (unsigned __int8)v25;
          __writecr8((unsigned __int8)v25);
          return result;
        }
        __writecr8((unsigned __int8)v63);
        v22 = v62;
        v10 = 2LL;
      }
      if ( v22 != 1 )
        return MiDeleteKernelStack(v5, v2);
      v21 = v65;
      v22 = 0LL;
    }
  }
  return result;
}
