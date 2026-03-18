/*
 * XREFs of MiValidateSectionCreate @ 0x1404F6218
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x1405040C8 (MiValidateSectionSigningPolicy.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     PsSetSystemPagePriorityThread @ 0x1400B61AC (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x1400B6F44 (PsRevertToUserPagePriorityThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C (MiFlushEntireTbDueToAttributeChange.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x140184D20 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x140184E30 (KeCopyPage.c)
 *     MiImageCantMove @ 0x14022FE14 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x14022FE5C (MiStrongCodeImage.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiPrefetchControlArea @ 0x1404F605C (MiPrefetchControlArea.c)
 *     MiRelocateAmount @ 0x1404F615C (MiRelocateAmount.c)
 *     SeValidateImageHeader @ 0x1404F696C (SeValidateImageHeader.c)
 *     MiUnmapImageInSystemSpace @ 0x1404F73D4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     MiPerformFixups @ 0x140509B50 (MiPerformFixups.c)
 *     SeReleaseImageValidationContext @ 0x1405F1480 (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1406EA7A4 (MiCaptureSecureImageBaseAddress.c)
 *     MiCreatePerSessionProtos @ 0x1406EB248 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiValidateSectionCreate(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned int a3,
        ULONG_PTR a4,
        int a5,
        char a6,
        char a7)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int i; // r12d
  ULONG_PTR v10; // r15
  unsigned int v11; // r11d
  _QWORD *v12; // rdx
  signed __int64 v13; // rbx
  unsigned __int64 v14; // rax
  int v15; // r13d
  PVOID v16; // r10
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  signed __int64 v26; // rcx
  _QWORD *v27; // r13
  bool v28; // zf
  signed __int64 v29; // rax
  __int64 result; // rax
  char *PoolWithTag; // rax
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // r8d
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  unsigned __int64 v37; // rcx
  signed __int64 v38; // rcx
  char v39[8]; // [rsp+60h] [rbp-168h] BYREF
  signed __int64 v40; // [rsp+68h] [rbp-160h] BYREF
  unsigned int v41; // [rsp+70h] [rbp-158h]
  int v42; // [rsp+74h] [rbp-154h]
  unsigned int v43; // [rsp+78h] [rbp-150h]
  int v44; // [rsp+7Ch] [rbp-14Ch]
  int v45; // [rsp+80h] [rbp-148h]
  int v46; // [rsp+84h] [rbp-144h]
  PVOID P; // [rsp+88h] [rbp-140h]
  unsigned int v48; // [rsp+90h] [rbp-138h]
  unsigned int v49; // [rsp+94h] [rbp-134h]
  int v50; // [rsp+98h] [rbp-130h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-128h]
  _QWORD *v52; // [rsp+A8h] [rbp-120h]
  int v53; // [rsp+B0h] [rbp-118h]
  unsigned int v54; // [rsp+B8h] [rbp-110h]
  char *v55; // [rsp+C0h] [rbp-108h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-100h]
  PVOID v57; // [rsp+D0h] [rbp-F8h]
  struct _KTHREAD *v58; // [rsp+D8h] [rbp-F0h]
  __int64 v59; // [rsp+E0h] [rbp-E8h]
  ULONG_PTR v60; // [rsp+E8h] [rbp-E0h]
  _KPROCESS *Process; // [rsp+F0h] [rbp-D8h]
  _KPROCESS *v62; // [rsp+F8h] [rbp-D0h]
  _QWORD *v63; // [rsp+100h] [rbp-C8h]
  signed __int64 v64; // [rsp+108h] [rbp-C0h]
  PVOID v65; // [rsp+110h] [rbp-B8h]
  ULONG_PTR v66; // [rsp+118h] [rbp-B0h]
  ULONG_PTR v67; // [rsp+120h] [rbp-A8h]
  ULONG_PTR v68; // [rsp+128h] [rbp-A0h]
  _QWORD v69[2]; // [rsp+130h] [rbp-98h] BYREF
  unsigned int v70; // [rsp+140h] [rbp-88h]

  v60 = a4;
  v49 = a3;
  BugCheckParameter2 = a1;
  v66 = a1;
  v67 = a2;
  v54 = a3;
  v68 = a4;
  v42 = 0;
  v50 = 0;
  v45 = 0;
  CurrentThread = 0LL;
  v58 = 0LL;
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_1403882F8 = 65;
      return 3221226547LL;
    }
    a5 |= 0x10000000u;
  }
  if ( (a5 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 144) )
  {
    dword_1403882F8 = 22;
    return 3221225595LL;
  }
  v46 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v62 = Process;
  for ( i = ((a5 & 5) != 0) + 6; ; i |= 1u )
  {
    v48 = i;
    if ( (i & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v58 = CurrentThread;
      v45 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      if ( (*(_DWORD *)(a2 + 56) & 0x4000000) != 0 )
      {
        LODWORD(v10) = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( (v10 & 0x80000000) != 0LL )
          goto LABEL_81;
        v46 = 1;
      }
      MiPrefetchControlArea(a2, RtlpInterceptorRoutines, 0LL, 1LL, 0, 0xFFFFFFFF);
    }
    LODWORD(v10) = MiMapImageInSystemSpace(a2, i, v69);
    if ( (v10 & 0x80000000) != 0LL )
    {
      if ( v46 == 1 )
        MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
      if ( (i & 1) != 0 )
LABEL_81:
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v45);
      return (unsigned int)v10;
    }
    v11 = v70;
    v41 = v70;
    v57 = (PVOID)v69[0];
    v12 = *(_QWORD **)(a2 + 96);
    v52 = v12;
    v63 = v12;
    v13 = v12[1];
    v64 = v13;
    v14 = v13;
    v40 = v13;
    if ( v13 )
    {
      if ( (v13 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v15 = 1;
        v44 = 1;
        v35 = v13 & 3;
      }
      else
      {
        v38 = v13 & 3;
        if ( (v13 & 3) != 0 )
        {
          v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
          v15 = (v38 != 1) + 2;
        }
        else
        {
          v15 = v38 + 4;
        }
        v44 = v15;
        v35 = v14 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      v40 = v35;
    }
    else
    {
      v15 = 0;
      v44 = 0;
    }
    LODWORD(v16) = v69[0];
    P = (PVOID)v69[0];
    v39[0] = 1;
    v17 = 0LL;
    v51 = 0LL;
    v59 = 0LL;
    if ( *v12 )
    {
      v17 = MiRelocateAmount(a2, 1);
      v51 = v17;
      v59 = v17;
    }
    if ( v17 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11 << 12, 0x68496D4Du);
      v16 = PoolWithTag;
      P = PoolWithTag;
      v65 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(v10) = -1073741670;
        goto LABEL_15;
      }
      v53 = 0;
      v32 = (__int64)PoolWithTag;
      v55 = PoolWithTag;
      v33 = 0;
      v11 = v41;
      while ( 1 )
      {
        v43 = v33;
        if ( v33 >= v11 )
          break;
        KeCopyPage(v32, (__int64)v57 + 4096 * v33);
        v16 = P;
        v11 = v41;
        v33 = v43 + 1;
        v32 = (__int64)(v55 + 4096);
        v55 += 4096;
      }
      v34 = 0;
      v43 = 0;
      if ( v11 )
      {
        v51 = -v51;
        do
        {
          MiPerformFixups((ULONG_PTR)v16 + 4096 * v34, a2, 0LL, 0);
          v34 = v43 + 1;
          v43 = v34;
          v11 = v41;
          v16 = P;
        }
        while ( v34 < v41 );
      }
    }
    v18 = SeValidateImageHeader(
            BugCheckParameter2,
            (_DWORD)v16,
            v11 << 12,
            (_DWORD)Process,
            v60,
            a5,
            (__int64)&v40,
            a6,
            a7,
            (__int64)v39,
            (__int64)&v50);
    v10 = v18;
    if ( v18 == 301 )
    {
      MiImageCantMove(a2);
      v42 = 1;
LABEL_88:
      if ( (*(_DWORD *)(a2 + 56) & 0x40000000) != 0 )
        KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v10, 0LL);
      MiStrongCodeImage(a2, 1u);
      goto LABEL_15;
    }
    v22 = v42;
    if ( v18 == 302 )
      v22 = 1;
    v42 = v22;
    if ( v22 )
      goto LABEL_88;
LABEL_15:
    if ( P != v57 && P )
      ExFreePoolWithTag(P, 0);
    MiUnmapImageInSystemSpace(v69, v19, v20, v21);
    if ( v46 == 1 )
      MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
    if ( (i & 1) != 0 )
    {
      if ( (MiFlags & 0x40000) != 0 )
        MiFlushEntireTbDueToAttributeChange(v24, v23, v25);
      PsRevertToUserPagePriorityThread((__int64)v58, v45);
    }
    if ( (v10 & 0x80000000) == 0LL )
      break;
    if ( (_DWORD)v10 != -1073741789 || v41 == *(_DWORD *)(*(_QWORD *)a2 + 8LL) )
    {
      dword_1403882F8 = 4;
      return (unsigned int)v10;
    }
    CurrentThread = v58;
  }
  if ( !v15 || v15 == 1 && (v40 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v40 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v15 )
        v26 = v40 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v26 = v40 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v26 = v40 & 7 | 8;
    }
    v40 = v26;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v26 |= 4uLL;
      v40 = v26;
    }
    v27 = v52;
    while ( 1 )
    {
      v29 = _InterlockedCompareExchange64(v27 + 1, v26, v13);
      v28 = v13 == v29;
      v13 = v29;
      if ( v28 )
        break;
      if ( (v40 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_72;
      if ( (v29 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        v40 &= 0xFFFFFFFFFFFFFFF8uLL;
        SeReleaseImageValidationContext(v40);
LABEL_72:
        v40 = v13;
        break;
      }
      v26 = v40 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v40 = v26;
    }
    v13 = v40;
  }
  else
  {
    v36 = v15 - 2;
    v27 = v52;
    if ( v36 <= 1 )
      v40 = ((unsigned __int8)v13 ^ (unsigned __int8)v40) & 3 ^ (unsigned __int64)v40;
  }
  if ( (v40 & 3) == 0 )
  {
LABEL_29:
    *(_BYTE *)(*(_QWORD *)a2 + 15LL) = *(_BYTE *)(*(_QWORD *)a2 + 15LL) & 1 | (2 * ((8 * v39[0]) | v50 & 7));
    if ( v42 )
      MiStrongCodeImage(a2, 2u);
    return (unsigned int)v10;
  }
  if ( (MiFlags & 0x4000) != 0
    && (*(_DWORD *)(a2 + 92) & 0xC0000) != 0
    && *v27
    && (result = MiCaptureSecureImageBaseAddress(a2), (int)result < 0) )
  {
    dword_1403882F8 = 60;
  }
  else
  {
    result = MiWalkEntireImage((__int64 *)a2, 0LL, 1, v49);
    LODWORD(v10) = result;
    if ( (int)result >= 0 )
    {
      v37 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
      v40 &= 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
      {
        v37 |= 4uLL;
        v40 = v37;
      }
      _InterlockedCompareExchange64(v27 + 1, v37, v13);
      goto LABEL_29;
    }
    dword_1403882F8 = 59;
  }
  return result;
}
