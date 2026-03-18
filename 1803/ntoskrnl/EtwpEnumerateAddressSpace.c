/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x1404B4AE4
 * Callers:
 *     EtwTraceProcess @ 0x1404F846C (EtwTraceProcess.c)
 *     EtwpProcessEnumCallback @ 0x1406292D0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpTraceImageUnload @ 0x14003E620 (EtwpTraceImageUnload.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x1404A78E0 (ObQueryNameStringMode.c)
 *     FsRtlGetFileNameInformation @ 0x1404B6AA0 (FsRtlGetFileNameInformation.c)
 *     FsRtlReleaseFileNameInformation @ 0x14057B7A0 (FsRtlReleaseFileNameInformation.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140595C30 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpTraceImageRundown @ 0x140633820 (EtwpTraceImageRundown.c)
 */

void __fastcall EtwpEnumerateAddressSpace(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  __int64 v4; // r13
  __int64 v6; // r9
  int v7; // ecx
  int v8; // edx
  int v9; // ebx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v11; // rdi
  unsigned int v12; // r14d
  bool v13; // zf
  _QWORD *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // rbx
  char **v17; // r15
  int v18; // r12d
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r13
  char *v22; // rax
  int v23; // eax
  int v24; // ecx
  __int16 v25; // dx
  unsigned int v26; // r8d
  char v27; // cl
  char v28; // cl
  __m128i v29; // xmm1
  int v30; // eax
  __m128i v31; // xmm0
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
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
  __int64 v46; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+74h] [rbp-8Ch]
  BOOL v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  char *v55; // [rsp+A8h] [rbp-58h]
  _QWORD *v56; // [rsp+B0h] [rbp-50h]
  __m128i v57; // [rsp+B8h] [rbp-48h]
  __m128i v58; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v59; // [rsp+108h] [rbp+8h] BYREF
  int v60; // [rsp+110h] [rbp+10h]
  int v61; // [rsp+114h] [rbp+14h]
  unsigned __int64 *v62; // [rsp+118h] [rbp+18h] BYREF
  int v63; // [rsp+120h] [rbp+20h]
  int v64; // [rsp+124h] [rbp+24h]

  v46 = a1;
  v6 = a1;
  if ( !a3 || (v3 = *a3, v7 = 1, (*a3 & 4) == 0) )
    v7 = 0;
  HIWORD(v8) = 0;
  if ( !a3 || (v3 = a3[1], LOBYTE(v3) = 1, (a3[1] & 0x8000) == 0) )
    LOBYTE(v3) = 0;
  v9 = v7 | 4;
  if ( !(_BYTE)v3 )
    v9 = v7;
  if ( a2 )
  {
    if ( a3 )
    {
      v3 = *a3;
      if ( (*a3 & 0x8000) != 0 )
        v9 |= 2u;
    }
  }
  if ( !v9 )
  {
    v11 = 0LL;
    goto LABEL_34;
  }
  if ( a2 )
  {
    v27 = *(_BYTE *)(a2 + 104);
    v11 = *(unsigned __int16 **)(a2 + 16);
    v50 = *(_QWORD *)(a2 + 32);
    LOWORD(v8) = 5124 - (v27 != 0);
    v44 = v8;
    LOWORD(v4) = 1064 - (v27 != 0);
    LOWORD(v3) = 641 - (v27 != 0);
    v45 = v3;
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x66726550u);
    v6 = v46;
    v50 = 0LL;
    v11 = PoolWithTag;
    v44 = 0;
    LODWORD(v4) = 1062;
    v45 = 611;
  }
  v43 = v4;
  v12 = v9 & 0xFFFFFFFE;
  v13 = v11 == 0LL;
  if ( !v11 )
  {
    if ( !v12 )
      goto LABEL_34;
    v13 = 1;
  }
  if ( !v13 )
    v12 = v9;
  LODWORD(v54) = 0;
  LODWORD(v53) = 0;
  v52 = 0LL;
  v40 = 0;
  v42 = 0;
  v41 = 0;
  v14 = (_QWORD *)MmEnumerateAddressSpaceAndReferenceImages(v6, v12);
  v56 = v14;
  if ( v14 )
  {
    v15 = *v14;
    if ( !*v14 )
      goto LABEL_33;
    v16 = v14 + 1;
    while ( 1 )
    {
      v48 = 0;
      v17 = (char **)(v16 - 1);
      *(v16 - 1) = v15 & 0xFFFFFFFFFFFFFFFCuLL;
      v18 = 0;
      if ( (v15 & 3) != 0 )
      {
        if ( (v15 & 3) == 2 )
        {
          v25 = v45;
          v26 = 536903680;
          v40 = v45;
          v42 = 536903680;
          if ( a2 )
          {
            v23 = 32;
            v41 = 32;
          }
          else
          {
            v41 = 24;
            *((_DWORD *)v16 + 3) = 0x8000;
            v23 = v41;
          }
LABEL_52:
          if ( a2 )
          {
            v36 = 5249026;
            if ( v18 )
              v36 = v18 | 0x501800;
            v60 = v23;
            v59 = v16 - 1;
            v61 = 0;
            EtwpLogKernelEvent((__int64)&v59, *(_QWORD *)(v50 + 1112), *(_DWORD *)v50, 1u, v25, v36);
          }
          else
          {
            v37 = 5249282;
            if ( v18 )
              v37 = v18 | 0x501900;
            v62 = v16 - 1;
            v63 = v23;
            v64 = 0;
            EtwTraceKernelEvent((int)&v62, 1, v26, v25, v37);
          }
          goto LABEL_31;
        }
        v23 = 44;
        v25 = v4;
        v26 = 0x8000;
        v40 = v4;
        v42 = 0x8000;
        v41 = 44;
        v18 = 3;
        v24 = 1;
      }
      else
      {
        v47 = v12 & 2;
        v49 = v47 != 0;
        v19 = *v16;
        if ( (v12 & 2) != 0 )
        {
          v28 = *v16;
          v54 = (v19 >> 1) & 0x1F;
          v52 = v16[3];
          v19 &= 0xFFFFFFFFFFFFFFC0uLL;
          *v16 = v19;
          v53 = v28 & 1;
        }
        *v16 = v19 & 0xFFFFFFFFFFFFE03FuLL;
        v51 = 0LL;
        v20 = (v19 >> 6) & 0xF;
        v21 = (v19 >> 10) & 7;
        if ( (int)FsRtlGetFileNameInformation(*v17, 512LL, v11, &v51) < 0
          && (int)ObQueryNameStringMode(*v17, (__int64)v11, 0x2000u, &v41, 0) < 0 )
        {
          v4 = v46;
        }
        else if ( a2 )
        {
          v38 = v21;
          v4 = v46;
          EtwpTraceImageRundown(
            v50,
            (unsigned __int16)v44,
            (_DWORD)v11,
            *(_QWORD *)(v46 + 736),
            (__int64)(v16 - 1),
            v20,
            v38);
        }
        else
        {
          v39 = v21;
          v4 = v46;
          EtwpTraceImageUnload(v11, 0LL, v46, (void *)*v16, v16[2], *((_DWORD *)v16 + 8), v20, v39, 0, 1);
        }
        if ( v51 )
          FsRtlReleaseFileNameInformation();
        v22 = *v17;
        v55 = *v17;
        if ( v47 )
        {
          v29 = *((__m128i *)v17 + 1);
          v57 = *(__m128i *)v17;
          v58 = v29;
          memset(v16 - 1, 0, 0x30uLL);
          v30 = *(_DWORD *)(v4 + 736);
          v18 = 3;
          v31 = v57;
          LOWORD(v4) = v43;
          v32 = v53 & 1;
          *((_DWORD *)v16 + 8) = v30;
          v40 = v4;
          v33 = *(_QWORD *)(v31.m128i_i64[0] + 24);
          v16[3] = v52;
          v34 = v54 & 0x1F;
          *v16 = v33;
          *v17 = (char *)_mm_srli_si128(v31, 8).m128i_u64[0];
          v35 = v16[1] & 0xFF40FFFFFFFFFFFFuLL | ((v34 | (32 * v32)) << 48) | 0x40000000000000LL;
          v16[2] = _mm_srli_si128(v58, 8).m128i_u64[0];
          v22 = v55;
          v16[1] = v35;
          v41 = 44;
          v42 = 0x8000;
        }
        else
        {
          v18 = v48;
          LOWORD(v4) = v43;
        }
        ObfDereferenceObject(v22);
        v23 = v41;
        v24 = v49;
        v25 = v40;
        v26 = v42;
      }
      if ( v24 )
        goto LABEL_52;
LABEL_31:
      v15 = v16[5];
      v16 += 6;
      if ( !v15 )
      {
        v14 = v56;
LABEL_33:
        ExFreePoolWithTag(v14, 0);
        break;
      }
    }
  }
LABEL_34:
  if ( !a2 )
  {
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
}
