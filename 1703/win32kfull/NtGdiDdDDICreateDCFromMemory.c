/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C009F2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0071B18 (--1DCOBJA@@QEAA@XZ.c)
 *     DxEngSelectPaletteToSurface @ 0x1C009F7CC (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C009F85C (DxEngSetPaletteState.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C024FCF4 (DxEngSyncPaletteTableWithDevice.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(unsigned __int64 a1)
{
  HSURF Bitmap; // rdi
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  ULONG *v4; // r13
  _OWORD *v5; // rdx
  ULONG *v6; // rax
  __int64 v7; // rcx
  int v8; // r14d
  FLONG flGreen; // r15d
  FLONG flBlue; // ebx
  int v11; // esi
  HANDLE v12; // r12
  FLONG v13; // r9d
  ULONG v14; // r14d
  HPALETTE Palette; // rax
  HPALETTE v16; // rbx
  SURFOBJ *v17; // rax
  SURFOBJ *v18; // r14
  __int64 v19; // rax
  __int64 DisplayDC; // rax
  __int64 v21; // r14
  unsigned __int64 v22; // r8
  __int64 *v23; // rdx
  HSURF *v24; // rdx
  DYNAMICMODECHANGESHARELOCK *v25; // rcx
  DYNAMICMODECHANGESHARELOCK *v27; // rcx
  ULONG iFormat; // [rsp+30h] [rbp-4C8h]
  SIZE_T Length; // [rsp+38h] [rbp-4C0h]
  SIZE_T Lengtha; // [rsp+38h] [rbp-4C0h]
  char v31[8]; // [rsp+40h] [rbp-4B8h] BYREF
  ULONG cColors[2]; // [rsp+48h] [rbp-4B0h]
  HSURF hsurf; // [rsp+50h] [rbp-4A8h]
  __int64 v34; // [rsp+58h] [rbp-4A0h]
  SIZEL sizl; // [rsp+60h] [rbp-498h]
  HANDLE v36; // [rsp+68h] [rbp-490h]
  unsigned __int64 v37; // [rsp+70h] [rbp-488h]
  _QWORD v38[2]; // [rsp+78h] [rbp-480h] BYREF
  volatile void *Address[2]; // [rsp+88h] [rbp-470h]
  LONG lWidth[4]; // [rsp+98h] [rbp-460h]
  __int128 v41; // [rsp+A8h] [rbp-450h]
  __int64 v42; // [rsp+B8h] [rbp-440h]
  ULONG pulColors[256]; // [rsp+C0h] [rbp-438h] BYREF

  v37 = a1;
  v34 = 0LL;
  Bitmap = 0LL;
  hsurf = 0LL;
  v36 = 0LL;
  HIDWORD(Length) = 0;
  v2 = a1;
  if ( a1 >= W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v2;
  *(_OWORD *)lWidth = *(_OWORD *)(v2 + 16);
  v41 = *(_OWORD *)(v2 + 32);
  v42 = *(_QWORD *)(v2 + 48);
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
    v8 = 16711680;
    flBlue = 255;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) == 23 )
  {
    iFormat = 4;
    flBlue = 31;
    v8 = 63488;
    flGreen = 2016;
    goto LABEL_25;
  }
  if ( SLODWORD(Address[1]) <= 25 )
  {
    iFormat = 4;
    flBlue = 31;
    v8 = 31744;
    flGreen = 992;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) != 41 )
    return 3221225485LL;
  iFormat = 3;
  v5 = (_OWORD *)v41;
  if ( (_QWORD)v41 )
  {
    if ( (__int64)v41 + 1024 < (unsigned __int64)v41 || (unsigned __int64)(v41 + 1024) > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
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
    v4 = (ULONG *)&unk_1C02E4A70;
  }
  cColors[0] = 256;
  v8 = 0;
  flGreen = 0;
  flBlue = 0;
LABEL_25:
  if ( v3 * (unsigned __int64)(unsigned int)lWidth[1] > 0xFFFFFFFF )
  {
    LODWORD(Length) = -1;
    v11 = -1073741675;
  }
  else
  {
    LODWORD(Length) = v3 * lWidth[1];
    v11 = 0;
  }
  if ( v11 < 0 )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v12 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v36 = v12;
  if ( !v12 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v31);
  MDCOBJA::MDCOBJA((MDCOBJA *)v38, *(HDC *)&lWidth[2]);
  if ( !v38[0] )
  {
    MmUnsecureVirtualMemory(v12);
    DCOBJA::~DCOBJA((DCOBJA *)v38);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v27);
    return 3221225485LL;
  }
  Lengtha = *(_QWORD *)(v38[0] + 48LL);
  v13 = v8;
  v14 = cColors[0];
  Palette = EngCreatePalette((unsigned int)(iFormat > 3) + 1, cColors[0], v4, v13, flGreen, flBlue);
  v16 = Palette;
  *(_QWORD *)cColors = Palette;
  if ( !Palette )
    goto LABEL_39;
  if ( v14 == 256 && !v4 )
    DxEngSyncPaletteTableWithDevice(Palette);
  Bitmap = (HSURF)EngCreateBitmap(sizl, lWidth[1], iFormat, 1u, (PVOID)Address[0]);
  hsurf = Bitmap;
  DxEngSetPaletteState(v16);
  if ( Bitmap && (v17 = EngLockSurface(Bitmap), (v18 = v17) != 0LL) )
  {
    DxEngSelectPaletteToSurface(v17, v16);
    v19 = SURFOBJ_TO_SURFACE(v18);
    *(_QWORD *)(v19 + 232) = v12;
    *(_DWORD *)(v19 + 112) |= 0x104200u;
    EngUnlockSurface(v18);
    DisplayDC = GreCreateDisplayDC(Lengtha, 1LL, 0LL);
    v21 = DisplayDC;
    v34 = DisplayDC;
    if ( DisplayDC )
    {
      hbmSelectBitmap(DisplayDC, Bitmap, 0LL);
      GreSetBitmapOwner(Bitmap, 2147483650LL);
    }
  }
  else
  {
LABEL_39:
    v21 = 0LL;
  }
  if ( !v21 )
  {
    if ( Bitmap )
    {
      EngDeleteSurface(Bitmap);
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v12);
    }
    v11 = -1073741801;
  }
  v22 = v37;
  v23 = (__int64 *)(v37 + 40);
  if ( v37 + 40 >= W32UserProbeAddress )
    v23 = (__int64 *)W32UserProbeAddress;
  *v23 = v34;
  v24 = (HSURF *)(v22 + 48);
  if ( v22 + 48 >= W32UserProbeAddress )
    v24 = (HSURF *)W32UserProbeAddress;
  *v24 = hsurf;
  if ( v16 )
    EngDeletePalette(v16);
  DCOBJA::~DCOBJA((DCOBJA *)v38);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v25);
  return (unsigned int)v11;
}
