/*
 * XREFs of IopLiveDumpWriteDumpFileWithHvPages @ 0x14068F920
 * Callers:
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x140073BE0 (RtlClearAllBitsEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x1401F69C0 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlMergeBitMapsEx @ 0x14023D5C0 (RtlMergeBitMapsEx.c)
 *     RtlNumberOfSetBitsEx @ 0x14023D690 (RtlNumberOfSetBitsEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 *     IopLiveDumpCheckTermination @ 0x14068EFC4 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14068F088 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpGetHvMergePages @ 0x14068F1B4 (IopLiveDumpGetHvMergePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x14068F324 (IopLiveDumpGetNtMergePages.c)
 *     IopLiveDumpWriteBuffer @ 0x14068F640 (IopLiveDumpWriteBuffer.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFileWithHvPages(__int64 a1)
{
  __int64 v2; // rcx
  _OWORD *v3; // r15
  __int64 v4; // rsi
  LARGE_INTEGER v5; // rax
  void *v6; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  char HvMergePages; // al
  int v9; // r13d
  unsigned __int64 *v10; // r12
  int v11; // r14d
  __int64 *v12; // rax
  int SecureDumpHeader; // ebx
  unsigned __int64 *v14; // r8
  char v15; // r9
  __int64 v16; // r10
  ULONG v17; // ebx
  char v18; // al
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  char *v21; // rax
  bool v22; // zf
  __int64 v23; // rbx
  _OWORD *PoolWithTag; // rax
  HANDLE v25; // r12
  __int64 v26; // rcx
  __int128 v27; // xmm0
  int v28; // eax
  unsigned int v29; // r14d
  int v30; // r12d
  unsigned int v31; // ebx
  SIZE_T v32; // rdx
  _DWORD *v33; // rax
  void *v34; // r14
  ULONG v35; // r8d
  char v37; // [rsp+38h] [rbp-D0h]
  char v38; // [rsp+39h] [rbp-CFh]
  char v39; // [rsp+3Ah] [rbp-CEh]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-C8h] BYREF
  int v41; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+4Ch] [rbp-BCh] BYREF
  char *v43; // [rsp+50h] [rbp-B8h] BYREF
  char *v44; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-A8h]
  __int64 *v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  __int64 v48; // [rsp+78h] [rbp-90h] BYREF
  __int64 v49; // [rsp+80h] [rbp-88h] BYREF
  PVOID Buffer; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+98h] [rbp-70h] BYREF
  struct _KTHREAD *v52; // [rsp+A0h] [rbp-68h]
  void *v53; // [rsp+A8h] [rbp-60h]
  __int64 v54; // [rsp+B0h] [rbp-58h]
  __int128 v55; // [rsp+B8h] [rbp-50h] BYREF
  int Src; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v57; // [rsp+CCh] [rbp-3Ch]
  int v58; // [rsp+DCh] [rbp-2Ch]
  ULONG v59; // [rsp+E0h] [rbp-28h]
  int v60; // [rsp+E4h] [rbp-24h]
  _BYTE v61[512]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v62[64]; // [rsp+2E8h] [rbp+1E0h] BYREF

  v2 = a1 + 488;
  v53 = 0LL;
  v3 = 0LL;
  v54 = v2;
  v4 = *(_QWORD *)(a1 + 384);
  if ( *(_BYTE *)(a1 + 640) )
    v5.QuadPart = *(_QWORD *)(v4 + 8224) + *(unsigned int *)(a1 + 648);
  else
    v5 = *(LARGE_INTEGER *)(v4 + 8224);
  v6 = *(void **)(a1 + 64);
  ByteOffset = v5;
  v47 = 0LL;
  v37 = 0;
  FileHandle = v6;
  CurrentThread = KeGetCurrentThread();
  v51 = -1LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  v52 = CurrentThread;
  IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v61, &v43, &v41, &v48);
  v46 = (__int64 *)v61;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 440));
  HvMergePages = IopLiveDumpGetHvMergePages(a1, v62, &v44, &v42, &v49);
  v9 = v41;
  v10 = v62;
  v11 = v42;
  v38 = HvMergePages;
  while ( v11 || v9 )
  {
    if ( v9 )
    {
      v12 = &v51;
      if ( v11 )
        v12 = (__int64 *)v10;
      v10 = (unsigned __int64 *)v12;
    }
    else
    {
      v46 = &v51;
    }
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_72;
    if ( v11 && v10[v11 - 1] < *v14 )
    {
      Buffer = v44;
      v37 = v15;
      v17 = v11 << 12;
      v47 = v49;
      v18 = IopLiveDumpGetHvMergePages(a1, v62, &v44, &v42, &v49);
      goto LABEL_30;
    }
    if ( v9 && v14[v9 - 1] < *v10 )
    {
      Buffer = v43;
      v47 = v48;
      v17 = v9 << 12;
      v37 = 1;
      IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v61, &v43, &v41, &v48);
      v9 = v41;
      v46 = (__int64 *)v61;
      goto LABEL_31;
    }
    v19 = *v14;
    v20 = *v10;
    v39 = 0;
    if ( *v14 < *v10 )
    {
      v21 = v43;
      Buffer = v43;
      goto LABEL_23;
    }
    Buffer = v44;
    v39 = 1;
    if ( v20 == v19 )
    {
      v21 = v43;
LABEL_23:
      v22 = v9-- == 1;
      v41 = v9;
      if ( v22 )
      {
        v37 = 1;
        v47 = v48;
        IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v61, &v43, &v41, &v48);
        v9 = v41;
        v15 = v38;
        v16 = 4096LL;
        v46 = (__int64 *)v61;
      }
      else
      {
        v43 = &v21[v16];
        v46 = (__int64 *)(v14 + 1);
      }
    }
    v17 = v16;
    if ( !v39 )
      goto LABEL_31;
    v22 = v11-- == 1;
    v42 = v11;
    if ( !v22 )
    {
      v44 += v16;
      ++v10;
      goto LABEL_31;
    }
    v37 = v15;
    v47 = v49;
    v18 = IopLiveDumpGetHvMergePages(a1, v62, &v44, &v42, &v49);
    v17 = 4096;
LABEL_30:
    v11 = v42;
    v10 = v62;
    v38 = v18;
LABEL_31:
    SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, Buffer, v17, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_72;
    CurrentThread = v52;
    if ( v37 )
    {
      v23 = v47;
      MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v47), 0x40000uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v23) = 0LL;
      CurrentThread = v52;
      v37 = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 640) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x706D644Cu);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SecureDumpHeader = -1073741670;
      goto LABEL_72;
    }
    memset(PoolWithTag, 0, 0x1000uLL);
  }
  v25 = FileHandle;
  LODWORD(v55) = 1886221636;
  *(_QWORD *)((char *)&v55 + 4) = 0x10626F6C42LL;
  HIDWORD(v55) = -268420393;
  if ( *(_BYTE *)(a1 + 640) )
  {
    v26 = 16LL;
    *v3 = v55;
    goto LABEL_42;
  }
  SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, &v55, 0x10u, &ByteOffset, a1, 1);
  if ( SecureDumpHeader >= 0 )
  {
    v26 = 0LL;
LABEL_42:
    v27 = *(_OWORD *)(a1 + 144);
    v28 = *(_DWORD *)(a1 + 168);
    v22 = *(_BYTE *)(a1 + 640) == 0;
    v29 = 32;
    v60 = 0;
    v57 = v27;
    Src = 32;
    v58 = v28;
    if ( v22 )
    {
      v59 = ((ByteOffset.LowPart + 4127) & 0xFFFFF000) - ByteOffset.LowPart;
      SecureDumpHeader = IopLiveDumpWriteBuffer(v25, &Src, 0x20u, &ByteOffset, a1, 1);
      if ( SecureDumpHeader >= 0 )
      {
        ByteOffset.QuadPart += v59;
        goto LABEL_53;
      }
    }
    else
    {
      v30 = (v26 + 4127) & 0xFFFFF000;
      v59 = v30 - v26 - 32;
      if ( (unsigned int)(4096 - v26) < 0x20 )
        v29 = 4096 - v26;
      memmove(&v3[(unsigned __int64)v26 / 0x10], &Src, v29);
      while ( v30 )
      {
        SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, v3, 0x1000u, &ByteOffset, a1, 0);
        if ( SecureDumpHeader < 0 )
          goto LABEL_70;
        v30 -= 4096;
        memset(v3, 0, 0x1000uLL);
        if ( v29 != Src )
        {
          v31 = Src - v29;
          if ( Src - v29 > 0x1000 )
            v31 = 4096;
          memmove(v3, (char *)&Src + v29, v31);
          v29 += v31;
        }
      }
      v25 = FileHandle;
LABEL_53:
      SecureDumpHeader = IopLiveDumpWriteBuffer(v25, *(PVOID *)(a1 + 160), *(_DWORD *)(a1 + 168), &ByteOffset, a1, 0);
      if ( SecureDumpHeader >= 0 )
      {
        RtlMergeBitMapsEx((unsigned __int64 *)(a1 + 368), (unsigned __int64 *)(a1 + 440));
        *(_DWORD *)(v4 + 0x2000) = 1347241043;
        *(_DWORD *)(v4 + 8196) = 1347245380;
        *(_QWORD *)(v4 + 8232) = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 368));
        if ( *(_BYTE *)(a1 + 640) )
          *(_QWORD *)(v4 + 4000) = ByteOffset.QuadPart - *(unsigned int *)(a1 + 648);
        else
          *(LARGE_INTEGER *)(v4 + 4000) = ByteOffset;
        *(_DWORD *)(v4 + 4176) |= 0x10u;
        if ( *(_BYTE *)(a1 + 640) )
        {
          v32 = *(unsigned int *)(a1 + 648);
          ByteOffset.QuadPart = v32;
          v33 = ExAllocatePoolWithTag(NonPagedPoolNx, v32, 0x706D644Cu);
          v34 = v33;
          if ( !v33 )
          {
            SecureDumpHeader = -1073741670;
            goto LABEL_70;
          }
          SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v4, v33, *(_DWORD *)(a1 + 648));
          if ( SecureDumpHeader >= 0 )
          {
LABEL_65:
            SecureDumpHeader = IopLiveDumpWriteBuffer(v25, (PVOID)v4, *(_DWORD *)(v4 + 8224), &ByteOffset, a1, 0);
            if ( SecureDumpHeader >= 0 && *(_BYTE *)(a1 + 640) )
            {
              v35 = *(_DWORD *)(a1 + 648);
              ByteOffset.QuadPart = 0LL;
              SecureDumpHeader = IopLiveDumpWriteBuffer(v25, v34, v35, &ByteOffset, a1, 1);
            }
          }
          if ( v34 )
            ExFreePoolWithTag(v34, 0);
          goto LABEL_70;
        }
        v34 = v53;
        ByteOffset.QuadPart = 0LL;
        goto LABEL_65;
      }
    }
  }
LABEL_70:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
LABEL_72:
  IopLiveDumpFreeDumpBuffers(v54);
  return (unsigned int)SecureDumpHeader;
}
