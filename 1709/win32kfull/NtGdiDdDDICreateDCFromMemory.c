/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C0041C50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     DxEngSetPaletteState @ 0x1C0041B84 (DxEngSetPaletteState.c)
 *     DxEngSelectPaletteToSurface @ 0x1C0041BC8 (DxEngSelectPaletteToSurface.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0143144 (--1MDCOBJA@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C01446E0 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C0251744 (DxEngSyncPaletteTableWithDevice.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  HSURF Bitmap; // rdi
  ULONG64 v2; // rax
  __int64 v3; // r8
  ULONG *v4; // r13
  _OWORD *v5; // rdx
  ULONG *v6; // rax
  __int64 v7; // rcx
  int v8; // esi
  FLONG flGreen; // r14d
  FLONG flBlue; // ebx
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // r12d
  HANDLE v14; // r15
  int v15; // r8d
  FLONG v16; // r9d
  ULONG v17; // esi
  HPALETTE Palette; // rax
  HPALETTE v19; // rbx
  SIZE_T v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  SURFOBJ *v23; // rax
  SURFOBJ *v24; // rsi
  __int64 v25; // rax
  __int64 DisplayDC; // rax
  __int64 v27; // rsi
  ULONG64 v28; // r8
  _QWORD *v29; // rdx
  _QWORD *v30; // rdx
  DYNAMICMODECHANGESHARELOCK *v31; // rcx
  DYNAMICMODECHANGESHARELOCK *v33; // rcx
  ULONG iFormat; // [rsp+30h] [rbp-4C8h]
  char v35[4]; // [rsp+34h] [rbp-4C4h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-4C0h]
  ULONG cColors[2]; // [rsp+40h] [rbp-4B8h]
  HSURF hsurf; // [rsp+48h] [rbp-4B0h]
  __int64 v39; // [rsp+50h] [rbp-4A8h]
  SIZEL sizl; // [rsp+58h] [rbp-4A0h]
  ULONG64 v41; // [rsp+60h] [rbp-498h]
  _QWORD v42[2]; // [rsp+68h] [rbp-490h] BYREF
  volatile void *Address[2]; // [rsp+78h] [rbp-480h]
  LONG lWidth[4]; // [rsp+88h] [rbp-470h]
  __int128 v45; // [rsp+98h] [rbp-460h]
  __int64 v46; // [rsp+A8h] [rbp-450h]
  HANDLE v47; // [rsp+B0h] [rbp-448h]
  ULONG pulColors[256]; // [rsp+C0h] [rbp-438h] BYREF

  v41 = a1;
  v39 = 0LL;
  Bitmap = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v2;
  *(_OWORD *)lWidth = *(_OWORD *)(v2 + 16);
  v45 = *(_OWORD *)(v2 + 32);
  v46 = *(_QWORD *)(v2 + 48);
  sizl = (SIZEL)__PAIR64__(lWidth[0], HIDWORD(Address[1]));
  v3 = (unsigned int)lWidth[0];
  if ( SHIDWORD(Address[1]) <= 0 || lWidth[0] <= 0 )
    return 3221225485LL;
  cColors[0] = 0;
  v4 = 0LL;
  if ( LODWORD(Address[1]) == 20 )
  {
    iFormat = 5;
    goto LABEL_24;
  }
  if ( SLODWORD(Address[1]) <= 20 )
    return 3221225485LL;
  if ( SLODWORD(Address[1]) <= 22 )
  {
    iFormat = 6;
LABEL_24:
    flGreen = 65280;
    flBlue = 255;
    v8 = 16711680;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) == 23 )
  {
    iFormat = 4;
    v8 = 63488;
    flBlue = 31;
    flGreen = 2016;
    goto LABEL_25;
  }
  if ( SLODWORD(Address[1]) <= 25 )
  {
    iFormat = 4;
    v8 = 31744;
    flBlue = 31;
    flGreen = 992;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) != 41 )
    return 3221225485LL;
  iFormat = 3;
  v5 = (_OWORD *)v45;
  if ( (_QWORD)v45 )
  {
    if ( (__int64)v45 + 1024 < (unsigned __int64)v45 || (__int64)v45 + 1024 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v6 = pulColors;
    v7 = 8LL;
    do
    {
      *(_OWORD *)v6 = *v5;
      *((_OWORD *)v6 + 1) = v5[1];
      *((_OWORD *)v6 + 2) = v5[2];
      *((_OWORD *)v6 + 3) = v5[3];
      *((_OWORD *)v6 + 4) = v5[4];
      *((_OWORD *)v6 + 5) = v5[5];
      *((_OWORD *)v6 + 6) = v5[6];
      v6 += 32;
      *((_OWORD *)v6 - 1) = v5[7];
      v5 += 8;
      --v7;
    }
    while ( v7 );
    v4 = pulColors;
  }
  else
  {
    v4 = (ULONG *)&unk_1C02DEBE0;
  }
  cColors[0] = 256;
  v8 = 0;
  flGreen = 0;
  flBlue = 0;
LABEL_25:
  v11 = v3 * (unsigned int)lWidth[1];
  v12 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v12 = v3 * lWidth[1];
  LODWORD(Length) = v12;
  v13 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v11 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v14 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v47 = v14;
  if ( !v14 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v35);
  MDCOBJA::MDCOBJA((MDCOBJA *)v42, *(HDC *)&lWidth[2], v15);
  if ( !v42[0] )
  {
    MmUnsecureVirtualMemory(v14);
    MDCOBJA::~MDCOBJA((MDCOBJA *)v42);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v33);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v42[0] + 48LL);
  v16 = v8;
  v17 = cColors[0];
  Palette = EngCreatePalette((unsigned int)(iFormat > 3) + 1, cColors[0], v4, v16, flGreen, flBlue);
  v19 = Palette;
  *(_QWORD *)cColors = Palette;
  if ( !Palette )
    goto LABEL_38;
  v20 = Length;
  if ( v17 == 256 && !v4 )
    DxEngSyncPaletteTableWithDevice(Palette);
  Bitmap = (HSURF)EngCreateBitmap(sizl, lWidth[1], iFormat, 1u, (PVOID)Address[0]);
  hsurf = Bitmap;
  DxEngSetPaletteState(v19, v21, v22);
  if ( Bitmap && (v23 = EngLockSurface(Bitmap), (v24 = v23) != 0LL) )
  {
    DxEngSelectPaletteToSurface((__int64)v23, v19);
    v25 = SURFOBJ_TO_SURFACE(v24);
    *(_QWORD *)(v25 + 232) = v14;
    *(_DWORD *)(v25 + 112) |= 0x104200u;
    EngUnlockSurface(v24);
    DisplayDC = GreCreateDisplayDC(v20, 1LL, 0LL);
    v27 = DisplayDC;
    v39 = DisplayDC;
    if ( DisplayDC )
    {
      hbmSelectBitmap(DisplayDC, Bitmap, 0LL);
      GreSetBitmapOwner(Bitmap, 2147483650LL);
    }
  }
  else
  {
LABEL_38:
    v27 = 0LL;
  }
  if ( !v27 )
  {
    if ( Bitmap )
    {
      EngDeleteSurface(Bitmap);
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v14);
    }
    v13 = -1073741801;
  }
  v28 = v41;
  v29 = (_QWORD *)(v41 + 40);
  if ( v41 + 40 >= MmUserProbeAddress )
    v29 = (_QWORD *)MmUserProbeAddress;
  *v29 = v39;
  v30 = (_QWORD *)(v28 + 48);
  if ( v28 + 48 >= MmUserProbeAddress )
    v30 = (_QWORD *)MmUserProbeAddress;
  *v30 = hsurf;
  if ( v19 )
    EngDeletePalette(v19);
  MDCOBJA::~MDCOBJA((MDCOBJA *)v42);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v31);
  return v13;
}
