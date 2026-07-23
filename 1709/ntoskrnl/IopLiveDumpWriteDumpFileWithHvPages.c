/*
 * XREFs of IopLiveDumpWriteDumpFileWithHvPages @ 0x1406BB5EC
 * Callers:
 *     IoCaptureLiveDump @ 0x1406B9C84 (IoCaptureLiveDump.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x14010C850 (RtlClearAllBitsEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x1401FC820 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlMergeBitMapsEx @ 0x140253290 (RtlMergeBitMapsEx.c)
 *     RtlNumberOfSetBitsEx @ 0x140253360 (RtlNumberOfSetBitsEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmFreeIndependentPages @ 0x1405D59B0 (MmFreeIndependentPages.c)
 *     IopLiveDumpCheckTermination @ 0x1406BAC88 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1406BAD4C (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpGetHvMergePages @ 0x1406BAE78 (IopLiveDumpGetHvMergePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x1406BAFE8 (IopLiveDumpGetNtMergePages.c)
 *     IopLiveDumpWriteBuffer @ 0x1406BB30C (IopLiveDumpWriteBuffer.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFileWithHvPages(__int64 a1)
{
  __int64 v2; // rcx
  _OWORD *v3; // r15
  __int64 v4; // rsi
  LARGE_INTEGER v5; // rax
  void *v6; // rax
  struct _KTHREAD *CurrentThread; // rbx
  char HvMergePages; // al
  int v9; // r13d
  unsigned __int64 *v10; // r12
  int v11; // r14d
  __int64 *v12; // rax
  int SecureDumpHeader; // ebx
  unsigned __int64 *v14; // r8
  char v15; // r9
  char v16; // r10
  __int64 v17; // r11
  ULONG v18; // ebx
  char v19; // al
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  char *v22; // rax
  bool v23; // zf
  __int64 v24; // rbx
  _OWORD *PoolWithTag; // rax
  HANDLE v26; // r13
  __int64 v27; // rcx
  __int128 v28; // xmm0
  int v29; // r12d
  unsigned int v30; // r14d
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
  __int64 *v45; // [rsp+60h] [rbp-A8h]
  __int64 v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h] BYREF
  __int64 v48; // [rsp+78h] [rbp-90h] BYREF
  PVOID Buffer; // [rsp+80h] [rbp-88h]
  HANDLE FileHandle; // [rsp+90h] [rbp-78h]
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
  ByteOffset = v5;
  v6 = *(void **)(a1 + 64);
  CurrentThread = KeGetCurrentThread();
  v51 = -1LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  FileHandle = v6;
  v46 = 0LL;
  v37 = 0;
  v52 = CurrentThread;
  IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v61, &v43, &v41, &v47);
  v45 = (__int64 *)v61;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 440));
  HvMergePages = IopLiveDumpGetHvMergePages(a1, v62, &v44, &v42, &v48);
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
      v45 = &v51;
    }
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_70;
    if ( v11 && v10[v11 - 1] < *v14 )
    {
      Buffer = v44;
      v37 = v15;
      v18 = v11 << 12;
      v46 = v48;
      v19 = IopLiveDumpGetHvMergePages(a1, v62, &v44, &v42, &v48);
LABEL_30:
      v11 = v42;
      v10 = v62;
      v38 = v19;
      goto LABEL_31;
    }
    if ( !v9 || v14[v9 - 1] >= *v10 )
    {
      v20 = *v14;
      v21 = *v10;
      v39 = v16;
      if ( *v14 >= *v10 )
      {
        Buffer = v44;
        v39 = 1;
        if ( v21 == v20 )
        {
          v22 = v43;
          goto LABEL_23;
        }
      }
      else
      {
        v22 = v43;
        Buffer = v43;
LABEL_23:
        v23 = v9-- == 1;
        v41 = v9;
        if ( v23 )
        {
          v37 = 1;
          v46 = v47;
          IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v61, &v43, &v41, &v47);
          v9 = v41;
          v15 = v38;
          v16 = 0;
          v45 = (__int64 *)v61;
          v17 = 4096LL;
        }
        else
        {
          v43 = &v22[v17];
          v45 = (__int64 *)(v14 + 1);
        }
      }
      v18 = v17;
      if ( v39 == v16 )
        goto LABEL_32;
      v23 = v11-- == 1;
      v42 = v11;
      if ( !v23 )
      {
        v44 += v17;
        ++v10;
        goto LABEL_32;
      }
      v37 = v15;
      v46 = v48;
      v19 = IopLiveDumpGetHvMergePages(a1, v62, &v44, &v42, &v48);
      v18 = 4096;
      goto LABEL_30;
    }
    Buffer = v43;
    v46 = v47;
    v18 = v9 << 12;
    v37 = 1;
    IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v61, &v43, &v41, &v47);
    v9 = v41;
    v45 = (__int64 *)v61;
LABEL_31:
    v16 = 0;
LABEL_32:
    SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, Buffer, v18, &ByteOffset, a1, v16);
    if ( SecureDumpHeader < 0 )
      goto LABEL_70;
    CurrentThread = v52;
    if ( v37 )
    {
      v24 = v46;
      MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v46), 0x40000uLL);
      v37 = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v24) = 0LL;
      CurrentThread = v52;
    }
  }
  if ( *(_BYTE *)(a1 + 640) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x706D644Cu);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SecureDumpHeader = -1073741670;
      goto LABEL_70;
    }
    memset(PoolWithTag, 0, 0x1000uLL);
  }
  v26 = FileHandle;
  LODWORD(v55) = 1886221636;
  *(_QWORD *)((char *)&v55 + 4) = 0x10626F6C42LL;
  HIDWORD(v55) = -268419157;
  if ( *(_BYTE *)(a1 + 640) )
  {
    v27 = 1LL;
    *v3 = v55;
    goto LABEL_43;
  }
  SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, &v55, 0x10u, &ByteOffset, a1, 1);
  if ( SecureDumpHeader >= 0 )
  {
    v27 = 0LL;
LABEL_43:
    v58 = *(_DWORD *)(a1 + 168);
    v28 = *(_OWORD *)(a1 + 144);
    Src = 32;
    v60 = 0;
    v57 = v28;
    if ( *(_BYTE *)(a1 + 640) )
    {
      v29 = 4096;
      v30 = 32;
      v59 = 4064 - v27 * 16;
      memmove(&v3[v27], &Src, 0x20uLL);
      while ( v29 )
      {
        SecureDumpHeader = IopLiveDumpWriteBuffer(v26, v3, 0x1000u, &ByteOffset, a1, 0);
        if ( SecureDumpHeader < 0 )
          goto LABEL_68;
        v29 -= 4096;
        memset(v3, 0, 0x1000uLL);
        if ( v30 != Src )
        {
          v31 = Src - v30;
          if ( Src - v30 > 0x1000 )
            v31 = 4096;
          memmove(v3, (char *)&Src + v30, v31);
          v30 += v31;
        }
      }
LABEL_51:
      SecureDumpHeader = IopLiveDumpWriteBuffer(v26, *(PVOID *)(a1 + 160), *(_DWORD *)(a1 + 168), &ByteOffset, a1, 0);
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
            goto LABEL_68;
          }
          SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v4, v33, *(_DWORD *)(a1 + 648));
          if ( SecureDumpHeader >= 0 )
          {
LABEL_63:
            SecureDumpHeader = IopLiveDumpWriteBuffer(v26, (PVOID)v4, *(_DWORD *)(v4 + 8224), &ByteOffset, a1, 0);
            if ( SecureDumpHeader >= 0 && *(_BYTE *)(a1 + 640) )
            {
              v35 = *(_DWORD *)(a1 + 648);
              ByteOffset.QuadPart = 0LL;
              SecureDumpHeader = IopLiveDumpWriteBuffer(v26, v34, v35, &ByteOffset, a1, 1);
            }
          }
          if ( v34 )
            ExFreePoolWithTag(v34, 0);
          goto LABEL_68;
        }
        v34 = v53;
        ByteOffset.QuadPart = 0LL;
        goto LABEL_63;
      }
    }
    else
    {
      v59 = ((ByteOffset.LowPart + 4127) & 0xFFFFF000) - ByteOffset.LowPart;
      SecureDumpHeader = IopLiveDumpWriteBuffer(v26, &Src, 0x20u, &ByteOffset, a1, 1);
      if ( SecureDumpHeader >= 0 )
      {
        ByteOffset.QuadPart += v59;
        goto LABEL_51;
      }
    }
  }
LABEL_68:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
LABEL_70:
  IopLiveDumpFreeDumpBuffers(v54);
  return (unsigned int)SecureDumpHeader;
}
