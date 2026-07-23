/*
 * XREFs of IopLiveDumpWriteDumpFileWithHvPages @ 0x1407205A0
 * Callers:
 *     IoCaptureLiveDump @ 0x14071EC24 (IoCaptureLiveDump.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x1400AD1B0 (MmFreeIndependentPages.c)
 *     RtlClearAllBitsEx @ 0x140139760 (RtlClearAllBitsEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x140239560 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlMergeBitMapsEx @ 0x1402888F0 (RtlMergeBitMapsEx.c)
 *     RtlNumberOfSetBitsEx @ 0x1402889D0 (RtlNumberOfSetBitsEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopLiveDumpCheckTermination @ 0x14071FC14 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14071FCD8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpGetHvMergePages @ 0x14071FE04 (IopLiveDumpGetHvMergePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x14071FF9C (IopLiveDumpGetNtMergePages.c)
 *     IopLiveDumpWriteBuffer @ 0x1407202C0 (IopLiveDumpWriteBuffer.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFileWithHvPages(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // r12
  _OWORD *v4; // r15
  __int64 v5; // rsi
  LARGE_INTEGER v6; // rax
  void *v7; // rax
  struct _KTHREAD *CurrentThread; // rbx
  char HvMergePages; // al
  int v10; // r13d
  unsigned __int64 *v11; // r8
  unsigned int v12; // r14d
  __int64 *v13; // rax
  int SecureDumpHeader; // ebx
  unsigned __int64 *v15; // r8
  unsigned __int64 *v16; // r9
  char v17; // r10
  __int64 v18; // r11
  ULONG v19; // ebx
  char v20; // al
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  char *v23; // rax
  bool v24; // zf
  __int64 v25; // rbx
  char v26; // al
  _OWORD *PoolWithTag; // rax
  HANDLE v28; // r13
  __int64 v29; // rcx
  __int128 v30; // xmm0
  unsigned int v31; // r14d
  int v32; // eax
  int v33; // r12d
  unsigned int v34; // ebx
  SIZE_T v35; // rdx
  _DWORD *v36; // rax
  char v38; // [rsp+38h] [rbp-D0h]
  char v39; // [rsp+39h] [rbp-CFh]
  char v40; // [rsp+3Ah] [rbp-CEh]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v43; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 *v44; // [rsp+50h] [rbp-B8h]
  char *v45; // [rsp+58h] [rbp-B0h] BYREF
  char *v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v47; // [rsp+68h] [rbp-A0h]
  __int64 v48; // [rsp+70h] [rbp-98h]
  __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+80h] [rbp-88h] BYREF
  PVOID Buffer; // [rsp+88h] [rbp-80h]
  HANDLE FileHandle; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h] BYREF
  struct _KTHREAD *v54; // [rsp+A8h] [rbp-60h]
  void *v55; // [rsp+B0h] [rbp-58h]
  __int64 v56; // [rsp+B8h] [rbp-50h]
  __int128 v57; // [rsp+C0h] [rbp-48h] BYREF
  int Src; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v59; // [rsp+D4h] [rbp-34h]
  int v60; // [rsp+E4h] [rbp-24h]
  ULONG v61; // [rsp+E8h] [rbp-20h]
  int v62; // [rsp+ECh] [rbp-1Ch]
  _BYTE v63[512]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v64[64]; // [rsp+2F8h] [rbp+1F0h] BYREF

  v2 = a1 + 488;
  v55 = 0LL;
  v3 = 0LL;
  v56 = v2;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 384);
  if ( *(_BYTE *)(a1 + 640) )
    v6.QuadPart = *(_QWORD *)(v5 + 8224) + *(unsigned int *)(a1 + 648);
  else
    v6 = *(LARGE_INTEGER *)(v5 + 8224);
  ByteOffset = v6;
  v7 = *(void **)(a1 + 64);
  CurrentThread = KeGetCurrentThread();
  v53 = -1LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  FileHandle = v7;
  v48 = 0LL;
  v38 = 0;
  v54 = CurrentThread;
  IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v63, &v45, &v42, &v49);
  v47 = (__int64 *)v63;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 440));
  HvMergePages = IopLiveDumpGetHvMergePages(a1, v64, &v46, &v43, &v50);
  v10 = v42;
  v11 = v64;
  v12 = v43;
  v44 = v64;
  v39 = HvMergePages;
  while ( v12 || v10 )
  {
    if ( v10 )
    {
      v13 = &v53;
      if ( v12 )
        v13 = (__int64 *)v11;
      v44 = (unsigned __int64 *)v13;
    }
    else
    {
      v47 = &v53;
    }
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_70;
    if ( v12 && v15[v12 - 1] < *v16 )
    {
      Buffer = v46;
      v19 = v12 << 12;
      v48 = v50;
      v38 = v17;
      v20 = IopLiveDumpGetHvMergePages(a1, v64, &v46, &v43, &v50);
      goto LABEL_30;
    }
    if ( v10 && v16[v10 - 1] < *v15 )
    {
      Buffer = v45;
      v48 = v49;
      v19 = v10 << 12;
      v38 = 1;
      IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v63, &v45, &v42, &v49);
      v10 = v42;
      v47 = (__int64 *)v63;
      goto LABEL_31;
    }
    v21 = *v16;
    v22 = *v15;
    v40 = 0;
    if ( *v16 < *v15 )
    {
      v23 = v45;
      Buffer = v45;
      goto LABEL_23;
    }
    Buffer = v46;
    v40 = 1;
    if ( v22 == v21 )
    {
      v23 = v45;
LABEL_23:
      v24 = v10-- == 1;
      v42 = v10;
      if ( v24 )
      {
        v38 = 1;
        v48 = v49;
        IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v63, &v45, &v42, &v49);
        v10 = v42;
        v15 = v44;
        v18 = 4096LL;
        v17 = v39;
        v47 = (__int64 *)v63;
      }
      else
      {
        v45 = &v23[v18];
        v47 = (__int64 *)(v16 + 1);
      }
    }
    v19 = v18;
    if ( !v40 )
      goto LABEL_31;
    v24 = v12-- == 1;
    v43 = v12;
    if ( !v24 )
    {
      v46 += v18;
      v44 = v15 + 1;
      goto LABEL_31;
    }
    v38 = v17;
    v48 = v50;
    v20 = IopLiveDumpGetHvMergePages(a1, v64, &v46, &v43, &v50);
    v19 = 4096;
LABEL_30:
    v12 = v43;
    v39 = v20;
    v44 = v64;
LABEL_31:
    SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, Buffer, v19, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_70;
    v11 = v44;
    CurrentThread = v54;
    if ( v38 )
    {
      v25 = v48;
      MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v48), 0x40000uLL);
      v11 = v44;
      *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v25) = 0LL;
      CurrentThread = v54;
      v38 = 0;
    }
  }
  v26 = *(_BYTE *)(a1 + 640);
  if ( v26 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x706D644Cu);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SecureDumpHeader = -1073741670;
      goto LABEL_70;
    }
    memset(PoolWithTag, 0, 0x1000uLL);
    v26 = *(_BYTE *)(a1 + 640);
  }
  v28 = FileHandle;
  v29 = 1LL;
  LODWORD(v57) = 1886221636;
  *(_QWORD *)((char *)&v57 + 4) = 0x10626F6C42LL;
  HIDWORD(v57) = -268418322;
  if ( v26 )
  {
    *v4 = v57;
    goto LABEL_42;
  }
  SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, &v57, 0x10u, &ByteOffset, a1, 1);
  if ( SecureDumpHeader >= 0 )
  {
    v29 = 0LL;
LABEL_42:
    v30 = *(_OWORD *)(a1 + 144);
    v62 = 0;
    v31 = 32;
    v32 = *(_DWORD *)(a1 + 168);
    v59 = v30;
    Src = 32;
    v60 = v32;
    if ( *(_BYTE *)(a1 + 640) )
    {
      v33 = 4096;
      v61 = 4064 - v29 * 16;
      memmove(&v4[v29], &Src, 0x20uLL);
      while ( 1 )
      {
        SecureDumpHeader = IopLiveDumpWriteBuffer(v28, v4, 0x1000u, &ByteOffset, a1, 0);
        if ( SecureDumpHeader < 0 )
          goto LABEL_68;
        v33 -= 4096;
        memset(v4, 0, 0x1000uLL);
        if ( v31 != Src )
        {
          v34 = Src - v31;
          if ( Src - v31 > 0x1000 )
            v34 = 4096;
          memmove(v4, (char *)&Src + v31, v34);
          v31 += v34;
        }
        if ( !v33 )
        {
          v3 = v55;
          goto LABEL_53;
        }
      }
    }
    v61 = ((ByteOffset.LowPart + 4127) & 0xFFFFF000) - ByteOffset.LowPart;
    SecureDumpHeader = IopLiveDumpWriteBuffer(v28, &Src, 0x20u, &ByteOffset, a1, 1);
    if ( SecureDumpHeader < 0 )
      goto LABEL_68;
    ByteOffset.QuadPart += v61;
LABEL_53:
    SecureDumpHeader = IopLiveDumpWriteBuffer(v28, *(PVOID *)(a1 + 160), *(_DWORD *)(a1 + 168), &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_68;
    RtlMergeBitMapsEx((unsigned __int64 *)(a1 + 368), (__int64 *)(a1 + 440));
    *(_DWORD *)(v5 + 0x2000) = 1347241043;
    *(_DWORD *)(v5 + 8196) = 1347245380;
    *(_QWORD *)(v5 + 8232) = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 368));
    if ( *(_BYTE *)(a1 + 640) )
      *(_QWORD *)(v5 + 4000) = ByteOffset.QuadPart - *(unsigned int *)(a1 + 648);
    else
      *(LARGE_INTEGER *)(v5 + 4000) = ByteOffset;
    *(_DWORD *)(v5 + 4176) |= 0x10u;
    if ( *(_BYTE *)(a1 + 640) )
    {
      v35 = *(unsigned int *)(a1 + 648);
      ByteOffset.QuadPart = v35;
      v36 = ExAllocatePoolWithTag(NonPagedPoolNx, v35, 0x706D644Cu);
      v3 = v36;
      if ( !v36 )
      {
        SecureDumpHeader = -1073741670;
        goto LABEL_68;
      }
      SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v5, v36, *(_DWORD *)(a1 + 648));
      if ( SecureDumpHeader >= 0 )
      {
LABEL_63:
        SecureDumpHeader = IopLiveDumpWriteBuffer(v28, (PVOID)v5, *(_DWORD *)(v5 + 8224), &ByteOffset, a1, 0);
        if ( SecureDumpHeader >= 0 && *(_BYTE *)(a1 + 640) )
        {
          ByteOffset.QuadPart = 0LL;
          SecureDumpHeader = IopLiveDumpWriteBuffer(v28, v3, *(_DWORD *)(a1 + 648), &ByteOffset, a1, 1);
        }
      }
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      goto LABEL_68;
    }
    ByteOffset.QuadPart = 0LL;
    goto LABEL_63;
  }
LABEL_68:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_70:
  IopLiveDumpFreeDumpBuffers(v56);
  return (unsigned int)SecureDumpHeader;
}
