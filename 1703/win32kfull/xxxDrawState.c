/*
 * XREFs of xxxDrawState @ 0x1C0219860
 * Callers:
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C000E1DC (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C000E26C (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C000E37C (GreGetTextAlign.c)
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     GreSetBkMode @ 0x1C002B384 (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     GreGetTextColor @ 0x1C00D6898 (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     MNIspItemValid @ 0x1C0203E8C (MNIspItemValid.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C0219728 (BltColor.c)
 *     GreGetHFONT @ 0x1C027E024 (GreGetHFONT.c)
 *     GreGetTextCharacterExtra @ 0x1C0298794 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02987E4 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawState(
        HDC a1,
        __int64 a2,
        struct tagMENU **a3,
        int a4,
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
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // ebx
  int v29; // ebx
  __int64 v30; // r9
  HBRUSH v31; // rcx
  HDC v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // ebx
  int v36; // eax
  unsigned int v37; // ebx
  int v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+60h] [rbp-A0h]
  BOOL v43; // [rsp+64h] [rbp-9Ch]
  int v44; // [rsp+68h] [rbp-98h]
  int TextAlign; // [rsp+6Ch] [rbp-94h]
  __int64 Bitmap; // [rsp+70h] [rbp-90h]
  struct tagMENU **v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  int v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+9Ch] [rbp-64h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  _QWORD v54[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v55[40]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 v56[24]; // [rsp+E0h] [rbp-20h] BYREF
  int v57; // [rsp+110h] [rbp+10h]

  v47 = a3;
  v49 = a2;
  v42 = a4;
  v41 = 0LL;
  v48 = 0LL;
  memset(v55, 0, 0x20uLL);
  v10 = a8;
  v43 = 0;
  v39 = 0;
  TextAlign = 0;
  if ( (a8 & 0x20) != 0 && (*(_WORD *)(gpsi + 8676LL) == 1 || *(_DWORD *)(gpsi + 2172LL)) )
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
  v44 = v12 & 0x80;
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
    v26 = *(_QWORD *)(GetDPIServerInfo(v25) + 48);
    if ( GreGetHFONT(a1) != v26 )
    {
      v27 = GreSelectFontInternal(a1, v26, 1);
      GreSelectFontInternal(a1, v27, 1);
      v48 = GreSelectFontInternal(*(HDC *)(gpDispInfo + 64LL), v27, 1);
      v54[0] = *(_QWORD *)(gpDispInfo + 64LL);
      v54[1] = v48;
      v39 = GrePushThreadGuardedObject(v55, v54, SelectFont);
    }
  }
  else
  {
    v14 = a1;
    GreGetDCPoint(a1, 4LL, &v41);
    GreSetViewportOrg(a1, a4 + v41, a5 + HIDWORD(v41));
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem(v14, v47, v11, v13, 0, v12);
  if ( v39 )
    GrePopThreadGuardedObject(v55);
  v29 = 1;
  if ( !v44 )
  {
    v28 = *(_DWORD *)(gpsi + 5028LL);
    if ( (unsigned int)GreGetTextColor(v14) != v28 )
      v29 = 0;
  }
  v40 = v29;
  if ( MNIspItemValid((__int64)*v47, (__int64)v47[1]) )
  {
    v31 = *(HBRUSH *)(v30 + 104);
    if ( v31 )
      v43 = (unsigned int)GreExtGetObjectW(v31, 104LL, v56) == 104 && v56[23] == 32 && !v57;
  }
  v32 = *(HDC *)(gpDispInfo + 64LL);
  if ( v14 == v32 )
  {
    GreSetBkColor(v32, 0xFFFFFF);
    GreSetTextColor(*(HDC *)(gpDispInfo + 64LL), 0);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 64LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 64LL), 2);
  }
  if ( v44 )
  {
    if ( v48 )
      GreSelectFontInternal(v14, v48, 1);
    GreSetTextAlign(v14, TextAlign);
    if ( (v12 & 0x10) != 0 )
    {
      v50 = 0LL;
      v51 = v11;
      v52 = v13;
      v53 = *(_QWORD *)(gpsi + 5336LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 64LL), 0xFA0089u, (struct _POLYPATBLT *)&v50, 1u);
    }
    if ( (v12 & 0x100) != 0 )
    {
      v33 = gpDispInfo;
      v34 = *(_QWORD *)(gpsi + 5216LL);
    }
    else
    {
      v33 = gpDispInfo;
      if ( (v12 & 0x20) != 0 )
      {
        v35 = v42;
        BltColor(a1, *(_QWORD *)(gpsi + 5248LL), *(HDC *)(gpDispInfo + 64LL), v42 + 1, a5 + 1, v11, v13, 0, 0, 1);
        v33 = gpDispInfo;
        v34 = *(_QWORD *)(gpsi + 5216LL);
        goto LABEL_51;
      }
      v34 = v49;
      if ( (v12 & 0x40) != 0 )
      {
        v35 = v42;
        BltColor(a1, v49, *(HDC *)(gpDispInfo + 64LL), v42, a5, v11, v13, 0, 0, 1);
        BltColor(a1, v49, *(HDC *)(gpDispInfo + 64LL), v35 + 1, a5, v11, v13, 0, 0, 1);
        goto LABEL_52;
      }
    }
    v35 = v42;
LABEL_51:
    BltColor(a1, v34, *(HDC *)(v33 + 64), v35, a5, v11, v13, 0, 0, 1);
LABEL_52:
    GreSetLayout(v14, 0xFFFFFFFFLL, 0LL);
    if ( v43 )
    {
      GreGetDCPoint(a1, 4LL, &v41);
      GreSetViewportOrg(a1, v35 + v41, a5 + HIDWORD(v41));
      v36 = xxxRealDrawMenuItem(a1, v47, v11, v13, 1, v40);
      v37 = v36 & Bitmap;
      GreSetViewportOrg(a1, v41, SHIDWORD(v41));
    }
    else
    {
      return (unsigned int)Bitmap;
    }
    return v37;
  }
  if ( v43 )
    xxxRealDrawMenuItem(v14, v47, v11, v13, 1, v29);
  GreSetViewportOrg(v14, v41, SHIDWORD(v41));
  return 1LL;
}
