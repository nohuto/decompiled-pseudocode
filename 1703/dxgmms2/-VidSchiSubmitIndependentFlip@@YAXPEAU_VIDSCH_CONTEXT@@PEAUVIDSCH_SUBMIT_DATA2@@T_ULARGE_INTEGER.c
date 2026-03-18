/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0023478
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C000BEA0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 * Callees:
 *     memmove @ 0x1C0015C80 (memmove.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pqqpqqqxxqq @ 0x1C00246DC (Template_pqqpqqqxxqq.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3)
{
  unsigned int *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rsi
  DWORD LowPart; // ebx
  char v8; // dl
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rax
  char v12; // cl
  unsigned int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // r13
  __int64 v16; // r9
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // r8d
  bool j; // zf
  int v23; // eax
  char v24; // cl
  __int64 v25; // rsi
  _DWORD *v26; // rdi
  int v27; // ecx
  int v28; // eax
  char v29; // r8
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  unsigned int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // r9
  char v43; // [rsp+70h] [rbp-68h]
  int v44; // [rsp+74h] [rbp-64h]
  __int64 v45; // [rsp+88h] [rbp-50h]
  int v47; // [rsp+E8h] [rbp+10h]
  int v48; // [rsp+F0h] [rbp+18h]
  __int64 i; // [rsp+F8h] [rbp+20h]
  unsigned int v50; // [rsp+F8h] [rbp+20h]

  v11 = *((unsigned int *)a2 + 29);
  v3 = (unsigned int *)((char *)a2 + 432);
  v4 = *((_QWORD *)a1 + 13);
  v5 = (unsigned int)v11;
  v44 = *((_DWORD *)a2 + 29);
  LowPart = a3.LowPart;
  v8 = -1;
  v9 = *(_QWORD *)(v4 + 32);
  v10 = *(_QWORD *)(v9 + 8 * v11 + 2992);
  j = !_BitScanForward((unsigned int *)&v11, (unsigned __int8)*v3);
  if ( !j )
    v8 = v11;
  v12 = 0;
  if ( v8 != -1 )
    v12 = v8;
  v13 = 0;
  v14 = (unsigned int)v12;
  v15 = 272 * v14;
  v43 = v12;
  for ( i = v14; v13 < *((_DWORD *)a2 + 35); ++v13 )
  {
    v16 = *(_QWORD *)((char *)&v3[12 * v13 * v3[1] + 12] + v3[1] * ((8 * v3[2] + 167) & 0xFFFFFFF8));
    *(_QWORD *)((char *)&v3[12 * v13 * v3[1] + 10] + v3[1] * ((8 * v3[2] + 167) & 0xFFFFFFF8)) = *(_QWORD *)(*(_QWORD *)(v16 + 96) + 24LL);
    v17 = *(unsigned __int16 *)(*(_QWORD *)(v16 + 96) + 6LL);
    if ( *((_BYTE *)a2 + 348) )
      *(_WORD *)((char *)&v3[12 * v13 * v3[1] + 8] + v3[1] * ((8 * v3[2] + 167) & 0xFFFFFFF8)) = v17;
    else
      *((_DWORD *)a2 + 119) ^= (*((_DWORD *)a2 + 119) ^ (v17 << 17)) & 0x3E0000;
  }
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 && (v48 = *((_DWORD *)a2 + 36), v48 == *(_DWORD *)(v10 + v15 + 120)) )
  {
    v47 = *((_DWORD *)a2 + 37);
  }
  else
  {
    v48 = 0;
    v47 = *((_DWORD *)a2 + 31);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v5 + 1060));
  v18 = *(unsigned int *)(*(_QWORD *)(v4 + 32) + 4LL);
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 24LL) + 8 * v18) + 8 * v5 + 520);
  if ( (*(_DWORD *)a2 & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8 * v5 + 5544) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
  if ( *(_DWORD *)(v10 + v15 + 156) == 1 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v19, v18);
    v20[3] = *((_QWORD *)a2 + 13);
    v20[4] = *((unsigned int *)a2 + 28);
    v20[5] = v47;
    v20[6] = *(_QWORD *)((char *)v3 + v3[1] * ((8 * v3[2] + 167) & 0xFFFFFFF8) + 40);
    v20[7] = *(unsigned __int16 *)((char *)v3 + v3[1] * ((8 * v3[2] + 167) & 0xFFFFFFF8) + 32);
    WdLogEvent5_WdPresentTokenEvent(v20);
    *(_DWORD *)(v10 + v15 + 168) = 0;
    v14 = i;
    *(_DWORD *)(v10 + v15 + 156) = 2;
  }
  ++*(_DWORD *)(v9 + 964);
  ++*(_DWORD *)(v4 + 1192);
  ++*(_DWORD *)(v9 + 968);
  ++*(_DWORD *)(v10 + 2304);
  ++*(_DWORD *)(v10 + v15 + 168);
  ++*(_DWORD *)(v10 + 2300);
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 )
    v21 = (unsigned __int8)*v3 | *((unsigned __int8 *)v3 + 1);
  else
    v21 = (1 << *(_DWORD *)(v9 + 128)) - 1;
  for ( j = !_BitScanForward((unsigned int *)&v23, v21); ; j = !_BitScanForward((unsigned int *)&v23, v21) )
  {
    v24 = -1;
    if ( !j )
      v24 = v23;
    if ( !v21 )
      break;
    ++*(_DWORD *)(272LL * v24 + *(_QWORD *)(v9 + 8 * v5 + 2992) + 164);
    v21 &= ~(1 << v24);
  }
  v45 = *(_QWORD *)(v10 + 8 * v14 + 24);
  v50 = *(_DWORD *)(v45 + 32);
  v25 = v45 + 1224LL * v50;
  v26 = *(_DWORD **)(v25 + 1208);
  memset((void *)(v25 + 56), 0, 0x4C8uLL);
  *(_QWORD *)(v25 + 1208) = v26;
  memset(v26 + 4, 0, v26[1] * (48 * v26[2] + ((8 * v26[2] + 167) & 0xFFFFFFF8)));
  v27 = *(_DWORD *)(v25 + 1168);
  *(_QWORD *)(v25 + 1176) = *((_QWORD *)a2 + 12);
  v27 |= 0x20u;
  *(_QWORD *)(v25 + 1184) = *((_QWORD *)a2 + 13);
  *(_DWORD *)(v25 + 1168) = v27;
  *(_DWORD *)(v25 + 1168) = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(*(_DWORD *)a2 >> 22)) & 0x10;
  v28 = *((_DWORD *)a2 + 36);
  if ( v28 != *(_DWORD *)(v10 + v15 + 124) )
  {
    *(_DWORD *)(v10 + v15 + 124) = v28;
    *(_DWORD *)(v25 + 1168) |= 0x40u;
  }
  *(_DWORD *)(v25 + 1096) = LowPart;
  *(_DWORD *)(v25 + 1100) = 1;
  *(_DWORD *)(v25 + 1104) = *((_DWORD *)a2 + 28);
  *(_QWORD *)(v25 + 576) = *((_QWORD *)a1 + 19);
  *(_BYTE *)(v25 + 1112) = (*(_DWORD *)a2 & 0x10) != 0;
  if ( *(_DWORD *)(v9 + 2168) == 1 )
  {
    v29 = 0;
LABEL_33:
    if ( !v29 )
      goto LABEL_36;
    goto LABEL_34;
  }
  if ( *(_DWORD *)(v9 + 2168) != 2 )
  {
    v29 = (*(_DWORD *)a2 & 0x10000000) != 0;
    goto LABEL_33;
  }
  v29 = 1;
LABEL_34:
  if ( (*(_DWORD *)(v25 + 1168) & 0x10) != 0 )
    v29 = *(_BYTE *)(v9 + 132) != 0 ? v29 : 0;
LABEL_36:
  v30 = *(_DWORD *)(v25 + 1168) ^ (*(_DWORD *)(v25 + 1168) ^ (*(_DWORD *)a2 >> 19)) & 1;
  *(_DWORD *)(v25 + 1168) = v30;
  v31 = ((unsigned __int8)v30 ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 2 ^ v30;
  *(_DWORD *)(v25 + 1168) = v31;
  v32 = ((unsigned __int8)v31 ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 4 ^ v31;
  *(_DWORD *)(v25 + 1168) = v32;
  v33 = ((unsigned __int8)v32 ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 8 ^ v32;
  *(_DWORD *)(v25 + 1168) = v33;
  *(_QWORD *)(v25 + 1192) = *((_QWORD *)a2 + 3);
  *(_QWORD *)(v25 + 1200) = *((_QWORD *)a2 + 4);
  v34 = (v33 ^ (*(_DWORD *)a2 >> 21)) & 0x400 ^ v33;
  *(_DWORD *)(v25 + 1168) = v34;
  if ( (v34 & 0x400) != 0 )
  {
    *(_OWORD *)(v25 + 1248) = *((_OWORD *)a2 + 24);
    *(_OWORD *)(v25 + 1264) = *((_OWORD *)a2 + 25);
  }
  v35 = 0;
  *(_DWORD *)(v25 + 1128) = *((_DWORD *)a2 + 35);
  for ( *(_DWORD *)(v25 + 1124) = *((_DWORD *)a2 + 35); v35 < *((_DWORD *)a2 + 35); ++v35 )
  {
    v36 = 8LL * v35;
    v37 = *(_QWORD *)((char *)a2 + v36 + *((unsigned int *)a2 + 104));
    *(_QWORD *)(v36 + v25 + 56) = v37;
    ++*(_DWORD *)(v37 + 800);
    _InterlockedAdd(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)&v3[12 * v35 * v3[1] + 12]
                                                                    + v3[1] * ((8 * v3[2] + 167) & 0xFFFFFFF8))
                                                        + 96LL)
                                            + 16LL)
                                + 8LL),
      1u);
  }
  j = *(_BYTE *)(v25 + 1112) == 0;
  *(_DWORD *)(v25 + 1172) = v48;
  if ( j )
  {
    if ( v47 )
    {
      *(_DWORD *)(v25 + 1108) = v47 - 1;
    }
    else
    {
      v38 = *(_DWORD *)(v25 + 1168);
      *(_DWORD *)(v25 + 1108) = 0;
      v39 = v38 | 0x80;
      *(_DWORD *)(v25 + 1168) = v39;
      if ( v29 )
        *(_DWORD *)(v25 + 1168) = v39 | 0x100;
    }
  }
  else
  {
    *(_DWORD *)(v25 + 1108) = 0;
    if ( v29 )
      *(_DWORD *)(v25 + 1168) |= 0x180u;
  }
  memmove(*(void **)(v25 + 1208), v3, v3[3]);
  *(_DWORD *)(v25 + 1116) = *((_DWORD *)a2 + 34);
  *(_DWORD *)(v25 + 1120) = *((_DWORD *)a2 + 34);
  if ( (*(_DWORD *)a2 & 0x800) != 0 )
    *(_BYTE *)(v25 + 1113) = 1;
  *(_DWORD *)(v45 + 32) = ((_BYTE)v50 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 972));
  _InterlockedIncrement((volatile signed __int32 *)(v10 + 2308));
  if ( bTracingEnabled )
  {
    v41 = *((_QWORD *)a2 + 22);
    if ( v41 )
    {
      v42 = *((_QWORD *)a1 + 7);
      if ( !v42 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
        LODWORD(v42) = (_DWORD)a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_pqqpqqqxxqq(
          v41,
          (_DWORD)a1,
          v40,
          v42,
          LowPart,
          v44,
          v41,
          v47,
          v43,
          *((_DWORD *)a2 + 46),
          *(_QWORD *)(v10 + v15 + 128),
          *(_QWORD *)(v10 + v15 + 136),
          *((_DWORD *)a2 + 28),
          BYTE1(*(_DWORD *)(v25 + 1168)) & 1);
    }
  }
  VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v9);
}
