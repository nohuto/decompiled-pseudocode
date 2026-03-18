/*
 * XREFs of ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0031368
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030F04 (-VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0014424 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00157C0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0015864 (VidSchiCompletePendingFlipOnPlane.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002C8AC (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002FCF8 (-VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiSubmitHwQueueMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  struct _VIDSCH_QUEUE_PACKET *v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r13
  int v8; // r9d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  char v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // r11
  char v19; // bl
  int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // r10d
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  _DWORD *v26; // r11
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // r10
  char *v30; // rbx
  unsigned __int16 v31; // cx
  __int64 v32; // rax
  unsigned int v33; // r8d
  bool v34; // zf
  int v35; // eax
  char v36; // cl
  int v37; // ecx
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // ecx
  char v42; // cl
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  unsigned int v47; // edx
  __int64 v48; // r8
  __int64 v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // r15d
  int v53; // eax
  unsigned int v54; // r9d
  unsigned int v55; // eax
  int v56; // r11d
  unsigned int v57; // eax
  int v58; // r9d
  unsigned int v59; // r10d
  __int64 v60; // rdx
  __int64 v61; // r15
  unsigned int v62; // r10d
  _DWORD *v63; // r11
  int v64; // eax
  __int64 v65; // r9
  __int64 v66; // rbx
  _QWORD *v67; // rax
  __int64 v68; // r9
  int v69; // eax
  _QWORD *v70; // rax
  unsigned int v71; // [rsp+30h] [rbp-59h]
  int v72; // [rsp+34h] [rbp-55h]
  _DWORD *v73; // [rsp+38h] [rbp-51h]
  int v74; // [rsp+40h] [rbp-49h]
  __int64 v75; // [rsp+48h] [rbp-41h]
  __int64 v76; // [rsp+50h] [rbp-39h]
  __int64 v77; // [rsp+58h] [rbp-31h] BYREF
  unsigned int *v78; // [rsp+60h] [rbp-29h]
  unsigned int v79; // [rsp+68h] [rbp-21h]
  unsigned int v80; // [rsp+6Ch] [rbp-1Dh]
  int v81; // [rsp+70h] [rbp-19h]
  unsigned int v82; // [rsp+74h] [rbp-15h]
  unsigned int v83; // [rsp+78h] [rbp-11h]
  int v84; // [rsp+80h] [rbp-9h]
  int v85; // [rsp+84h] [rbp-5h]
  int v86; // [rsp+88h] [rbp-1h]
  int v87; // [rsp+8Ch] [rbp+3h]
  int v88; // [rsp+90h] [rbp+7h]
  __int64 v90; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int v91; // [rsp+100h] [rbp+77h]
  unsigned int v92; // [rsp+108h] [rbp+7Fh]

  v1 = *((_QWORD *)a1 + 12);
  v2 = a1;
  v4 = *(_QWORD *)(v1 + 24);
  v92 = *((_DWORD *)a1 + 40);
  v3 = v92;
  v5 = *(_QWORD *)(v4 + 8);
  v75 = v5;
  v6 = *(_QWORD *)(v5 + 32);
  v7 = *(_QWORD *)(v6 + 8LL * v92 + 3032);
  if ( (*(_BYTE *)(v6 + 2884) & 1) != 0 )
    goto LABEL_93;
  v8 = 0;
  if ( *(_DWORD *)(v6 + 2860)
    || *(_BYTE *)(v5 + 188)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 184), 0, 0)
    || (*((_DWORD *)v2 + 16) & 0x20) != 0 )
  {
    goto LABEL_93;
  }
  v9 = (unsigned int)(64 - *(_DWORD *)(v7 + 2300));
  v10 = *((_QWORD *)v2 + 50) - *(_QWORD *)(v5 + 8LL * v3 + 360);
  if ( v10 > v9 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v3);
    v11[3] = 281LL;
    v11[4] = 2048LL;
    v11[5] = v1;
    v11[6] = v2;
    v11[7] = *((int *)v2 + 12);
    WdLogEvent5_WdCriticalError(v11);
    __debugbreak();
  }
  v34 = *(_DWORD *)(v7 + 4) == 3;
  LOBYTE(v90) = 0;
  if ( v34 || !*((_DWORD *)v2 + 99) && (*((_DWORD *)v2 + 68) & 0x10000000) != 0 )
  {
    v72 = 1;
    v76 = 1LL;
  }
  else
  {
    v72 = 0;
    v76 = 0LL;
  }
  v12 = -1;
  v13 = -1;
  if ( (*((_DWORD *)v2 + 18) & 0x800000) != 0 )
  {
    v14 = ((unsigned __int16)*((_DWORD *)v2 + 192) | (unsigned __int16)(*((_DWORD *)v2 + 192) >> 10)) & 0x3FF;
  }
  else
  {
    v10 = *(unsigned int *)(v6 + 132);
    v14 = (unsigned int)((1 << v10) - 1);
  }
  if ( (_DWORD)v14 )
  {
    v18 = *(_QWORD *)(v6 + 8LL * v3 + 3032);
    v19 = -1;
    v34 = !_BitScanForward(&v3, v14);
    v84 = v20;
    if ( !v34 )
      v19 = v3;
    do
    {
      v21 = (unsigned int)v19;
      v22 = v13;
      v13 = v19;
      v23 = 216LL * (unsigned int)v21;
      v24 = *(int *)(v23 + v18 + 140);
      if ( (int)v24 > -1 )
      {
        v23 = 136 * v24;
        v8 = *(_DWORD *)(136 * v24 + *(_QWORD *)(v6 + 3160) + 112);
      }
      if ( v8 == 2 )
      {
        v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v14, v21);
        v70[5] = v19;
        v70[3] = 281LL;
        v70[4] = 0x100000LL;
        v70[6] = *((unsigned int *)v2 + 97);
        v70[7] = v6;
        WdLogEvent5_WdCriticalError(v70);
        JUMPOUT(0x1C0031EDDLL);
      }
      v19 = -1;
      if ( v22 != -1 )
        v13 = v22;
      v14 = ~(1 << v21) & (unsigned int)v14;
      v34 = !_BitScanForward((unsigned int *)&v25, v14);
      v85 = v25;
      if ( !v34 )
        v19 = v25;
      v8 = 0;
    }
    while ( (_DWORD)v14 );
  }
  else
  {
    v15 = *(unsigned int *)(v6 + 132);
    v13 = 0;
    if ( !(_DWORD)v15 )
      goto LABEL_25;
    while ( 1 )
    {
      v10 = 216LL * v13;
      v16 = *(int *)(v10 + *(_QWORD *)(v6 + 8LL * *((unsigned int *)v2 + 40) + 3032) + 140);
      if ( (int)v16 <= -1 )
      {
        v14 = 0LL;
      }
      else
      {
        v10 = 136 * v16;
        v14 = *(unsigned int *)(136 * v16 + *(_QWORD *)(v6 + 3160) + 112);
      }
      if ( (_DWORD)v14 != 2 )
        break;
      if ( ++v13 >= (unsigned int)v15 )
        goto LABEL_25;
    }
    if ( v13 == -1 )
    {
LABEL_25:
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v14, v15);
      v17[5] = 0LL;
      v17[3] = 281LL;
      v17[4] = 0x100000LL;
      v17[6] = *((unsigned int *)v2 + 97);
      v17[7] = v6;
      WdLogEvent5_WdCriticalError(v17);
      __debugbreak();
    }
  }
  v26 = *(_DWORD **)(v7 + 8LL * v13 + 24);
  v27 = v92;
  v73 = v26;
  v28 = *((_DWORD *)v2 + 100) - *(_DWORD *)(v75 + 8LL * v92 + 360);
  v29 = ((_BYTE)v28 + (unsigned __int8)v26[8]) & 0x3F;
  v74 = v28;
  v71 = ((_BYTE)v28 + (unsigned __int8)v26[8]) & 0x3F;
  v30 = (char *)&v26[320 * v29 + 14];
  v34 = *((_DWORD *)v30 + 263) == 8;
  v31 = *(_WORD *)(*(_QWORD *)(v6 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v4 + 16) + 4LL) + 440) + 6LL);
  v91 = v31;
  if ( v34 )
  {
    v32 = *(_QWORD *)(v4 + 8);
    ++*((_DWORD *)v30 + 270);
    *((_QWORD *)v30 + 130) = v32;
    *((_DWORD *)v30 + 268) |= 1 << v31;
  }
  else
  {
    ++*(_DWORD *)(v6 + 980);
    ++*(_DWORD *)(v75 + 1216);
    ++*(_DWORD *)(v7 + 2300);
    if ( (*((_DWORD *)v2 + 68) & 0x800000) != 0 )
      v33 = ((unsigned __int16)*((_DWORD *)v2 + 192) | (unsigned __int16)(*((_DWORD *)v2 + 192) >> 10)) & 0x3FF;
    else
      v33 = (1 << *(_DWORD *)(v6 + 132)) - 1;
    v34 = !_BitScanForward((unsigned int *)&v35, v33);
    v86 = v35;
    while ( 1 )
    {
      v36 = -1;
      if ( !v34 )
        v36 = v35;
      if ( !v33 )
        break;
      ++*(_DWORD *)(216LL * v36 + *(_QWORD *)(v6 + 8 * v27 + 3032) + 148);
      v33 &= ~(1 << v36);
      v34 = !_BitScanForward((unsigned int *)&v35, v33);
      v87 = v35;
    }
    VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)&v26[320 * v29 + 14]);
    *((_QWORD *)v30 + 130) = *(_QWORD *)(v4 + 8);
    *((_DWORD *)v30 + 262) = *((_DWORD *)v2 + 28);
    *((_DWORD *)v30 + 264) = *((_DWORD *)v2 + 96);
    v30[1064] = (*((_DWORD *)v2 + 68) & 0x10) != 0;
    v37 = *((_DWORD *)v30 + 280) ^ (*((_DWORD *)v30 + 280) ^ (*((_DWORD *)v2 + 18) >> 19)) & 0x10;
    *((_DWORD *)v30 + 280) = v37;
    v38 = (v37 ^ (*((_DWORD *)v2 + 68) >> 21)) & 0x200 ^ v37;
    *((_DWORD *)v30 + 280) = v38;
    v39 = v38 ^ (v38 ^ (*((_DWORD *)v2 + 68) >> 21)) & 0x400;
    *((_DWORD *)v30 + 280) = v39;
    if ( (v39 & 0x200) != 0 )
    {
      v40 = *((_DWORD *)v2 + 156);
      *((_DWORD *)v30 + 292) = v40;
      v41 = v40 - 1;
      if ( v41 )
      {
        if ( v41 == 1 )
        {
          *(_OWORD *)(v30 + 1172) = *(_OWORD *)((char *)v2 + 628);
          *(_OWORD *)(v30 + 1188) = *(_OWORD *)((char *)v2 + 644);
          *(_OWORD *)(v30 + 1204) = *(_OWORD *)((char *)v2 + 660);
          *(_OWORD *)(v30 + 1220) = *(_OWORD *)((char *)v2 + 676);
          *(_QWORD *)(v30 + 1236) = *(_QWORD *)((char *)v2 + 692);
        }
      }
      else
      {
        *(_OWORD *)(v30 + 1172) = *(_OWORD *)((char *)v2 + 628);
        *(_QWORD *)(v30 + 1188) = *(_QWORD *)((char *)v2 + 644);
        *((_DWORD *)v30 + 299) = *((_DWORD *)v2 + 163);
      }
    }
    else
    {
      *((_DWORD *)v30 + 292) = 0;
    }
    if ( (v39 & 0x400) != 0 )
    {
      *(_OWORD *)(v30 + 1244) = *(_OWORD *)((char *)v2 + 700);
      *(_OWORD *)(v30 + 1260) = *(_OWORD *)((char *)v2 + 716);
    }
    memmove(*((void **)v30 + 145), (char *)v2 + 768, *((unsigned int *)v2 + 195));
    v42 = v91;
    *((_DWORD *)v30 + 267) = *((_DWORD *)v2 + 102);
    *((_DWORD *)v30 + 268) = 1 << v42;
    v43 = *((_DWORD *)v30 + 280) ^ (*((_DWORD *)v30 + 280) ^ (*((_DWORD *)v2 + 68) >> 19)) & 1;
    *((_DWORD *)v30 + 280) = v43;
    v44 = ((unsigned __int8)v43 ^ (unsigned __int8)(*((_DWORD *)v2 + 68) >> 19)) & 2 ^ v43;
    *((_DWORD *)v30 + 280) = v44;
    v45 = ((unsigned __int8)v44 ^ (unsigned __int8)(*((_DWORD *)v2 + 68) >> 19)) & 4 ^ v44;
    *((_DWORD *)v30 + 280) = v45;
    *((_DWORD *)v30 + 280) = v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)(*((_DWORD *)v2 + 68) >> 19)) & 8;
    *((_DWORD *)v30 + 281) = *((_DWORD *)v2 + 104);
    *((_QWORD *)v30 + 143) = *((_QWORD *)v2 + 37);
    *((_QWORD *)v30 + 144) = *((_QWORD *)v2 + 38);
    *((_QWORD *)v2 + 37) = 0LL;
    *(_QWORD *)(v30 + 1076) = 0LL;
    *((_DWORD *)v30 + 271) = 1;
    if ( v30[1064] || v72 )
    {
      *((_DWORD *)v30 + 265) = 0;
      v46 = *((_DWORD *)v30 + 280) ^ (*((_DWORD *)v30 + 280) ^ (*((_DWORD *)v2 + 68) >> 21)) & 0x80;
      *((_DWORD *)v30 + 280) = v46;
      *((_DWORD *)v30 + 280) = v46 ^ ((unsigned __int16)v46 ^ (*((_DWORD *)v2 + 68) >> 20)) & 0x100;
      goto LABEL_65;
    }
    switch ( *((_DWORD *)v2 + 99) )
    {
      case 1:
        goto LABEL_63;
      case 2:
        *((_DWORD *)v30 + 265) = 1;
        goto LABEL_65;
      case 3:
        *((_DWORD *)v30 + 265) = 2;
        goto LABEL_65;
    }
    if ( *((_DWORD *)v2 + 99) != 4 )
    {
LABEL_63:
      *((_DWORD *)v30 + 265) = 0;
      goto LABEL_65;
    }
    *((_DWORD *)v30 + 265) = 3;
  }
LABEL_65:
  if ( (*((_DWORD *)v2 + 68) & 0x800) != 0 )
    v30[1065] = 1;
  v78 = (unsigned int *)*((_QWORD *)v30 + 145);
  v77 = v6;
  v47 = *v78;
  v48 = *v78 & 0x3FF;
  v79 = *v78 & 0x3FF;
  if ( *(_BYTE *)(v6 + 136) )
    v49 = (v47 >> 10) & 0x3FF;
  else
    v49 = 0LL;
  v34 = !_BitScanForward(&v50, v48);
  v51 = 0xFFFFFFFFLL;
  v80 = v49;
  v52 = 0;
  if ( !v34 )
    v51 = v50;
  v81 = 0;
  v34 = !_BitScanForward((unsigned int *)&v53, v49);
  v54 = (char)v51;
  v88 = v53;
  if ( !v34 )
    v12 = v53;
  v82 = (char)v51;
  v55 = v12;
  v83 = v12;
  while ( (_DWORD)v48 || (_DWORD)v49 )
  {
    if ( v54 >= v55 )
      goto LABEL_85;
    v56 = 0;
    v57 = v91;
    v58 = 1;
    v59 = 0;
    while ( (*((_DWORD *)v30 + 267) & v58) == 0 )
    {
LABEL_82:
      ++v59;
      v58 *= 2;
      if ( v59 > v57 )
        goto LABEL_85;
    }
    v60 = *(_QWORD *)(((8 * *(_DWORD *)(*((_QWORD *)v30 + 145) + 8LL) + 175) & 0xFFFFFFF8)
                    * *(_DWORD *)(*((_QWORD *)v30 + 145) + 4LL)
                    + *((_QWORD *)v30 + 145)
                    + 48 * ((unsigned int)(v52 + v56 * *(_DWORD *)(*((_QWORD *)v30 + 145) + 4LL)) + 1LL));
    if ( ((*(_DWORD *)(v60 + 32) >> 2) & 0x3F) != v91 )
    {
      v57 = v91;
      ++v56;
      goto LABEL_82;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v60 + 96) + 16LL) + 8LL));
LABEL_85:
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v77);
    v55 = v83;
    v49 = v80;
    v48 = v79;
    v54 = v82;
    v52 = v81;
  }
  v2 = a1;
  if ( *((_DWORD *)v30 + 269) <= *((_DWORD *)v30 + 270) )
  {
    if ( v74 )
    {
      *((_DWORD *)v30 + 263) = 7;
      goto LABEL_90;
    }
    v62 = v71;
    v63 = v73;
    v61 = v92;
    while ( 1 )
    {
      v63[8] = ((_BYTE)v62 + 1) & 0x3F;
      ++*(_QWORD *)(v75 + 8 * v61 + 360);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 984));
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 2304));
      if ( *(_BYTE *)(v7 + 61284) )
        break;
      *((_DWORD *)v30 + 263) = 1;
LABEL_143:
      v71 = v63[8];
      v62 = v71;
      v51 = 1280LL * v71;
      v30 = (char *)v63 + v51 + 56;
      if ( *((_DWORD *)v30 + 263) != 7 )
        goto LABEL_91;
    }
    *((_DWORD *)v30 + 263) = 2;
    v64 = v63[10];
    if ( v76 )
    {
      if ( v62 != v64 )
        goto LABEL_140;
      if ( *(_BYTE *)(v6 + 136) )
      {
        v65 = *(_QWORD *)(v7 + 8LL * v13 + 24);
        v49 = *(unsigned int *)(v65 + 48);
        v48 = ((unsigned __int8)*(_DWORD *)(v65 + 44) - 1) & 0x3F;
        while ( (_DWORD)v49 != (_DWORD)v48 )
        {
          if ( *(_DWORD *)(1280LL * (unsigned int)v49 + v65 + 1108) == 14 )
            goto LABEL_114;
          v49 = ((_BYTE)v49 - 1) & 0x3F;
        }
        v48 = *((unsigned int *)v30 + 280);
        if ( (*((_DWORD *)v30 + 280) & 0x10) != 0 )
          v49 = ((unsigned __int16)**((_DWORD **)v30 + 145) | (unsigned __int16)(**((_DWORD **)v30 + 145) >> 10)) & 0x3FF;
        else
          v49 = (unsigned int)((1 << *(_DWORD *)(v6 + 132)) - 1);
        if ( ((unsigned int)v49 & *(_DWORD *)(v7 + 2316)) != 0
          || (*(_DWORD *)(v6 + 140) <= 1u || *(_DWORD *)(v7 + 4) == 3 || (v48 &= 0x180u, (_DWORD)v48 != 128))
          && ((*((_DWORD *)v30 + 280) & 0x10) == 0
            ? (v49 = (unsigned int)((1 << *(_DWORD *)(v6 + 132)) - 1))
            : (v49 = ((unsigned __int16)**((_DWORD **)v30 + 145) | (unsigned __int16)(**((_DWORD **)v30 + 145) >> 10)) & 0x3FF),
              ((unsigned int)v49 & *(_DWORD *)(v7 + 2312)) != 0) )
        {
LABEL_114:
          *((_QWORD *)v30 + 136) = MEMORY[0xFFFFF78000000320];
          goto LABEL_140;
        }
      }
      goto LABEL_138;
    }
    if ( v62 != v64 && !v30[1064] )
    {
      v66 = ((_BYTE)v62 - 1) & 0x3F;
      if ( (v63[320 * v66 + 294] & 0x20) != 0 )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v49, v48);
        v67[6] = v73;
        v67[3] = 281LL;
        v67[4] = 0x100000LL;
        v67[5] = v66;
        v67[7] = v6;
        WdLogEvent5_WdCriticalError(v67);
        __debugbreak();
      }
      goto LABEL_140;
    }
    *((_QWORD *)v30 + 136) = MEMORY[0xFFFFF78000000320];
    if ( *(_BYTE *)(v6 + 136) )
    {
      v68 = *(_QWORD *)(v7 + 8LL * v13 + 24);
      v49 = *(unsigned int *)(v68 + 48);
      v48 = ((unsigned __int8)*(_DWORD *)(v68 + 44) - 1) & 0x3F;
      while ( (_DWORD)v49 != (_DWORD)v48 )
      {
        if ( *(_DWORD *)(1280LL * (unsigned int)v49 + v68 + 1108) == 14 )
          goto LABEL_140;
        v49 = ((_BYTE)v49 - 1) & 0x3F;
      }
      v48 = *((unsigned int *)v30 + 280);
      if ( (v48 & 0x10) != 0 )
        v49 = ((unsigned __int16)**((_DWORD **)v30 + 145) | (unsigned __int16)(**((_DWORD **)v30 + 145) >> 10)) & 0x3FF;
      else
        v49 = (unsigned int)((1 << *(_DWORD *)(v6 + 132)) - 1);
      if ( ((unsigned int)v49 & *(_DWORD *)(v7 + 2316)) != 0 )
        goto LABEL_140;
      if ( *(_DWORD *)(v6 + 140) > 1u && *(_DWORD *)(v7 + 4) != 3 )
      {
        v48 &= 0x180u;
        if ( (_DWORD)v48 == 128 )
          goto LABEL_149;
      }
    }
    v49 = (*((_DWORD *)v30 + 280) & 0x10) != 0
        ? ((unsigned __int16)**((_DWORD **)v30 + 145) | (unsigned __int16)(**((_DWORD **)v30 + 145) >> 10)) & 0x3FF
        : (unsigned int)((1 << *(_DWORD *)(v6 + 132)) - 1);
    if ( ((unsigned int)v49 & *(_DWORD *)(v7 + 2312)) == 0 )
    {
LABEL_149:
      if ( v30[1064] )
      {
        VidSchiRestartQueuedFlip(v75, v61, v13, v62);
        v62 = v71;
        v63 = v73;
      }
      v69 = *((_DWORD *)v30 + 265);
      if ( !v69 )
      {
LABEL_138:
        *((_DWORD *)v30 + 263) = 4;
        VidSchiExecuteMmIoFlip((struct _VIDSCH_GLOBAL *)v6, v61, v13, v62, &v90);
        v63 = v73;
        goto LABEL_140;
      }
      *((_DWORD *)v30 + 263) = 3;
      *((_DWORD *)v30 + 265) = v69 - 1;
    }
LABEL_140:
    if ( v63[320 * v63[9] + 277] != 1 )
      v63[9] = v63[8];
    goto LABEL_143;
  }
  *((_DWORD *)v30 + 263) = 8;
LABEL_90:
  LODWORD(v61) = v92;
LABEL_91:
  *((_DWORD *)a1 + 16) |= 2u;
  if ( (_BYTE)v90 )
    VidSchiCompletePendingFlipOnPlane(v6, v61, 9, v13);
LABEL_93:
  VidSchiCompleteHwQueuePacket(v2);
}
