/*
 * XREFs of MiCaptureImageCfgContext @ 0x14053D860
 * Callers:
 *     MiParseImageLoadConfig @ 0x14053D084 (MiParseImageLoadConfig.c)
 * Callees:
 *     MiFreeImageCfgContext @ 0x14009D5A4 (MiFreeImageCfgContext.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiLogRelocationRva @ 0x1404BD2AC (MiLogRelocationRva.c)
 */

__int64 __fastcall MiCaptureImageCfgContext(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        int *a10,
        __int64 a11)
{
  unsigned int v13; // ebx
  unsigned __int64 v14; // r8
  unsigned int v15; // r9d
  unsigned __int64 v16; // r15
  unsigned int v17; // r11d
  unsigned int v18; // esi
  int v19; // ecx
  unsigned int v20; // esi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r15
  __int64 v24; // rdi
  unsigned int v25; // r12d
  char *PoolWithTag; // rax
  char *v27; // r14
  unsigned int v28; // eax
  unsigned __int64 v29; // rdx
  int v30; // eax
  int v31; // ecx
  int v32; // esi
  unsigned int v34; // [rsp+20h] [rbp-68h]
  unsigned int v35; // [rsp+24h] [rbp-64h]
  int v38; // [rsp+B8h] [rbp+30h]

  v13 = 0;
  v38 = 0;
  *a10 = 0;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_QWORD *)(a11 + 16) = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( *(_WORD *)(a7 + 48) == 523 )
  {
    v16 = *(_QWORD *)(a8 + 128);
    v17 = *(_DWORD *)(a8 + 136);
    v34 = v17;
    v18 = *(_DWORD *)(a8 + 144);
    v35 = v18;
    v19 = v18 & 0x4000;
    if ( (v18 & 0x4000) != 0 && a9 >= 0xB0 )
    {
      v14 = *(_QWORD *)(a8 + 160);
      v15 = *(_DWORD *)(a8 + 168);
    }
  }
  else
  {
    v16 = *(unsigned int *)(a8 + 80);
    v17 = *(_DWORD *)(a8 + 84);
    v34 = v17;
    v18 = *(_DWORD *)(a8 + 88);
    v35 = v18;
    v19 = v18 & 0x4000;
    if ( (v18 & 0x4000) != 0 && a9 >= 0x70 )
    {
      v14 = *(unsigned int *)(a8 + 104);
      v15 = *(_DWORD *)(a8 + 108);
    }
  }
  if ( (v18 & 0x400) == 0 || !v16 )
  {
    v32 = 0;
    goto LABEL_39;
  }
  v20 = (v18 >> 28) + 4;
  if ( v16 >= a4 && v17 && v17 < 0xFFFFFFFF / v20 )
  {
    if ( v19 && v14 )
    {
      if ( v14 < a4 || !v15 || v15 >= 0xFFFFFFFF / v20 )
      {
        v32 = -1073741819;
        dword_1403CB4D8 = 10;
        goto LABEL_39;
      }
      v21 = v14 - a4;
      v22 = v21 + v15 * v20;
      if ( v22 <= v21 || v22 > *(unsigned int *)(a7 + 16) || v15 * v20 + 4 < v15 * v20 )
      {
        v32 = -1073741819;
        dword_1403CB4D8 = 11;
        goto LABEL_39;
      }
    }
    v23 = v16 - a4;
    v24 = v17 * v20;
    v25 = v17 * v20;
    if ( v24 + v23 <= v23 || v24 + v23 > *(unsigned int *)(a7 + 16) || (int)v24 + 4 < (unsigned int)v24 )
    {
      v32 = -1073741819;
      dword_1403CB4D8 = 5;
    }
    else
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v25, 0x5443694Du);
      v27 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, (const void *)(v23 + a3), v25);
        if ( a2 )
          MiLogRelocationRva(v23, v24, a2, a1);
        v28 = 0;
        if ( (_DWORD)v24 )
        {
          while ( 1 )
          {
            v29 = *(unsigned int *)&v27[v28];
            if ( v29 >= a5 )
              break;
            if ( v28 && (unsigned int)v29 < v13 )
            {
              dword_1403CB4D8 = 9;
              goto LABEL_51;
            }
            v13 = *(_DWORD *)&v27[v28];
            v28 += v20;
            if ( v28 >= (unsigned int)v24 )
              goto LABEL_29;
          }
          dword_1403CB4D8 = 8;
LABEL_51:
          v30 = -1073741701;
          v38 = -1073741701;
        }
        else
        {
LABEL_29:
          v30 = 0;
        }
        if ( v30 >= 0 )
        {
          v31 = *a10 | 1;
          *a10 = v31;
          if ( (*(_WORD *)(a7 + 60) & 0x4000) != 0 )
          {
            v31 |= 2u;
            *a10 = v31;
          }
          if ( (v35 & 0x8000) != 0 )
          {
            v31 |= 0x10u;
            *a10 = v31;
          }
          if ( (v35 & 0x4000) != 0 )
            *a10 = v31 | 8;
          *(_DWORD *)a11 = v35;
          *(_QWORD *)(a11 + 8) = v27;
          *(_DWORD *)(a11 + 16) = v34;
          *(_DWORD *)(a11 + 20) = v20;
        }
        v32 = v38;
      }
      else
      {
        v32 = -1073741670;
        dword_1403CB4D8 = 6;
      }
    }
  }
  else
  {
    v32 = -1073741819;
    dword_1403CB4D8 = 4;
  }
LABEL_39:
  if ( v32 < 0 )
    MiFreeImageCfgContext(a11);
  return (unsigned int)v32;
}
