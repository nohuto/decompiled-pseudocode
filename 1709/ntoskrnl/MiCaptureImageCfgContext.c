/*
 * XREFs of MiCaptureImageCfgContext @ 0x1404F6C80
 * Callers:
 *     MiParseImageLoadConfig @ 0x1404F6FD8 (MiParseImageLoadConfig.c)
 * Callees:
 *     MiFreeImageCfgContext @ 0x1400B61F8 (MiFreeImageCfgContext.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiLogRelocationRva @ 0x1404F7BA0 (MiLogRelocationRva.c)
 */

__int64 __fastcall MiCaptureImageCfgContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        _DWORD *a10,
        __int64 a11)
{
  unsigned int v13; // ebx
  __int64 v14; // r11
  unsigned __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned __int64 v17; // r15
  unsigned int v18; // r14d
  unsigned int v19; // esi
  int v20; // ecx
  unsigned int v21; // esi
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // r15
  __int64 v26; // rdi
  unsigned int v27; // r12d
  char *PoolWithTag; // rax
  char *v29; // r14
  int v30; // r12d
  unsigned int v31; // eax
  unsigned __int64 v32; // rdx
  unsigned int v34; // [rsp+24h] [rbp-54h]
  unsigned int v37; // [rsp+A8h] [rbp+30h]

  v13 = 0;
  *a10 = 0;
  v14 = a11;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_QWORD *)(a11 + 16) = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( *(_WORD *)(a7 + 48) == 523 )
  {
    v17 = *(_QWORD *)(a8 + 128);
    v18 = *(_DWORD *)(a8 + 136);
    v37 = v18;
    v19 = *(_DWORD *)(a8 + 144);
    v34 = v19;
    v20 = v19 & 0x4000;
    if ( (v19 & 0x4000) != 0 && a9 >= 0xB0 )
    {
      v15 = *(_QWORD *)(a8 + 160);
      v16 = *(_DWORD *)(a8 + 168);
    }
  }
  else
  {
    v17 = *(unsigned int *)(a8 + 80);
    v18 = *(_DWORD *)(a8 + 84);
    v37 = v18;
    v19 = *(_DWORD *)(a8 + 88);
    v34 = v19;
    v20 = v19 & 0x4000;
    if ( (v19 & 0x4000) != 0 && a9 >= 0x70 )
    {
      v15 = *(unsigned int *)(a8 + 104);
      v16 = *(_DWORD *)(a8 + 108);
    }
  }
  if ( (v19 & 0x400) == 0 || !v17 )
  {
    v30 = 0;
    goto LABEL_37;
  }
  v21 = (v19 >> 28) + 4;
  if ( v17 < a4 || !v18 || v18 >= 0xFFFFFFFF / v21 )
  {
    v30 = -1073741819;
    dword_140388338 = 4;
    goto LABEL_37;
  }
  if ( v20 && v15 )
  {
    if ( v15 < a4 || !v16 || v16 >= 0xFFFFFFFF / v21 )
    {
      v30 = -1073741819;
      dword_140388338 = 10;
      goto LABEL_37;
    }
    v22 = v15 - a4;
    v23 = v22 + v16 * v21;
    if ( v23 <= v22 || (v24 = a7, v23 > *(unsigned int *)(a7 + 16)) || v16 * v21 + 4 < v16 * v21 )
    {
      v30 = -1073741819;
      dword_140388338 = 11;
      goto LABEL_37;
    }
  }
  else
  {
    v24 = a7;
  }
  v25 = v17 - a4;
  v26 = v18 * v21;
  v27 = v18 * v21;
  if ( v26 + v25 <= v25 || v26 + v25 > *(unsigned int *)(v24 + 16) || (int)v26 + 4 < (unsigned int)v26 )
  {
    v30 = -1073741819;
    dword_140388338 = 5;
    goto LABEL_37;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v27, 0x5443694Du);
  v29 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v30 = -1073741670;
    dword_140388338 = 6;
LABEL_48:
    v14 = a11;
    goto LABEL_37;
  }
  memmove(PoolWithTag, (const void *)(v25 + a3), v27);
  v30 = 0;
  if ( a2 )
    MiLogRelocationRva((unsigned int)v25, (unsigned int)v26, a2, a1);
  v31 = 0;
  if ( (_DWORD)v26 )
  {
    while ( 1 )
    {
      v32 = *(unsigned int *)&v29[v31];
      if ( v32 >= a5 )
        break;
      if ( v31 && (unsigned int)v32 < v13 )
      {
        dword_140388338 = 9;
        goto LABEL_51;
      }
      v13 = *(_DWORD *)&v29[v31];
      v31 += v21;
      if ( v31 >= (unsigned int)v26 )
        goto LABEL_29;
    }
    dword_140388338 = 8;
LABEL_51:
    v30 = -1073741701;
  }
LABEL_29:
  if ( v30 < 0 )
    goto LABEL_48;
  *a10 |= 1u;
  if ( (*(_WORD *)(a7 + 60) & 0x4000) != 0 )
    *a10 |= 2u;
  if ( (v34 & 0x8000) != 0 )
    *a10 |= 0x10u;
  if ( (v34 & 0x4000) != 0 )
    *a10 |= 8u;
  v14 = a11;
  *(_DWORD *)a11 = v34;
  *(_QWORD *)(a11 + 8) = v29;
  *(_DWORD *)(a11 + 16) = v37;
  *(_DWORD *)(a11 + 20) = v21;
LABEL_37:
  if ( v30 < 0 )
    MiFreeImageCfgContext(v14);
  return (unsigned int)v30;
}
