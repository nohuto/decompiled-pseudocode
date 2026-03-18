/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x1404524D0
 * Callers:
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 *     EtwpProcessEnumCallback @ 0x14074DE90 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PerfLogImageUnload @ 0x140452774 (PerfLogImageUnload.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140452B80 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 *     FsRtlGetFileNameInformation @ 0x1404D2F40 (FsRtlGetFileNameInformation.c)
 *     FsRtlReleaseFileNameInformation @ 0x140595310 (FsRtlReleaseFileNameInformation.c)
 *     EtwpTraceImageRundown @ 0x14074EE68 (EtwpTraceImageRundown.c)
 */

void __fastcall EtwpEnumerateAddressSpace(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v4; // r9
  int v5; // ecx
  char v6; // al
  int v7; // ebx
  PVOID PoolWithTag; // rax
  void *v9; // r14
  __int16 v10; // ax
  _QWORD *v11; // rax
  unsigned __int64 *v12; // rdi
  __m128i *v13; // r15
  int v14; // r12d
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  int v18; // r12d
  __int64 v19; // r13
  ULONG_PTR v20; // r13
  void *v21; // rax
  unsigned __int16 v22; // r13
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // edx
  unsigned __int64 v26; // rcx
  __m128i v27; // xmm1
  int v28; // eax
  __m128i v29; // xmm0
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __m128i v33; // xmm0
  unsigned __int64 v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  char v37; // [rsp+30h] [rbp-D0h]
  int v38; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+5Ch] [rbp-A4h]
  int v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+64h] [rbp-9Ch]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+74h] [rbp-8Ch]
  BOOL v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  void *v54; // [rsp+A8h] [rbp-58h]
  _QWORD *v55; // [rsp+B0h] [rbp-50h]
  __m128i v56; // [rsp+B8h] [rbp-48h]
  __m128i v57; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v58; // [rsp+108h] [rbp+8h] BYREF
  int v59; // [rsp+110h] [rbp+10h]
  int v60; // [rsp+114h] [rbp+14h]
  unsigned __int64 *v61; // [rsp+118h] [rbp+18h] BYREF
  int v62; // [rsp+120h] [rbp+20h]
  int v63; // [rsp+124h] [rbp+24h]

  BugCheckParameter1 = a1;
  v4 = a1;
  if ( !a3 || (v5 = 1, (*a3 & 4) == 0) )
    v5 = 0;
  if ( !a3 || (v6 = 1, (a3[1] & 0x8000) == 0) )
    v6 = 0;
  v7 = v5 | 4;
  if ( !v6 )
    v7 = v5;
  if ( a2 && a3 && (*a3 & 0x8000) != 0 )
    v7 |= 2u;
  if ( !v7 )
  {
    v9 = 0LL;
    goto LABEL_33;
  }
  if ( a2 )
  {
    v9 = *(void **)(a2 + 16);
    v49 = *(_QWORD *)(a2 + 32);
    if ( *(_BYTE *)(a2 + 104) )
    {
      v43 = 5123;
      v41 = 1063;
      v44 = 640;
      goto LABEL_13;
    }
    LOWORD(v43) = 5124;
    LOWORD(v41) = 1064;
    v10 = 641;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x66726550u);
    v4 = BugCheckParameter1;
    v9 = PoolWithTag;
    LOWORD(v41) = 1062;
    v10 = 611;
    v49 = 0LL;
    LOWORD(v43) = 0;
  }
  LOWORD(v44) = v10;
LABEL_13:
  if ( !v9 )
  {
    v7 &= ~1u;
    if ( !v7 )
      goto LABEL_33;
  }
  LODWORD(v53) = 0;
  LODWORD(v52) = 0;
  v51 = 0LL;
  v39 = 0;
  v42 = 0;
  v40 = 0;
  v11 = (_QWORD *)MmEnumerateAddressSpaceAndReferenceImages(v4);
  v55 = v11;
  if ( !v11 )
    goto LABEL_33;
  if ( !*v11 )
    goto LABEL_32;
  v12 = v11 + 1;
  do
  {
    v13 = (__m128i *)(v12 - 1);
    v47 = 0;
    v14 = 0;
    v15 = *(v12 - 1) & 3;
    *(v12 - 1) &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v15 )
    {
      v46 = v7 & 2;
      v48 = v46 != 0;
      if ( (v7 & 2) != 0 )
      {
        v26 = *v12;
        v53 = (*v12 >> 1) & 0x1F;
        v51 = v12[3];
        *v12 = v26 & 0xFFFFFFFFFFFFFFC0uLL;
        v52 = v26 & 1;
      }
      v16 = *v12;
      v17 = *v12 >> 6;
      *v12 &= 0xFFFFFFFFFFFFE03FuLL;
      v50 = 0LL;
      v18 = v17 & 0xF;
      v19 = (v16 >> 10) & 7;
      if ( (int)FsRtlGetFileNameInformation(v13->m128i_i64[0], 512LL, v9, &v50) < 0
        && (int)ObQueryNameStringMode(v13->m128i_i64[0], (_DWORD)v9, 0x2000, (unsigned int)&v40, 0) < 0 )
      {
        v20 = BugCheckParameter1;
      }
      else if ( a2 )
      {
        v37 = v19;
        v20 = BugCheckParameter1;
        EtwpTraceImageRundown(
          v49,
          (unsigned __int16)v43,
          (_DWORD)v9,
          *(_QWORD *)(BugCheckParameter1 + 736),
          (__int64)(v12 - 1),
          v18,
          v37);
      }
      else
      {
        v38 = v19;
        v20 = BugCheckParameter1;
        PerfLogImageUnload(v9, 0LL, BugCheckParameter1, *v12, v12[2], *((_DWORD *)v12 + 8), v18, v38, 0);
      }
      if ( v50 )
        FsRtlReleaseFileNameInformation();
      v21 = (void *)v13->m128i_i64[0];
      v54 = (void *)v13->m128i_i64[0];
      if ( v46 )
      {
        v27 = v13[1];
        v56 = *v13;
        v57 = v27;
        memset(v12 - 1, 0, 0x30uLL);
        v28 = *(_DWORD *)(v20 + 736);
        v14 = 3;
        v29 = v56;
        v22 = v41;
        v30 = v52 & 1;
        *((_DWORD *)v12 + 8) = v28;
        v39 = v22;
        v31 = *(_QWORD *)(v29.m128i_i64[0] + 24);
        v12[3] = v51;
        v32 = v53 & 0x1F;
        v13->m128i_i64[0] = _mm_srli_si128(v29, 8).m128i_u64[0];
        v33 = v57;
        *v12 = v31;
        v34 = v12[1] & 0xFF40FFFFFFFFFFFFuLL | ((v32 | (32 * v30)) << 48);
        v12[2] = _mm_srli_si128(v33, 8).m128i_u64[0];
        v42 = 0x8000;
        v21 = v54;
        v12[1] = v34 | 0x40000000000000LL;
        v40 = 44;
      }
      else
      {
        v14 = v47;
        v22 = v39;
      }
      ObfDereferenceObject(v21);
      v23 = v40;
      v24 = v48;
      v25 = v42;
LABEL_29:
      if ( !v24 )
        goto LABEL_30;
      goto LABEL_53;
    }
    if ( v15 != 2 )
    {
      v22 = v41;
      v23 = 44;
      v25 = 0x8000;
      v39 = v41;
      v42 = 0x8000;
      v40 = 44;
      v14 = 3;
      v24 = 1;
      goto LABEL_29;
    }
    v22 = v44;
    v25 = 536903680;
    v39 = v44;
    v42 = 536903680;
    if ( a2 )
    {
      v23 = 32;
      v40 = 32;
    }
    else
    {
      v40 = 24;
      *((_DWORD *)v12 + 3) = 0x8000;
      v23 = v40;
    }
LABEL_53:
    if ( a2 )
    {
      v35 = 5249026;
      if ( v14 )
        v35 = v14 | 0x501800;
      v59 = v23;
      v58 = v12 - 1;
      v60 = 0;
      EtwpLogKernelEvent((__int64)&v58, *(_QWORD *)(v49 + 2256), *(_DWORD *)v49, 1u, v22, v35);
    }
    else
    {
      v36 = 5249282;
      if ( v14 )
        v36 = v14 | 0x501900;
      v61 = v12 - 1;
      v62 = v23;
      v63 = 0;
      EtwTraceKernelEvent((__int64)&v61, 1u, v25, v22, v36);
    }
LABEL_30:
    v12 += 6;
  }
  while ( *(v12 - 1) );
  v11 = v55;
LABEL_32:
  ExFreePoolWithTag(v11, 0);
LABEL_33:
  if ( !a2 )
  {
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
}
