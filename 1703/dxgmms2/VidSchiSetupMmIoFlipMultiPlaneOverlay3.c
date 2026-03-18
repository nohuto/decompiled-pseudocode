/*
 * XREFs of VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0027B6C
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C00224E8 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0025C30 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0012F58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

void __fastcall VidSchiSetupMmIoFlipMultiPlaneOverlay3(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r10
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int v14; // ebp
  unsigned int v15; // r9d
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  int v19; // r12d
  unsigned int v20; // r13d
  char v21; // cl
  int v22; // eax
  unsigned int v23; // r8d
  char v24; // r11
  unsigned int *v25; // rdi
  unsigned int v26; // r9d
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int *v30; // rax
  __int64 v31; // r14
  __int64 v32; // r13
  CRefCountedBuffer *v33; // rcx
  unsigned int v34; // ecx
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // r8
  __int64 v39; // rax
  char v40; // cl
  unsigned int v41; // eax
  char v42; // cl
  int v43; // eax
  _DWORD *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rbp
  CRefCountedBuffer *v47; // rcx
  int v48; // edx
  __int128 v49; // xmm1
  __int64 v50; // [rsp+28h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v52; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v53; // [rsp+B0h] [rbp+8h]
  unsigned int v54; // [rsp+B8h] [rbp+10h]
  unsigned int v55; // [rsp+C0h] [rbp+18h]

  v11 = *(_QWORD *)(a1 + 8LL * a3 + 2992);
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = a3;
  v50 = v11;
  *(_DWORD *)(a4 + 12) ^= (*(_DWORD *)(a2 + 1112) ^ *(_DWORD *)(a4 + 12)) & 1;
  v12 = *(_DWORD *)(a4 + 12) ^ (*(_DWORD *)(a2 + 1112) ^ *(_DWORD *)(a4 + 12)) & 2;
  *(_DWORD *)(a4 + 12) = v12;
  *(_DWORD *)(a4 + 12) = v12 ^ (*(_DWORD *)(a2 + 1112) ^ v12) & 4;
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1116);
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 2120) = -1073741823;
  if ( (*(_DWORD *)(a2 + 1112) & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a2 + 1152);
    v14 = *(unsigned __int8 *)(v13 + 1);
    v15 = (unsigned __int8)*(_DWORD *)v13;
  }
  else
  {
    v15 = 1;
    v14 = ((1 << *(_DWORD *)(a1 + 128)) - 1) & 0xFFFFFFFE;
  }
  v16 = !_BitScanForward((unsigned int *)&v17, v15);
  v18 = -1;
  v55 = v15;
  v19 = 0;
  if ( !v16 )
    v18 = v17;
  *(_DWORD *)(a4 + 20) = 0;
  v20 = v18;
  v21 = -1;
  v16 = !_BitScanForward((unsigned int *)&v22, v14);
  v53 = v20;
  if ( !v16 )
    v21 = v22;
  v23 = v21;
  v54 = v21;
  while ( v15 || v14 )
  {
    v24 = 1;
    v25 = (unsigned int *)(v19 * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1152) + 8LL) + 167) & 0xFFFFFFF8)
                         + *(_QWORD *)(a2 + 1152)
                         + 16LL);
    if ( v20 < v23 )
    {
      v26 = 0;
      v25[4] = (2 * a5) | v25[4] & 0xFFFFFFF9 | (4 * (a5 ^ 1));
      v27 = *(_DWORD *)(a2 + 1068);
      v25[7] = v27;
      *((_QWORD *)v25 + 4) = v25 + 40;
      if ( v27 )
      {
        do
        {
          v28 = 48LL * (v19 + v26 * *(_DWORD *)(*(_QWORD *)(a2 + 1152) + 4LL))
              + 16
              + *(_QWORD *)(a2 + 1152)
              + *(_DWORD *)(*(_QWORD *)(a2 + 1152) + 4LL)
              * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1152) + 8LL) + 167) & 0xFFFFFFF8);
          v29 = v26++;
          *(_QWORD *)(*((_QWORD *)v25 + 4) + 8 * v29) = v28;
        }
        while ( v26 < v25[7] );
      }
      if ( !v20 )
      {
        v30 = *(unsigned int **)(a2 + 1136);
        if ( v30 )
        {
          v25[10] = *v30;
          *((_QWORD *)v25 + 6) = *(_QWORD *)(a2 + 1136) + 8LL;
        }
        v31 = *(_QWORD *)(a2 + 1144);
        if ( v31 )
        {
          v32 = *(_QWORD *)(a2 + 1136);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v31 + 16), &LockHandle);
          v33 = *(CRefCountedBuffer **)(v31 + 8);
          if ( v33 )
            CRefCountedBuffer::RefCountedBufferRelease(v33);
          *(_QWORD *)(v31 + 8) = v32;
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 4));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v11 = v50;
          v20 = v53;
        }
      }
      v25[4] |= 1u;
      v34 = v25[4];
      *v25 = v20;
      v35 = v25[4] ^ (*(_DWORD *)(a2 + 1112) ^ v34) & 8;
      v25[4] = v35;
      v36 = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)(*(_DWORD *)(a2 + 1112) >> 1)) & 0x10;
      v37 = v25[14];
      v25[4] = v36;
      v38 = *(_QWORD *)(a2 + 1152);
      v39 = v19 * ((8 * *(_DWORD *)(v38 + 8) + 167) & 0xFFFFFFF8);
      v25[14] ^= (*(_DWORD *)(v39 + v38 + 172) ^ v37) & 1;
      v25[14] ^= (v25[14] ^ *(_DWORD *)(v39 + v38 + 172)) & 2;
      v25[15] = (unsigned __int16)*(_DWORD *)(v39 + v38 + 144);
      v25[16] = (unsigned __int16)*(_DWORD *)(v39 + v38 + 148);
      v25[17] = *(unsigned __int16 *)(v39 + v38 + 146);
      v25[18] = *(unsigned __int16 *)(v39 + v38 + 150);
      v25[19] = *(__int16 *)(v39 + v38 + 152);
      v25[20] = *(__int16 *)(v39 + v38 + 156);
      v25[21] = *(unsigned __int16 *)(v39 + v38 + 154);
      v25[22] = *(unsigned __int16 *)(v39 + v38 + 158);
      v25[23] = (unsigned __int16)*(_DWORD *)(v39 + v38 + 160);
      v25[24] = (unsigned __int16)*(_DWORD *)(v39 + v38 + 164);
      v25[25] = *(unsigned __int16 *)(v39 + v38 + 162);
      v25[26] = *(unsigned __int16 *)(v39 + v38 + 166);
      v25[27] = ((*(_DWORD *)(v39 + v38 + 172) >> 3) & 3) + 1;
      v25[28] ^= (v25[28] ^ (*(_DWORD *)(v39 + v38 + 172) >> 2)) & 1;
      v41 = *(_DWORD *)(v39 + v38 + 168);
      v23 = v54;
      v25[29] = v41;
      v40 = -1;
      v15 = ~(1 << v20) & v55;
      v16 = !_BitScanForward(&v41, v15);
      v55 = v15;
      if ( !v16 )
        v40 = v41;
      v20 = v40;
      v53 = v40;
LABEL_30:
      *(_QWORD *)(a6 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 20))++) = v25;
      *((_QWORD *)v25 + 1) = ++*(_QWORD *)(v11 + 8LL * *v25 + 2320);
      goto LABEL_31;
    }
    if ( (*(unsigned __int16 *)(v11 + 18768) & (1 << v23)) != 0 )
    {
      *((_QWORD *)v25 + 3) = 0LL;
      *((_QWORD *)v25 + 4) = 0LL;
      v25[10] = 0;
      *((_QWORD *)v25 + 6) = 0LL;
      *v25 = v23;
      v25[4] = 0;
    }
    else
    {
      v24 = 0;
      *((_QWORD *)v25 + 1) = 0LL;
    }
    v42 = -1;
    v14 &= ~(1 << v23);
    v16 = !_BitScanForward((unsigned int *)&v43, v14);
    if ( !v16 )
      v42 = v43;
    v23 = v42;
    v54 = v42;
    if ( v24 )
      goto LABEL_30;
LABEL_31:
    ++v19;
  }
  v44 = *(_DWORD **)(a2 + 1136);
  if ( v44 )
  {
    *(_DWORD *)(*(_QWORD *)a6 + 40LL) = *v44;
    *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *(_QWORD *)(a2 + 1136) + 8LL;
  }
  v45 = *(_QWORD *)(a2 + 1144);
  if ( v45 && *(_DWORD *)(a2 + 1044) != 13 )
  {
    v46 = *(_QWORD *)(a2 + 1136);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v45 + 16), &v52);
    v47 = *(CRefCountedBuffer **)(v45 + 8);
    if ( v47 )
      CRefCountedBuffer::RefCountedBufferRelease(v47);
    *(_QWORD *)(v45 + 8) = v46;
    _InterlockedIncrement((volatile signed __int32 *)(v46 + 4));
    KeReleaseInStackQueuedSpinLock(&v52);
  }
  if ( (*(_DWORD *)(a2 + 1112) & 0x200) != 0 )
  {
    v48 = *(_DWORD *)(a2 + 1160);
    *(_DWORD *)a7 = v48;
    if ( v48 )
    {
      if ( v48 == 1 )
      {
        *(_DWORD *)(a7 + 4) = 28;
        *(_QWORD *)(a7 + 8) = a2 + 1164;
      }
    }
    else
    {
      *(_DWORD *)(a7 + 4) = 0;
      *(_QWORD *)(a7 + 8) = 0LL;
    }
    *(_QWORD *)(a4 + 48) = a7;
  }
  if ( (*(_DWORD *)(a2 + 1112) & 0x400) != 0 )
  {
    *(_DWORD *)a8 = 0;
    *(_OWORD *)(a8 + 4) = *(_OWORD *)(a2 + 1192);
    v49 = *(_OWORD *)(a2 + 1208);
    *(_DWORD *)(a8 + 36) = 1;
    *(_OWORD *)(a8 + 20) = v49;
    *(_QWORD *)(a4 + 32) = a8;
  }
  *(_QWORD *)(a4 + 24) = a6;
}
