/*
 * XREFs of GreCreateDIBBrush @ 0x1C0136E1C
 * Callers:
 *     GreExtCreatePen @ 0x1C00EC634 (GreExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1C0136D20 (NtGdiCreateDIBBrush.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0136FF4 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall GreCreateDIBBrush(unsigned int *a1, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  __int64 v6; // rsi
  unsigned int v9; // ebp
  __int64 v11; // r11
  __int64 v12; // r8
  unsigned int v13; // eax
  char *v14; // rbx
  int v15; // ecx
  const void *v16; // r12
  unsigned int v17; // r14d
  __int64 v18; // rdx
  int v19; // ecx
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  int v22; // eax
  __int64 DIBitmapReal; // rax
  __int64 v24; // rdx
  HBITMAP v25; // r15
  unsigned int v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rdi
  __int64 v37; // rbx
  void *v38; // rcx
  ULONG v39; // ecx
  _QWORD v40[2]; // [rsp+70h] [rbp-48h] BYREF
  int v41; // [rsp+80h] [rbp-38h]
  __int64 v42; // [rsp+C0h] [rbp+8h]

  v6 = 0LL;
  v9 = a2;
  if ( !a1 )
    goto LABEL_59;
  if ( a3 < 0x28 )
    goto LABEL_59;
  v11 = *a1;
  if ( (unsigned int)v11 > a3 )
    goto LABEL_59;
  v12 = 2LL;
  if ( a2 > 2 )
    goto LABEL_59;
  v13 = a1[4];
  v14 = (char *)a1 + v11;
  v15 = *((unsigned __int16 *)a1 + 7);
  v16 = v14;
  v17 = a1[8];
  v18 = 4LL;
  if ( v13 == 3 )
  {
    v27 = 0;
    v17 = 3;
    if ( v9 != 1 )
      v27 = v9;
    v9 = v27;
    if ( ((v15 - 16) & 0xFFFFFFEF) != 0 )
      return 0LL;
  }
  else if ( v13 )
  {
    if ( v13 == 2 )
    {
      if ( v15 != 4 )
        return 0LL;
      if ( !v17 )
        v17 = 16;
    }
    else
    {
      if ( v13 != 1 || v15 != 8 )
        return 0LL;
      if ( !v17 )
        v17 = 256;
    }
  }
  else
  {
    v19 = v15 - 1;
    if ( v19 )
    {
      v28 = v19 - 3;
      if ( v28 )
      {
        v29 = v28 - 4;
        if ( v29 )
        {
          v30 = v29 - 8;
          if ( v30 )
          {
            v31 = v30 - 8;
            if ( v31 )
            {
              if ( v31 != 8 )
                return 0LL;
            }
          }
          v32 = 0;
          v20 = 0;
          if ( v9 != 1 )
            v32 = v9;
          v9 = v32;
          goto LABEL_10;
        }
        v20 = 256;
      }
      else
      {
        v20 = 16;
      }
    }
    else
    {
      v20 = 2;
    }
    if ( !v17 || v20 < v17 )
LABEL_10:
      v17 = v20;
  }
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
      v18 = 0LL;
    v12 = v18;
  }
  v21 = v12 * v17;
  if ( v21 > 0xFFFFFFFF || (v22 = v21 + 3, (int)v21 + 3 < (unsigned int)v21) )
  {
    v39 = 534;
LABEL_60:
    EngSetLastError(v39);
    return 0LL;
  }
  if ( (v22 & 0xFFFFFFFC) > a3 - (unsigned int)v11 )
  {
LABEL_59:
    v39 = 87;
    goto LABEL_60;
  }
  DIBitmapReal = GreCreateDIBitmapReal(
                   0LL,
                   a3 + (_DWORD)a1 - ((v22 & 0xFFFFFFFC) + (_DWORD)v14),
                   &v14[v22 & 0xFFFFFFFC],
                   a1,
                   v9 != 0 ? 3 : 0,
                   a3,
                   a3 + (_DWORD)a1 - ((v22 & 0xFFFFFFFC) + (_DWORD)v14),
                   0LL,
                   0,
                   0LL,
                   1u,
                   0LL,
                   0LL);
  v25 = (HBITMAP)DIBitmapReal;
  if ( !DIBitmapReal )
    return 0LL;
  if ( a4 )
  {
    LOBYTE(v24) = 5;
    v33 = HmgShareLockCheck(DIBitmapReal, v24);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 56);
      if ( (int)v34 > 8 )
        LODWORD(v34) = 8;
      LODWORD(v42) = v34;
      v35 = HIDWORD(*(_QWORD *)(v33 + 56));
      if ( *(int *)(v33 + 60) > 8 )
        v35 = 8;
      HIDWORD(v42) = v35;
      *(_QWORD *)(v33 + 56) = v42;
      DEC_SHARE_REF_CNT(v33);
      goto LABEL_20;
    }
    return 0LL;
  }
LABEL_20:
  if ( v9 == 1 )
  {
    LOBYTE(v24) = 5;
    v36 = HmgShareLockCheck(v25, v24);
    v37 = *(_QWORD *)(v36 + 128);
    v38 = *(void **)(v37 + 120);
    *(_DWORD *)(v37 + 24) |= 0x4000u;
    memmove(v38, v16, 2 * v17);
    *(_DWORD *)(v37 + 60) = v17;
    DEC_SHARE_REF_CNT(v36);
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v40, v25, a6, 0, v9, 0x80u, a5);
  if ( v40[0] )
  {
    v41 = 1;
    *(_DWORD *)(v40[0] + 88LL) = v9;
    v6 = *(_QWORD *)v40[0];
  }
  else
  {
    bDeleteSurface(v25);
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v40);
  return v6;
}
