/*
 * XREFs of GreExtCreatePen @ 0x1C00EC634
 * Callers:
 *     GreCreatePen @ 0x1C00EC5AC (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C0135F20 (NtGdiExtCreatePen.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00EC988 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00EC9CC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreCreateDIBBrush @ 0x1C0136E1C (GreCreateDIBBrush.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02958D0 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 */

void *__fastcall GreExtCreatePen(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // rbx
  int v12; // r12d
  int v13; // ebp
  unsigned int v15; // r10d
  int v17; // r8d
  int v18; // r15d
  BOOL v19; // ecx
  void *v20; // rsi
  int v21; // eax
  int v22; // eax
  int v23; // r13d
  unsigned int v24; // r14d
  __int64 v25; // r9
  __int64 v27; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rdi
  unsigned int v32; // ecx
  bool v34; // zf
  int v35; // eax
  ULONG v36; // ecx
  __int64 v37; // rax
  float *v38; // r8
  float *v39; // r11
  int v40; // r10d
  int v41; // edx
  int v42; // ecx
  int v43; // edx
  int v44; // ecx
  int v45; // eax
  char v46; // [rsp+30h] [rbp-58h]
  int v47; // [rsp+34h] [rbp-54h]
  int v48; // [rsp+38h] [rbp-50h]
  int v49; // [rsp+3Ch] [rbp-4Ch]
  _QWORD v50[9]; // [rsp+40h] [rbp-48h] BYREF

  v11 = 0LL;
  v46 = 0;
  v12 = a1 & 0xF0000;
  v13 = a1 & 0xF;
  v49 = a1 & 0xF0000;
  v48 = (unsigned __int8)v13;
  v15 = a4;
  v17 = abs32(a2);
  v18 = 0;
  v47 = v17;
  v19 = v17 < 0;
  v20 = 0LL;
  if ( (a1 & 0xFFF000F0) != 0 )
    v19 = 1;
  if ( v13 == 5 )
    return gahStockObjects[8];
  if ( v12 )
  {
    if ( v12 != 0x10000 )
LABEL_66:
      v19 = 1;
  }
  else if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
  {
    goto LABEL_66;
  }
  if ( v17 != 1 && !v12 && !a10 )
    v19 = 1;
  v21 = a1 & 0xF000;
  if ( (a1 & 0xF000) != 0 )
  {
    if ( v21 == 4096 )
    {
      v46 = 1;
    }
    else if ( v21 == 0x2000 )
    {
      v46 = 2;
    }
    else
    {
      v19 = 1;
    }
  }
  else
  {
    v46 = 0;
  }
  v22 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v22 == 512 )
    {
      v23 = 2;
    }
    else if ( v22 == 256 )
    {
      v23 = 1;
    }
    else
    {
      v23 = a1;
      v19 = 1;
    }
  }
  else
  {
    v23 = 0;
  }
  v24 = a7;
  if ( v13 == 7 )
  {
    if ( a7 )
    {
LABEL_13:
      if ( a7 <= 0x10 )
        goto LABEL_14;
    }
  }
  else if ( !a7 )
  {
    goto LABEL_13;
  }
  v19 = 1;
LABEL_14:
  v25 = 6LL;
  if ( v12 == 0x10000 )
  {
    switch ( v13 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v24 = 2;
        a8 = (int *)&gaulGeometricDash;
        goto LABEL_16;
      case 2:
        v24 = 2;
        a8 = (int *)&gaulGeometricDot;
        goto LABEL_16;
      case 3:
        v24 = 4;
        a8 = (int *)&gaulGeometricDashDot;
        goto LABEL_16;
      case 4:
        v24 = 6;
        a8 = (int *)&gaulGeometricDashDotDot;
        goto LABEL_16;
    }
    v35 = v13 - 6;
    v34 = v13 == 6;
  }
  else
  {
    switch ( v13 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v24 = 2;
        v20 = &galeCosmeticDash;
        goto LABEL_54;
      case 2:
        v24 = 8;
        v20 = &galeCosmeticDot;
LABEL_54:
        v18 = 1;
        goto LABEL_16;
      case 3:
        v24 = 4;
        v20 = &galeCosmeticDashDot;
        goto LABEL_54;
      case 4:
        v24 = 6;
        v20 = &galeCosmeticDashDotDot;
        goto LABEL_54;
      case 6:
        if ( !a10 )
          v19 = 1;
        goto LABEL_16;
    }
    v35 = v13 - 7;
    v34 = v13 == 7;
  }
  if ( !v34 && v35 != 1 )
    goto LABEL_93;
LABEL_16:
  if ( v19 )
  {
LABEL_93:
    v36 = 87;
LABEL_95:
    EngSetLastError(v36);
    return 0LL;
  }
  if ( v24 && !v20 )
  {
    v37 = (__int64)PALLOCMEM2(4 * v24, 2037674823LL, 0);
    v20 = (void *)v37;
    if ( !v37 )
    {
      v36 = 8;
      goto LABEL_95;
    }
    v38 = (float *)v37;
    v39 = (float *)(v37 + 4LL * v24);
    if ( !v12 || a10 )
    {
      v43 = 1;
      v25 = 0LL;
      v44 = 1;
      if ( !a8 )
        goto LABEL_92;
      do
      {
        if ( v38 >= v39 )
          break;
        v45 = *a8;
        *(_DWORD *)v38 = *a8;
        if ( v44 >= v45 )
          v44 = v45;
        if ( v43 <= v45 )
          v43 = v45;
        v25 = (unsigned int)(v45 + v25);
        ++v38;
        ++a8;
      }
      while ( a8 );
      if ( !a8 || v44 <= 0 || v43 > 0x3FFF || (int)v25 > 0x3FFF )
        goto LABEL_92;
    }
    else
    {
      v40 = 0;
      v41 = 0;
      if ( !a8 )
        goto LABEL_92;
      v25 = -v37;
      do
      {
        if ( v38 >= v39 )
          break;
        v42 = *a8;
        if ( v13 != 7 )
        {
          if ( v23 != 2 )
            v42 += (((_BYTE)v38 - (_BYTE)v37) & 4) != 0 ? 1 : -1;
          v42 *= v47;
        }
        if ( v41 >= v42 )
          v41 = v42;
        v40 += v42;
        *v38++ = (float)v42;
        ++a8;
      }
      while ( a8 );
      v12 = v49;
      if ( !a8 || v41 < 0 || v40 <= 0 )
      {
LABEL_92:
        Win32FreePool(v20);
        goto LABEL_93;
      }
    }
    v15 = a4;
    v17 = v47;
  }
  switch ( a3 )
  {
    case 0:
      if ( v17 || (v27 = 1LL, v13) )
        v27 = 0LL;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(v15, 1LL, a11, v27);
      break;
    case 1:
      if ( v20 && !v18 )
        Win32FreePool(v20);
      return gahStockObjects[8];
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal(a6, v15, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v25);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, v15, a9, 0LL, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_132;
  }
  v29 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_132:
    if ( v20 && !v18 )
      Win32FreePool(v20);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v50, SolidBrushInternal);
  v30 = v50[0];
  if ( v50[0] )
  {
    *(_DWORD *)(v50[0] + 48LL) |= 0x400u;
    *(_DWORD *)(v30 + 168) = a1;
    *(_BYTE *)(v30 + 189) = v23;
    *(_BYTE *)(v30 + 188) = v46;
    *(_QWORD *)(v30 + 176) = v20;
    *(_DWORD *)(v30 + 184) = v24;
    *(_DWORD *)(v30 + 160) = v47;
    if ( v18 )
      *(_DWORD *)(v30 + 48) |= 0x4000u;
    *(_DWORD *)(v30 + 192) = a3;
    *(_QWORD *)(v30 + 200) = a5;
    if ( a10 || v12 == 0x10000 )
      *(float *)(v30 + 164) = (float)v47;
    v31 = (unsigned __int64)v29 | 0x500000;
    if ( a10 )
    {
      v32 = *(_DWORD *)(v30 + 48) & 0xFFFFF3FB | 0xC00;
      *(_DWORD *)(v30 + 48) = v32;
      if ( v48 == 6 )
        *(_DWORD *)(v30 + 48) = v32 | 0x10004;
      v31 = (unsigned __int64)v29 | 0x300000;
    }
    else if ( v12 )
    {
      if ( v48 == 6 )
        *(_DWORD *)(v30 + 48) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v30 + 48) &= ~4u;
    }
    HmgModifyHandleType(v31, 0x10000LL);
    v11 = v31;
  }
  else if ( v20 && !v18 )
  {
    Win32FreePool(v20);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v50);
  return (void *)v11;
}
