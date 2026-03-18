/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C001437C
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0011AB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C0003BD0 (VidSchUnwaitFlipQueue.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C001493C (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     McTemplateK0pqqpqqqxxqq @ 0x1C002671C (McTemplateK0pqqpqqqxxqq.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3,
        struct _VIDSCH_DEVICE *a4)
{
  __int64 v4; // rax
  unsigned int *v5; // r13
  __int64 v6; // r14
  __int64 v7; // rdi
  DWORD LowPart; // ebx
  char v10; // dl
  __int64 v12; // rbp
  char v13; // cl
  unsigned int v14; // r10d
  __int64 v15; // r11
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  bool j; // zf
  int v25; // eax
  char v26; // cl
  __int64 v27; // rdi
  int v28; // ecx
  int v29; // eax
  char v30; // r8
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  unsigned int k; // r9d
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  int v40; // edx
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // r9
  _QWORD *v44; // rax
  char v45; // [rsp+70h] [rbp-68h]
  int v46; // [rsp+74h] [rbp-64h]
  __int64 v47; // [rsp+88h] [rbp-50h]
  int v49; // [rsp+E8h] [rbp+10h]
  int v50; // [rsp+F0h] [rbp+18h]
  __int64 i; // [rsp+F8h] [rbp+20h]
  unsigned int v52; // [rsp+F8h] [rbp+20h]

  v4 = *((unsigned int *)a2 + 29);
  v5 = (unsigned int *)((char *)a2 + 440);
  v6 = *((_QWORD *)a4 + 4);
  v7 = (unsigned int)v4;
  v46 = *((_DWORD *)a2 + 29);
  LowPart = a3.LowPart;
  v10 = -1;
  v12 = *(_QWORD *)(v6 + 8 * v4 + 3008);
  j = !_BitScanForward((unsigned int *)&a3, *v5 & 0x3FF);
  if ( !j )
    v10 = a3.LowPart;
  v13 = 0;
  if ( v10 != -1 )
    v13 = v10;
  v14 = 0;
  v15 = (unsigned int)v13;
  v16 = 280 * v15;
  v45 = v13;
  for ( i = v15;
        v14 < *((_DWORD *)a2 + 35);
        *(_WORD *)((char *)&v5[12 * v20 + 8] + v19) = *(_WORD *)(*(_QWORD *)(v18 + 96) + 6LL) )
  {
    v17 = 48LL * v14 * v5[1] + v5[1] * ((8 * v5[2] + 175) & 0xFFFFFFF8);
    v18 = *(_QWORD *)((char *)v5 + v17 + 48);
    *(_QWORD *)((char *)a2 + v17 + 480) = *(_QWORD *)(*(_QWORD *)(v18 + 96) + 24LL);
    LODWORD(v17) = v5[1];
    v19 = (unsigned int)v17 * ((8 * v5[2] + 175) & 0xFFFFFFF8);
    v20 = v14 * (unsigned int)v17;
    ++v14;
  }
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 && (v50 = *((_DWORD *)a2 + 36), v50 == *(_DWORD *)(v16 + v12 + 140)) )
  {
    v49 = *((_DWORD *)a2 + 37);
  }
  else
  {
    v50 = 0;
    v49 = *((_DWORD *)a2 + 31);
  }
  _InterlockedIncrement((volatile signed __int32 *)a4 + (unsigned int)v4 + 265);
  v21 = *(unsigned int *)(*((_QWORD *)a4 + 4) + 4LL);
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 5) + 24LL) + 8 * v21) + 8LL * (unsigned int)v4 + 520);
  if ( (*(_DWORD *)a2 & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 8LL * (unsigned int)v4 + 6056) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
  if ( *(_DWORD *)(v16 + v12 + 180) == 1 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v22, v21);
    v44[3] = *((_QWORD *)a2 + 13);
    v44[4] = *((unsigned int *)a2 + 28);
    v44[5] = v49;
    v44[6] = *(_QWORD *)((char *)v5 + v5[1] * ((8 * v5[2] + 175) & 0xFFFFFFF8) + 40);
    v44[7] = *(unsigned __int16 *)((char *)v5 + v5[1] * ((8 * v5[2] + 175) & 0xFFFFFFF8) + 32);
    WdLogEvent5_WdPresentTokenEvent(v44);
    *(_DWORD *)(v16 + v12 + 192) = 0;
    v15 = i;
    *(_DWORD *)(v16 + v12 + 180) = 2;
  }
  ++*(_DWORD *)(v6 + 964);
  ++*((_DWORD *)a4 + 298);
  ++*(_DWORD *)(v16 + v12 + 192);
  ++*(_DWORD *)(v12 + 2940);
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 )
    v23 = ((unsigned __int16)*v5 | (unsigned __int16)(*v5 >> 10)) & 0x3FF;
  else
    v23 = (1 << *(_DWORD *)(v6 + 128)) - 1;
  for ( j = !_BitScanForward((unsigned int *)&v25, v23); ; j = !_BitScanForward((unsigned int *)&v25, v23) )
  {
    v26 = -1;
    if ( !j )
      v26 = v25;
    if ( !v23 )
      break;
    ++*(_DWORD *)(280LL * v26 + *(_QWORD *)(v6 + 8 * v7 + 3008) + 188);
    v23 &= ~(1 << v26);
  }
  v47 = *(_QWORD *)(v12 + 8 * v15 + 24);
  v52 = *(_DWORD *)(v47 + 32);
  v27 = v47 + 1232LL * v52;
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v27 + 56));
  v28 = *(_DWORD *)(v27 + 1176);
  *(_QWORD *)(v27 + 1184) = *((_QWORD *)a2 + 12);
  v28 |= 0x20u;
  *(_QWORD *)(v27 + 1192) = *((_QWORD *)a2 + 13);
  *(_DWORD *)(v27 + 1176) = v28;
  *(_DWORD *)(v27 + 1176) = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(*(_DWORD *)a2 >> 22)) & 0x10;
  v29 = *((_DWORD *)a2 + 36);
  if ( v29 != *(_DWORD *)(v16 + v12 + 144) )
  {
    *(_DWORD *)(v16 + v12 + 144) = v29;
    *(_DWORD *)(v27 + 1176) |= 0x40u;
  }
  *(_DWORD *)(v27 + 1104) = LowPart;
  *(_DWORD *)(v27 + 1108) = 1;
  *(_DWORD *)(v27 + 1112) = *((_DWORD *)a2 + 28);
  if ( a1 )
  {
    *(_QWORD *)(v27 + 576) = *((_QWORD *)a1 + 19);
    *(_DWORD *)(v27 + 1136) = *((_DWORD *)a2 + 35);
    *(_DWORD *)(v27 + 1132) = *((_DWORD *)a2 + 35);
    *(_DWORD *)(v27 + 1140) = *((_DWORD *)a2 + 35);
  }
  else
  {
    *(_QWORD *)(v27 + 1132) = 0LL;
    *(_DWORD *)(v27 + 1140) = 1;
  }
  *(_QWORD *)(v27 + 1096) = a4;
  *(_BYTE *)(v27 + 1120) = (*(_DWORD *)a2 & 0x10) != 0;
  if ( *(_DWORD *)(v6 + 2180) == 1 )
  {
    v30 = 0;
LABEL_26:
    if ( !v30 )
      goto LABEL_29;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(v6 + 2180) != 2 )
  {
    v30 = (*(_DWORD *)a2 & 0x10000000) != 0;
    goto LABEL_26;
  }
  v30 = 1;
LABEL_27:
  if ( (*(_DWORD *)(v27 + 1176) & 0x10) != 0 )
    v30 = *(_BYTE *)(v6 + 132) != 0 ? v30 : 0;
LABEL_29:
  v31 = *(_DWORD *)(v27 + 1176) ^ (*(_DWORD *)(v27 + 1176) ^ (*(_DWORD *)a2 >> 19)) & 1;
  *(_DWORD *)(v27 + 1176) = v31;
  v32 = ((unsigned __int8)v31 ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 2 ^ v31;
  *(_DWORD *)(v27 + 1176) = v32;
  v33 = ((unsigned __int8)v32 ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 4 ^ v32;
  *(_DWORD *)(v27 + 1176) = v33;
  v34 = ((unsigned __int8)v33 ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 8 ^ v33;
  *(_DWORD *)(v27 + 1176) = v34;
  *(_QWORD *)(v27 + 1200) = *((_QWORD *)a2 + 3);
  *(_QWORD *)(v27 + 1208) = *((_QWORD *)a2 + 4);
  v35 = (v34 ^ (*(_DWORD *)a2 >> 21)) & 0x400 ^ v34;
  *(_DWORD *)(v27 + 1176) = v35;
  if ( (v35 & 0x400) != 0 )
  {
    *(_OWORD *)(v27 + 1256) = *((_OWORD *)a2 + 24);
    *(_OWORD *)(v27 + 1272) = *((_OWORD *)a2 + 25);
  }
  for ( k = 0; k < *(_DWORD *)(v27 + 1140); ++k )
  {
    if ( a1 )
    {
      v37 = 8LL * k;
      v38 = *(_QWORD *)((char *)a2 + v37 + *((unsigned int *)a2 + 106));
      *(_QWORD *)(v37 + v27 + 56) = v38;
      ++*(_DWORD *)(v38 + 776);
    }
    _InterlockedAdd(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)&v5[12 * k * v5[1] + 12]
                                                                    + v5[1] * ((8 * v5[2] + 175) & 0xFFFFFFF8))
                                                        + 96LL)
                                            + 16LL)
                                + 8LL),
      1u);
  }
  *(_DWORD *)(v27 + 1180) = v50;
  if ( *(_BYTE *)(v27 + 1120) )
  {
    *(_DWORD *)(v27 + 1116) = 0;
    if ( v49 )
      goto LABEL_40;
  }
  else
  {
    if ( v49 )
    {
      *(_DWORD *)(v27 + 1116) = v49 - 1;
      goto LABEL_40;
    }
    *(_DWORD *)(v27 + 1116) = 0;
  }
  v39 = *(_DWORD *)(v27 + 1176) | 0x80;
  *(_DWORD *)(v27 + 1176) = v39;
  if ( v30 )
    *(_DWORD *)(v27 + 1176) = v39 | 0x100;
LABEL_40:
  memmove(*(void **)(v27 + 1216), v5, v5[3]);
  *(_DWORD *)(v27 + 1124) = *((_DWORD *)a2 + 34);
  *(_DWORD *)(v27 + 1128) = *((_DWORD *)a2 + 34);
  if ( (*(_DWORD *)a2 & 0x800) != 0 )
    *(_BYTE *)(v27 + 1121) = 1;
  *(_DWORD *)(v47 + 32) = ((_BYTE)v52 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 968));
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 2944));
  if ( bTracingEnabled )
  {
    v42 = *((_QWORD *)a2 + 22);
    if ( v42 )
    {
      if ( a1 )
      {
        v43 = *((_QWORD *)a1 + 7);
        if ( !v43 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          LODWORD(v43) = (_DWORD)a1;
      }
      else
      {
        LODWORD(v43) = 0;
      }
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqqpqqqxxqq(
          v42,
          v40,
          v41,
          v43,
          LowPart,
          v46,
          v42,
          v49,
          v45,
          *((_DWORD *)a2 + 46),
          *(_QWORD *)(v16 + v12 + 148),
          *(_QWORD *)(v16 + v12 + 160),
          *((_DWORD *)a2 + 28),
          BYTE1(*(_DWORD *)(v27 + 1176)) & 1);
    }
  }
  VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v6);
}
