/*
 * XREFs of xxxDrawState @ 0x1C021AAB8
 * Callers:
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C007EA48 (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C007EAB0 (GreGetLayout.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C0080E74 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     GreGetTextColor @ 0x1C0082D98 (GreGetTextColor.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     MNIspItemValid @ 0x1C0205948 (MNIspItemValid.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C021A97C (BltColor.c)
 *     GreGetHFONT @ 0x1C027AB3C (GreGetHFONT.c)
 *     GreGetTextCharacterExtra @ 0x1C0294E2C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C0294E74 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawState(
        HDC a1,
        __int64 a2,
        __int64 *a3,
        LONG a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v10; // ecx
  int v11; // edi
  int v12; // r12d
  int v13; // esi
  HDC v14; // r15
  unsigned int Layout; // eax
  __int64 v16; // r8
  signed int v17; // ebx
  signed int v18; // r9d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  unsigned __int16 v24; // ax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rbx
  int v31; // ebx
  int v32; // ebx
  __int64 v33; // r9
  HBRUSH v34; // rcx
  HDC v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  LONG v38; // ebx
  int v39; // eax
  unsigned int v40; // ebx
  int v42; // [rsp+50h] [rbp-B0h]
  int v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  LONG v45; // [rsp+60h] [rbp-A0h]
  BOOL v46; // [rsp+64h] [rbp-9Ch]
  int v47; // [rsp+68h] [rbp-98h]
  int TextAlign; // [rsp+6Ch] [rbp-94h]
  __int64 Bitmap; // [rsp+70h] [rbp-90h]
  __int64 *v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  int v54; // [rsp+98h] [rbp-68h]
  int v55; // [rsp+9Ch] [rbp-64h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  _QWORD v57[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v58[40]; // [rsp+B8h] [rbp-48h] BYREF
  char v59[46]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v60; // [rsp+10Eh] [rbp+Eh]
  int v61; // [rsp+110h] [rbp+10h]

  v50 = a3;
  v52 = a2;
  v45 = a4;
  v44 = 0LL;
  v51 = 0LL;
  memset(v58, 0, 0x20uLL);
  v10 = a8;
  v46 = 0;
  v42 = 0;
  TextAlign = 0;
  if ( (a8 & 0x20) != 0 && (*(_WORD *)(gpsi + 9972LL) == 1 || *(_DWORD *)(gpsi + 2172LL)) )
    v10 = a8 & 0xFFFFFFCF | 0x10;
  v11 = a6;
  v12 = v10 | 0x80;
  if ( (v10 & 0x170) == 0 )
    v12 = v10;
  if ( !a6 )
    return 1LL;
  v13 = a7;
  if ( !a7 )
    return 1LL;
  v47 = v12 & 0x80;
  if ( (v12 & 0x80) != 0 )
  {
    v14 = *(HDC *)(gpDispInfo + 64LL);
    GreSetLayout(v14, 0xFFFFFFFFLL, 0LL);
    Layout = GreGetLayout(a1);
    if ( Layout != -1 )
      GreSetLayout(v14, a6, Layout);
    v16 = gpDispInfo;
    v17 = a6 + 1;
    v18 = *(_DWORD *)(gpDispInfo + 80LL);
    if ( v18 < (int)(a6 + 1) || *(_DWORD *)(gpDispInfo + 84LL) < a7 )
    {
      v19 = *(_DWORD *)(gpDispInfo + 84LL);
      v20 = (unsigned int)a7;
      v21 = (unsigned int)v17;
      if ( v19 > a7 )
        v20 = (unsigned int)v19;
      if ( v18 > v17 )
        v21 = (unsigned int)v18;
      Bitmap = GreCreateBitmap(v21, v20, 1LL, 1LL, 0LL);
      if ( Bitmap )
      {
        v22 = GreSelectBitmap(*(_QWORD *)(gpDispInfo + 64LL), Bitmap);
        GreDeleteObject(v22);
        GreSetBitmapOwner(Bitmap, 0LL);
        v16 = gpDispInfo;
        if ( *(_DWORD *)(gpDispInfo + 80LL) > v17 )
          v17 = *(_DWORD *)(gpDispInfo + 80LL);
        *(_DWORD *)(gpDispInfo + 80LL) = v17;
        v23 = a7;
        if ( *(_DWORD *)(gpDispInfo + 84LL) > a7 )
          v23 = *(_DWORD *)(gpDispInfo + 84LL);
        *(_DWORD *)(gpDispInfo + 84LL) = v23;
      }
      else
      {
        v16 = gpDispInfo;
        v13 = *(_DWORD *)(gpDispInfo + 84LL);
        v11 = *(_DWORD *)(gpDispInfo + 80LL) - 1;
      }
    }
    NtGdiPatBlt(
      *(HDC *)(*(_QWORD *)v16 + 64LL),
      0,
      0,
      *(_DWORD *)(*(_QWORD *)v16 + 80LL),
      *(_DWORD *)(*(_QWORD *)v16 + 84LL),
      16711778);
    GreGetTextCharacterExtra(a1);
    GreSetTextCharacterExtra(*(HDC *)(gpDispInfo + 64LL));
    TextAlign = GreGetTextAlign(v14);
    v24 = GreGetTextAlign(a1);
    GreSetTextAlign(v14, TextAlign ^ ((unsigned __int16)TextAlign ^ v24) & 0x106);
    v29 = *(_QWORD *)(GetDPIServerInfo(v26, v25, v27, v28) + 24);
    if ( GreGetHFONT(a1) != v29 )
    {
      v30 = GreSelectFont((__int64)a1, v29);
      GreSelectFont((__int64)a1, v30);
      v51 = GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), v30);
      v57[0] = *(_QWORD *)(gpDispInfo + 64LL);
      v57[1] = v51;
      v42 = GrePushThreadGuardedObject(v58, v57, SelectFont);
    }
  }
  else
  {
    v14 = a1;
    GreGetDCPoint(a1, 4LL, &v44);
    GreSetViewportOrg(a1, a4 + v44, a5 + HIDWORD(v44));
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem(v14, v50, v11, v13, 0, v12);
  if ( v42 )
    GrePopThreadGuardedObject(v58);
  v32 = 1;
  if ( !v47 )
  {
    v31 = *(_DWORD *)(gpsi + 4620LL);
    if ( (unsigned int)GreGetTextColor(v14) != v31 )
      v32 = 0;
  }
  v43 = v32;
  if ( MNIspItemValid(*v50, v50[1]) )
  {
    v34 = *(HBRUSH *)(v33 + 104);
    if ( v34 )
      v46 = (unsigned int)GreExtGetObjectW(v34, 104LL, v59) == 104 && v60 == 32 && !v61;
  }
  v35 = *(HDC *)(gpDispInfo + 64LL);
  if ( v14 == v35 )
  {
    GreSetBkColor(v35, 0xFFFFFF);
    GreSetTextColor(*(HDC *)(gpDispInfo + 64LL), 0);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 64LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 64LL), 2);
  }
  if ( v47 )
  {
    if ( v51 )
      GreSelectFont((__int64)v14, v51);
    GreSetTextAlign(v14, TextAlign);
    if ( (v12 & 0x10) != 0 )
    {
      v53 = 0LL;
      v54 = v11;
      v55 = v13;
      v56 = *(_QWORD *)(gpsi + 4928LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 64LL), 16384137, (struct _POLYPATBLT *)&v53, 1);
    }
    if ( (v12 & 0x100) != 0 )
    {
      v36 = gpDispInfo;
      v37 = *(_QWORD *)(gpsi + 4808LL);
    }
    else
    {
      v36 = gpDispInfo;
      if ( (v12 & 0x20) != 0 )
      {
        v38 = v45;
        BltColor(a1, *(_QWORD *)(gpsi + 4840LL), *(HDC *)(gpDispInfo + 64LL), v45 + 1, a5 + 1, v11, v13, 0, 0, 1);
        v36 = gpDispInfo;
        v37 = *(_QWORD *)(gpsi + 4808LL);
        goto LABEL_51;
      }
      v37 = v52;
      if ( (v12 & 0x40) != 0 )
      {
        v38 = v45;
        BltColor(a1, v52, *(HDC *)(gpDispInfo + 64LL), v45, a5, v11, v13, 0, 0, 1);
        BltColor(a1, v52, *(HDC *)(gpDispInfo + 64LL), v38 + 1, a5, v11, v13, 0, 0, 1);
        goto LABEL_52;
      }
    }
    v38 = v45;
LABEL_51:
    BltColor(a1, v37, *(HDC *)(v36 + 64), v38, a5, v11, v13, 0, 0, 1);
LABEL_52:
    GreSetLayout(v14, 0xFFFFFFFFLL, 0LL);
    if ( v46 )
    {
      GreGetDCPoint(a1, 4LL, &v44);
      GreSetViewportOrg(a1, v38 + v44, a5 + HIDWORD(v44));
      v39 = xxxRealDrawMenuItem(a1, v50, v11, v13, 1, v43);
      v40 = v39 & Bitmap;
      GreSetViewportOrg(a1, v44, SHIDWORD(v44));
    }
    else
    {
      return (unsigned int)Bitmap;
    }
    return v40;
  }
  if ( v46 )
    xxxRealDrawMenuItem(v14, v50, v11, v13, 1, v32);
  GreSetViewportOrg(v14, v44, SHIDWORD(v44));
  return 1LL;
}
