/*
 * XREFs of MmCopyVirtualMemory @ 0x1405084C0
 * Callers:
 *     PsQueryProcessCommandLine @ 0x14012E460 (PsQueryProcessCommandLine.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     NtQueryInformationThread @ 0x1404CB7E0 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x1405082D0 (MiReadWriteVirtualMemory.c)
 *     AlpcpCopyRequestData @ 0x1406DD164 (AlpcpCopyRequestData.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     VslDebugReadWriteSecureProcess @ 0x1406B3974 (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x1406E8634 (MiDbgReadWriteEnclave.c)
 */

__int64 __fastcall MmCopyVirtualMemory(
        _KPROCESS *BugCheckParameter1,
        char *a2,
        _KPROCESS *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        KPROCESSOR_MODE a6,
        unsigned __int64 *a7)
{
  char *v7; // r11
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebx
  int v12; // ebx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r12
  struct _KTHREAD *v15; // r15
  _KPROCESS *Process; // rsi
  unsigned __int64 v17; // r14
  int v18; // ebx
  unsigned __int64 v19; // r12
  struct _KTHREAD *v20; // r14
  _KPROCESS *v21; // rsi
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r12
  int v25; // r15d
  char *v26; // rdi
  SIZE_T v27; // r14
  void *v28; // r10
  $55B18245EBEA7C4FC31D19100062276C *v29; // rdi
  unsigned __int8 v30; // si
  int v31; // eax
  int v32; // eax
  PVOID v33; // rdi
  int v34; // eax
  const void *v35; // rdx
  char *v36; // rdi
  int v37; // eax
  bool v39; // cc
  __int64 v40; // rcx
  unsigned __int64 j; // rdx
  char v42; // r8
  char v43; // r10
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  _QWORD **v47; // rax
  _QWORD *i; // rax
  bool v49; // zf
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rcx
  _QWORD **v52; // rax
  _QWORD *k; // rax
  __int64 v54; // rcx
  unsigned __int64 n; // rdx
  char v56; // r8
  char v57; // r10
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rcx
  _QWORD **v61; // rax
  _QWORD *m; // rax
  unsigned __int64 v63; // r9
  unsigned __int64 v64; // rcx
  _QWORD **v65; // rax
  _QWORD *ii; // rax
  int v67; // [rsp+34h] [rbp-494h]
  size_t Size; // [rsp+58h] [rbp-470h]
  _BYTE *P; // [rsp+60h] [rbp-468h]
  SIZE_T v74; // [rsp+98h] [rbp-430h] BYREF
  unsigned __int64 v75; // [rsp+A0h] [rbp-428h]
  void *Src; // [rsp+A8h] [rbp-420h]
  void *v77; // [rsp+B0h] [rbp-418h]
  unsigned __int64 v78; // [rsp+B8h] [rbp-410h]
  unsigned int v79; // [rsp+C0h] [rbp-408h]
  unsigned int v80; // [rsp+C4h] [rbp-404h]
  unsigned int v81; // [rsp+C8h] [rbp-400h]
  unsigned int v82; // [rsp+CCh] [rbp-3FCh]
  unsigned int v83; // [rsp+D0h] [rbp-3F8h]
  size_t v84; // [rsp+D8h] [rbp-3F0h]
  PMDL p_MemoryDescriptorList; // [rsp+E0h] [rbp-3E8h]
  unsigned __int64 v86; // [rsp+E8h] [rbp-3E0h]
  char *v87; // [rsp+F0h] [rbp-3D8h]
  SIZE_T v88; // [rsp+F8h] [rbp-3D0h]
  _KPROCESS *v89; // [rsp+100h] [rbp-3C8h]
  _KPROCESS *v90; // [rsp+108h] [rbp-3C0h]
  char *v91; // [rsp+110h] [rbp-3B8h]
  __int64 v92; // [rsp+118h] [rbp-3B0h]
  struct _KTHREAD *CurrentThread; // [rsp+120h] [rbp-3A8h]
  $55B18245EBEA7C4FC31D19100062276C *v94; // [rsp+128h] [rbp-3A0h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v95; // [rsp+140h] [rbp-388h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v96; // [rsp+170h] [rbp-358h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v97; // [rsp+1A0h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+1D0h] [rbp-2F8h] BYREF
  _BYTE v99[512]; // [rsp+280h] [rbp-248h] BYREF

  v7 = (char *)a4;
  v8 = (__int64)a3;
  v9 = (__int64)BugCheckParameter1;
  v89 = BugCheckParameter1;
  v87 = a2;
  v90 = a3;
  v91 = v7;
  v86 = a5;
  if ( !a5 )
    return 0LL;
  *a7 = 0LL;
  v78 = 0LL;
  Src = a2;
  v77 = v7;
  v10 = a5;
  Size = a5;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  CurrentThread = KeGetCurrentThread();
  v67 = 0;
  P = 0LL;
  v92 = 0LL;
  v11 = BugCheckParameter1[1].Affinity.Bitmap[12] == 0;
LABEL_3:
  v12 = ((unsigned __int8)v11 ^ (unsigned __int8)(2 * v11)) & 2 ^ v11;
  if ( (*(_BYTE *)(v9 + 720) & 1) != 0 )
    v12 |= 0x40u;
  if ( (*(_BYTE *)(v8 + 720) & 1) != 0 )
    v12 |= 0x80u;
  v13 = a5 - v10;
  v14 = (unsigned __int64)&a2[a5 - v10];
  v15 = KeGetCurrentThread();
  Process = v15->ApcState.Process;
  if ( Process == (_KPROCESS *)v9 )
  {
    v95.SavedApcState.Process = 0LL;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)v9, 0, (__int64)&v95);
    v10 = Size;
    v9 = (__int64)BugCheckParameter1;
    v8 = (__int64)a3;
    v7 = (char *)a4;
  }
  v17 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v9 + 1296) + 144LL) )
  {
    v75 = v10;
    goto LABEL_11;
  }
  LOCK_ADDRESS_SPACE((__int64)v15, v9);
  v40 = (__int64)BugCheckParameter1;
  j = BugCheckParameter1[2].Affinity.Bitmap[4];
  v42 = 0;
  v43 = 0;
  if ( !j )
    goto LABEL_111;
  v44 = v14 >> 12;
  while ( v44 > (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) )
  {
    v45 = *(_QWORD *)(j + 8);
    if ( !v45 )
    {
      v42 = 1;
      goto LABEL_110;
    }
LABEL_108:
    j = v45;
  }
  if ( v44 < (*(unsigned int *)(j + 24) | ((unsigned __int64)*(unsigned __int8 *)(j + 32) << 32)) )
  {
    v45 = *(_QWORD *)j;
    if ( !*(_QWORD *)j )
    {
      v42 = 0;
      goto LABEL_110;
    }
    goto LABEL_108;
  }
  v43 = 1;
LABEL_110:
  v40 = (__int64)BugCheckParameter1;
LABEL_111:
  if ( v43 )
  {
    if ( (*(_DWORD *)(j + 48) & 0x40000) == 0 )
      goto LABEL_123;
    v17 = j;
    if ( (*(_DWORD *)(j + 64) & 4) != 0 )
      goto LABEL_123;
  }
  else
  {
    if ( v42 )
    {
      v46 = j;
      v47 = *(_QWORD ***)(j + 8);
      if ( v47 )
      {
        j = *(_QWORD *)(j + 8);
        for ( i = *v47; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v46 )
            break;
          v46 = j;
        }
      }
      v40 = (__int64)BugCheckParameter1;
    }
LABEL_123:
    if ( v17 )
    {
      v75 = (((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) << 12) | 0xFFF)
          - v14
          + 1;
      v49 = (*(_BYTE *)(v17 + 64) & 1) == 0;
      LODWORD(v17) = 4;
      if ( v49 )
        LODWORD(v17) = 8;
      goto LABEL_144;
    }
  }
  if ( j )
  {
    do
    {
      v50 = j;
      if ( (*(_DWORD *)(j + 48) & 0x40000) != 0 && (*(_DWORD *)(j + 64) & 4) != 0 )
        break;
      if ( (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) >= (v14 + Size - 1) >> 12 )
      {
        v40 = (__int64)BugCheckParameter1;
        goto LABEL_142;
      }
      v51 = j;
      v52 = *(_QWORD ***)(j + 8);
      if ( v52 )
      {
        j = *(_QWORD *)(j + 8);
        for ( k = *v52; k; k = (_QWORD *)*k )
          j = (unsigned __int64)k;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v51 )
            break;
          v51 = j;
        }
      }
    }
    while ( j );
    v40 = (__int64)BugCheckParameter1;
    if ( !j )
      goto LABEL_142;
    v75 = ((*(unsigned int *)(v50 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v50 + 32) << 32)) << 12) - v14;
    v40 = (__int64)BugCheckParameter1;
  }
  else
  {
LABEL_142:
    v75 = Size;
  }
  LODWORD(v17) = 0;
LABEL_144:
  UNLOCK_ADDRESS_SPACE((__int64)v15, v40);
  v9 = (__int64)BugCheckParameter1;
  v8 = (__int64)a3;
  v7 = (char *)a4;
LABEL_11:
  if ( Process != (_KPROCESS *)v9 )
  {
    KiUnstackDetachProcess(&v95, 0LL);
    v8 = (__int64)a3;
    v7 = (char *)a4;
  }
  v18 = v17 | v12 & 0xFFFFFFF3;
  v19 = (unsigned __int64)&v7[v13];
  v20 = KeGetCurrentThread();
  v21 = v20->ApcState.Process;
  if ( v21 == (_KPROCESS *)v8 )
  {
    v96.SavedApcState.Process = 0LL;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)v8, 0, (__int64)&v96);
    v8 = (__int64)a3;
  }
  v22 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v8 + 1296) + 144LL) )
  {
    v23 = Size;
    v84 = Size;
    goto LABEL_17;
  }
  LOCK_ADDRESS_SPACE((__int64)v20, v8);
  v54 = (__int64)a3;
  n = a3[2].Affinity.Bitmap[4];
  v56 = 0;
  v57 = 0;
  if ( !n )
    goto LABEL_156;
  v58 = v19 >> 12;
  while ( 2 )
  {
    if ( v58 > (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) )
    {
      v59 = *(_QWORD *)(n + 8);
      if ( !v59 )
      {
        v56 = 1;
        goto LABEL_155;
      }
      goto LABEL_153;
    }
    if ( v58 < (*(unsigned int *)(n + 24) | ((unsigned __int64)*(unsigned __int8 *)(n + 32) << 32)) )
    {
      v59 = *(_QWORD *)n;
      if ( !*(_QWORD *)n )
      {
        v56 = 0;
        goto LABEL_155;
      }
LABEL_153:
      n = v59;
      continue;
    }
    break;
  }
  v57 = 1;
LABEL_155:
  v54 = (__int64)a3;
LABEL_156:
  if ( v57 )
  {
    if ( (*(_DWORD *)(n + 48) & 0x40000) == 0 )
      goto LABEL_168;
    v22 = n;
    if ( (*(_DWORD *)(n + 64) & 4) != 0 )
      goto LABEL_168;
  }
  else
  {
    if ( v56 )
    {
      v60 = n;
      v61 = *(_QWORD ***)(n + 8);
      if ( v61 )
      {
        n = *(_QWORD *)(n + 8);
        for ( m = *v61; m; m = (_QWORD *)*m )
          n = (unsigned __int64)m;
      }
      else
      {
        for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)n == v60 )
            break;
          v60 = n;
        }
      }
      v54 = (__int64)a3;
    }
LABEL_168:
    if ( v22 )
    {
      v23 = (((*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) << 12) | 0xFFF)
          - v19
          + 1;
      v84 = v23;
      v49 = (*(_BYTE *)(v22 + 64) & 1) == 0;
      LODWORD(v22) = 16;
      if ( v49 )
        LODWORD(v22) = 32;
      goto LABEL_189;
    }
  }
  if ( n )
  {
    do
    {
      v63 = n;
      if ( (*(_DWORD *)(n + 48) & 0x40000) != 0 && (*(_DWORD *)(n + 64) & 4) != 0 )
        break;
      if ( (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) >= (v19 + Size - 1) >> 12 )
      {
        v54 = (__int64)a3;
        goto LABEL_187;
      }
      v64 = n;
      v65 = *(_QWORD ***)(n + 8);
      if ( v65 )
      {
        n = *(_QWORD *)(n + 8);
        for ( ii = *v65; ii; ii = (_QWORD *)*ii )
          n = (unsigned __int64)ii;
      }
      else
      {
        for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)n == v64 )
            break;
          v64 = n;
        }
      }
    }
    while ( n );
    v54 = (__int64)a3;
    if ( !n )
      goto LABEL_187;
    v23 = ((*(unsigned int *)(v63 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v63 + 32) << 32)) << 12) - v19;
    v84 = v23;
  }
  else
  {
LABEL_187:
    v23 = Size;
    v84 = Size;
  }
  LODWORD(v22) = 0;
LABEL_189:
  UNLOCK_ADDRESS_SPACE((__int64)v20, v54);
  v8 = (__int64)a3;
LABEL_17:
  if ( v21 != (_KPROCESS *)v8 )
    KiUnstackDetachProcess(&v96, 0LL);
  v11 = v22 | v18 & 0xFFFFFFCF;
  if ( (v11 & 0xC0) != 0 || (v11 & 0xC) != 0 )
    v11 &= ~2u;
  v10 = Size;
  v24 = Size;
  if ( v75 < Size )
    v24 = v75;
  if ( v23 < v24 )
    v24 = v23;
  v25 = v67;
LABEL_26:
  v26 = a2;
  if ( v24 >= 0x200 && (v11 & 2) != 0 )
  {
    v27 = 57344LL;
    v39 = a5 <= 0xE000;
    goto LABEL_84;
  }
  v11 &= ~2u;
  v27 = v78;
  if ( v78 )
  {
    if ( v24 > v78 )
      goto LABEL_31;
LABEL_30:
    v27 = v24;
    goto LABEL_31;
  }
  if ( v24 <= 0x200 )
  {
    P = v99;
    goto LABEL_30;
  }
  v27 = 0x10000LL;
  if ( v10 <= 0x10000 )
    v27 = v10;
  do
  {
    P = ExAllocatePoolWithTag(PagedPool, v27, 0x77526D4Du);
    if ( P )
    {
      v78 = v27;
      goto LABEL_98;
    }
    v27 >>= 1;
  }
  while ( v27 > 0x200 );
  P = v99;
  v27 = 512LL;
LABEL_98:
  v10 = Size;
  v39 = v24 <= v27;
LABEL_84:
  if ( v39 )
    goto LABEL_30;
LABEL_31:
  v83 = v11;
  v82 = v11;
  v81 = v11;
  v80 = v11;
  v79 = v11;
  v88 = v27;
  while ( 1 )
  {
    if ( !v24 )
    {
      v9 = (__int64)BugCheckParameter1;
      v8 = (__int64)a3;
      v7 = (char *)a4;
      if ( v10 )
        goto LABEL_3;
      if ( v78 )
        ExFreePoolWithTag(P, 0);
      *a7 = a5;
      return 0LL;
    }
    if ( v24 < v27 )
    {
      v27 = v24;
      v88 = v24;
    }
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v97);
    v28 = Src;
    if ( Src == v26 && a6 && ((unsigned __int64)&v26[a5] > 0x7FFFFFFF0000LL || &v26[a5] < v26) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( ((v11 >> 1) & 1) != 0 )
    {
      MemoryDescriptorList.Next = 0LL;
      MemoryDescriptorList.Size = 8 * (((v27 + ((unsigned __int16)Src & 0xFFF) + 4095LL) >> 12) + 6);
      MemoryDescriptorList.MdlFlags = 0;
      MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
      MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
      MemoryDescriptorList.ByteCount = v27;
    }
    v29 = &CurrentThread->116;
    v94 = &CurrentThread->116;
    v30 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
    if ( ((v11 >> 1) & 1) != 0 )
    {
      MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
    }
    else
    {
      if ( (v79 & 0x40) != 0 || (v31 = (v11 >> 2) & 3, v31 == 2) )
      {
        v32 = VslDebugReadWriteSecureProcess((_DWORD)BugCheckParameter1, (_DWORD)v28, (_DWORD)P, v27, 1, (__int64)&v74);
      }
      else
      {
        if ( v31 != 1 )
        {
          memmove(P, v28, v27);
          goto LABEL_51;
        }
        v32 = MiDbgReadWriteEnclave((_DWORD)v28, (_DWORD)P, v27, 1, (__int64)&v74);
      }
      v67 = v32;
      v25 = v32;
    }
LABEL_51:
    if ( !v30 )
      v29->MiscFlags &= ~0x20u;
    if ( v25 < 0 )
      break;
    if ( (v81 & 2) != 0 )
    {
      v33 = MmMapLockedPagesSpecifyCache(p_MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
      if ( v33 )
        goto LABEL_56;
      MmUnlockPages(&MemoryDescriptorList);
LABEL_99:
      v11 &= ~2u;
      KiUnstackDetachProcess(&v97, 0LL);
      v10 = Size;
      goto LABEL_26;
    }
    v33 = P;
LABEL_56:
    KiUnstackDetachProcess(&v97, 0LL);
    KiStackAttachProcess(a3, 0, (__int64)&v97);
    if ( a6 && Src == a2 && (a4 + a5 > 0x7FFFFFFF0000LL || a4 + a5 < a4) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( (v82 & 0x80u) != 0 || (v34 = (v11 >> 4) & 3, v34 == 2) )
    {
      v36 = (char *)v77;
      v37 = VslDebugReadWriteSecureProcess((_DWORD)a3, (_DWORD)v77, (_DWORD)P, v27, 0, (__int64)&v74);
    }
    else
    {
      if ( v34 != 1 )
      {
        v35 = v33;
        v36 = (char *)v77;
        memmove(v77, v35, v27);
        v25 = 0;
        v67 = 0;
        v74 = v27;
        goto LABEL_65;
      }
      v36 = (char *)v77;
      v37 = MiDbgReadWriteEnclave((_DWORD)v77, (_DWORD)P, v27, 0, (__int64)&v74);
    }
    v67 = v37;
    v25 = v37;
LABEL_65:
    if ( v25 == -1073741819 )
    {
      *a7 = (unsigned __int64)&v36[v74 - (_QWORD)a2];
      v25 = -2147483635;
      goto LABEL_91;
    }
    if ( v25 < 0 )
      goto LABEL_91;
    KiUnstackDetachProcess(&v97, 0LL);
    if ( (v83 & 2) != 0 )
      MmUnlockPages(p_MemoryDescriptorList);
    v24 -= v27;
    v10 = Size - v27;
    Size -= v27;
    Src = (char *)Src + v27;
    v77 = &v36[v27];
    v26 = a2;
  }
  if ( (v80 & 2) != 0 )
    goto LABEL_99;
  *a7 = a5 - v24;
  v25 = -2147483635;
LABEL_91:
  KiUnstackDetachProcess(&v97, 0LL);
  if ( v78 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v25;
}
