/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0013DE0
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0013570 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C000D690 (VidSchUnwaitFlipQueue.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0014424 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     McTemplateK0pqqpqqqxxqq @ 0x1C0029360 (McTemplateK0pqqpqqqxxqq.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3,
        struct _VIDSCH_DEVICE *a4)
{
  __int64 v4; // rax
  unsigned int *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rdi
  DWORD LowPart; // ebx
  struct VIDSCH_SUBMIT_DATA2 *v11; // rsi
  char v12; // r8
  char v13; // cl
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // r14
  unsigned int i; // r10d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  bool j; // zf
  int v26; // eax
  char v27; // cl
  __int64 v28; // rdi
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  char v33; // dl
  char v34; // r8
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // r9d
  int v40; // eax
  unsigned int v41; // r9d
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // edx
  int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // r9
  _QWORD *v49; // rax
  int v50; // ecx
  int v51; // ecx
  int v52; // [rsp+70h] [rbp-68h]
  __int64 v53; // [rsp+80h] [rbp-58h]
  __int64 v54; // [rsp+88h] [rbp-50h]
  int v55; // [rsp+E0h] [rbp+8h]
  int v56; // [rsp+E8h] [rbp+10h]
  __int64 v57; // [rsp+F0h] [rbp+18h]
  unsigned int v58; // [rsp+F0h] [rbp+18h]
  char v59; // [rsp+F8h] [rbp+20h]

  v4 = *((unsigned int *)a2 + 29);
  v5 = (unsigned int *)((char *)a2 + 496);
  v6 = *((_QWORD *)a4 + 4);
  v7 = (unsigned int)v4;
  v52 = *((_DWORD *)a2 + 29);
  LowPart = a3.LowPart;
  v11 = a2;
  v12 = -1;
  v53 = *(_QWORD *)(v6 + 8 * v4 + 3032);
  j = !_BitScanForward((unsigned int *)&a2, *((_DWORD *)a2 + 124) & 0x3FF);
  if ( !j )
    v12 = (char)a2;
  v13 = 0;
  if ( v12 != -1 )
    v13 = v12;
  v14 = (unsigned int)v13;
  v59 = v13;
  v57 = v14;
  v15 = *(int *)(216 * v14 + *(_QWORD *)(v6 + 8 * v4 + 3032) + 140);
  if ( (int)v15 <= -1 )
    v16 = 0LL;
  else
    v16 = *(_QWORD *)(v6 + 3160) + 136 * v15;
  for ( i = 0;
        i < *((_DWORD *)v11 + 35);
        *(_WORD *)((char *)&v5[12 * v21 + 8] + v20) = *(_WORD *)(*(_QWORD *)(v19 + 96) + 6LL) )
  {
    v18 = 48LL * i * v5[1] + v5[1] * ((8 * v5[2] + 175) & 0xFFFFFFF8);
    v19 = *(_QWORD *)((char *)v5 + v18 + 48);
    *(_QWORD *)((char *)v11 + v18 + 536) = *(_QWORD *)(*(_QWORD *)(v19 + 96) + 24LL);
    LODWORD(v18) = v5[1];
    v20 = (unsigned int)v18 * ((8 * v5[2] + 175) & 0xFFFFFFF8);
    v21 = i * (unsigned int)v18;
    ++i;
  }
  if ( (*(_DWORD *)v11 & 0x2000000) != 0 && (v56 = *((_DWORD *)v11 + 36), v56 == *(_DWORD *)(v16 + 100)) )
  {
    v55 = *((_DWORD *)v11 + 37);
  }
  else
  {
    v56 = 0;
    v55 = *((_DWORD *)v11 + 31);
  }
  _InterlockedIncrement((volatile signed __int32 *)a4 + (unsigned int)v4 + 271);
  v22 = *(unsigned int *)(*((_QWORD *)a4 + 4) + 4LL);
  v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 5) + 24LL) + 8 * v22) + 8LL * (unsigned int)v4 + 520);
  if ( (*(_DWORD *)v11 & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 8LL * (unsigned int)v4 + 6248) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
  if ( *(_DWORD *)(v16 + 112) == 1 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v23, v22);
    v49[3] = *((_QWORD *)v11 + 13);
    v49[4] = *((unsigned int *)v11 + 28);
    v49[5] = v55;
    v49[6] = *(_QWORD *)((char *)v5 + v5[1] * ((8 * v5[2] + 175) & 0xFFFFFFF8) + 40);
    v49[7] = *(unsigned __int16 *)((char *)v5 + v5[1] * ((8 * v5[2] + 175) & 0xFFFFFFF8) + 32);
    WdLogEvent5_WdPresentTokenEvent(v49);
    *(_DWORD *)(v16 + 116) = 0;
    v14 = v57;
    *(_DWORD *)(v16 + 112) = 2;
  }
  ++*(_DWORD *)(v6 + 980);
  ++*((_DWORD *)a4 + 304);
  ++*(_DWORD *)(v16 + 116);
  ++*(_DWORD *)(v53 + 2300);
  if ( (*(_DWORD *)v11 & 0x4000000) != 0 )
    v24 = ((unsigned __int16)*v5 | (unsigned __int16)(*v5 >> 10)) & 0x3FF;
  else
    v24 = (1 << *(_DWORD *)(v6 + 132)) - 1;
  for ( j = !_BitScanForward((unsigned int *)&v26, v24); ; j = !_BitScanForward((unsigned int *)&v26, v24) )
  {
    v27 = -1;
    if ( !j )
      v27 = v26;
    if ( !v24 )
      break;
    ++*(_DWORD *)(216LL * v27 + *(_QWORD *)(v6 + 8 * v7 + 3032) + 148);
    v24 &= ~(1 << v27);
  }
  v54 = *(_QWORD *)(v53 + 8 * v14 + 24);
  v58 = *(_DWORD *)(v54 + 32);
  v28 = v54 + 1280LL * v58;
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v28 + 56));
  v29 = *(_DWORD *)(v28 + 1176);
  *(_QWORD *)(v28 + 1184) = *((_QWORD *)v11 + 12);
  v29 |= 0x20u;
  *(_QWORD *)(v28 + 1192) = *((_QWORD *)v11 + 13);
  *(_DWORD *)(v28 + 1176) = v29;
  v30 = ((unsigned __int8)v29 ^ (unsigned __int8)(*(_DWORD *)v11 >> 22)) & 0x10 ^ v29;
  *(_DWORD *)(v28 + 1176) = v30;
  if ( (*(_DWORD *)v11 & 8) != 0 && *(_DWORD *)(v6 + 2208) == 2 )
    *(_DWORD *)(v28 + 1176) = v30 | 0x800;
  v31 = *((_DWORD *)v11 + 36);
  if ( v31 != *(_DWORD *)(v16 + 104) )
  {
    *(_DWORD *)(v16 + 104) = v31;
    *(_DWORD *)(v28 + 1176) |= 0x40u;
  }
  *(_DWORD *)(v28 + 1104) = LowPart;
  *(_DWORD *)(v28 + 1108) = 1;
  *(_DWORD *)(v28 + 1112) = *((_DWORD *)v11 + 28);
  if ( a1 )
  {
    *(_QWORD *)(v28 + 576) = *((_QWORD *)a1 + 20);
    *(_DWORD *)(v28 + 1136) = *((_DWORD *)v11 + 35);
    *(_DWORD *)(v28 + 1132) = *((_DWORD *)v11 + 35);
    v32 = *((_DWORD *)v11 + 35);
  }
  else
  {
    *(_QWORD *)(v28 + 1132) = 0LL;
    v32 = 1;
  }
  *(_DWORD *)(v28 + 1140) = v32;
  *(_QWORD *)(v28 + 1096) = a4;
  v33 = (*(_DWORD *)v11 & 0x10) != 0;
  *(_BYTE *)(v28 + 1120) = v33;
  if ( *(_DWORD *)(v6 + 2204) == 1 )
  {
    v34 = 0;
LABEL_29:
    if ( !v34 )
      goto LABEL_32;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v6 + 2204) != 2 )
  {
    v34 = (*(_DWORD *)v11 & 0x10000000) != 0;
    goto LABEL_29;
  }
  v34 = 1;
LABEL_30:
  if ( (*(_DWORD *)(v28 + 1176) & 0x10) != 0 )
    v34 = *(_BYTE *)(v6 + 136) != 0 ? v34 : 0;
LABEL_32:
  v35 = *(_DWORD *)(v28 + 1176) ^ (*(_DWORD *)(v28 + 1176) ^ (*(_DWORD *)v11 >> 19)) & 1;
  *(_DWORD *)(v28 + 1176) = v35;
  v36 = ((unsigned __int8)v35 ^ (unsigned __int8)(*(_DWORD *)v11 >> 19)) & 2 ^ v35;
  *(_DWORD *)(v28 + 1176) = v36;
  v37 = ((unsigned __int8)v36 ^ (unsigned __int8)(*(_DWORD *)v11 >> 19)) & 4 ^ v36;
  *(_DWORD *)(v28 + 1176) = v37;
  v38 = ((unsigned __int8)v37 ^ (unsigned __int8)(*(_DWORD *)v11 >> 19)) & 8 ^ v37;
  *(_DWORD *)(v28 + 1176) = v38;
  *(_QWORD *)(v28 + 1200) = *((_QWORD *)v11 + 3);
  *(_QWORD *)(v28 + 1208) = *((_QWORD *)v11 + 4);
  v39 = v38 ^ (v38 ^ (*(_DWORD *)v11 >> 21)) & 0x200;
  *(_DWORD *)(v28 + 1176) = v39;
  if ( (v39 & 0x200) != 0 )
  {
    v50 = *((_DWORD *)v11 + 88);
    *(_DWORD *)(v28 + 1224) = v50;
    v51 = v50 - 1;
    if ( v51 )
    {
      if ( v51 == 1 )
      {
        *(_OWORD *)(v28 + 1228) = *(_OWORD *)((char *)v11 + 356);
        *(_OWORD *)(v28 + 1244) = *(_OWORD *)((char *)v11 + 372);
        *(_OWORD *)(v28 + 1260) = *(_OWORD *)((char *)v11 + 388);
        *(_OWORD *)(v28 + 1276) = *(_OWORD *)((char *)v11 + 404);
        *(_QWORD *)(v28 + 1292) = *(_QWORD *)((char *)v11 + 420);
      }
    }
    else
    {
      *(_OWORD *)(v28 + 1228) = *(_OWORD *)((char *)v11 + 356);
      *(_QWORD *)(v28 + 1244) = *(_QWORD *)((char *)v11 + 372);
      *(_DWORD *)(v28 + 1252) = *((_DWORD *)v11 + 95);
    }
  }
  else
  {
    *(_DWORD *)(v28 + 1224) = 0;
  }
  v40 = v39 ^ (v39 ^ (*(_DWORD *)v11 >> 21)) & 0x400;
  *(_DWORD *)(v28 + 1176) = v40;
  if ( (v40 & 0x400) != 0 )
  {
    *(_OWORD *)(v28 + 1300) = *(_OWORD *)((char *)v11 + 428);
    *(_OWORD *)(v28 + 1316) = *(_OWORD *)((char *)v11 + 444);
  }
  v41 = 0;
  if ( *(_DWORD *)(v28 + 1140) )
  {
    do
    {
      if ( a1 )
      {
        v42 = 8LL * v41;
        v43 = *(_QWORD *)((char *)v11 + v42 + *((unsigned int *)v11 + 120));
        *(_QWORD *)(v42 + v28 + 56) = v43;
        ++*(_DWORD *)(v43 + 784);
      }
      _InterlockedAdd(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)&v5[12 * v41 * v5[1] + 12]
                                                                      + v5[1] * ((8 * v5[2] + 175) & 0xFFFFFFF8))
                                                          + 96LL)
                                              + 16LL)
                                  + 8LL),
        1u);
      ++v41;
    }
    while ( v41 < *(_DWORD *)(v28 + 1140) );
    v33 = *(_BYTE *)(v28 + 1120);
  }
  *(_DWORD *)(v28 + 1180) = v56;
  if ( v33 )
  {
    *(_DWORD *)(v28 + 1116) = 0;
    if ( v55 )
      goto LABEL_46;
  }
  else
  {
    if ( v55 )
    {
      *(_DWORD *)(v28 + 1116) = v55 - 1;
      goto LABEL_46;
    }
    *(_DWORD *)(v28 + 1116) = 0;
  }
  v44 = *(_DWORD *)(v28 + 1176) | 0x80;
  *(_DWORD *)(v28 + 1176) = v44;
  if ( v34 )
    *(_DWORD *)(v28 + 1176) = v44 | 0x100;
LABEL_46:
  memmove(*(void **)(v28 + 1216), v5, v5[3]);
  *(_DWORD *)(v28 + 1124) = *((_DWORD *)v11 + 34);
  *(_DWORD *)(v28 + 1128) = *((_DWORD *)v11 + 34);
  if ( (*(_DWORD *)v11 & 0x800) != 0 )
    *(_BYTE *)(v28 + 1121) = 1;
  *(_DWORD *)(v54 + 32) = ((_BYTE)v58 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 984));
  _InterlockedIncrement((volatile signed __int32 *)(v53 + 2304));
  if ( bTracingEnabled )
  {
    v47 = *((_QWORD *)v11 + 22);
    if ( v47 )
    {
      if ( a1 )
      {
        v48 = *((_QWORD *)a1 + 7);
        if ( !v48 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          LODWORD(v48) = (_DWORD)a1;
      }
      else
      {
        LODWORD(v48) = 0;
      }
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqqpqqqxxqq(
          v47,
          v45,
          v46,
          v48,
          LowPart,
          v52,
          v47,
          v55,
          v59,
          *((_DWORD *)v11 + 46),
          *(_QWORD *)v16,
          *(_QWORD *)(v16 + 8),
          *((_DWORD *)v11 + 28),
          BYTE1(*(_DWORD *)(v28 + 1176)) & 1);
    }
  }
  VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v6);
}
