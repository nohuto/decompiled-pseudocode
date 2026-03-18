/*
 * XREFs of GreExtCreatePen @ 0x1C00F954C
 * Callers:
 *     GreCreatePen @ 0x1C00F94C4 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C013B1F0 (NtGdiExtCreatePen.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00F98A8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00F98EC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreCreateDIBBrush @ 0x1C013D6AC (GreCreateDIBBrush.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C0291F70 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
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
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // rbx
  int v12; // ebp
  int v14; // r12d
  unsigned int v15; // r10d
  __int64 v17; // r8
  int v18; // r15d
  void *v19; // rsi
  BOOL v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // r13d
  unsigned int v24; // r14d
  __int64 v25; // r9
  __int64 v27; // r9
  HBRUSH SolidBrushInternal; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  HBRUSH v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned int v36; // ecx
  bool v38; // zf
  int v39; // eax
  ULONG v40; // ecx
  char *v41; // rax
  float *v42; // r8
  float *v43; // r10
  __int64 v44; // rdx
  int v45; // ecx
  int v46; // ecx
  int v47; // eax
  char v48; // [rsp+30h] [rbp-58h]
  int v49; // [rsp+34h] [rbp-54h]
  int v50; // [rsp+38h] [rbp-50h]
  _QWORD v51[9]; // [rsp+40h] [rbp-48h] BYREF

  v11 = 0LL;
  v48 = 0;
  v12 = a1 & 0xF;
  v14 = a1 & 0xF0000;
  v50 = (unsigned __int8)v12;
  v15 = a4;
  v17 = abs32(a2);
  v18 = 0;
  v19 = 0LL;
  v49 = abs32(a2);
  v20 = v49 < 0;
  if ( (a1 & 0xFFF000F0) != 0 )
    v20 = 1;
  if ( v12 == 5 )
    return gahStockObjects[8];
  if ( v14 )
  {
    if ( v14 != 0x10000 )
LABEL_66:
      v20 = 1;
  }
  else if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
  {
    goto LABEL_66;
  }
  if ( (_DWORD)v17 != 1 && !v14 && !a10 )
    v20 = 1;
  v21 = a1 & 0xF000;
  if ( (a1 & 0xF000) != 0 )
  {
    if ( v21 == 4096 )
    {
      v48 = 1;
    }
    else if ( v21 == 0x2000 )
    {
      v48 = 2;
    }
    else
    {
      v20 = 1;
    }
  }
  else
  {
    v48 = 0;
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
      v20 = 1;
    }
  }
  else
  {
    v23 = 0;
  }
  v24 = a7;
  if ( v12 == 7 )
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
  v20 = 1;
LABEL_14:
  v25 = 6LL;
  if ( v14 == 0x10000 )
  {
    switch ( v12 )
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
    v39 = v12 - 6;
    v38 = v12 == 6;
  }
  else
  {
    switch ( v12 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v24 = 2;
        v19 = &galeCosmeticDash;
        goto LABEL_54;
      case 2:
        v24 = 8;
        v19 = &galeCosmeticDot;
LABEL_54:
        v18 = 1;
        goto LABEL_16;
      case 3:
        v24 = 4;
        v19 = &galeCosmeticDashDot;
        goto LABEL_54;
      case 4:
        v24 = 6;
        v19 = &galeCosmeticDashDotDot;
        goto LABEL_54;
      case 6:
        if ( !a10 )
          v20 = 1;
        goto LABEL_16;
    }
    v39 = v12 - 7;
    v38 = v12 == 7;
  }
  if ( !v38 && v39 != 1 )
    goto LABEL_93;
LABEL_16:
  if ( v20 )
    goto LABEL_93;
  if ( v24 && !v19 )
  {
    v41 = (char *)PALLOCMEM2(4 * v24, 2037674823LL, 0);
    v19 = v41;
    if ( !v41 )
    {
      v40 = 8;
      goto LABEL_95;
    }
    v42 = (float *)v41;
    v43 = (float *)&v41[4 * v24];
    if ( !v14 || a10 )
    {
      v25 = 0LL;
      v46 = 1;
      v44 = 1LL;
      if ( a8 )
      {
        do
        {
          if ( v42 >= v43 )
            break;
          v47 = *a8;
          *(_DWORD *)v42 = *a8;
          if ( v46 >= v47 )
            v46 = v47;
          if ( (int)v44 <= v47 )
            v44 = (unsigned int)v47;
          v25 = (unsigned int)(v47 + v25);
          ++v42;
          ++a8;
        }
        while ( a8 );
        if ( a8 && v46 > 0 && (int)v44 <= 0x3FFF && (int)v25 <= 0x3FFF )
        {
          v17 = (unsigned int)v49;
          goto LABEL_125;
        }
      }
    }
    else
    {
      v25 = 0LL;
      v44 = 0LL;
      if ( a8 )
      {
        do
        {
          if ( v42 >= v43 )
            break;
          v45 = *a8;
          if ( v12 != 7 )
          {
            if ( v23 != 2 )
              v45 += (((_BYTE)v42 - (_BYTE)v41) & 4) != 0 ? 1 : -1;
            v45 *= v49;
          }
          if ( (int)v44 >= v45 )
            v44 = (unsigned int)v45;
          v25 = (unsigned int)(v45 + v25);
          *v42++ = (float)v45;
          ++a8;
        }
        while ( a8 );
        if ( a8 && (int)v44 >= 0 && (int)v25 > 0 )
        {
          v17 = (unsigned int)v49;
LABEL_125:
          v15 = a4;
          goto LABEL_18;
        }
      }
    }
    Win32FreePool(v19, v44, v42);
LABEL_93:
    v40 = 87;
LABEL_95:
    EngSetLastError(v40);
    return 0LL;
  }
LABEL_18:
  switch ( a3 )
  {
    case 0:
      if ( (_DWORD)v17 || (v27 = 1LL, v12) )
        v27 = 0LL;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(v15, 1LL, a11, v27);
      break;
    case 1:
      if ( v19 && !v18 )
        Win32FreePool(v19, 2LL, v17);
      return gahStockObjects[8];
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal(a6, v15, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v25);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, v15, a9, 0, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_132;
  }
  v31 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_132:
    if ( v19 && !v18 )
      Win32FreePool(v19, v29, v30);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v51, SolidBrushInternal);
  v34 = v51[0];
  if ( v51[0] )
  {
    *(_DWORD *)(v51[0] + 48LL) |= 0x400u;
    *(_DWORD *)(v34 + 168) = a1;
    *(_BYTE *)(v34 + 189) = v23;
    *(_BYTE *)(v34 + 188) = v48;
    *(_QWORD *)(v34 + 176) = v19;
    *(_DWORD *)(v34 + 184) = v24;
    *(_DWORD *)(v34 + 160) = v49;
    if ( v18 )
      *(_DWORD *)(v34 + 48) |= 0x4000u;
    *(_DWORD *)(v34 + 192) = a3;
    *(_QWORD *)(v34 + 200) = a5;
    if ( a10 || v14 == 0x10000 )
      *(float *)(v34 + 164) = (float)v49;
    v35 = (unsigned __int64)v31 | 0x500000;
    if ( a10 )
    {
      v36 = *(_DWORD *)(v34 + 48) & 0xFFFFF3FB | 0xC00;
      *(_DWORD *)(v34 + 48) = v36;
      if ( v50 == 6 )
        *(_DWORD *)(v34 + 48) = v36 | 0x10004;
      v35 = (unsigned __int64)v31 | 0x300000;
    }
    else if ( v14 )
    {
      if ( v50 == 6 )
        *(_DWORD *)(v34 + 48) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v34 + 48) &= ~4u;
    }
    HmgModifyHandleType(v35);
    v11 = v35;
  }
  else if ( v19 && !v18 )
  {
    Win32FreePool(v19, v32, v33);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v51);
  return (void *)v11;
}
