/*
 * XREFs of MmCopyVirtualMemory @ 0x14059CD40
 * Callers:
 *     PsQueryProcessCommandLine @ 0x1400CF920 (PsQueryProcessCommandLine.c)
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     MiReadWriteVirtualMemory @ 0x140551A50 (MiReadWriteVirtualMemory.c)
 *     AlpcpCopyRequestData @ 0x140747E84 (AlpcpCopyRequestData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MiGetExceptionInfo @ 0x1402553C8 (MiGetExceptionInfo.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     VslDebugReadWriteSecureProcess @ 0x1407185A4 (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x140751FF8 (MiDbgReadWriteEnclave.c)
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
  char *v9; // rdi
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned int v13; // ebx
  int v14; // ebx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r13
  struct _KTHREAD *v17; // r14
  _KPROCESS *Process; // rdi
  unsigned __int64 v19; // r15
  int v20; // r12d
  unsigned int v21; // edi
  unsigned __int64 v22; // r13
  struct _KTHREAD *v23; // r14
  _KPROCESS *v24; // rsi
  unsigned __int64 v25; // r15
  int v26; // ebx
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r15
  int v29; // r13d
  SIZE_T v30; // r12
  void *v31; // r10
  int v32; // edi
  $A9C66A0F7B092172F948892A004DB1E3 *v33; // rsi
  unsigned __int8 v34; // r14
  int v35; // eax
  int v36; // eax
  PVOID v37; // rdi
  int v38; // eax
  const void *v39; // rdx
  char *v40; // rdi
  int v41; // eax
  bool v43; // cc
  unsigned __int64 v44; // r9
  unsigned __int64 j; // rdx
  unsigned __int64 v46; // r8
  char v47; // r10
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  _QWORD **v50; // rax
  _QWORD *i; // rcx
  unsigned __int64 v52; // rcx
  _QWORD **v53; // rax
  _QWORD *k; // rcx
  unsigned __int64 v55; // r9
  __int64 v56; // rcx
  unsigned __int64 n; // rdx
  unsigned __int64 v58; // r8
  char v59; // r10
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  _QWORD **v62; // rax
  _QWORD *m; // rcx
  unsigned __int64 v64; // rcx
  _QWORD **v65; // rax
  _QWORD *ii; // rcx
  int v67; // [rsp+34h] [rbp-474h]
  size_t Size; // [rsp+50h] [rbp-458h]
  _BYTE *P; // [rsp+58h] [rbp-450h]
  SIZE_T v74; // [rsp+98h] [rbp-410h] BYREF
  unsigned __int64 v75; // [rsp+A0h] [rbp-408h]
  unsigned __int64 v76; // [rsp+A8h] [rbp-400h]
  void *Src; // [rsp+B0h] [rbp-3F8h]
  void *v78; // [rsp+B8h] [rbp-3F0h]
  int v79; // [rsp+C0h] [rbp-3E8h]
  size_t v80; // [rsp+C8h] [rbp-3E0h]
  char *v81; // [rsp+D0h] [rbp-3D8h]
  SIZE_T v82; // [rsp+D8h] [rbp-3D0h]
  _KPROCESS *v83; // [rsp+E0h] [rbp-3C8h]
  char *v84; // [rsp+E8h] [rbp-3C0h]
  _KPROCESS *v85; // [rsp+F0h] [rbp-3B8h]
  __int64 v86; // [rsp+F8h] [rbp-3B0h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-3A8h]
  $A9C66A0F7B092172F948892A004DB1E3 *v88; // [rsp+108h] [rbp-3A0h]
  PMDL p_MemoryDescriptorList; // [rsp+110h] [rbp-398h]
  _BYTE v90[32]; // [rsp+120h] [rbp-388h] BYREF
  __int64 v91; // [rsp+140h] [rbp-368h]
  _BYTE v92[32]; // [rsp+150h] [rbp-358h] BYREF
  __int64 v93; // [rsp+170h] [rbp-338h]
  _BYTE v94[48]; // [rsp+180h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+1B0h] [rbp-2F8h] BYREF
  _BYTE v96[512]; // [rsp+260h] [rbp-248h] BYREF

  v7 = (char *)a4;
  v8 = (__int64)a3;
  v9 = a2;
  v10 = (__int64)BugCheckParameter1;
  v85 = BugCheckParameter1;
  v81 = a2;
  v83 = a3;
  v84 = v7;
  v11 = a5;
  if ( !a5 )
    return 0LL;
  *a7 = 0LL;
  v75 = 0LL;
  Src = a2;
  v78 = v7;
  v12 = a5;
  Size = a5;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  CurrentThread = KeGetCurrentThread();
  v67 = 0;
  P = 0LL;
  v86 = 0LL;
  v13 = *(_QWORD *)(v10 + 912) == 0LL;
  while ( 2 )
  {
    v14 = ((unsigned __int8)v13 ^ (unsigned __int8)(2 * v13)) & 2 ^ v13;
    if ( (*(_BYTE *)(v10 + 720) & 1) != 0 )
      v14 |= 0x40u;
    if ( (*(_BYTE *)(v8 + 720) & 1) != 0 )
      v14 |= 0x80u;
    v15 = v11 - v12;
    v16 = (unsigned __int64)&v9[v11 - v12];
    v17 = KeGetCurrentThread();
    Process = v17->ApcState.Process;
    if ( Process == (_KPROCESS *)v10 )
    {
      v91 = 0LL;
    }
    else
    {
      KiStackAttachProcess((_KPROCESS *)v10, 0, (__int64)v90);
      v12 = Size;
      v10 = (__int64)BugCheckParameter1;
      v8 = (__int64)a3;
      v7 = (char *)a4;
    }
    v19 = 0LL;
    v20 = 0;
    if ( !*(_DWORD *)(*(_QWORD *)(v10 + 1296) + 232LL) )
    {
      v76 = v12;
      goto LABEL_11;
    }
    LOCK_ADDRESS_SPACE((__int64)v17, v10);
    j = BugCheckParameter1[2].Affinity.Bitmap[4];
    LOBYTE(v46) = 0;
    v47 = 0;
    if ( !j )
      goto LABEL_107;
    v44 = v16 >> 12;
    while ( v44 > (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) )
    {
      v48 = *(_QWORD *)(j + 8);
      if ( !v48 )
      {
        LOBYTE(v46) = 1;
        goto LABEL_107;
      }
LABEL_115:
      j = v48;
    }
    if ( v44 < (*(unsigned int *)(j + 24) | ((unsigned __int64)*(unsigned __int8 *)(j + 32) << 32)) )
    {
      v48 = *(_QWORD *)j;
      if ( !*(_QWORD *)j )
      {
        LOBYTE(v46) = 0;
        goto LABEL_107;
      }
      goto LABEL_115;
    }
    v47 = 1;
LABEL_107:
    if ( v47 )
    {
      if ( (*(_DWORD *)(j + 48) & 0x10000) == 0 )
        goto LABEL_123;
      v19 = j;
      if ( (*(_DWORD *)(j + 64) & 4) != 0 )
        goto LABEL_123;
    }
    else
    {
      if ( (_BYTE)v46 )
      {
        v49 = j;
        v50 = *(_QWORD ***)(j + 8);
        if ( v50 )
        {
          j = *(_QWORD *)(j + 8);
          for ( i = *v50; i; i = (_QWORD *)*i )
            j = (unsigned __int64)i;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)j == v49 )
              break;
            v49 = j;
          }
        }
      }
LABEL_123:
      if ( v19 )
      {
        v76 = (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF)
            - v16
            + 1;
        v20 = 2 - ((*(_BYTE *)(v19 + 64) & 1) != 0);
        goto LABEL_140;
      }
    }
    v44 = 0LL;
    v46 = (v16 + Size - 1) >> 12;
    if ( !j )
      goto LABEL_139;
    do
    {
      v44 = j;
      if ( (*(_DWORD *)(j + 48) & 0x10000) != 0 && (*(_DWORD *)(j + 64) & 4) != 0 )
        break;
      if ( (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) >= v46 )
        goto LABEL_139;
      v52 = j;
      v53 = *(_QWORD ***)(j + 8);
      if ( v53 )
      {
        j = *(_QWORD *)(j + 8);
        for ( k = *v53; k; k = (_QWORD *)*k )
          j = (unsigned __int64)k;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v52 )
            break;
          v52 = j;
        }
      }
    }
    while ( j );
    if ( j )
      v76 = ((*(unsigned int *)(v44 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v44 + 32) << 32)) << 12) - v16;
    else
LABEL_139:
      v76 = Size;
LABEL_140:
    UNLOCK_ADDRESS_SPACE((__int64)v17, (__int64)BugCheckParameter1, v46, v44);
    v10 = (__int64)BugCheckParameter1;
    v8 = (__int64)a3;
    v7 = (char *)a4;
LABEL_11:
    if ( Process != (_KPROCESS *)v10 )
    {
      KiUnstackDetachProcess((__int64)v90, 0LL);
      v8 = (__int64)a3;
      v7 = (char *)a4;
    }
    v21 = v14 & 0xFFFFFFF3 | (4 * v20);
    v22 = (unsigned __int64)&v7[v15];
    v23 = KeGetCurrentThread();
    v24 = v23->ApcState.Process;
    if ( v24 == (_KPROCESS *)v8 )
    {
      v93 = 0LL;
    }
    else
    {
      KiStackAttachProcess((_KPROCESS *)v8, 0, (__int64)v92);
      v8 = (__int64)a3;
    }
    v25 = 0LL;
    v26 = 0;
    if ( !*(_DWORD *)(*(_QWORD *)(v8 + 1296) + 232LL) )
    {
      v27 = Size;
      v80 = Size;
      goto LABEL_17;
    }
    LOCK_ADDRESS_SPACE((__int64)v23, v8);
    v56 = (__int64)a3;
    n = a3[2].Affinity.Bitmap[4];
    LOBYTE(v58) = 0;
    v59 = 0;
    if ( !n )
      goto LABEL_148;
    v55 = v22 >> 12;
    while ( 2 )
    {
      if ( v55 > (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) )
      {
        v60 = *(_QWORD *)(n + 8);
        if ( !v60 )
        {
          LOBYTE(v58) = 1;
          goto LABEL_147;
        }
        goto LABEL_156;
      }
      if ( v55 < (*(unsigned int *)(n + 24) | ((unsigned __int64)*(unsigned __int8 *)(n + 32) << 32)) )
      {
        v60 = *(_QWORD *)n;
        if ( !*(_QWORD *)n )
        {
          LOBYTE(v58) = 0;
          goto LABEL_147;
        }
LABEL_156:
        n = v60;
        continue;
      }
      break;
    }
    v59 = 1;
LABEL_147:
    v56 = (__int64)a3;
LABEL_148:
    if ( v59 )
    {
      if ( (*(_DWORD *)(n + 48) & 0x10000) == 0 )
        goto LABEL_164;
      v25 = n;
      if ( (*(_DWORD *)(n + 64) & 4) != 0 )
        goto LABEL_164;
    }
    else
    {
      if ( (_BYTE)v58 )
      {
        v61 = n;
        v62 = *(_QWORD ***)(n + 8);
        if ( v62 )
        {
          n = *(_QWORD *)(n + 8);
          for ( m = *v62; m; m = (_QWORD *)*m )
            n = (unsigned __int64)m;
        }
        else
        {
          for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)n == v61 )
              break;
            v61 = n;
          }
        }
        v56 = (__int64)a3;
      }
LABEL_164:
      if ( v25 )
      {
        v27 = (((*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32)) << 12) | 0xFFF)
            - v22
            + 1;
        v26 = 2 - ((*(_BYTE *)(v25 + 64) & 1) != 0);
        goto LABEL_166;
      }
    }
    v55 = 0LL;
    v58 = (v22 + Size - 1) >> 12;
    if ( n )
    {
      do
      {
        v55 = n;
        if ( (*(_DWORD *)(n + 48) & 0x10000) != 0 && (*(_DWORD *)(n + 64) & 4) != 0 )
          break;
        if ( (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) >= v58 )
        {
          v56 = (__int64)a3;
          goto LABEL_183;
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
      v56 = (__int64)a3;
      if ( !n )
        goto LABEL_183;
      v27 = ((*(unsigned int *)(v55 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v55 + 32) << 32)) << 12) - v22;
LABEL_166:
      v80 = v27;
    }
    else
    {
LABEL_183:
      v27 = Size;
      v80 = Size;
    }
    UNLOCK_ADDRESS_SPACE((__int64)v23, v56, v58, v55);
    v8 = (__int64)a3;
LABEL_17:
    if ( v24 != (_KPROCESS *)v8 )
      KiUnstackDetachProcess((__int64)v92, 0LL);
    v13 = v21 & 0xFFFFFFCF | (16 * v26);
    if ( (v13 & 0xC0) != 0 || (v13 & 0xC) != 0 )
      v13 &= ~2u;
    v12 = Size;
    v28 = Size;
    if ( v76 < Size )
      v28 = v76;
    if ( v27 < v28 )
      v28 = v27;
    v29 = v67;
LABEL_26:
    v9 = a2;
    if ( v28 >= 0x200 && (v13 & 2) != 0 )
    {
      v30 = 57344LL;
      v43 = a5 <= 0xE000;
      goto LABEL_84;
    }
    v13 &= ~2u;
    if ( v75 )
    {
      v30 = v28;
      if ( v28 > v75 )
        v30 = v75;
    }
    else
    {
      if ( v28 <= 0x200 )
      {
        P = v96;
        goto LABEL_30;
      }
      v30 = 0x10000LL;
      if ( v12 <= 0x10000 )
        v30 = v12;
      do
      {
        P = ExAllocatePoolWithTag(PagedPool, v30, 0x77526D4Du);
        if ( P )
        {
          v75 = v30;
          goto LABEL_93;
        }
        v30 >>= 1;
      }
      while ( v30 > 0x200 );
      P = v96;
      v30 = 512LL;
LABEL_93:
      v12 = Size;
      v43 = v28 <= v30;
LABEL_84:
      if ( v43 )
LABEL_30:
        v30 = v28;
    }
    v82 = v30;
LABEL_32:
    if ( !v28 )
    {
      v10 = (__int64)BugCheckParameter1;
      v8 = (__int64)a3;
      v7 = (char *)a4;
      if ( v12 )
      {
        v11 = a5;
        continue;
      }
      if ( v75 )
        ExFreePoolWithTag(P, 0);
      *a7 = a5;
      return 0LL;
    }
    break;
  }
  if ( v28 < v30 )
  {
    v30 = v28;
    v82 = v28;
  }
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v94);
  v31 = Src;
  if ( a6 && Src == v9 && ((unsigned __int64)&v9[a5] > 0x7FFFFFFF0000LL || &v9[a5] < v9) )
    MEMORY[0x7FFFFFFF0000] = 0;
  v32 = (v13 >> 1) & 1;
  v79 = v32;
  if ( v32 )
  {
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.Size = 8 * (((v30 + ((unsigned __int16)Src & 0xFFF) + 4095LL) >> 12) + 6);
    MemoryDescriptorList.MdlFlags = 0;
    MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
    MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
    MemoryDescriptorList.ByteCount = v30;
  }
  v33 = &CurrentThread->116;
  v88 = &CurrentThread->116;
  v34 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
  if ( v32 )
  {
    MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
  }
  else
  {
    if ( (v13 & 0x40) != 0 || (v35 = (v13 >> 2) & 3, v35 == 2) )
    {
      v36 = VslDebugReadWriteSecureProcess((_DWORD)BugCheckParameter1, (_DWORD)v31, (_DWORD)P, v30, 1, (__int64)&v74);
    }
    else
    {
      if ( v35 != 1 )
      {
        memmove(P, v31, v30);
        goto LABEL_51;
      }
      v36 = MiDbgReadWriteEnclave((_DWORD)v31, (_DWORD)P, v30, 1, (__int64)&v74);
    }
    v67 = v36;
    v29 = v36;
  }
LABEL_51:
  if ( !v34 )
    v33->MiscFlags &= ~0x20u;
  if ( v29 >= 0 )
  {
    if ( !v32 )
    {
      v37 = P;
LABEL_56:
      KiUnstackDetachProcess((__int64)v94, 0LL);
      KiStackAttachProcess(a3, 0, (__int64)v94);
      if ( a6 && Src == a2 && (a4 + a5 > 0x7FFFFFFF0000LL || a4 + a5 < a4) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (v13 & 0x80u) != 0 || (v38 = (v13 >> 4) & 3, v38 == 2) )
      {
        v40 = (char *)v78;
        v41 = VslDebugReadWriteSecureProcess((_DWORD)a3, (_DWORD)v78, (_DWORD)P, v30, 0, (__int64)&v74);
      }
      else
      {
        if ( v38 != 1 )
        {
          v39 = v37;
          v40 = (char *)v78;
          memmove(v78, v39, v30);
          v29 = 0;
          v67 = 0;
          v74 = v30;
LABEL_65:
          if ( v29 == -1073741819 )
          {
            *a7 = (unsigned __int64)&v40[v74 - (_QWORD)a2];
            v29 = -2147483635;
            goto LABEL_96;
          }
          if ( v29 < 0 )
            goto LABEL_96;
          KiUnstackDetachProcess((__int64)v94, 0LL);
          if ( (v13 & 2) != 0 )
            MmUnlockPages(&MemoryDescriptorList);
          v28 -= v30;
          v12 = Size - v30;
          Size -= v30;
          Src = (char *)Src + v30;
          v78 = &v40[v30];
          v9 = a2;
          goto LABEL_32;
        }
        v40 = (char *)v78;
        v41 = MiDbgReadWriteEnclave((_DWORD)v78, (_DWORD)P, v30, 0, (__int64)&v74);
      }
      v67 = v41;
      v29 = v41;
      goto LABEL_65;
    }
    v37 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
    if ( v37 )
      goto LABEL_56;
    MmUnlockPages(&MemoryDescriptorList);
LABEL_99:
    v13 &= ~2u;
    KiUnstackDetachProcess((__int64)v94, 0LL);
    v12 = Size;
    goto LABEL_26;
  }
  if ( v32 )
    goto LABEL_99;
  *a7 = a5 - v28;
  v29 = -2147483635;
LABEL_96:
  KiUnstackDetachProcess((__int64)v94, 0LL);
  if ( v75 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v29;
}
