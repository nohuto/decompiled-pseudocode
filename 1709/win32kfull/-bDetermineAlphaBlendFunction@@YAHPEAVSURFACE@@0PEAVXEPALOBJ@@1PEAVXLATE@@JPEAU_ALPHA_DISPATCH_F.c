/*
 * XREFs of ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C00136BC
 * Callers:
 *     EngAlphaBlend @ 0x1C0012D70 (EngAlphaBlend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bDetermineAlphaBlendFunction(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct XEPALOBJ *a3,
        struct XEPALOBJ *a4,
        struct XLATE *a5,
        int a6,
        struct _ALPHA_DISPATCH_FORMAT *a7)
{
  unsigned int v8; // edi
  __int64 (__fastcall *v9)(); // rax
  void (__fastcall *v10)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // r11
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  _DWORD *v19; // rax
  void (__fastcall *v20)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rax
  _DWORD *v21; // rax
  void *v22; // rax
  int v23; // eax
  _DWORD *v24; // rax
  void *v25; // rax
  _DWORD *v26; // rcx
  void *v27; // rax
  int v28; // eax
  _DWORD *v29; // rax
  void (__fastcall *v30)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rax
  _DWORD *v31; // rcx
  void (__fastcall *v32)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // rax
  __int64 (__fastcall *v33)(); // rax

  v8 = 1;
  *((_DWORD *)a7 + 11) = 0;
  *((_QWORD *)a7 + 4) = vAlphaPerPixelOnly;
  if ( (*((_BYTE *)a7 + 43) & 1) != 0 )
  {
    v9 = vAlphaPerPixelAndConst;
    if ( *((_BYTE *)a7 + 42) == 0xFF )
      v9 = vAlphaPerPixelOnly;
    *((_QWORD *)a7 + 4) = v9;
  }
  else
  {
    *((_QWORD *)a7 + 4) = vAlphaConstOnly;
  }
  v10 = vLoadAndConvert32BitfieldsToBGRA;
  v11 = *((_DWORD *)a1 + 24) - 1;
  if ( !v11 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert1ToBGRA;
    v25 = &vConvertAndSaveBGRATo1;
    *(_DWORD *)a7 = 1;
    goto LABEL_72;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert4ToBGRA;
    v25 = &vConvertAndSaveBGRATo4;
    *(_DWORD *)a7 = 4;
    goto LABEL_72;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert8ToBGRA;
    v25 = &vConvertAndSaveBGRATo8;
    *(_DWORD *)a7 = 8;
    goto LABEL_72;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v26 = *(_DWORD **)(*(_QWORD *)a3 + 120LL);
    if ( *v26 == 63488 )
    {
      if ( v26[1] == 2016 && v26[2] == 31 )
      {
        *((_QWORD *)a7 + 2) = vLoadAndConvertRGB16_565ToBGRA;
        v27 = &vConvertAndSaveBGRAToRGB16_565;
LABEL_68:
        *((_QWORD *)a7 + 3) = v27;
        *(_DWORD *)a7 = 16;
        goto LABEL_14;
      }
    }
    else if ( *v26 == 31744 && v26[1] == 992 && v26[2] == 31 )
    {
      *((_QWORD *)a7 + 2) = vLoadAndConvertRGB16_555ToBGRA;
      v27 = &vConvertAndSaveBGRAToRGB16_555;
      goto LABEL_68;
    }
    *((_QWORD *)a7 + 2) = vLoadAndConvert16BitfieldsToBGRA;
    v27 = &vConvertAndSaveBGRAToRGB16Bitfields;
    goto LABEL_68;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v23 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
    if ( (v23 & 8) != 0 )
      goto LABEL_57;
    if ( (v23 & 2) != 0 )
    {
      v24 = *(_DWORD **)(*(_QWORD *)a3 + 120LL);
      if ( *v24 != 16711680 )
      {
LABEL_53:
        if ( *v24 || v24[1] || v24[2] )
          goto LABEL_56;
LABEL_57:
        *((_QWORD *)a7 + 2) = vLoadAndConvertBGR24ToBGRA;
        v25 = &vConvertAndSaveBGRAToBGR24;
        goto LABEL_58;
      }
      if ( v24[1] == 65280 )
      {
        if ( v24[2] == 255 )
          goto LABEL_57;
        goto LABEL_53;
      }
    }
LABEL_56:
    *((_QWORD *)a7 + 2) = vLoadAndConvertRGB24ToBGRA;
    v25 = &vConvertAndSaveBGRAToRGB24;
LABEL_58:
    *(_DWORD *)a7 = 24;
LABEL_72:
    *((_QWORD *)a7 + 3) = v25;
    goto LABEL_14;
  }
  if ( v15 == 1 )
  {
    v16 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
    if ( (v16 & 8) != 0 )
    {
LABEL_12:
      *((_QWORD *)a7 + 2) = 0LL;
      *((_QWORD *)a7 + 3) = 0LL;
LABEL_13:
      *(_DWORD *)a7 = 32;
      goto LABEL_14;
    }
    if ( (v16 & 2) != 0 )
    {
      v21 = *(_DWORD **)(*(_QWORD *)a3 + 120LL);
      if ( *v21 == 16711680 )
      {
        if ( v21[1] != 65280 )
          goto LABEL_44;
        if ( v21[2] == 255 )
          goto LABEL_12;
      }
      if ( !*v21 && !v21[1] && !v21[2] )
        goto LABEL_12;
    }
LABEL_44:
    if ( (v16 & 4) != 0 )
    {
      *((_QWORD *)a7 + 2) = vLoadAndConvertRGB32ToBGRA;
      v22 = &vConvertAndSaveBGRAToRGB32;
    }
    else
    {
      *((_QWORD *)a7 + 2) = vLoadAndConvert32BitfieldsToBGRA;
      v22 = &vConvertAndSaveBGRATo32Bitfields;
    }
    *((_QWORD *)a7 + 3) = v22;
    goto LABEL_13;
  }
  v8 = 0;
LABEL_14:
  switch ( *((_DWORD *)a2 + 24) )
  {
    case 1:
      *((_QWORD *)a7 + 1) = vLoadAndConvert1ToBGRA;
      *((_DWORD *)a7 + 1) = 1;
      goto LABEL_24;
    case 2:
      *((_QWORD *)a7 + 1) = vLoadAndConvert4ToBGRA;
      *((_DWORD *)a7 + 1) = 4;
      goto LABEL_24;
    case 3:
      *((_DWORD *)a7 + 1) = 8;
      *((_QWORD *)a7 + 1) = vLoadAndConvert8ToBGRA;
      goto LABEL_24;
    case 4:
      v31 = *(_DWORD **)(*(_QWORD *)a4 + 120LL);
      if ( *v31 == 63488 )
      {
        if ( v31[1] == 2016 && v31[2] == 31 )
        {
          v32 = vLoadAndConvertRGB16_565ToBGRA;
LABEL_100:
          *((_QWORD *)a7 + 1) = v32;
          goto LABEL_101;
        }
      }
      else if ( *v31 == 31744 && v31[1] == 992 && v31[2] == 31 )
      {
        *((_QWORD *)a7 + 1) = vLoadAndConvertRGB16_555ToBGRA;
LABEL_101:
        *((_DWORD *)a7 + 1) = 16;
        goto LABEL_24;
      }
      v32 = vLoadAndConvert16BitfieldsToBGRA;
      goto LABEL_100;
    case 5:
      v28 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
      if ( (v28 & 8) != 0 )
        goto LABEL_89;
      if ( (v28 & 2) != 0 )
      {
        v29 = *(_DWORD **)(*(_QWORD *)a4 + 120LL);
        if ( *v29 != 16711680 )
        {
LABEL_85:
          if ( *v29 || v29[1] || v29[2] )
            goto LABEL_88;
LABEL_89:
          v30 = vLoadAndConvertBGR24ToBGRA;
          goto LABEL_90;
        }
        if ( v29[1] == 65280 )
        {
          if ( v29[2] == 255 )
            goto LABEL_89;
          goto LABEL_85;
        }
      }
LABEL_88:
      v30 = vLoadAndConvertRGB24ToBGRA;
LABEL_90:
      *((_QWORD *)a7 + 1) = v30;
      *((_DWORD *)a7 + 1) = 24;
      goto LABEL_24;
    case 6:
      if ( !a5 )
        goto LABEL_22;
      v17 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
      if ( (v17 & 8) != 0 )
        goto LABEL_22;
      if ( (v17 & 2) != 0 )
      {
        v19 = *(_DWORD **)(*(_QWORD *)a4 + 120LL);
        if ( *v19 != 16711680 )
        {
LABEL_74:
          if ( *v19 || v19[1] || v19[2] )
            goto LABEL_77;
LABEL_22:
          *((_QWORD *)a7 + 1) = 0LL;
LABEL_23:
          *((_DWORD *)a7 + 1) = 32;
          goto LABEL_24;
        }
        if ( v19[1] == 65280 )
        {
          if ( v19[2] == 255 )
            goto LABEL_22;
          goto LABEL_74;
        }
      }
LABEL_77:
      if ( (v17 & 4) != 0 )
        v10 = vLoadAndConvertRGB32ToBGRA;
      *((_QWORD *)a7 + 1) = v10;
      goto LABEL_23;
  }
  v8 = 0;
LABEL_24:
  if ( *((__int64 (__fastcall **)())a7 + 4) != vAlphaConstOnly )
    return v8;
  v20 = (void (__fastcall *)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))*((_QWORD *)a7 + 1);
  if ( *(_OWORD *)((char *)a7 + 8) == __PAIR128__(vLoadAndConvertRGB16_555ToBGRA, vLoadAndConvertRGB16_555ToBGRA) )
  {
    v33 = vAlphaConstOnly16_555;
LABEL_106:
    *((_QWORD *)a7 + 4) = v33;
    *((_BYTE *)a7 + 42) = (31 * (unsigned int)*((unsigned __int8 *)a7 + 42) + 128) / 0xFF;
LABEL_111:
    *((_QWORD *)a7 + 1) = 0LL;
    *((_QWORD *)a7 + 2) = 0LL;
    *((_QWORD *)a7 + 3) = 0LL;
    return v8;
  }
  if ( v20 == vLoadAndConvertRGB16_565ToBGRA
    && *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) == vLoadAndConvertRGB16_565ToBGRA )
  {
    v33 = vAlphaConstOnly16_565;
    goto LABEL_106;
  }
  if ( v20 == vLoadAndConvertRGB24ToBGRA
    && *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) == vLoadAndConvertRGB24ToBGRA )
  {
    *((_QWORD *)a7 + 4) = vAlphaConstOnly24;
    goto LABEL_111;
  }
  return v8;
}
