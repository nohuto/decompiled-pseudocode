/*
 * XREFs of ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00564F0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00582F4 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C002C9D0 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C002FB08 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0056250 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0057784 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C005B780 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C00FD680 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0102E78 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0102EAC (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C010452C (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C0133E70 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C013949C (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 */

__int64 __fastcall MAPPER::bFoundForcedMatch(MAPPER *this, struct _UNIVERSAL_FONT_ID *a2)
{
  unsigned int v2; // edi
  struct PFE *PFEFromUFIInternal; // rsi
  char *v5; // r14
  __int64 v6; // rax
  MAPPER *v7; // rcx
  __int64 v8; // r9
  int v9; // r8d
  __int64 v10; // rcx
  struct PFF *v12; // rax
  _QWORD *v13; // rax
  int *v14; // r11
  int v15; // r9d
  signed int v16; // r8d
  int v17; // r10d
  int v18; // eax
  int v20; // r15d
  int v21; // edx
  unsigned int v22; // eax
  int v23; // r10d
  int v24; // r11d
  int v25; // r10d
  unsigned int v26; // r11d
  _QWORD v27[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v28; // [rsp+30h] [rbp-10h]
  struct PFT *v29; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  if ( !*(_DWORD *)a2 )
    return 0LL;
  if ( *(_DWORD *)a2 == 1 )
  {
    v29 = gpPFTDevice;
    v12 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v29, *(HDEV *)(**(_QWORD **)this + 48LL), 0LL);
    if ( !v12 )
      return 0LL;
    v13 = (_QWORD *)((char *)v12 + 112);
    if ( !v13 )
      return 0LL;
    v27[0] = v13;
    v27[1] = *v13;
    v28 = 0LL;
    PFEFromUFIInternal = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v27);
    if ( !PFEFromUFIInternal )
      return 0LL;
    v15 = *v14;
    do
    {
      if ( *((_DWORD *)PFEFromUFIInternal + 23) == v15
        && *((_DWORD *)PFEFromUFIInternal + 24) == v14[1]
        && (*((_DWORD *)PFEFromUFIInternal + 3) & 2) == 0 )
      {
        break;
      }
      PFEFromUFIInternal = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v27);
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
    v5 = (char *)this + 256;
    *((_DWORD *)this + 49) = 1;
    *((_DWORD *)this + 47) = 0;
    v6 = *((_QWORD *)PFEFromUFIInternal + 4);
    *((_QWORD *)this + 32) = v6;
    v7 = (MAPPER *)*(unsigned int *)(v6 + 48);
    if ( ((unsigned int)v7 & 0x3000010) == 0 )
    {
      if ( (*((_DWORD *)this + 63) & 2) != 0 )
        v16 = *(__int16 *)(v6 + 56);
      else
        v16 = *(__int16 *)(v6 + 60) + *(__int16 *)(v6 + 62);
      v17 = *((_DWORD *)this + 41);
      if ( v16 < v17
        && (LOBYTE(v7) = ((unsigned int)v7 & 0x100000) != 0,
            ((unsigned __int8)v7 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0)
        && v17 > 7 * v16 / 4 )
      {
        if ( !MAPPER::bWin31BitmapHeightScaling(v7, v17, v16, (int *)&v29) )
          return v2;
        v18 = (int)v29;
        if ( (unsigned int)v29 > 8 )
          v18 = 8;
        *((_DWORD *)this + 49) = v18;
      }
      else
      {
        *((_DWORD *)this + 49) = 1;
      }
    }
    v8 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v8 + 20) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)v5 + 52LL) & 1) == 0 )
      {
        if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
          *((_DWORD *)this + 47) = 0x4000;
      }
    }
    v9 = *((_DWORD *)this + 63);
    if ( (v9 & 0x200000) == 0
      && *(unsigned __int16 *)(*(_QWORD *)v5 + 46LL) - *((_DWORD *)this + 43) < 0
      && *((_DWORD *)this + 43) - *(unsigned __int16 *)(*(_QWORD *)v5 + 46LL) > 150
      && IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
    {
      *((_DWORD *)this + 47) |= 0x2000u;
    }
    v10 = *(_QWORD *)v5;
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 48LL) & 0x2000010) != 0 )
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
    v20 = *(__int16 *)(v10 + 76);
    *((_DWORD *)this + 48) = 1;
    if ( *(_DWORD *)(v8 + 4) )
    {
      if ( (v9 & 4) == 0 )
        MAPPER::bCalculateWishCell(this);
      LOBYTE(v10) = (*(_DWORD *)(*(_QWORD *)v5 + 48LL) & 0x100000) != 0;
      if ( ((unsigned __int8)v10 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) == 0 )
        goto LABEL_10;
      v21 = *((_DWORD *)this + 42);
      if ( v21 <= v20 )
        goto LABEL_10;
      if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v10, v21, v20, (int *)&v29) )
        return v2;
      v22 = (unsigned int)v29;
    }
    else
    {
      if ( (*(_DWORD *)(v10 + 48) & 0x100000) == 0 || (v9 & 0x8000) != 0 )
        goto LABEL_10;
      v23 = *(_DWORD *)(v10 + 128);
      v24 = *(_DWORD *)(v10 + 132);
      LODWORD(v29) = 0;
      v30 = 0;
      if ( v23 == v24 && *((_DWORD *)this + 61) == *((_DWORD *)this + 62) )
      {
        v22 = *((_DWORD *)this + 49);
        if ( v22 == 1 )
          goto LABEL_10;
      }
      else
      {
        if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>(
                             (unsigned int)(100 * *((_DWORD *)this + 62)),
                             *((unsigned int *)this + 61),
                             &v29)
          || (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * v25), v26, &v31)
          || (unsigned int)SafeDivide<long,long,long>(v31, *((unsigned int *)this + 49), &v30) )
        {
          return v2;
        }
        if ( (unsigned int)v29 <= (3 * v30) >> 1 )
          goto LABEL_10;
        if ( !v30 )
          return v2;
        v22 = (unsigned int)v29 / v30;
      }
      *((_DWORD *)this + 48) = v22;
    }
    if ( v22 > 5 )
      v22 = 5;
    *((_DWORD *)this + 48) = v22;
    goto LABEL_10;
  }
  return 0LL;
}
