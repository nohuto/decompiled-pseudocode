/*
 * XREFs of MiInitializeMdlPages @ 0x1400CA600
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400CB9E8 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiInitializeMdlPfn @ 0x1400CAAD8 (MiInitializeMdlPfn.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400CAB80 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroInParallel @ 0x1400CFA48 (MiZeroInParallel.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiChangePageAttributeBatch @ 0x1400ED4B0 (MiChangePageAttributeBatch.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MiLogMdlRangeEvent @ 0x140217578 (MiLogMdlRangeEvent.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiInitializeMdlPages(char *P, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  unsigned int v6; // r12d
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r9
  char *v11; // r15
  _BYTE *v12; // rbp
  _BYTE *PoolWithTag; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // r10
  __int64 DemandZeroPte; // rbx
  __int64 v18; // r13
  _KPROCESS *Process; // r11
  __int64 v20; // rsi
  BOOL v21; // eax
  __int64 v22; // r8
  _DWORD *v23; // r10
  int v24; // edi
  unsigned int v25; // r8d
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  bool v30; // zf
  char *v32; // rax
  char *v33; // rbx
  __int64 v34; // [rsp+20h] [rbp-98h]
  __int64 v35; // [rsp+28h] [rbp-90h]
  __int64 v36; // [rsp+30h] [rbp-88h]
  __int64 v37; // [rsp+38h] [rbp-80h]
  char *v38; // [rsp+40h] [rbp-78h]
  unsigned __int64 v39; // [rsp+48h] [rbp-70h]
  _KPROCESS *v40; // [rsp+50h] [rbp-68h]
  _BYTE v41[96]; // [rsp+58h] [rbp-60h] BYREF

  v5 = a2;
  v6 = dword_140388544;
  v7 = 0LL;
  v8 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v9 = a4;
  v10 = a3;
  v11 = P;
  v12 = 0LL;
  if ( a5 == 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)dword_140388544, 0x6C646D4Du);
    v7 = 0LL;
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = 1;
      v12 = v41;
    }
    if ( v6 )
    {
      v14 = v12 + 8;
      v15 = v6;
      do
      {
        *v14 = 0LL;
        v14[1] = 0xFFFFFFFFFLL;
        v14 += 3;
        --v15;
      }
      while ( v15 );
      v9 = a4;
      v7 = 0LL;
    }
    v10 = a3;
  }
  v35 = 0LL;
  v38 = v11 + 48;
  v16 = v11 + 48;
  if ( (v5 & 0x80000200) != 0 )
    DemandZeroPte = 0LL;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v18 = v7;
  v36 = v7;
  v34 = v7;
  v37 = v7;
  Process = KeGetCurrentThread()->ApcState.Process;
  v40 = Process;
  if ( v8 )
  {
    v39 = v8;
    while ( 1 )
    {
      v20 = 48LL * *v16 - 0x58000000000LL;
      *(_QWORD *)(v20 + 8) = 0xFFFFF68000000000uLL;
      if ( a5 == 1 && (v21 = MiPfnZeroingNeeded(v20, v10), LODWORD(v7) = 0, v21) )
      {
        v24 = 1;
        v35 = v22 + 1;
        if ( v6 == 1 )
          v25 = 0;
        else
          v25 = dword_140388540 & *v23 | (((*(_QWORD *)(v20 + 40) >> 36) & 3) << byte_140388502) | (*(_QWORD *)(v20 + 40) >> 58 << byte_140388501);
        v26 = 3LL * v25;
        *(_QWORD *)v20 = *(_QWORD *)&v12[24 * v25 + 16];
        ++*(_QWORD *)&v12[8 * v26 + 8];
        *(_QWORD *)&v12[8 * v26 + 16] = v20;
      }
      else
      {
        v24 = v7;
        *(_QWORD *)v20 ^= (*(_QWORD *)v20 ^ ((unsigned __int64)Process >> 3)) & 0xFFFFFFFFFFELL;
      }
      v27 = *(_QWORD *)(v20 + 40) & 0xFDFFFFFFFFFFFFFDuLL;
      *(_QWORD *)(v20 + 16) = DemandZeroPte;
      *(_QWORD *)(v20 + 40) = v27 | 0xFFFFFFFFDLL;
      if ( v8 == a4 || (a2 & 4) == 0 )
      {
        if ( (_DWORD)v10 == 3 && v24 == 1 )
        {
          if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v20) == 1 )
          {
            *(_QWORD *)(v20 + 16) = v18;
            v18 = v20;
            goto LABEL_35;
          }
          v28 = v36;
          v36 = v20;
        }
        else
        {
          if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v20) != 1 )
            goto LABEL_35;
          if ( !v24 || dword_140388570[4 * ((unsigned __int64)*(unsigned __int8 *)(v20 + 34) >> 6) + (int)a3] == a3 )
          {
            v28 = v34;
            v34 = v20;
          }
          else
          {
            v28 = v37;
            v37 = v20;
          }
        }
        *(_QWORD *)(v20 + 16) = v28;
      }
LABEL_35:
      v29 = (unsigned __int8)MiLockPageInline(v20);
      MiInitializeMdlPfn(v20, a2);
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v29);
      v7 = 0LL;
      v16 = v38 + 8;
      v30 = v39-- == 1;
      Process = v40;
      v38 += 8;
      if ( v30 )
      {
        v11 = P;
        v5 = a2;
        v9 = a4;
        break;
      }
      LODWORD(v10) = a3;
    }
  }
  if ( v8 != v9 && (v5 & 4) != 0 )
  {
    if ( !v8 )
    {
LABEL_42:
      if ( v12 )
      {
        if ( v12 != v41 )
          ExFreePoolWithTag(v12, 0);
      }
      ExFreePoolWithTag(v11, 0);
      return 0LL;
    }
    MiFreePagesFromMdl((ULONG_PTR)v11);
    v7 = 0LL;
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_42;
  if ( v34 )
  {
    MiChangePageAttributeBatch(v34, a3, DemandZeroPte);
    v7 = 0LL;
  }
  if ( v18 )
  {
    MiChangePageAttributeBatch(v18, 1LL, -1LL);
    v7 = 0LL;
  }
  if ( v35 == v7 )
  {
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else
  {
    MiZeroInParallel(v12, v6, v5, v10);
    if ( v12 != v41 )
      ExFreePoolWithTag(v12, 0);
    if ( v18 )
      MiChangePageAttributeBatch(v18, 3LL, DemandZeroPte);
    if ( v36 )
      MiChangePageAttributeBatch(v36, 3LL, DemandZeroPte);
    if ( v37 )
      MiChangePageAttributeBatch(v37, a3, DemandZeroPte);
  }
  if ( v9 - v8 > 0x800 )
  {
    v32 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v8 + 48, 0x69646D4Du);
    v33 = v32;
    if ( v32 )
    {
      *(_QWORD *)v32 = 0LL;
      *((_DWORD *)v32 + 10) = (_DWORD)v8 << 12;
      *((_WORD *)v32 + 5) = 0;
      *((_QWORD *)v32 + 4) = 0LL;
      *((_DWORD *)v32 + 11) = 0;
      *((_WORD *)v32 + 4) = 8 * ((((v8 << 12) + 4095) >> 12) + 6);
      memmove(v32 + 48, v11 + 48, 8 * v8);
      ExFreePoolWithTag(v11, 0);
      v11 = v33;
    }
  }
  *((_WORD *)v11 + 5) |= 2u;
  *((_QWORD *)v11 + 2) = 0LL;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogMdlRangeEvent(v11 + 48, 632LL, v8);
  return v11;
}
