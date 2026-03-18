/*
 * XREFs of MiInitializeMdlPages @ 0x14007A868
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiInitializeMdlPfn @ 0x14007AD08 (MiInitializeMdlPfn.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x14007ADB0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     MiZeroInParallel @ 0x14007CE14 (MiZeroInParallel.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MiChangePageAttributeBatch @ 0x14010346C (MiChangePageAttributeBatch.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MiLogMdlRangeEvent @ 0x140210194 (MiLogMdlRangeEvent.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char *__fastcall MiInitializeMdlPages(char *P, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r11
  unsigned int v6; // r12d
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // r9
  unsigned int v10; // esi
  char *v11; // r15
  _BYTE *v12; // rbp
  _BYTE *PoolWithTag; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // r10
  __int64 DemandZeroPte; // rbx
  __int64 v18; // r13
  _KPROCESS *Process; // rcx
  __int64 v20; // rsi
  int v21; // edi
  __int64 v22; // r8
  _DWORD *v23; // r10
  unsigned int v24; // r11d
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

  v5 = 0LL;
  v6 = dword_14036C1FC;
  v7 = a4;
  v8 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v9 = a3;
  v10 = a2;
  v11 = P;
  v12 = 0LL;
  if ( a5 == 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)dword_14036C1FC, 0x6C646D4Du);
    v5 = 0LL;
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
    }
    v9 = a3;
  }
  v35 = 0LL;
  v38 = v11 + 48;
  v16 = v11 + 48;
  if ( (v10 & 0x80000200) != 0 )
    DemandZeroPte = 0LL;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v18 = v5;
  v36 = v5;
  v34 = v5;
  v37 = v5;
  Process = KeGetCurrentThread()->ApcState.Process;
  v40 = Process;
  if ( v8 )
  {
    v39 = v8;
    while ( 1 )
    {
      v20 = 48LL * *v16 - 0x58000000000LL;
      v21 = v5;
      *(_QWORD *)v20 = Process;
      if ( a5 == 1 && (unsigned int)MiPfnZeroingNeeded(v20, (unsigned int)v9) )
      {
        v21 = 1;
        v35 = v22 + 1;
        if ( v6 == 1 )
          v25 = v24;
        else
          v25 = dword_14036C1F8 & *v23 | (((*(_QWORD *)(v20 + 40) >> 36) & 3) << byte_14036C1BA) | (*(_QWORD *)(v20 + 40) >> 58 << byte_14036C1B9);
        v26 = 3LL * v25;
        *(_QWORD *)v20 = *(_QWORD *)&v12[24 * v25 + 16];
        ++*(_QWORD *)&v12[8 * v26 + 8];
        *(_QWORD *)&v12[8 * v26 + 16] = v20;
      }
      v27 = *(_QWORD *)(v20 + 40) & 0xFDFFFFFFFFFFFFFDuLL;
      *(_QWORD *)(v20 + 16) = DemandZeroPte;
      *(_QWORD *)(v20 + 40) = v27 | 0xFFFFFFFFDLL;
      if ( v8 == a4 || (a2 & 4) == 0 )
      {
        if ( (_DWORD)v9 == 3 && v21 == 1 )
        {
          if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v20) == 1 )
          {
            *(_QWORD *)(v20 + 16) = v18;
            v18 = v20;
            goto LABEL_33;
          }
          v28 = v36;
          v36 = v20;
        }
        else
        {
          if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v20) != 1 )
            goto LABEL_33;
          if ( !v21
            || *((_DWORD *)&unk_14036C220 + 4 * ((unsigned __int64)*(unsigned __int8 *)(v20 + 34) >> 6) + (int)a3) == a3 )
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
LABEL_33:
      v29 = (unsigned __int8)MiLockPageInline(v20);
      MiInitializeMdlPfn(v20, a2);
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v29);
      v5 = 0LL;
      v16 = v38 + 8;
      v30 = v39-- == 1;
      Process = v40;
      v38 += 8;
      if ( v30 )
      {
        v11 = P;
        v7 = a4;
        v10 = a2;
        break;
      }
      LODWORD(v9) = a3;
    }
  }
  if ( v8 != v7 && (v10 & 4) != 0 )
  {
    if ( !v8 )
    {
LABEL_40:
      if ( v12 )
      {
        if ( v12 != v41 )
          ExFreePoolWithTag(v12, 0);
      }
      ExFreePoolWithTag(v11, 0);
      return 0LL;
    }
    MiFreePagesFromMdl((ULONG_PTR)v11);
    v5 = 0LL;
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_40;
  if ( v34 )
  {
    MiChangePageAttributeBatch(v34, a3, DemandZeroPte);
    v5 = 0LL;
  }
  if ( v18 )
  {
    MiChangePageAttributeBatch(v18, 1LL, -1LL);
    v5 = 0LL;
  }
  if ( v35 != v5 )
  {
    MiZeroInParallel(v12, v6, v10, v9);
    if ( v12 != v41 )
      ExFreePoolWithTag(v12, 0);
    if ( v18 )
      MiChangePageAttributeBatch(v18, 3LL, DemandZeroPte);
    if ( v36 )
      MiChangePageAttributeBatch(v36, 3LL, DemandZeroPte);
    if ( v37 )
      MiChangePageAttributeBatch(v37, a3, DemandZeroPte);
  }
  if ( v7 - v8 > 0x800 )
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
