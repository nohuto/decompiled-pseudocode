/*
 * XREFs of MmCopyVirtualMemory @ 0x1405181F0
 * Callers:
 *     PsQueryProcessCommandLine @ 0x140039BE0 (PsQueryProcessCommandLine.c)
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     MiReadWriteVirtualMemory @ 0x140518020 (MiReadWriteVirtualMemory.c)
 *     AlpcpCopyRequestData @ 0x1406B1584 (AlpcpCopyRequestData.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VslDebugReadWriteSecureProcess @ 0x140687BB0 (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x1406BB6E8 (MiDbgReadWriteEnclave.c)
 */

__int64 __fastcall MmCopyVirtualMemory(
        _KPROCESS *BugCheckParameter1,
        char *a2,
        ULONG_PTR a3,
        char *a4,
        __int64 a5,
        KPROCESSOR_MODE a6,
        unsigned __int64 *a7)
{
  char *v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v12; // edi
  int v13; // edi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r12
  struct _KTHREAD *v16; // r15
  _KPROCESS *Process; // rbx
  unsigned __int64 v18; // r14
  unsigned int v19; // ebx
  unsigned __int64 v20; // r12
  struct _KTHREAD *v21; // r15
  _KPROCESS *v22; // rdi
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rsi
  ULONG_PTR v25; // r12
  unsigned __int64 v26; // r14
  int v27; // r15d
  unsigned __int64 v28; // r12
  SIZE_T v29; // rsi
  unsigned __int64 v30; // r10
  unsigned __int8 v31; // bl
  PVOID v32; // rbx
  const void *v33; // rdx
  char *v34; // rbx
  bool v36; // cc
  unsigned __int64 j; // rdx
  char v38; // r8
  char v39; // r10
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  _QWORD **v43; // rax
  _QWORD *i; // rax
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rcx
  _QWORD **v47; // rax
  _QWORD *k; // rax
  unsigned __int64 n; // rdx
  char v50; // r8
  char v51; // r10
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  _QWORD **v55; // rax
  _QWORD *m; // rax
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rcx
  _QWORD **v59; // rax
  _QWORD *ii; // rax
  int v61; // [rsp+34h] [rbp-494h]
  size_t Size; // [rsp+40h] [rbp-488h]
  _BYTE *P; // [rsp+48h] [rbp-480h]
  ULONG_PTR v66; // [rsp+68h] [rbp-460h]
  _QWORD v67[2]; // [rsp+80h] [rbp-448h] BYREF
  __int64 v68; // [rsp+90h] [rbp-438h]
  unsigned __int64 v69; // [rsp+98h] [rbp-430h]
  PMDL p_MemoryDescriptorList; // [rsp+A0h] [rbp-428h]
  void *Src; // [rsp+A8h] [rbp-420h]
  void *v72; // [rsp+B0h] [rbp-418h]
  char *v73; // [rsp+B8h] [rbp-410h]
  unsigned __int64 v74; // [rsp+C0h] [rbp-408h]
  unsigned int v75; // [rsp+C8h] [rbp-400h]
  unsigned int v76; // [rsp+CCh] [rbp-3FCh]
  unsigned int v77; // [rsp+D0h] [rbp-3F8h]
  unsigned int v78; // [rsp+D4h] [rbp-3F4h]
  unsigned int v79; // [rsp+D8h] [rbp-3F0h]
  unsigned int v80; // [rsp+DCh] [rbp-3ECh]
  unsigned int v81; // [rsp+E0h] [rbp-3E8h]
  unsigned int v82; // [rsp+E4h] [rbp-3E4h]
  unsigned int v83; // [rsp+E8h] [rbp-3E0h]
  size_t v84; // [rsp+F0h] [rbp-3D8h]
  char *v85; // [rsp+F8h] [rbp-3D0h]
  SIZE_T v86; // [rsp+100h] [rbp-3C8h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-3C0h]
  _KPROCESS *v88; // [rsp+110h] [rbp-3B8h]
  ULONG_PTR v89; // [rsp+118h] [rbp-3B0h]
  char *v90; // [rsp+120h] [rbp-3A8h]
  __int64 v91; // [rsp+128h] [rbp-3A0h]
  $5BC46E0569261879018906DEC3127961 v92; // [rsp+140h] [rbp-388h] BYREF
  $5BC46E0569261879018906DEC3127961 v93; // [rsp+170h] [rbp-358h] BYREF
  $5BC46E0569261879018906DEC3127961 v94; // [rsp+1A0h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+1D0h] [rbp-2F8h] BYREF
  _BYTE v96[512]; // [rsp+280h] [rbp-248h] BYREF

  v73 = a4;
  v66 = a3;
  v8 = a2;
  v9 = (__int64)BugCheckParameter1;
  v88 = BugCheckParameter1;
  v85 = a2;
  v89 = a3;
  v90 = a4;
  v10 = a5;
  v68 = a5;
  if ( !a5 )
    return 0LL;
  *a7 = 0LL;
  v74 = 0LL;
  Src = a2;
  v72 = a4;
  v11 = a5;
  Size = a5;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  CurrentThread = KeGetCurrentThread();
  v61 = 0;
  P = 0LL;
  v91 = 0LL;
  v12 = *(_QWORD *)(v9 + 912) == 0LL;
LABEL_3:
  v13 = ((unsigned __int8)v12 ^ (unsigned __int8)(2 * v12)) & 2 ^ v12;
  if ( *(_QWORD *)(v9 + 720) )
    v13 |= 0x10u;
  if ( *(_QWORD *)(a3 + 720) )
    v13 |= 0x20u;
  v14 = v10 - v11;
  v15 = (unsigned __int64)&v8[v10 - v11];
  v16 = KeGetCurrentThread();
  Process = v16->ApcState.Process;
  if ( Process == (_KPROCESS *)v9 )
  {
    v92.SavedApcState.Process = 0LL;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)v9, 0, (__int64)&v92);
    v9 = (__int64)BugCheckParameter1;
    v11 = Size;
  }
  v18 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v9 + 1296) + 144LL) )
  {
    v69 = v11;
    goto LABEL_11;
  }
  LOCK_ADDRESS_SPACE((__int64)v16, v9);
  j = BugCheckParameter1[2].Affinity.Bitmap[4];
  v38 = 0;
  v39 = 0;
  if ( !j )
    goto LABEL_109;
  v40 = v15 >> 12;
  while ( v40 > (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) )
  {
    v41 = *(_QWORD *)(j + 8);
    if ( !v41 )
    {
      v38 = 1;
      goto LABEL_109;
    }
LABEL_107:
    j = v41;
  }
  if ( v40 < (*(unsigned int *)(j + 24) | ((unsigned __int64)*(unsigned __int8 *)(j + 32) << 32)) )
  {
    v41 = *(_QWORD *)j;
    if ( !*(_QWORD *)j )
    {
      v38 = 0;
      goto LABEL_109;
    }
    goto LABEL_107;
  }
  v39 = 1;
LABEL_109:
  if ( v39 )
  {
    if ( (*(_BYTE *)(j + 48) & 7) != 3 )
      goto LABEL_123;
    if ( (*(_DWORD *)(j + 48) & 0x40000) == 0 )
      goto LABEL_123;
    v18 = j;
    if ( (*(_DWORD *)(j + 88) & 2) != 0 )
      goto LABEL_123;
    v18 = 0LL;
  }
  else
  {
    if ( v38 )
    {
      v42 = j;
      v43 = *(_QWORD ***)(j + 8);
      if ( v43 )
      {
        j = *(_QWORD *)(j + 8);
        for ( i = *v43; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v42 )
            break;
          v42 = j;
        }
      }
    }
LABEL_123:
    if ( v18 )
    {
      v69 = (((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF)
          - v15
          + 1;
      goto LABEL_142;
    }
  }
  if ( !j )
    goto LABEL_141;
  do
  {
    v45 = j;
    if ( (*(_BYTE *)(j + 48) & 7) == 3 && (*(_DWORD *)(j + 48) & 0x40000) != 0 )
    {
      v18 = j;
      if ( (*(_DWORD *)(j + 88) & 2) != 0 )
        break;
      v18 = 0LL;
    }
    if ( (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) >= (v15 + Size - 1) >> 12 )
      goto LABEL_141;
    v46 = j;
    v47 = *(_QWORD ***)(j + 8);
    if ( v47 )
    {
      j = *(_QWORD *)(j + 8);
      for ( k = *v47; k; k = (_QWORD *)*k )
        j = (unsigned __int64)k;
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
  }
  while ( j );
  if ( j )
    v69 = ((*(unsigned int *)(v45 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v45 + 32) << 32)) << 12) - v15;
  else
LABEL_141:
    v69 = Size;
LABEL_142:
  UNLOCK_ADDRESS_SPACE((__int64)v16, (__int64)BugCheckParameter1);
  v9 = (__int64)BugCheckParameter1;
LABEL_11:
  if ( Process != (_KPROCESS *)v9 )
    KiUnstackDetachProcess(&v92, 0LL);
  v19 = v13 & 0xFFFFFFFB | (4 * (v18 != 0));
  v20 = (unsigned __int64)&v73[v14];
  v21 = KeGetCurrentThread();
  v22 = v21->ApcState.Process;
  if ( v22 == (_KPROCESS *)v66 )
    v93.SavedApcState.Process = 0LL;
  else
    KiStackAttachProcess((_KPROCESS *)v66, 0, (__int64)&v93);
  v23 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v66 + 1296) + 144LL) )
  {
    v11 = Size;
    v24 = Size;
    v84 = Size;
    v25 = v66;
    goto LABEL_17;
  }
  LOCK_ADDRESS_SPACE((__int64)v21, v66);
  n = *(_QWORD *)(v66 + 1576);
  v50 = 0;
  v51 = 0;
  if ( !n )
    goto LABEL_153;
  v52 = v20 >> 12;
  while ( 2 )
  {
    if ( v52 > (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) )
    {
      v53 = *(_QWORD *)(n + 8);
      if ( !v53 )
      {
        v50 = 1;
        goto LABEL_153;
      }
      goto LABEL_151;
    }
    if ( v52 < (*(unsigned int *)(n + 24) | ((unsigned __int64)*(unsigned __int8 *)(n + 32) << 32)) )
    {
      v53 = *(_QWORD *)n;
      if ( !*(_QWORD *)n )
      {
        v50 = 0;
        goto LABEL_153;
      }
LABEL_151:
      n = v53;
      continue;
    }
    break;
  }
  v51 = 1;
LABEL_153:
  if ( v51 )
  {
    if ( (*(_BYTE *)(n + 48) & 7) != 3 )
      goto LABEL_167;
    if ( (*(_DWORD *)(n + 48) & 0x40000) == 0 )
      goto LABEL_167;
    v23 = n;
    if ( (*(_DWORD *)(n + 88) & 2) != 0 )
      goto LABEL_167;
    v23 = 0LL;
  }
  else
  {
    if ( v50 )
    {
      v54 = n;
      v55 = *(_QWORD ***)(n + 8);
      if ( v55 )
      {
        n = *(_QWORD *)(n + 8);
        for ( m = *v55; m; m = (_QWORD *)*m )
          n = (unsigned __int64)m;
      }
      else
      {
        for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)n == v54 )
            break;
          v54 = n;
        }
      }
    }
LABEL_167:
    if ( v23 )
    {
      v24 = (((*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) << 12) | 0xFFF)
          - v20
          + 1;
      goto LABEL_186;
    }
  }
  if ( !n )
    goto LABEL_185;
  do
  {
    v57 = n;
    if ( (*(_BYTE *)(n + 48) & 7) == 3 && (*(_DWORD *)(n + 48) & 0x40000) != 0 )
    {
      v23 = n;
      if ( (*(_DWORD *)(n + 88) & 2) != 0 )
        break;
      v23 = 0LL;
    }
    if ( (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) >= (v20 + Size - 1) >> 12 )
      goto LABEL_185;
    v58 = n;
    v59 = *(_QWORD ***)(n + 8);
    if ( v59 )
    {
      n = *(_QWORD *)(n + 8);
      for ( ii = *v59; ii; ii = (_QWORD *)*ii )
        n = (unsigned __int64)ii;
    }
    else
    {
      for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)n == v58 )
          break;
        v58 = n;
      }
    }
  }
  while ( n );
  if ( n )
  {
    v24 = ((*(unsigned int *)(v57 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v57 + 32) << 32)) << 12) - v20;
LABEL_186:
    v84 = v24;
  }
  else
  {
LABEL_185:
    v24 = Size;
    v84 = Size;
  }
  v25 = v66;
  UNLOCK_ADDRESS_SPACE((__int64)v21, v66);
  v11 = Size;
LABEL_17:
  if ( v22 != (_KPROCESS *)v25 )
  {
    KiUnstackDetachProcess(&v93, 0LL);
    v11 = Size;
  }
  v12 = v19 & 0xFFFFFFF7 | (8 * (v23 != 0));
  if ( v19 & 0x34 | (8 * (v23 != 0)) & 0x34 )
    v12 = v19 & 0xFFFFFFF5 | (8 * (v23 != 0));
  v26 = v11;
  if ( v69 < v11 )
    v26 = v69;
  if ( v24 < v26 )
    v26 = v24;
  v27 = v61;
  v28 = v68;
LABEL_26:
  v8 = a2;
  if ( v26 >= 0x200 && (v12 & 2) != 0 )
  {
    v29 = 57344LL;
    v36 = v28 <= 0xE000;
    goto LABEL_82;
  }
  v12 &= ~2u;
  v29 = v74;
  if ( v74 )
  {
    if ( v26 > v74 )
      goto LABEL_31;
LABEL_30:
    v29 = v26;
    goto LABEL_31;
  }
  if ( v26 <= 0x200 )
  {
    P = v96;
    goto LABEL_30;
  }
  v29 = 0x10000LL;
  if ( v11 <= 0x10000 )
    v29 = v11;
  do
  {
    P = ExAllocatePoolWithTag(PagedPool, v29, 0x77526D4Du);
    if ( P )
    {
      v74 = v29;
      goto LABEL_96;
    }
    v29 >>= 1;
  }
  while ( v29 > 0x200 );
  P = v96;
  v29 = 512LL;
LABEL_96:
  v11 = Size;
  v36 = v26 <= v29;
LABEL_82:
  if ( v36 )
    goto LABEL_30;
LABEL_31:
  v83 = v12;
  v82 = v12;
  v81 = v12;
  v80 = v12;
  v79 = v12;
  v78 = v12;
  v77 = v12;
  v76 = v12;
  v75 = v12;
  v86 = v29;
  while ( 1 )
  {
    if ( !v26 )
    {
      v9 = (__int64)BugCheckParameter1;
      a3 = v66;
      if ( v11 )
      {
        v10 = v68;
        goto LABEL_3;
      }
      if ( v74 )
        ExFreePoolWithTag(P, 0);
      *a7 = v28;
      return 0LL;
    }
    if ( v26 < v29 )
    {
      v29 = v26;
      v86 = v26;
    }
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v94);
    v30 = (unsigned __int64)Src;
    if ( a6 && Src == v8 && v28 && ((unsigned __int64)&v8[v28] > 0x7FFFFFFF0000LL || &v8[v28] < v8) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( (v75 & 2) != 0 )
    {
      p_MemoryDescriptorList->Next = 0LL;
      MemoryDescriptorList.Size = 8 * (((v29 + (v30 & 0xFFF) + 4095) >> 12) + 6);
      MemoryDescriptorList.MdlFlags = 0;
      MemoryDescriptorList.StartVa = (PVOID)(v30 & 0xFFFFFFFFFFFFF000uLL);
      MemoryDescriptorList.ByteOffset = v30 & 0xFFF;
      MemoryDescriptorList.ByteCount = v29;
    }
    v31 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
    if ( (v76 & 2) != 0 )
    {
      MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
    }
    else if ( (v77 & 0x10) != 0 )
    {
      v27 = VslDebugReadWriteSecureProcess((_DWORD)BugCheckParameter1, v30, (_DWORD)P, v29, 1, (__int64)v67);
      v61 = v27;
    }
    else if ( (v78 & 4) != 0 )
    {
      v27 = MiDbgReadWriteEnclave(v30, (_DWORD)P, v29, 1, (__int64)v67);
      v61 = v27;
    }
    else
    {
      memmove(P, (const void *)v30, v29);
    }
    if ( !v31 )
      CurrentThread->MiscFlags &= ~0x20u;
    if ( v27 < 0 )
      break;
    if ( (v80 & 2) != 0 )
    {
      v32 = MmMapLockedPagesSpecifyCache(p_MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
      if ( v32 )
        goto LABEL_55;
      MmUnlockPages(&MemoryDescriptorList);
LABEL_97:
      v12 &= ~2u;
      KiUnstackDetachProcess(&v94, 0LL);
      v11 = Size;
      goto LABEL_26;
    }
    v32 = P;
LABEL_55:
    KiUnstackDetachProcess(&v94, 0LL);
    KiStackAttachProcess((_KPROCESS *)v66, 0, (__int64)&v94);
    if ( a6 && Src == a2 && v28 && ((unsigned __int64)&v73[v28] > 0x7FFFFFFF0000LL || &v73[v28] < v73) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( (v81 & 0x20) != 0 )
    {
      v34 = (char *)v72;
      v27 = VslDebugReadWriteSecureProcess(v66, (_DWORD)v72, (_DWORD)P, v29, 0, (__int64)v67);
      v61 = v27;
    }
    else if ( (v82 & 8) != 0 )
    {
      v34 = (char *)v72;
      v27 = MiDbgReadWriteEnclave((_DWORD)v72, (_DWORD)P, v29, 0, (__int64)v67);
      v61 = v27;
    }
    else
    {
      v33 = v32;
      v34 = (char *)v72;
      memmove(v72, v33, v29);
      v27 = 0;
      v61 = 0;
      v67[0] = v29;
    }
    if ( v27 == -1073741819 )
    {
      *a7 = (unsigned __int64)&v34[v67[0] - (_QWORD)a2];
      v27 = -2147483635;
      goto LABEL_89;
    }
    if ( v27 < 0 )
      goto LABEL_89;
    KiUnstackDetachProcess(&v94, 0LL);
    if ( (v83 & 2) != 0 )
      MmUnlockPages(p_MemoryDescriptorList);
    v26 -= v29;
    v11 = Size - v29;
    Size -= v29;
    Src = (char *)Src + v29;
    v72 = &v34[v29];
    v8 = a2;
  }
  if ( (v79 & 2) != 0 )
    goto LABEL_97;
  *a7 = v28 - v26;
  v27 = -2147483635;
LABEL_89:
  KiUnstackDetachProcess(&v94, 0LL);
  if ( v74 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v27;
}
