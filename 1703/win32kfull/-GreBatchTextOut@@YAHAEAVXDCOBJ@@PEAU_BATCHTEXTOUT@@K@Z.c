/*
 * XREFs of ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00D7A10
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0077C10 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0078C70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall GreBatchTextOut(struct XDCOBJ *a1, struct _BATCHTEXTOUT *Src, size_t Size)
{
  __int64 v3; // r14
  __int64 v6; // rdi
  __int64 v7; // r13
  int v8; // r12d
  int *v9; // r11
  int v10; // r9d
  unsigned int v11; // r10d
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  int v15; // r15d
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r14d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rbx
  struct tagRECT *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v31; // [rsp+B0h] [rbp+18h]
  int v32; // [rsp+B8h] [rbp+20h]

  v3 = (unsigned int)Size;
  if ( (unsigned int)Size < 0x54 )
    return 0LL;
  if ( !Src )
    return 0LL;
  v6 = AllocFreeTmpBuffer((unsigned int)Size);
  if ( !v6 )
    return 0LL;
  if ( (struct _BATCHTEXTOUT *)((char *)Src + v3) < Src || (unsigned __int64)Src + v3 > W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  memmove((void *)v6, Src, (unsigned int)v3);
  v7 = 0LL;
  v8 = -1;
  v9 = 0LL;
  v10 = *(_DWORD *)(v6 + 32);
  v11 = *(_DWORD *)(v6 + 56);
  v12 = *(unsigned int *)(v6 + 60);
  v13 = v3 - 84;
  if ( v11 > (unsigned int)(v3 - 84) >> 1 )
  {
LABEL_37:
    FreeTmpBuffer(v6);
    return 0LL;
  }
  if ( (_DWORD)v12 )
  {
    if ( (unsigned int)v12 <= v13
      && v11 <= (v13 - (unsigned int)v12) >> (((*(_DWORD *)(v6 + 32) & 0x2000) != 0) + 2)
      && (_DWORD)v12 == (((_DWORD)v12 + 3) & 0xFFFFFFFC) )
    {
      v9 = (int *)(v12 + v6 + 84);
      goto LABEL_13;
    }
    goto LABEL_37;
  }
LABEL_13:
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v15 = *(_DWORD *)(v14 + 40);
  v31 = *(_DWORD *)(v14 + 44);
  v16 = *(_DWORD *)(v6 + 4);
  if ( v15 != v16 )
  {
    *(_DWORD *)(v14 + 40) = v16;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 44LL) = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 7u;
  }
  v17 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v18 = *(_DWORD *)(v17 + 32);
  v32 = *(_DWORD *)(v17 + 36);
  v19 = *(_DWORD *)(v6 + 8);
  if ( v18 != v19 )
  {
    *(_DWORD *)(v17 + 32) = v19;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = *(_DWORD *)(v6 + 20);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
  }
  v20 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v21 = *(_QWORD *)(v6 + 64);
  if ( *(_QWORD *)(v20 + 176) != v21 )
  {
    v7 = *(_QWORD *)(v20 + 176);
    *(_QWORD *)(v20 + 176) = v21;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= ~0x20u;
  }
  v22 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v23 = *(_DWORD *)(v6 + 72);
  if ( *(_DWORD *)(v22 + 152) != v23 )
  {
    v8 = *(_DWORD *)(v22 + 152);
    *(_DWORD *)(v22 + 152) = v23;
  }
  v24 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v25 = *(_QWORD *)(v24 + 336);
  if ( v25 != *(_QWORD *)(v6 + 76) )
  {
    *(_DWORD *)(v24 + 336) = *(_DWORD *)(v6 + 76);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = *(_DWORD *)(v6 + 80);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  if ( v10 < 0 )
  {
    v26 = 0LL;
    v10 &= ~0x80000000;
  }
  else
  {
    v26 = (struct tagRECT *)(v6 + 36);
  }
  GreExtTextOutWLocked(
    a1,
    *(_DWORD *)(v6 + 24),
    *(_DWORD *)(v6 + 28),
    v10,
    v26,
    (unsigned __int16 *)(v6 + 84),
    v11,
    v9,
    *(_DWORD *)(v6 + 12),
    0LL,
    *(_DWORD *)(v6 + 52));
  v27 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v27 + 40) != v15 )
  {
    *(_DWORD *)(v27 + 40) = v15;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 44LL) = v31;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 7u;
  }
  v28 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v28 + 32) != v18 )
  {
    *(_DWORD *)(v28 + 32) = v18;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = v32;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
  }
  if ( v7 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 176LL) = v7;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= ~0x20u;
  }
  if ( v8 != -1 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 152LL) = v8;
  v29 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( v25 != *(_QWORD *)(v29 + 336) )
  {
    *(_DWORD *)(v29 + 336) = v25;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = HIDWORD(v25);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  FreeTmpBuffer(v6);
  return 1LL;
}
