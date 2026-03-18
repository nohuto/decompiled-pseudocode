/*
 * XREFs of VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0029EDC
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0024934 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0027CD0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0015590 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00246C0 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
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
  unsigned int v10; // r15d
  __int64 v12; // r9
  int v13; // ecx
  unsigned int v14; // ebp
  unsigned int v15; // esi
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  int v19; // r12d
  unsigned int v20; // r11d
  char v21; // cl
  int v22; // eax
  unsigned int v23; // r8d
  char v24; // r10
  unsigned int *v25; // rdi
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int *v29; // rax
  __int64 v30; // r15
  CRefCountedBuffer *v31; // rcx
  unsigned int v32; // eax
  int v33; // ecx
  unsigned int v34; // ecx
  __int64 v35; // r8
  __int64 v36; // rdx
  char v37; // cl
  int v38; // eax
  char v39; // cl
  int v40; // eax
  _DWORD *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  CRefCountedBuffer *v44; // rcx
  int v45; // edx
  __int128 v46; // xmm1
  __int64 v47; // [rsp+28h] [rbp-90h]
  __int64 v48; // [rsp+30h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v50; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v51; // [rsp+C0h] [rbp+8h]
  unsigned int v52; // [rsp+D0h] [rbp+18h]

  v10 = 0;
  v12 = *(_QWORD *)(a1 + 8LL * a3 + 3008);
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = a3;
  v48 = v12;
  *(_DWORD *)(a4 + 12) ^= (*(_DWORD *)(a2 + 1120) ^ *(_DWORD *)(a4 + 12)) & 1;
  v13 = *(_DWORD *)(a4 + 12) ^ (*(_DWORD *)(a2 + 1120) ^ *(_DWORD *)(a4 + 12)) & 2;
  *(_DWORD *)(a4 + 12) = v13;
  *(_DWORD *)(a4 + 12) = v13 ^ (*(_DWORD *)(a2 + 1120) ^ v13) & 4;
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1124);
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 2120) = -1073741823;
  if ( (*(_DWORD *)(a2 + 1120) & 0x10) != 0 )
  {
    v14 = **(_DWORD **)(a2 + 1160) & 0x3FF;
    v15 = (**(_DWORD **)(a2 + 1160) >> 10) & 0x3FF;
  }
  else
  {
    v14 = 1;
    v15 = ((1 << *(_DWORD *)(a1 + 128)) - 1) & 0xFFFFFFFE;
  }
  v16 = !_BitScanForward((unsigned int *)&v17, v14);
  v18 = -1;
  *(_DWORD *)(a4 + 20) = 0;
  v19 = 0;
  if ( !v16 )
    v18 = v17;
  v20 = v18;
  v21 = -1;
  v16 = !_BitScanForward((unsigned int *)&v22, v15);
  v52 = v20;
  if ( !v16 )
    v21 = v22;
  v23 = v21;
  v51 = v21;
  while ( v14 || v15 )
  {
    v24 = 1;
    v25 = (unsigned int *)(v19 * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                         + *(_QWORD *)(a2 + 1160)
                         + 16LL);
    if ( v20 < v23 )
    {
      v25[4] = (2 * a5) | v25[4] & 0xFFFFFFF9 | (4 * (a5 ^ 1));
      v26 = *(_DWORD *)(a2 + 1084);
      v25[7] = v26;
      *((_QWORD *)v25 + 4) = v25 + 42;
      if ( v26 )
      {
        do
        {
          VidSchiBindFlipPhysicalAddress(*(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(a2 + 1160), v19, v10);
          v27 = 48LL * (v19 + v10 * *(_DWORD *)(*(_QWORD *)(a2 + 1160) + 4LL))
              + 16
              + *(_QWORD *)(a2 + 1160)
              + *(_DWORD *)(*(_QWORD *)(a2 + 1160) + 4LL)
              * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1160) + 8LL) + 175) & 0xFFFFFFF8);
          v28 = v10++;
          *(_QWORD *)(*((_QWORD *)v25 + 4) + 8 * v28) = v27;
        }
        while ( v10 < v25[7] );
        v20 = v52;
      }
      v10 = 0;
      if ( !v20 )
      {
        v29 = *(unsigned int **)(a2 + 1144);
        if ( v29 )
        {
          v25[10] = *v29;
          *((_QWORD *)v25 + 6) = *(_QWORD *)(a2 + 1144) + 8LL;
        }
        v30 = *(_QWORD *)(a2 + 1152);
        if ( v30 )
        {
          v47 = *(_QWORD *)(a2 + 1144);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 16), &LockHandle);
          v31 = *(CRefCountedBuffer **)(v30 + 8);
          if ( v31 )
            CRefCountedBuffer::RefCountedBufferRelease(v31);
          *(_QWORD *)(v30 + 8) = v47;
          _InterlockedIncrement((volatile signed __int32 *)(v47 + 4));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v20 = v52;
        }
        v10 = 0;
      }
      v25[4] |= 1u;
      v32 = v25[4];
      *v25 = v20;
      v33 = v32 ^ ((unsigned __int8)v32 ^ (unsigned __int8)*(_DWORD *)(a2 + 1120)) & 8;
      v25[4] = v33;
      v38 = v33 ^ ((unsigned __int8)v33 ^ (unsigned __int8)(*(_DWORD *)(a2 + 1120) >> 1)) & 0x10;
      v34 = v25[14];
      v25[4] = v38;
      v35 = *(_QWORD *)(a2 + 1160);
      v36 = v19 * ((8 * *(_DWORD *)(v35 + 8) + 175) & 0xFFFFFFF8);
      v25[14] ^= (*(_DWORD *)(v36 + v35 + 172) ^ v34) & 1;
      v25[14] ^= ((unsigned __int8)v25[14] ^ (unsigned __int8)*(_DWORD *)(v36 + v35 + 172)) & 2;
      v25[15] = (unsigned __int16)*(_DWORD *)(v36 + v35 + 144);
      v25[16] = (unsigned __int16)*(_DWORD *)(v36 + v35 + 148);
      v25[17] = *(unsigned __int16 *)(v36 + v35 + 146);
      v25[18] = *(unsigned __int16 *)(v36 + v35 + 150);
      v25[19] = *(__int16 *)(v36 + v35 + 152);
      v25[20] = *(__int16 *)(v36 + v35 + 156);
      v25[21] = *(unsigned __int16 *)(v36 + v35 + 154);
      v25[22] = *(unsigned __int16 *)(v36 + v35 + 158);
      v25[23] = (unsigned __int16)*(_DWORD *)(v36 + v35 + 160);
      v25[24] = (unsigned __int16)*(_DWORD *)(v36 + v35 + 164);
      v25[25] = *(unsigned __int16 *)(v36 + v35 + 162);
      v25[26] = *(unsigned __int16 *)(v36 + v35 + 166);
      v25[27] = ((*(_DWORD *)(v36 + v35 + 172) >> 3) & 3) + 1;
      v25[28] ^= (v25[28] ^ (*(_DWORD *)(v36 + v35 + 172) >> 2)) & 1;
      v25[29] = *(_DWORD *)(v36 + v35 + 168);
      v25[31] = *(_DWORD *)(v36 + v35 + 176);
      v37 = -1;
      v14 &= ~(1 << v20);
      v16 = !_BitScanForward((unsigned int *)&v38, v14);
      if ( !v16 )
        v37 = v38;
      v23 = v51;
      v12 = v48;
      v20 = v37;
      v52 = v37;
LABEL_32:
      *(_QWORD *)(a6 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 20))++) = v25;
      *((_QWORD *)v25 + 1) = ++*(_QWORD *)(v12 + 8LL * *v25 + 2960);
      goto LABEL_33;
    }
    if ( (*(unsigned __int16 *)(v12 + 23520) & (1 << v23)) != 0 )
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
    v39 = -1;
    v15 &= ~(1 << v23);
    v16 = !_BitScanForward((unsigned int *)&v40, v15);
    if ( !v16 )
      v39 = v40;
    v23 = v39;
    v51 = v39;
    if ( v24 )
      goto LABEL_32;
LABEL_33:
    ++v19;
  }
  v41 = *(_DWORD **)(a2 + 1144);
  if ( v41 )
  {
    *(_DWORD *)(*(_QWORD *)a6 + 40LL) = *v41;
    *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *(_QWORD *)(a2 + 1144) + 8LL;
  }
  v42 = *(_QWORD *)(a2 + 1152);
  if ( v42 && *(_DWORD *)(a2 + 1052) != 13 )
  {
    v43 = *(_QWORD *)(a2 + 1144);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v42 + 16), &v50);
    v44 = *(CRefCountedBuffer **)(v42 + 8);
    if ( v44 )
      CRefCountedBuffer::RefCountedBufferRelease(v44);
    *(_QWORD *)(v42 + 8) = v43;
    _InterlockedIncrement((volatile signed __int32 *)(v43 + 4));
    KeReleaseInStackQueuedSpinLock(&v50);
  }
  if ( (*(_DWORD *)(a2 + 1120) & 0x200) != 0 )
  {
    v45 = *(_DWORD *)(a2 + 1168);
    *(_DWORD *)a7 = v45;
    if ( v45 )
    {
      if ( v45 == 1 )
      {
        *(_DWORD *)(a7 + 4) = 28;
        *(_QWORD *)(a7 + 8) = a2 + 1172;
      }
    }
    else
    {
      *(_DWORD *)(a7 + 4) = 0;
      *(_QWORD *)(a7 + 8) = 0LL;
    }
    *(_QWORD *)(a4 + 48) = a7;
  }
  if ( (*(_DWORD *)(a2 + 1120) & 0x400) != 0 )
  {
    *(_DWORD *)a8 = 0;
    *(_OWORD *)(a8 + 4) = *(_OWORD *)(a2 + 1200);
    v46 = *(_OWORD *)(a2 + 1216);
    *(_DWORD *)(a8 + 36) = 1;
    *(_OWORD *)(a8 + 20) = v46;
    *(_QWORD *)(a4 + 32) = a8;
  }
  *(_QWORD *)(a4 + 24) = a6;
}
