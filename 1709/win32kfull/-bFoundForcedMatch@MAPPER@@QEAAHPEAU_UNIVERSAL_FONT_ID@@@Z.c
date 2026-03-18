/*
 * XREFs of ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00AC820
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00AEB2C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C003BB88 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C00AC708 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C00ADA24 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00AF92C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C00B0F78 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C010F628 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C0112028 (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C0138C48 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C013FFE0 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0270768 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C027079C (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

__int64 __fastcall MAPPER::bFoundForcedMatch(MAPPER *this, struct _UNIVERSAL_FONT_ID *a2)
{
  unsigned int v2; // edi
  struct PFE *PFEFromUFIInternal; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // r8d
  _DWORD *v9; // rdx
  struct PFF *v11; // rax
  _QWORD *v12; // rax
  int *v13; // r11
  int v14; // r9d
  signed int v15; // r8d
  int v16; // r10d
  int v17; // eax
  int v19; // r14d
  int v20; // edx
  unsigned int v21; // eax
  int v22; // r10d
  int v23; // r11d
  int v24; // r10d
  unsigned int v25; // r11d
  _QWORD v26[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v27; // [rsp+30h] [rbp-10h]
  struct PFT *v28; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  if ( !*(_DWORD *)a2 )
    return 0LL;
  if ( *(_DWORD *)a2 == 1 )
  {
    v28 = gpPFTDevice;
    v11 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v28, *(HDEV *)(**(_QWORD **)this + 48LL), 0LL);
    if ( !v11 )
      return 0LL;
    v12 = (_QWORD *)((char *)v11 + 112);
    if ( !v12 )
      return 0LL;
    v26[0] = v12;
    v26[1] = *v12;
    v27 = 0LL;
    PFEFromUFIInternal = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v26);
    if ( !PFEFromUFIInternal )
      return 0LL;
    v14 = *v13;
    do
    {
      if ( *((_DWORD *)PFEFromUFIInternal + 23) == v14
        && *((_DWORD *)PFEFromUFIInternal + 24) == v13[1]
        && (*((_DWORD *)PFEFromUFIInternal + 3) & 2) == 0 )
      {
        break;
      }
      PFEFromUFIInternal = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v26);
    }
    while ( PFEFromUFIInternal );
  }
  else
  {
    PFEFromUFIInternal = ppfeGetPFEFromUFIInternal(a2, 0, 1);
  }
  if ( PFEFromUFIInternal )
  {
    *((_DWORD *)this + 48) = 1;
    *((_DWORD *)this + 49) = 1;
    *((_DWORD *)this + 47) = 0;
    v5 = *((_QWORD *)PFEFromUFIInternal + 4);
    *((_QWORD *)this + 32) = v5;
    v6 = *(unsigned int *)(v5 + 48);
    if ( (v6 & 0x3000010) == 0 )
    {
      if ( (*((_DWORD *)this + 63) & 2) != 0 )
        v15 = *(__int16 *)(v5 + 56);
      else
        v15 = *(__int16 *)(v5 + 60) + *(__int16 *)(v5 + 62);
      v16 = *((_DWORD *)this + 41);
      if ( v15 < v16
        && (LOBYTE(v6) = (v6 & 0x100000) != 0, ((unsigned __int8)v6 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0)
        && v16 > 7 * v15 / 4 )
      {
        if ( !MAPPER::bWin31BitmapHeightScaling((MAPPER *)v6, v16, v15, (int *)&v28) )
          return v2;
        v17 = (int)v28;
        v6 = 8LL;
        if ( (unsigned int)v28 > 8 )
          v17 = 8;
        *((_DWORD *)this + 49) = v17;
      }
      else
      {
        *((_DWORD *)this + 49) = 1;
      }
    }
    v7 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 20) )
    {
      if ( (*(_BYTE *)(v5 + 52) & 1) == 0 )
      {
        if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
          *((_DWORD *)this + 47) = 0x4000;
      }
    }
    v8 = *((_DWORD *)this + 63);
    if ( (v8 & 0x200000) == 0 )
    {
      v6 = (unsigned int)*(unsigned __int16 *)(v5 + 46) - *((_DWORD *)this + 43);
      if ( (int)v6 < 0 )
      {
        v6 = *((_DWORD *)this + 43) - (unsigned int)*(unsigned __int16 *)(v5 + 46);
        if ( (int)v6 > 150 )
        {
          if ( IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
            *((_DWORD *)this + 47) |= 0x2000u;
        }
      }
    }
    v9 = (_DWORD *)v5;
    if ( (*(_DWORD *)(v5 + 48) & 0x2000010) != 0 )
    {
LABEL_10:
      v2 = 1;
      **((_DWORD **)this + 27) = *((_DWORD *)this + 47);
      **((_QWORD **)this + 28) = *((_QWORD *)this + 24);
      *(_BYTE *)(*((_QWORD *)this + 29) + 3LL) = 1;
      *((_DWORD *)this + 63) |= 0x1000000u;
      *((_QWORD *)this + 25) = PFEFromUFIInternal;
      return v2;
    }
    v19 = *(__int16 *)(v5 + 76);
    *((_DWORD *)this + 48) = 1;
    if ( *(_DWORD *)(v7 + 4) )
    {
      if ( (v8 & 4) == 0 )
        MAPPER::bCalculateWishCell(this);
      LOBYTE(v6) = (*(_DWORD *)(*((_QWORD *)this + 32) + 48LL) & 0x100000) != 0;
      if ( ((unsigned __int8)v6 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) == 0 )
        goto LABEL_10;
      v20 = *((_DWORD *)this + 42);
      if ( v20 <= v19 )
        goto LABEL_10;
      if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v6, v20, v19, (int *)&v28) )
        return v2;
      v21 = (unsigned int)v28;
    }
    else
    {
      if ( (v9[12] & 0x100000) == 0 || (v8 & 0x8000) != 0 )
        goto LABEL_10;
      v22 = v9[32];
      v23 = v9[33];
      LODWORD(v28) = 0;
      v29 = 0;
      if ( v22 == v23 && *((_DWORD *)this + 61) == *((_DWORD *)this + 62) )
      {
        v21 = *((_DWORD *)this + 49);
        if ( v21 == 1 )
          goto LABEL_10;
      }
      else
      {
        if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>(
                             (unsigned int)(100 * *((_DWORD *)this + 62)),
                             *((unsigned int *)this + 61),
                             &v28)
          || (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * v24), v25, &v30)
          || (unsigned int)SafeDivide<long,long,long>(v30, *((unsigned int *)this + 49), &v29) )
        {
          return v2;
        }
        if ( (unsigned int)v28 <= (3 * v29) >> 1 )
          goto LABEL_10;
        if ( !v29 )
          return v2;
        v21 = (unsigned int)v28 / v29;
      }
      *((_DWORD *)this + 48) = v21;
    }
    if ( v21 > 5 )
      v21 = 5;
    *((_DWORD *)this + 48) = v21;
    goto LABEL_10;
  }
  return 0LL;
}
