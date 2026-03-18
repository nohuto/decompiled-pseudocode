/*
 * XREFs of BgpFwLibraryInitialize @ 0x1407D01A4
 * Callers:
 *     BgLibraryInitialize @ 0x1407D088C (BgLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14013B4CC (BgpGxProcessQrCodeBitmap.c)
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     BgpFwLibraryEnable @ 0x14013E9AC (BgpFwLibraryEnable.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ResFwConfigureDisplayStringResources @ 0x1407CE310 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x1407CE39C (AnFwConfigureProgressResources.c)
 *     BgpFwInitializeReservePool @ 0x1407D0848 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDestroy @ 0x1407D0C28 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x1407D39C4 (BgpFwReservePoolSwap.c)
 *     AnFwProgressIndicatorTransition @ 0x1407D3C8C (AnFwProgressIndicatorTransition.c)
 *     LogFwInitialize @ 0x1407D44D8 (LogFwInitialize.c)
 *     BgpFoInitialize @ 0x14086EBD4 (BgpFoInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x14086F1D0 (BgpBcInitializeCriticalMode.c)
 *     BgpFwInitializeLock @ 0x14086FC10 (BgpFwInitializeLock.c)
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
  unsigned int v14; // r12d
  _OWORD *Memory; // rax
  _OWORD *v16; // r15
  __int64 v17; // rdx
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  char *v20; // r8
  _OWORD *v21; // rbx
  int v22; // eax
  __int64 v23; // rdi
  void *v24; // rbx
  void *v25; // rax
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  __int64 result; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // [rsp+60h] [rbp+8h]
  unsigned int v43; // [rsp+70h] [rbp+18h]

  if ( !a1 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 116) < 3u )
    return 3221225561LL;
  v4 = *(_DWORD *)(a1 + 120) & 0x16FF0000;
  if ( (dword_14035A1B0 & 1) == 0 || (dword_14035A1B0 & 4) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
      goto LABEL_55;
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
      *(PHYSICAL_ADDRESS *)&xmmword_14035A190 = MmGetPhysicalAddress(qword_14035A160);
      DWORD2(xmmword_14035A190) = DWORD2(BgInternal);
      HIDWORD(xmmword_14035A190) = DWORD1(BgInternal);
      LODWORD(xmmword_14035A1A0) = HIDWORD(BgInternal);
      if ( (_DWORD)xmmword_14035A150 == 4 )
      {
        DWORD2(xmmword_14035A1A0) = 3;
      }
      else if ( (_DWORD)xmmword_14035A150 == 5 )
      {
        DWORD2(xmmword_14035A1A0) = 4;
      }
      else
      {
        DWORD2(xmmword_14035A1A0) = 0;
      }
      v6 = 0;
      v7 = 400;
      v8 = 0;
      xmmword_14035A280 = *(_OWORD *)(a1 + 256);
      v9 = 0;
      xmmword_14035A290 = *(_OWORD *)(a1 + 272);
      xmmword_14035A2A0 = *(_OWORD *)(a1 + 288);
      xmmword_14035A2B0 = *(_OWORD *)(a1 + 304);
      xmmword_14035A2C0 = *(_OWORD *)(a1 + 320);
      xmmword_14035A2D0 = *(_OWORD *)(a1 + 336);
      xmmword_14035A2E0 = *(_OWORD *)(a1 + 352);
      xmmword_14035A2F0 = *(_OWORD *)(a1 + 368);
      if ( *(_QWORD *)(a1 + 72) )
      {
        v8 = 2;
        v9 = *(_DWORD *)(a1 + 84);
        v6 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
        v7 = v6 + 432;
      }
      v10 = 0;
      v11 = 0;
      v41 = 0;
      if ( *(_QWORD *)(a1 + 128) )
      {
        v10 = 32;
        v41 = 32;
        v11 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
        v7 += v11 + 32;
      }
      v12 = v9 + 16480 + v7;
      v13 = v12 - v10 - v11 - v8 * 16 - v6 - 400;
      v14 = ((v13 >> 3) + 15) & 0xFFFFFFF0;
      v43 = v14 + v12;
      Memory = (_OWORD *)BgpFwAllocateMemory(v14 + v12);
      qword_14035A1E0 = (__int64)Memory;
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
        *(_DWORD *)v16 = v43;
        *((_QWORD *)v16 + 28) = 0LL;
        *((_DWORD *)v16 + 58) = 0;
        v20 = (char *)v16 + v6 + v8 * 16 + v11 + v41 + 400;
        *((_QWORD *)v16 + 31) = 0LL;
        *((_QWORD *)v16 + 30) = 0LL;
        *((_DWORD *)v16 + 30) |= 0x100000u;
        BgpFwInitializeReservePool(&v20[v14], v13, v20);
        qword_14035A250 = 0LL;
        if ( !v6 )
          goto LABEL_75;
        v21 = &v16[v8 + 25];
        memmove(v21, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 80));
        *((_QWORD *)v16 + 50) = v21;
        *((_DWORD *)v16 + 103) = 1;
        *((_DWORD *)v16 + 102) = *(_DWORD *)(a1 + 80);
        *((_QWORD *)v16 + 52) = v21;
        dword_14035A1B0 |= 0x800u;
        v22 = BgpFoInitialize(v16 + 25, 1LL);
        dword_14035A1B0 &= ~0x800u;
        if ( v22 >= 0 )
          qword_14035A250 = (__int64)(v16 + 25);
        if ( !qword_14035A250 )
LABEL_75:
          DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
        qword_14035A258 = 0LL;
        if ( v11 )
        {
          v23 = (__int64)&v16[v8 + 25] + v6;
          v24 = (void *)(v23 + v41);
          memmove(v24, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
          *(_DWORD *)(v23 + 12) = 1;
          *(_QWORD *)v23 = v24;
          *(_DWORD *)(v23 + 8) = *(_DWORD *)(a1 + 136);
          *(_QWORD *)(v23 + 16) = v24;
          qword_14035A258 = v23;
        }
        memset(&Src, 0, 0x48uLL);
        if ( *(_QWORD *)(a1 + 144) )
        {
          v25 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 160));
          Src = v25;
          if ( v25 )
          {
            memmove(v25, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
            LODWORD(Size) = *(_DWORD *)(a1 + 160);
            qword_14035A20C = *(_QWORD *)(a1 + 164);
          }
        }
        v26 = *(_QWORD *)(a1 + 184);
        if ( v26 && (int)BgpGxProcessQrCodeBitmap(v26, &qword_14035A238) < 0 )
          qword_14035A238 = 0LL;
        qword_14035A248 = 0LL;
        if ( !*(_QWORD *)(a1 + 88) )
          goto LABEL_34;
        v27 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 96));
        v28 = (__int64)v27;
        if ( !v27 )
          goto LABEL_34;
        memmove(v27, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
        v29 = BgpFwAllocateMemory(0x18uLL);
        v30 = v29;
        if ( v29 )
        {
          *(_DWORD *)(v29 + 12) = 0;
          *(_QWORD *)v29 = v28;
          *(_DWORD *)(v29 + 8) = *(_DWORD *)(a1 + 96);
          *(_QWORD *)(v29 + 16) = v28;
          if ( (int)BgpFoInitialize(v29, 0LL) >= 0 )
          {
            qword_14035A248 = v30;
LABEL_34:
            if ( *(_DWORD *)(a1 + 116) >= 3u )
            {
              qword_14035A320 = *(_QWORD *)(a1 + 388);
              dword_14035A328 = *(_DWORD *)(a1 + 396);
            }
            v31 = *(_DWORD *)(a1 + 384);
            dword_14035A1B0 |= 0x8000u;
            dword_14035A308 = v31;
            BgpBcInitializeCriticalMode(a1, a2);
            dword_14035A1B0 = dword_14035A1B0 & 0xFFFF77FF | 0x800;
            v32 = BgpFwAllocateMemory(0x38uLL);
            dword_14035A1B0 &= ~0x800u;
            v33 = v32;
            if ( v32 )
            {
              v34 = *(_QWORD *)(a1 + 240);
              if ( v34 )
              {
                *(_OWORD *)v33 = *(_OWORD *)v34;
                *(_QWORD *)(v33 + 16) = *(_QWORD *)(v34 + 16);
                *(_DWORD *)(v33 + 24) = *(_DWORD *)(v34 + 24);
                *((_QWORD *)v16 + 30) = v33;
                v33 += 28LL;
              }
              v35 = *(_QWORD *)(a1 + 248);
              if ( v35 )
              {
                *(_OWORD *)v33 = *(_OWORD *)v35;
                *(_QWORD *)(v33 + 16) = *(_QWORD *)(v35 + 16);
                *(_DWORD *)(v33 + 24) = *(_DWORD *)(v35 + 24);
                *((_QWORD *)v16 + 31) = v33;
              }
            }
            qword_14035A268 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 240));
            qword_14035A260 = AnFwConfigureProgressResources(*(int **)(a1 + 248));
            v36 = *(_DWORD *)(a1 + 124);
            dword_14035A1B0 |= v4 | 0x80;
            dword_14035A1B4 = v36;
            BgpFwReleaseLock();
            qword_14035A240 = *(_QWORD *)(a1 + 216);
            goto LABEL_42;
          }
          BgpFwFreeMemory(v28);
          v40 = v30;
        }
        else
        {
          v40 = v28;
        }
        BgpFwFreeMemory(v40);
        goto LABEL_34;
      }
      BgpFwReleaseLock();
LABEL_71:
      v5 = -1073741801;
      goto LABEL_49;
    }
    dword_14035A1B0 = BgpFwInitializeLock(0x100000LL) | 0xC04;
    qword_14035A278 = (__int64)&qword_14035A270;
    qword_14035A270 = (__int64)&qword_14035A270;
    v38 = *(_QWORD *)(a1 + 224);
    if ( !v38 || !*(_DWORD *)(a1 + 232) )
      return 3221225626LL;
    BgpFwInitializeReservePool(v38, 0x4000LL, &unk_1403A2170);
    v5 = BgpFwLibraryEnable(a1 + 32);
    if ( v5 < 0 )
      goto LABEL_49;
    xmmword_14035A1E8 = *(_OWORD *)(a1 + 100);
    if ( *(_QWORD *)(a1 + 88) )
    {
      v39 = BgpFwAllocateMemory(0x18uLL);
      if ( !v39 )
        goto LABEL_71;
      *(_QWORD *)v39 = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(v39 + 8) = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(v39 + 16) = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(v39 + 12) = 1;
      qword_14035A248 = v39;
      v5 = BgpFoInitialize(v39, 0LL);
      if ( v5 < 0 )
        goto LABEL_49;
    }
    if ( *(_DWORD *)(a1 + 116) >= 3u )
    {
      qword_14035A320 = *(_QWORD *)(a1 + 388);
      dword_14035A328 = *(_DWORD *)(a1 + 396);
    }
    dword_14035A308 = *(_DWORD *)(a1 + 384);
    v5 = BgpBcInitializeCriticalMode(a1, 0xFFFFFFFFLL);
    if ( v5 < 0 )
      goto LABEL_49;
    goto LABEL_42;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x100000) == 0 )
    return 3221225485LL;
LABEL_55:
  BgpFwAcquireLock();
  if ( a2 != -1 )
  {
    dword_14035A1B0 &= ~0x1000u;
    AnFwProgressIndicatorTransition();
LABEL_62:
    BgpFwReleaseLock();
LABEL_42:
    dword_14035A1B0 |= 1u;
    v5 = 0;
    goto LABEL_43;
  }
  dword_14035A1B0 &= ~2u;
  memset(&BgInternal, 0, 0x28uLL);
  dword_14035A1B0 |= 0x101800u;
  result = BgpFwLibraryEnable(a1 + 32);
  if ( (int)result >= 0 )
  {
    dword_14035A1B0 &= ~0x2000u;
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(0LL, *(_QWORD *)(a1 + 224), *(unsigned int *)(a1 + 232));
      qword_14035A268 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 240));
      qword_14035A260 = AnFwConfigureProgressResources(*(int **)(a1 + 248));
    }
    else
    {
      qword_14035A268 = 0LL;
      qword_14035A260 = 0LL;
    }
    LogFwInitialize();
    goto LABEL_62;
  }
  return result;
}
