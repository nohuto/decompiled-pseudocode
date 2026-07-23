/*
 * XREFs of IopConnectInterrupt @ 0x1404EBE88
 * Callers:
 *     IopConnectMessageBasedInterrupt @ 0x1404EC474 (IopConnectMessageBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x14059A470 (IoConnectInterruptEx.c)
 *     IopConnectInterruptFullySpecified @ 0x1405E9124 (IopConnectInterruptFullySpecified.c)
 *     IopConnectLineBasedInterrupt @ 0x1405EB7F4 (IopConnectLineBasedInterrupt.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14008CE90 (KeGetProcessorIndexFromNumber.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KeInitializeInterruptEx @ 0x1400B2BD0 (KeInitializeInterruptEx.c)
 *     KeAllocateInterrupt @ 0x1400B2D10 (KeAllocateInterrupt.c)
 *     PnpTraceInterruptUsage @ 0x1400B2DC0 (PnpTraceInterruptUsage.c)
 *     KeConnectInterrupt @ 0x1400B2EEC (KeConnectInterrupt.c)
 *     KeVerifyGroupAffinity @ 0x1400B37AC (KeVerifyGroupAffinity.c)
 *     KeFreeInterrupt @ 0x140129318 (KeFreeInterrupt.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x1404EC298 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x1404EC388 (IopInitializeActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1405E1B70 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1406C1020 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1406C1178 (IopDestroyPassiveInterruptBlock.c)
 */

__int64 __fastcall IopConnectInterrupt(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10)
{
  __m128i v11; // xmm0
  int v12; // r13d
  unsigned __int64 v13; // r15
  unsigned __int64 v15; // rdi
  char *PoolWithTag; // rax
  char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __m128i v20; // xmm2
  unsigned __int8 v21; // bl
  __int64 v22; // rax
  char v23; // cl
  int v24; // ebx
  _OWORD *v25; // rax
  _OWORD *v26; // rcx
  __int64 v27; // rdx
  __int128 v28; // xmm1
  PSLIST_ENTRY Interrupt; // rax
  _DWORD *v31; // r13
  PSLIST_ENTRY *v32; // r14
  int v33; // [rsp+70h] [rbp-98h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp-80h] BYREF
  int v35; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v36; // [rsp+90h] [rbp-78h]
  ULONG ProcessorIndexFromNumber; // [rsp+94h] [rbp-74h]
  __m128i v38; // [rsp+98h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  _BYTE v41[24]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-38h]
  bool v47; // [rsp+188h] [rbp+80h]
  char v48; // [rsp+188h] [rbp+80h]
  char v49; // [rsp+198h] [rbp+90h]
  char v50; // [rsp+1A0h] [rbp+98h]

  *a1 = 0LL;
  v49 = 0;
  IopInitializeActiveConnectBlock(a10, v41);
  v11 = *(__m128i *)(a10 + 32);
  v12 = *(_DWORD *)(a10 + 24);
  v36 = *(_DWORD *)(a10 + 12);
  v38 = v11;
  v35 = v12;
  v13 = qword_140401408[(unsigned __int16)_mm_extract_epi16(v11, 4)] & v11.m128i_i64[0];
  v50 = *(_BYTE *)(a10 + 16);
  v38.m128i_i64[0] = v13;
  if ( !*(_DWORD *)(a10 + 8)
    && !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_1403534C0[0])(0LL, *(unsigned int *)(a10 + 64))
    && (unsigned int)(*(_DWORD *)(a10 + 20) - 3) <= 1 )
  {
    v49 = 1;
    v12 = 0;
    v35 = 0;
  }
  v47 = a7 == 0;
  if ( KeVerifyGroupAffinity((__int64)&v38, 0)
    && (v15 = (0x101010101010101LL
             * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
        (_BYTE)v15) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * (char)v15 + 464), 0x6E696F49u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(8 * (char)v15 + 464));
      KeInitializeDpc((PRKDPC)(v17 + 400), 0LL, 0LL);
      v19 = (__int64)v17;
      v20 = v38;
      *((_OWORD *)v17 + 1) = *(_OWORD *)a10;
      *((_OWORD *)v17 + 2) = *(_OWORD *)(a10 + 16);
      *((_OWORD *)v17 + 3) = *(_OWORD *)(a10 + 32);
      *((_OWORD *)v17 + 4) = *(_OWORD *)(a10 + 48);
      *((_OWORD *)v17 + 5) = *(_OWORD *)(a10 + 64);
      *((_OWORD *)v17 + 6) = *(_OWORD *)(a10 + 80);
      *((_DWORD *)v17 + 10) = v12;
      ProcNumber.Reserved = 0;
      *((__m128i *)v17 + 3) = v20;
      if ( a6 )
        v19 = a6;
      *((_QWORD *)v17 + 1) = v13;
      v17[368] = v47;
      v21 = 0;
      v22 = (__int64)(v17 + 376);
      v40 = v19;
      if ( a7 )
        v22 = 0LL;
      v23 = 0;
      v39 = v22;
      v48 = 0;
      for ( ProcNumber.Group = _mm_extract_epi16(v20, 4); v23 < (char)v15; ++v21 )
      {
        if ( _bittest64((const __int64 *)&v13, v21) )
        {
          ProcNumber.Number = v21;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          Interrupt = KeAllocateInterrupt((_SLIST_HEADER *)KiProcessorBlock[ProcessorIndexFromNumber]);
          v31 = Interrupt;
          if ( !Interrupt )
          {
            v24 = -1073741670;
            goto LABEL_31;
          }
          memset(Interrupt, 0, 0x100uLL);
          KeInitializeInterruptEx(
            v31,
            a2,
            a3,
            a4,
            a5,
            v40,
            v39,
            v36,
            v50,
            a7,
            v35,
            a8,
            ProcessorIndexFromNumber,
            v33,
            v49,
            (__int64)(v17 + 16));
          *(_QWORD *)&v17[8 * v48 + 464] = v31;
          v23 = ++v48;
        }
      }
      if ( !a7 )
      {
        v24 = IopAllocatePassiveInterruptBlock(v17 + 16, &v38);
        if ( v24 < 0 )
          goto LABEL_31;
      }
      if ( v42 )
      {
        LOBYTE(v18) = 1;
        IopAcquireReleaseConnectLockInternal(v41, v18, 0LL);
      }
      v24 = KeConnectInterrupt((__int64)(v17 + 464), v15, (__int64)(v17 + 16));
      if ( v42 )
        IopAcquireReleaseConnectLockInternal(v41, 0LL, 0LL);
      if ( v24 < 0 )
      {
        if ( !a7 )
          IopDestroyPassiveInterruptBlock(v36);
      }
      else
      {
        v25 = (_OWORD *)*((_QWORD *)v17 + 58);
        v26 = v17 + 112;
        v27 = 2LL;
        do
        {
          *v26 = *v25;
          v26[1] = v25[1];
          v26[2] = v25[2];
          v26[3] = v25[3];
          v26[4] = v25[4];
          v26[5] = v25[5];
          v26[6] = v25[6];
          v26 += 8;
          v28 = v25[7];
          v25 += 8;
          *(v26 - 1) = v28;
          --v27;
        }
        while ( v27 );
        v24 = 0;
        *a1 = v17;
        PnpTraceInterruptUsage(1);
      }
      if ( v24 < 0 )
      {
LABEL_31:
        if ( (char)v15 > 0 )
        {
          v32 = (PSLIST_ENTRY *)(v17 + 464);
          do
          {
            if ( *v32 )
              KeFreeInterrupt(*v32);
            ++v32;
            --v15;
          }
          while ( v15 );
        }
        ExFreePoolWithTag(v17, 0x6E696F49u);
      }
    }
    else
    {
      v24 = -1073741670;
    }
  }
  else
  {
    v24 = -1073741811;
  }
  IopDestroyActiveConnectBlock(v41);
  return (unsigned int)v24;
}
