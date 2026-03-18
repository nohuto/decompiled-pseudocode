/*
 * XREFs of VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C002CDEC
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0027464 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002AB00 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00159C0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00271BC (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 */

__int64 __fastcall VidSchiSetupMmIoFlipMultiPlaneOverlay3(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r9
  int v12; // ecx
  unsigned int v13; // ebp
  unsigned int v14; // esi
  bool v15; // zf
  int v16; // eax
  char v17; // cl
  unsigned int v18; // r12d
  unsigned int v19; // r11d
  char v20; // cl
  int v21; // eax
  unsigned int v22; // r8d
  char v23; // r10
  unsigned int *v24; // rdi
  unsigned int v25; // r15d
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // r13
  CRefCountedBuffer *v31; // rcx
  int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // rdx
  char v36; // cl
  int v37; // eax
  char v38; // cl
  int v39; // eax
  _DWORD *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  CRefCountedBuffer *v43; // rcx
  __int64 result; // rax
  int v45; // edx
  int v46; // edx
  __int128 v47; // xmm1
  __int64 v48; // [rsp+28h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v50; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v51; // [rsp+B0h] [rbp+8h]
  unsigned int v52; // [rsp+C0h] [rbp+18h]

  v11 = *(_QWORD *)(a1 + 8LL * a3 + 3032);
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = a3;
  v48 = v11;
  *(_DWORD *)(a4 + 12) ^= (*(_DWORD *)(a2 + 1120) ^ *(_DWORD *)(a4 + 12)) & 1;
  v12 = *(_DWORD *)(a4 + 12) ^ (*(_DWORD *)(a2 + 1120) ^ *(_DWORD *)(a4 + 12)) & 2;
  *(_DWORD *)(a4 + 12) = v12;
  *(_DWORD *)(a4 + 12) = v12 ^ (*(_DWORD *)(a2 + 1120) ^ v12) & 4;
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1124);
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 2120) = -1073741823;
  if ( (*(_DWORD *)(a2 + 1120) & 0x10) != 0 )
  {
    v13 = **(_DWORD **)(a2 + 1160) & 0x3FF;
    v14 = (**(_DWORD **)(a2 + 1160) >> 10) & 0x3FF;
  }
  else
  {
    v13 = 1;
    v14 = ((1 << *(_DWORD *)(a1 + 132)) - 1) & 0xFFFFFFFE;
  }
  v15 = !_BitScanForward((unsigned int *)&v16, v13);
  *(_DWORD *)(a4 + 20) = 0;
  v17 = -1;
  if ( !v15 )
    v17 = v16;
  v18 = 0;
  v19 = v17;
  v20 = -1;
  v15 = !_BitScanForward((unsigned int *)&v21, v14);
  v52 = v19;
  if ( !v15 )
    v20 = v21;
  v22 = v20;
  v51 = v20;
  while ( v13 || v14 )
  {
    v23 = 1;
    v24 = (unsigned int *)(v18 * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                         + *(_QWORD *)(a2 + 1160)
                         + 16LL);
    if ( v19 < v22 )
    {
      v25 = 0;
      v24[4] = (2 * a5) | v24[4] & 0xFFFFFFF9 | (4 * (a5 ^ 1));
      v26 = *(_DWORD *)(a2 + 1084);
      v24[7] = v26;
      *((_QWORD *)v24 + 4) = v24 + 42;
      if ( v26 )
      {
        do
        {
          VidSchiBindFlipPhysicalAddress(*(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(a2 + 1160), v18, v25);
          v27 = 48LL * (v18 + v25 * *(_DWORD *)(*(_QWORD *)(a2 + 1160) + 4LL))
              + 16
              + *(_QWORD *)(a2 + 1160)
              + *(_DWORD *)(*(_QWORD *)(a2 + 1160) + 4LL)
              * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1160) + 8LL) + 175) & 0xFFFFFFF8);
          v28 = v25++;
          *(_QWORD *)(*((_QWORD *)v24 + 4) + 8 * v28) = v27;
        }
        while ( v25 < v24[7] );
        v19 = v52;
      }
      if ( !v19 )
      {
        v29 = *(_QWORD *)(a2 + 1144);
        if ( v29 )
        {
          v24[10] = *(_DWORD *)v29;
          *((_QWORD *)v24 + 6) = *(_QWORD *)(a2 + 1144) + 8LL;
          v29 = *(_QWORD *)(a2 + 1144);
        }
        v30 = *(_QWORD *)(a2 + 1152);
        if ( v30 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 16), &LockHandle);
          v31 = *(CRefCountedBuffer **)(v30 + 8);
          if ( v31 )
            CRefCountedBuffer::RefCountedBufferRelease(v31);
          *(_QWORD *)(v30 + 8) = v29;
          _InterlockedIncrement((volatile signed __int32 *)(v29 + 4));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v19 = v52;
        }
      }
      *v24 = v19;
      v24[4] |= 1u;
      v32 = v24[4] ^ ((unsigned __int8)v24[4] ^ (unsigned __int8)*(_DWORD *)(a2 + 1120)) & 8;
      v24[4] = v32;
      v37 = v32 ^ ((unsigned __int8)v32 ^ (unsigned __int8)(*(_DWORD *)(a2 + 1120) >> 1)) & 0x10;
      v33 = v24[14];
      v24[4] = v37;
      v34 = *(_QWORD *)(a2 + 1160);
      v35 = v18 * ((8 * *(_DWORD *)(v34 + 8) + 175) & 0xFFFFFFF8);
      v24[14] ^= (*(_DWORD *)(v35 + v34 + 172) ^ v33) & 1;
      v24[14] ^= ((unsigned __int8)v24[14] ^ (unsigned __int8)*(_DWORD *)(v35 + v34 + 172)) & 2;
      v24[15] = (unsigned __int16)*(_DWORD *)(v35 + v34 + 144);
      v24[16] = (unsigned __int16)*(_DWORD *)(v35 + v34 + 148);
      v24[17] = *(unsigned __int16 *)(v35 + v34 + 146);
      v24[18] = *(unsigned __int16 *)(v35 + v34 + 150);
      v24[19] = *(__int16 *)(v35 + v34 + 152);
      v24[20] = *(__int16 *)(v35 + v34 + 156);
      v24[21] = *(unsigned __int16 *)(v35 + v34 + 154);
      v24[22] = *(unsigned __int16 *)(v35 + v34 + 158);
      v24[23] = (unsigned __int16)*(_DWORD *)(v35 + v34 + 160);
      v24[24] = (unsigned __int16)*(_DWORD *)(v35 + v34 + 164);
      v24[25] = *(unsigned __int16 *)(v35 + v34 + 162);
      v24[26] = *(unsigned __int16 *)(v35 + v34 + 166);
      v24[27] = ((*(_DWORD *)(v35 + v34 + 172) >> 3) & 3) + 1;
      v24[28] ^= (v24[28] ^ (*(_DWORD *)(v35 + v34 + 172) >> 2)) & 1;
      v24[29] = *(_DWORD *)(v35 + v34 + 168);
      v24[31] = *(_DWORD *)(v35 + v34 + 176);
      v36 = -1;
      v13 &= ~(1 << v19);
      v15 = !_BitScanForward((unsigned int *)&v37, v13);
      v22 = v51;
      if ( !v15 )
        v36 = v37;
      v11 = v48;
      v19 = v36;
      v52 = v36;
LABEL_31:
      *(_QWORD *)(a6 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 20))++) = v24;
      if ( (*(_DWORD *)(a2 + 1120) & 0x800) == 0 )
        *((_QWORD *)v24 + 1) = ++*(_QWORD *)(v11 + 8LL * *v24 + 2320);
      goto LABEL_33;
    }
    if ( (*(unsigned __int16 *)(v11 + 28000) & (1 << v22)) != 0 )
    {
      *((_QWORD *)v24 + 3) = 0LL;
      *((_QWORD *)v24 + 4) = 0LL;
      v24[10] = 0;
      *((_QWORD *)v24 + 6) = 0LL;
      *v24 = v22;
      v24[4] = 0;
    }
    else
    {
      v23 = 0;
      *((_QWORD *)v24 + 1) = 0LL;
    }
    v38 = -1;
    v14 &= ~(1 << v22);
    v15 = !_BitScanForward((unsigned int *)&v39, v14);
    if ( !v15 )
      v38 = v39;
    v22 = v38;
    v51 = v38;
    if ( v23 )
      goto LABEL_31;
LABEL_33:
    ++v18;
  }
  v40 = *(_DWORD **)(a2 + 1144);
  if ( v40 )
  {
    *(_DWORD *)(*(_QWORD *)a6 + 40LL) = *v40;
    *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *(_QWORD *)(a2 + 1144) + 8LL;
  }
  v41 = *(_QWORD *)(a2 + 1152);
  if ( v41 && *(_DWORD *)(a2 + 1052) != 13 )
  {
    v42 = *(_QWORD *)(a2 + 1144);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v41 + 16), &v50);
    v43 = *(CRefCountedBuffer **)(v41 + 8);
    if ( v43 )
      CRefCountedBuffer::RefCountedBufferRelease(v43);
    *(_QWORD *)(v41 + 8) = v42;
    _InterlockedIncrement((volatile signed __int32 *)(v42 + 4));
    KeReleaseInStackQueuedSpinLock(&v50);
  }
  result = *(unsigned int *)(a2 + 1120);
  if ( (result & 0x200) != 0 )
  {
    v45 = *(_DWORD *)(a2 + 1168);
    *(_DWORD *)a7 = v45;
    if ( v45 )
    {
      v46 = v45 - 1;
      if ( v46 )
      {
        if ( v46 == 1 )
        {
          *(_DWORD *)(a7 + 4) = 72;
          goto LABEL_47;
        }
      }
      else
      {
        *(_DWORD *)(a7 + 4) = 28;
LABEL_47:
        *(_QWORD *)(a7 + 8) = a2 + 1172;
      }
    }
    else
    {
      *(_DWORD *)(a7 + 4) = 0;
      *(_QWORD *)(a7 + 8) = 0LL;
    }
    *(_QWORD *)(a4 + 48) = a7;
    result = *(unsigned int *)(a2 + 1120);
  }
  if ( (result & 0x400) != 0 )
  {
    result = a8;
    *(_DWORD *)a8 = 0;
    *(_OWORD *)(a8 + 4) = *(_OWORD *)(a2 + 1244);
    v47 = *(_OWORD *)(a2 + 1260);
    *(_DWORD *)(a8 + 36) = 1;
    *(_OWORD *)(a8 + 20) = v47;
    *(_QWORD *)(a4 + 32) = a8;
  }
  *(_QWORD *)(a4 + 24) = a6;
  return result;
}
