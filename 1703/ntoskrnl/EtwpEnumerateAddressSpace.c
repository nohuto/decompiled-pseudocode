/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x1404FA9C0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1404B03C0 (EtwpProcessEnumCallback.c)
 *     EtwTraceProcess @ 0x1404ED910 (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14047AEF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpTraceImageRundown @ 0x1404F8E08 (EtwpTraceImageRundown.c)
 *     PerfLogImageUnload @ 0x1404F9690 (PerfLogImageUnload.c)
 *     FsRtlGetFileNameInformation @ 0x1404FAD10 (FsRtlGetFileNameInformation.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 */

void __fastcall EtwpEnumerateAddressSpace(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r9
  unsigned __int8 v5; // al
  int v6; // ecx
  char v7; // al
  int v8; // ebx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v10; // r14
  __int16 v11; // ax
  _QWORD *v12; // rax
  unsigned __int64 *v13; // rdi
  __m128i *v14; // r15
  int v15; // r12d
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r12
  char v19; // r12
  __int64 v20; // r13
  __int64 v21; // r13
  void *v22; // rax
  __int16 v23; // r13
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // edx
  unsigned __int64 v27; // rcx
  __m128i v28; // xmm1
  int v29; // eax
  __m128i v30; // xmm0
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  __m128i v34; // xmm0
  unsigned __int64 v35; // rdx
  unsigned int v36; // ecx
  int v37; // ecx
  char v38; // [rsp+30h] [rbp-D0h]
  char v39; // [rsp+38h] [rbp-C8h]
  __int16 v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h]
  int v43; // [rsp+5Ch] [rbp-A4h]
  int v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+64h] [rbp-9Ch]
  unsigned int v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+78h] [rbp-88h]
  int v49; // [rsp+7Ch] [rbp-84h]
  BOOL v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v52; // [rsp+90h] [rbp-70h]
  unsigned __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  void *v55; // [rsp+A8h] [rbp-58h]
  _QWORD *v56; // [rsp+B0h] [rbp-50h]
  __m128i v57; // [rsp+B8h] [rbp-48h]
  __m128i v58; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v59; // [rsp+108h] [rbp+8h] BYREF
  int v60; // [rsp+110h] [rbp+10h]
  int v61; // [rsp+114h] [rbp+14h]
  unsigned __int64 *v62; // [rsp+118h] [rbp+18h] BYREF
  int v63; // [rsp+120h] [rbp+20h]
  int v64; // [rsp+124h] [rbp+24h]

  v47 = a1;
  v4 = a1;
  if ( !a3 || (v5 = 1, (*a3 & 4) == 0) )
    v5 = 0;
  v6 = v5;
  if ( !a3 || (v7 = 1, (a3[1] & 0x8000) == 0) )
    v7 = 0;
  v8 = v6 | 4;
  if ( !v7 )
    v8 = v6;
  if ( a2 && a3 && (*a3 & 0x8000) != 0 )
    v8 |= 2u;
  if ( !v8 )
  {
    v10 = 0LL;
    goto LABEL_33;
  }
  if ( a2 )
  {
    v10 = *(unsigned __int16 **)(a2 + 16);
    v46 = *(_DWORD *)(a2 + 28);
    if ( *(_BYTE *)(a2 + 96) )
    {
      v44 = 5123;
      v42 = 1063;
      v45 = 640;
      goto LABEL_13;
    }
    LOWORD(v44) = 5124;
    LOWORD(v42) = 1064;
    v11 = 641;
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x66726550u);
    v4 = v47;
    v10 = PoolWithTag;
    LOWORD(v42) = 1062;
    v11 = 611;
    v46 = 0;
    LOWORD(v44) = 0;
  }
  LOWORD(v45) = v11;
LABEL_13:
  if ( !v10 )
  {
    v8 &= ~1u;
    if ( !v8 )
      goto LABEL_33;
  }
  LODWORD(v54) = 0;
  LODWORD(v53) = 0;
  v52 = 0LL;
  v40 = 0;
  v43 = 0;
  v41 = 0;
  v12 = MmEnumerateAddressSpaceAndReferenceImages(v4, v8);
  v56 = v12;
  if ( !v12 )
    goto LABEL_33;
  if ( !*v12 )
    goto LABEL_32;
  v13 = v12 + 1;
  do
  {
    v14 = (__m128i *)(v13 - 1);
    v49 = 0;
    v15 = 0;
    v16 = *(v13 - 1) & 3;
    *(v13 - 1) &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v16 )
    {
      v48 = v8 & 2;
      v50 = v48 != 0;
      if ( (v8 & 2) != 0 )
      {
        v27 = *v13;
        v54 = (*v13 >> 1) & 0x1F;
        v52 = v13[3];
        *v13 = v27 & 0xFFFFFFFFFFFFFFC0uLL;
        v53 = v27 & 1;
      }
      v17 = *v13;
      v18 = *v13 >> 6;
      *v13 &= 0xFFFFFFFFFFFFE03FuLL;
      v51 = 0LL;
      v19 = v18 & 0xF;
      v20 = (v17 >> 10) & 7;
      if ( (int)FsRtlGetFileNameInformation(v14->m128i_i64[0], 512LL, v10, &v51) < 0
        && (int)ObQueryNameStringMode(v14->m128i_i64[0], (_DWORD)v10, 0x2000, (unsigned int)&v41, 0) < 0 )
      {
        v21 = v47;
      }
      else if ( a2 )
      {
        v38 = v20;
        v21 = v47;
        EtwpTraceImageRundown(v46, v44, v10, *(_QWORD *)(v47 + 736), (__int64)(v13 - 1), v19, v38);
      }
      else
      {
        v39 = v20;
        v21 = v47;
        PerfLogImageUnload(v10, 0LL, *(_QWORD *)(v47 + 736), (void *)*v13, v13[2], *((_DWORD *)v13 + 8), v19, v39, 0);
      }
      if ( v51 )
        (*(void (**)(void))(FltMgrCallbacks + 24))();
      v22 = (void *)v14->m128i_i64[0];
      v55 = (void *)v14->m128i_i64[0];
      if ( v48 )
      {
        v28 = v14[1];
        v57 = *v14;
        v58 = v28;
        memset(v13 - 1, 0, 0x30uLL);
        v29 = *(_DWORD *)(v21 + 736);
        v15 = 3;
        v30 = v57;
        v23 = v42;
        v31 = v53 & 1;
        *((_DWORD *)v13 + 8) = v29;
        v40 = v23;
        v32 = *(_QWORD *)(v30.m128i_i64[0] + 24);
        v13[3] = v52;
        v33 = v54 & 0x1F;
        v14->m128i_i64[0] = _mm_srli_si128(v30, 8).m128i_u64[0];
        v34 = v58;
        *v13 = v32;
        v35 = v13[1] & 0xFF40FFFFFFFFFFFFuLL | ((v33 | (32 * v31)) << 48);
        v13[2] = _mm_srli_si128(v34, 8).m128i_u64[0];
        v43 = 0x8000;
        v22 = v55;
        v13[1] = v35 | 0x40000000000000LL;
        v41 = 44;
      }
      else
      {
        v15 = v49;
        v23 = v40;
      }
      ObfDereferenceObject(v22);
      v24 = v41;
      v25 = v50;
      v26 = v43;
LABEL_29:
      if ( !v25 )
        goto LABEL_30;
      goto LABEL_53;
    }
    if ( v16 != 2 )
    {
      v23 = v42;
      v24 = 44;
      v26 = 0x8000;
      v40 = v42;
      v43 = 0x8000;
      v41 = 44;
      v15 = 3;
      v25 = 1;
      goto LABEL_29;
    }
    v23 = v45;
    v26 = 536903680;
    v40 = v45;
    v43 = 536903680;
    if ( a2 )
    {
      v24 = 32;
      v41 = 32;
    }
    else
    {
      v41 = 24;
      *((_DWORD *)v13 + 3) = 0x8000;
      v24 = v41;
    }
LABEL_53:
    if ( a2 )
    {
      v36 = 5249026;
      if ( v15 )
        v36 = v15 | 0x501800;
      v59 = v13 - 1;
      v60 = v24;
      v61 = 0;
      EtwpLogKernelEvent((__int64)&v59, EtwpHostSiloState, v46, 1u, v23, v36);
    }
    else
    {
      v37 = 5249282;
      if ( v15 )
        v37 = v15 | 0x501900;
      v62 = v13 - 1;
      v63 = v24;
      v64 = 0;
      EtwTraceKernelEvent((int)&v62, 1, v26, v23, v37);
    }
LABEL_30:
    v13 += 6;
  }
  while ( *(v13 - 1) );
  v12 = v56;
LABEL_32:
  ExFreePoolWithTag(v12, 0);
LABEL_33:
  if ( !a2 )
  {
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
}
