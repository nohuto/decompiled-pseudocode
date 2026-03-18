/*
 * XREFs of MiValidateSectionCreate @ 0x140422CC0
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x14051108C (MiValidateExistingImage.c)
 * Callees:
 *     PsSetSystemPagePriorityThread @ 0x14005DF08 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14006065C (PsRevertToUserPagePriorityThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140063C1C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x140185280 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x140185390 (KeCopyPage.c)
 *     MiImageCantMove @ 0x140222CD4 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x140222FB0 (MiStrongCodeImage.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeValidateImageHeader @ 0x140423400 (SeValidateImageHeader.c)
 *     MiPerformFixups @ 0x140423820 (MiPerformFixups.c)
 *     MiRelocateAmount @ 0x140423A60 (MiRelocateAmount.c)
 *     MiPrefetchControlArea @ 0x140423A90 (MiPrefetchControlArea.c)
 *     SeReleaseImageValidationContext @ 0x140423C04 (SeReleaseImageValidationContext.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1404974E0 (MiUnmapImageInSystemSpace.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1406BD988 (MiCaptureSecureImageBaseAddress.c)
 *     MiCreatePerSessionProtos @ 0x1406BDE0C (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiValidateSectionCreate(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, ULONG_PTR a4, int a5, char a6)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int i; // r12d
  ULONG_PTR v9; // r15
  unsigned int v10; // r11d
  _QWORD *v11; // rdx
  signed __int64 v12; // rbx
  unsigned __int64 v13; // rax
  int v14; // r13d
  PVOID v15; // r10
  __int64 v16; // rax
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  signed __int64 v22; // rcx
  _QWORD *v23; // r13
  bool v24; // zf
  signed __int64 v25; // rax
  __int64 result; // rax
  char *PoolWithTag; // rax
  __int64 v28; // rcx
  unsigned int v29; // r12d
  unsigned int v30; // r12d
  signed __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  unsigned __int64 v34; // rcx
  char v35[8]; // [rsp+50h] [rbp-168h] BYREF
  signed __int64 v36; // [rsp+58h] [rbp-160h] BYREF
  unsigned int v37; // [rsp+60h] [rbp-158h]
  int v38; // [rsp+64h] [rbp-154h]
  int v39; // [rsp+68h] [rbp-150h]
  int v40; // [rsp+6Ch] [rbp-14Ch]
  unsigned int v41; // [rsp+70h] [rbp-148h]
  int v42; // [rsp+74h] [rbp-144h]
  PVOID P; // [rsp+78h] [rbp-140h]
  unsigned int v44; // [rsp+80h] [rbp-138h]
  unsigned int v45; // [rsp+84h] [rbp-134h]
  unsigned int v46; // [rsp+88h] [rbp-130h]
  int v47; // [rsp+8Ch] [rbp-12Ch] BYREF
  __int64 v48; // [rsp+90h] [rbp-128h]
  _QWORD *v49; // [rsp+98h] [rbp-120h]
  int v50; // [rsp+A0h] [rbp-118h]
  unsigned int v51; // [rsp+A8h] [rbp-110h]
  char *v52; // [rsp+B0h] [rbp-108h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-100h]
  PVOID v54; // [rsp+C0h] [rbp-F8h]
  struct _KTHREAD *v55; // [rsp+C8h] [rbp-F0h]
  __int64 v56; // [rsp+D0h] [rbp-E8h]
  ULONG_PTR v57; // [rsp+D8h] [rbp-E0h]
  _KPROCESS *Process; // [rsp+E0h] [rbp-D8h]
  _KPROCESS *v59; // [rsp+E8h] [rbp-D0h]
  _QWORD *v60; // [rsp+F0h] [rbp-C8h]
  signed __int64 v61; // [rsp+F8h] [rbp-C0h]
  PVOID v62; // [rsp+100h] [rbp-B8h]
  ULONG_PTR v63; // [rsp+108h] [rbp-B0h]
  ULONG_PTR v64; // [rsp+110h] [rbp-A8h]
  ULONG_PTR v65; // [rsp+118h] [rbp-A0h]
  _QWORD v66[2]; // [rsp+120h] [rbp-98h] BYREF
  unsigned int v67; // [rsp+130h] [rbp-88h]

  v57 = a4;
  v46 = a3;
  BugCheckParameter2 = a1;
  v63 = a1;
  v64 = a2;
  v51 = a3;
  v65 = a4;
  v38 = 0;
  v47 = 0;
  v40 = 0;
  CurrentThread = 0LL;
  v55 = 0LL;
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_14036BFD8 = 65;
      return 3221226547LL;
    }
    a5 |= 0x10000000u;
  }
  if ( (a5 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 144) )
  {
    dword_14036BFD8 = 22;
    return 3221225595LL;
  }
  v42 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v59 = Process;
  for ( i = ((a5 & 5) != 0) + 6; ; i |= 1u )
  {
    v45 = i;
    v41 = i;
    if ( (i & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v55 = CurrentThread;
      v40 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      if ( (*(_DWORD *)(a2 + 56) & 0x4000000) != 0 )
      {
        LODWORD(v9) = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( (v9 & 0x80000000) != 0LL )
          goto LABEL_82;
        v42 = 1;
      }
      MiPrefetchControlArea(a2, CLFS_LSN_NULL_EXT, 0, 1, 0, -1);
    }
    LODWORD(v9) = MiMapImageInSystemSpace(a2, i, v66);
    if ( (v9 & 0x80000000) != 0LL )
    {
      if ( v42 == 1 )
        MiDereferencePerSessionProtos(a2);
      if ( (i & 1) != 0 )
LABEL_82:
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v40);
      return (unsigned int)v9;
    }
    v10 = v67;
    v37 = v67;
    v54 = (PVOID)v66[0];
    v11 = *(_QWORD **)(a2 + 96);
    v49 = v11;
    v60 = v11;
    v12 = v11[1];
    v61 = v12;
    v13 = v12;
    v36 = v12;
    if ( v12 )
    {
      if ( (v12 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v14 = 1;
        v39 = 1;
        v32 = v12 & 3;
      }
      else
      {
        v31 = v12 & 3;
        if ( (v12 & 3) != 0 )
        {
          v13 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
          v14 = (v31 != 1) + 2;
        }
        else
        {
          v14 = v31 + 4;
        }
        v39 = v14;
        v32 = v13 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      v36 = v32;
    }
    else
    {
      v14 = 0;
      v39 = 0;
    }
    LODWORD(v15) = v66[0];
    P = (PVOID)v66[0];
    v35[0] = 1;
    v16 = 0LL;
    v48 = 0LL;
    v56 = 0LL;
    if ( *v11 )
    {
      v16 = MiRelocateAmount(a2, 1LL);
      v48 = v16;
      v56 = v16;
    }
    if ( v16 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10 << 12, 0x68496D4Du);
      v15 = PoolWithTag;
      P = PoolWithTag;
      v62 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(v9) = -1073741670;
        goto LABEL_15;
      }
      v50 = 0;
      v28 = (__int64)PoolWithTag;
      v52 = PoolWithTag;
      v29 = 0;
      v10 = v37;
      while ( 1 )
      {
        v44 = v29;
        if ( v29 >= v10 )
          break;
        KeCopyPage(v28, (__int64)v54 + 4096 * v29);
        v15 = P;
        v10 = v37;
        ++v29;
        v28 = (__int64)(v52 + 4096);
        v52 += 4096;
      }
      v30 = 0;
      if ( v10 )
      {
        v48 = -v48;
        do
        {
          MiPerformFixups((ULONG_PTR)v15 + 4096 * v30++, a2, 0LL, 0);
          v10 = v37;
          v15 = P;
        }
        while ( v30 < v37 );
      }
      i = v41;
    }
    v17 = SeValidateImageHeader(
            BugCheckParameter2,
            (_DWORD)v15,
            v10 << 12,
            (_DWORD)Process,
            v57,
            a5,
            (__int64)&v36,
            a6,
            (__int64)v35,
            (__int64)&v47);
    v9 = v17;
    if ( v17 == 301 )
    {
      MiImageCantMove(a2);
      v38 = 1;
LABEL_89:
      if ( (*(_DWORD *)(a2 + 56) & 0x40000000) != 0 )
        KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v9, 0LL);
      MiStrongCodeImage(a2, 1u);
      goto LABEL_15;
    }
    v18 = v38;
    if ( v17 == 302 )
      v18 = 1;
    v38 = v18;
    if ( v18 )
      goto LABEL_89;
LABEL_15:
    if ( P != v54 && P )
      ExFreePoolWithTag(P, 0);
    MiUnmapImageInSystemSpace(v66);
    if ( v42 == 1 )
      MiDereferencePerSessionProtos(a2);
    if ( (i & 1) != 0 )
    {
      if ( (MiFlags & 0x40000) != 0 )
        MiFlushEntireTbDueToAttributeChange(v20, v19, v21);
      PsRevertToUserPagePriorityThread((__int64)v55, v40);
    }
    if ( (v9 & 0x80000000) == 0LL )
      break;
    if ( (_DWORD)v9 != -1073741789 || v37 == *(_DWORD *)(*(_QWORD *)a2 + 8LL) )
    {
      dword_14036BFD8 = 4;
      return (unsigned int)v9;
    }
    CurrentThread = v55;
  }
  if ( !v14 || v14 == 1 && (v36 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v36 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v14 )
        v22 = v36 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v22 = v36 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v22 = v36 & 7 | 8;
    }
    v36 = v22;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v22 |= 4uLL;
      v36 = v22;
    }
    v23 = v49;
    while ( 1 )
    {
      v25 = _InterlockedCompareExchange64(v23 + 1, v22, v12);
      v24 = v12 == v25;
      v12 = v25;
      if ( v24 )
        break;
      if ( (v36 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_72;
      if ( (v25 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        v36 &= 0xFFFFFFFFFFFFFFF8uLL;
        SeReleaseImageValidationContext(v36);
LABEL_72:
        v36 = v12;
        break;
      }
      v22 = v36 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v36 = v22;
    }
    v12 = v36;
  }
  else
  {
    v33 = v14 - 2;
    v23 = v49;
    if ( v33 <= 1 )
      v36 = ((unsigned __int8)v12 ^ (unsigned __int8)v36) & 3 ^ (unsigned __int64)v36;
  }
  if ( (v36 & 3) == 0 )
  {
LABEL_29:
    *(_BYTE *)(*(_QWORD *)a2 + 15LL) = *(_BYTE *)(*(_QWORD *)a2 + 15LL) & 1 | (2 * ((8 * v35[0]) | v47 & 7));
    if ( v38 )
      MiStrongCodeImage(a2, 2u);
    return (unsigned int)v9;
  }
  if ( (MiFlags & 0x4000) != 0
    && (*(_DWORD *)(a2 + 92) & 0xC0000) != 0
    && *v23
    && (result = MiCaptureSecureImageBaseAddress(a2), (int)result < 0) )
  {
    dword_14036BFD8 = 60;
  }
  else
  {
    result = MiWalkEntireImage((__int64 *)a2, 0LL, 1, v46);
    LODWORD(v9) = result;
    if ( (int)result >= 0 )
    {
      v34 = v36 & 0xFFFFFFFFFFFFFFFCuLL;
      v36 &= 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
      {
        v34 |= 4uLL;
        v36 = v34;
      }
      _InterlockedCompareExchange64(v23 + 1, v34, v12);
      goto LABEL_29;
    }
    dword_14036BFD8 = 59;
  }
  return result;
}
