/*
 * XREFs of BgpFwLibraryInitialize @ 0x140756D58
 * Callers:
 *     BgLibraryInitialize @ 0x140756130 (BgLibraryInitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     BgpFwLibraryEnable @ 0x140140494 (BgpFwLibraryEnable.c)
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140167878 (BgpGxProcessQrCodeBitmap.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     BgpFwReservePoolSwap @ 0x14075512C (BgpFwReservePoolSwap.c)
 *     AnFwProgressIndicatorTransition @ 0x140755324 (AnFwProgressIndicatorTransition.c)
 *     LogFwInitialize @ 0x1407555A0 (LogFwInitialize.c)
 *     ResFwConfigureDisplayStringResources @ 0x1407557F4 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140755880 (AnFwConfigureProgressResources.c)
 *     BgpFwInitializeReservePool @ 0x140755FB0 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDestroy @ 0x140758A70 (BgpFwLibraryDestroy.c)
 *     BgpBcInitializeCriticalMode @ 0x140837A54 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x140837E64 (BgpFoInitialize.c)
 *     BgpFwInitializeLock @ 0x1408389B4 (BgpFwInitializeLock.c)
 */

__int64 __fastcall BgpFwLibraryInitialize(__int64 a1, unsigned int a2)
{
  int v4; // r14d
  int v5; // ebx
  unsigned int v6; // ebp
  int v7; // eax
  unsigned int v8; // r13d
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // r15d
  _OWORD *Memory; // rax
  _OWORD *v16; // r12
  __int64 v17; // rdx
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  unsigned int *v20; // r8
  __int64 v21; // r15
  _OWORD *v22; // rbx
  int v23; // eax
  __int64 v24; // rdi
  void *v25; // rbx
  void *v26; // rax
  __int64 v27; // rcx
  void *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 result; // rax
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // [rsp+60h] [rbp+8h]
  unsigned int v45; // [rsp+70h] [rbp+18h]

  if ( !a1 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 116) < 3u )
    return 3221225561LL;
  v4 = *(_DWORD *)(a1 + 120) & 0x3FF0000;
  if ( (dword_140341A30 & 1) == 0 || (dword_140341A30 & 4) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
      goto LABEL_52;
    if ( a2 != -1 )
    {
      BgpFwAcquireLock();
      v5 = BgpFwLibraryEnable(a1 + 32);
      if ( v5 < 0 )
      {
        BgpFwReleaseLock();
LABEL_43:
        if ( v5 >= 0 )
          return (unsigned int)v5;
LABEL_49:
        BgpFwLibraryDestroy();
        return (unsigned int)v5;
      }
      *(PHYSICAL_ADDRESS *)&xmmword_140341A10 = MmGetPhysicalAddress(qword_1403419E0);
      DWORD2(xmmword_140341A10) = DWORD2(BgInternal);
      HIDWORD(xmmword_140341A10) = DWORD1(BgInternal);
      LODWORD(xmmword_140341A20) = HIDWORD(BgInternal);
      if ( (_DWORD)xmmword_1403419D0 == 4 )
      {
        DWORD2(xmmword_140341A20) = 3;
      }
      else if ( (_DWORD)xmmword_1403419D0 == 5 )
      {
        DWORD2(xmmword_140341A20) = 4;
      }
      else
      {
        DWORD2(xmmword_140341A20) = 0;
      }
      v6 = 0;
      v7 = 400;
      v8 = 0;
      xmmword_140341B00 = *(_OWORD *)(a1 + 256);
      v9 = 0;
      xmmword_140341B10 = *(_OWORD *)(a1 + 272);
      xmmword_140341B20 = *(_OWORD *)(a1 + 288);
      xmmword_140341B30 = *(_OWORD *)(a1 + 304);
      xmmword_140341B40 = *(_OWORD *)(a1 + 320);
      xmmword_140341B50 = *(_OWORD *)(a1 + 336);
      xmmword_140341B60 = *(_OWORD *)(a1 + 352);
      xmmword_140341B70 = *(_OWORD *)(a1 + 368);
      if ( *(_QWORD *)(a1 + 72) )
      {
        v8 = 2;
        v9 = *(_DWORD *)(a1 + 84);
        v6 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
        v7 = v6 + 432;
      }
      v10 = 0;
      v11 = 0;
      v43 = 0;
      if ( *(_QWORD *)(a1 + 128) )
      {
        v10 = 32;
        v43 = 32;
        v11 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
        v7 += v11 + 32;
      }
      v12 = v9 + 16480 + v7;
      v13 = v12 - v10 - v11 - v8 * 16 - v6 - 400;
      v14 = ((v13 >> 3) + 15) & 0xFFFFFFF0;
      v45 = v14 + v12;
      Memory = (_OWORD *)BgpFwAllocateMemory(v14 + v12);
      qword_140341A60 = (__int64)Memory;
      v16 = Memory;
      if ( Memory )
      {
        v17 = 3LL;
        v18 = (_OWORD *)a1;
        do
        {
          *Memory = *v18;
          Memory[1] = v18[1];
          Memory[2] = v18[2];
          Memory[3] = v18[3];
          Memory[4] = v18[4];
          Memory[5] = v18[5];
          Memory[6] = v18[6];
          Memory += 8;
          v19 = v18[7];
          v18 += 8;
          *(Memory - 1) = v19;
          --v17;
        }
        while ( v17 );
        *Memory = *v18;
        *(_DWORD *)v16 = v45;
        *((_DWORD *)v16 + 30) |= 0x100000u;
        *((_QWORD *)v16 + 28) = 0LL;
        *((_DWORD *)v16 + 58) = 0;
        *((_QWORD *)v16 + 31) = 0LL;
        *((_QWORD *)v16 + 30) = 0LL;
        v20 = (unsigned int *)((char *)v16 + v6 + v8 * 16 + v11 + v43 + 400);
        BgpFwInitializeReservePool((__int64)v20 + v14, v13, v20);
        qword_140341AD0 = 0LL;
        if ( !v6 )
          goto LABEL_76;
        v21 = (__int64)(v16 + 25);
        v22 = &v16[v8 + 25];
        memmove(v22, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 80));
        *((_QWORD *)v16 + 50) = v22;
        *((_DWORD *)v16 + 103) = 1;
        *((_DWORD *)v16 + 102) = *(_DWORD *)(a1 + 80);
        *((_QWORD *)v16 + 52) = v22;
        dword_140341A30 |= 0x800u;
        v23 = BgpFoInitialize(v16 + 25, 1LL);
        dword_140341A30 &= ~0x800u;
        if ( v23 < 0 )
          v21 = qword_140341AD0;
        else
          qword_140341AD0 = (__int64)(v16 + 25);
        if ( !v21 )
LABEL_76:
          DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
        qword_140341AD8 = 0LL;
        if ( v11 )
        {
          v24 = (__int64)&v16[v8 + 25] + v6;
          v25 = (void *)(v24 + v43);
          memmove(v25, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
          *(_DWORD *)(v24 + 12) = 1;
          *(_QWORD *)v24 = v25;
          *(_DWORD *)(v24 + 8) = *(_DWORD *)(a1 + 136);
          *(_QWORD *)(v24 + 16) = v25;
          qword_140341AD8 = v24;
        }
        memset(&Src, 0, 0x48uLL);
        if ( *(_QWORD *)(a1 + 144) )
        {
          v26 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 160));
          Src = v26;
          if ( v26 )
          {
            memmove(v26, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
            LODWORD(Size) = *(_DWORD *)(a1 + 160);
            qword_140341A8C = *(_QWORD *)(a1 + 164);
          }
        }
        v27 = *(_QWORD *)(a1 + 184);
        if ( v27 && (int)BgpGxProcessQrCodeBitmap(v27, &qword_140341AB8) < 0 )
          qword_140341AB8 = 0LL;
        qword_140341AC8 = 0LL;
        if ( !*(_QWORD *)(a1 + 88) )
          goto LABEL_34;
        v28 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 96));
        v29 = (__int64)v28;
        if ( !v28 )
          goto LABEL_34;
        memmove(v28, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
        v30 = BgpFwAllocateMemory(0x18uLL);
        v31 = v30;
        if ( v30 )
        {
          *(_DWORD *)(v30 + 12) = 0;
          *(_QWORD *)v30 = v29;
          *(_DWORD *)(v30 + 8) = *(_DWORD *)(a1 + 96);
          *(_QWORD *)(v30 + 16) = v29;
          if ( (int)BgpFoInitialize(v30, 0LL) >= 0 )
          {
            qword_140341AC8 = v31;
LABEL_34:
            if ( *(_DWORD *)(a1 + 116) >= 3u )
            {
              qword_140341BA0 = *(_QWORD *)(a1 + 388);
              dword_140341BA8 = *(_DWORD *)(a1 + 396);
            }
            v32 = *(_DWORD *)(a1 + 384);
            dword_140341A30 |= 0x8000u;
            dword_140341B88 = v32;
            BgpBcInitializeCriticalMode(a1, a2);
            dword_140341A30 = dword_140341A30 & 0xFFFF77FF | 0x800;
            v33 = BgpFwAllocateMemory(0x38uLL);
            dword_140341A30 &= ~0x800u;
            v34 = v33;
            if ( v33 )
            {
              v35 = *(_QWORD *)(a1 + 240);
              if ( v35 )
              {
                *(_OWORD *)v34 = *(_OWORD *)v35;
                *(_QWORD *)(v34 + 16) = *(_QWORD *)(v35 + 16);
                *(_DWORD *)(v34 + 24) = *(_DWORD *)(v35 + 24);
                *((_QWORD *)v16 + 30) = v34;
                v34 += 28LL;
              }
              v36 = *(_QWORD *)(a1 + 248);
              if ( v36 )
              {
                *(_OWORD *)v34 = *(_OWORD *)v36;
                *(_QWORD *)(v34 + 16) = *(_QWORD *)(v36 + 16);
                *(_DWORD *)(v34 + 24) = *(_DWORD *)(v36 + 24);
                *((_QWORD *)v16 + 31) = v34;
              }
            }
            qword_140341AE8 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 240));
            qword_140341AE0 = AnFwConfigureProgressResources(*(int **)(a1 + 248));
            v37 = *(_DWORD *)(a1 + 124);
            dword_140341A30 |= v4 | 0x80;
            dword_140341A34 = v37;
            BgpFwReleaseLock();
            qword_140341AC0 = *(_QWORD *)(a1 + 216);
            goto LABEL_42;
          }
          BgpFwFreeMemory(v29);
          v42 = v31;
        }
        else
        {
          v42 = v29;
        }
        BgpFwFreeMemory(v42);
        goto LABEL_34;
      }
      BgpFwReleaseLock();
LABEL_70:
      v5 = -1073741801;
      goto LABEL_49;
    }
    dword_140341A30 = BgpFwInitializeLock(0x100000LL) | 0xC04;
    qword_140341AF8 = (__int64)&qword_140341AF0;
    qword_140341AF0 = (__int64)&qword_140341AF0;
    v39 = *(_QWORD *)(a1 + 224);
    if ( !v39 || !*(_DWORD *)(a1 + 232) )
      return 3221225626LL;
    BgpFwInitializeReservePool(v39, 0x4000u, dword_140386D00);
    v5 = BgpFwLibraryEnable(a1 + 32);
    if ( v5 < 0 )
      goto LABEL_49;
    xmmword_140341A68 = *(_OWORD *)(a1 + 100);
    if ( *(_QWORD *)(a1 + 88) )
    {
      v41 = BgpFwAllocateMemory(0x18uLL);
      if ( !v41 )
        goto LABEL_70;
      *(_QWORD *)v41 = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(v41 + 8) = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(v41 + 16) = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(v41 + 12) = 1;
      qword_140341AC8 = v41;
      v5 = BgpFoInitialize(v41, 0LL);
      if ( v5 < 0 )
        goto LABEL_49;
    }
    if ( *(_DWORD *)(a1 + 116) >= 3u )
    {
      qword_140341BA0 = *(_QWORD *)(a1 + 388);
      dword_140341BA8 = *(_DWORD *)(a1 + 396);
    }
    dword_140341B88 = *(_DWORD *)(a1 + 384);
    v5 = BgpBcInitializeCriticalMode(a1, 0xFFFFFFFFLL);
    if ( v5 < 0 )
      goto LABEL_49;
    goto LABEL_42;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x100000) == 0 )
    return 3221225485LL;
LABEL_52:
  BgpFwAcquireLock();
  if ( a2 != -1 )
  {
    dword_140341A30 &= ~0x1000u;
    AnFwProgressIndicatorTransition();
LABEL_57:
    BgpFwReleaseLock();
LABEL_42:
    dword_140341A30 |= 1u;
    v5 = 0;
    goto LABEL_43;
  }
  dword_140341A30 &= ~2u;
  memset(&BgInternal, 0, 0x28uLL);
  dword_140341A30 |= 0x101800u;
  result = BgpFwLibraryEnable(a1 + 32);
  if ( (int)result >= 0 )
  {
    dword_140341A30 &= ~0x2000u;
    v40 = *(_QWORD *)(a1 + 16);
    if ( v40 )
    {
      BgpFwReservePoolSwap(0, *(_QWORD *)(a1 + 224), *(_DWORD *)(a1 + 232), v40);
      qword_140341AE8 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 240));
      qword_140341AE0 = AnFwConfigureProgressResources(*(int **)(a1 + 248));
    }
    else
    {
      qword_140341AE8 = 0LL;
      qword_140341AE0 = 0LL;
    }
    LogFwInitialize();
    goto LABEL_57;
  }
  return result;
}
