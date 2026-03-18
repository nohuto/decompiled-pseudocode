/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64
 * Callers:
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C0048C6C (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00659FC (PhysicalToLogicalInPlaceRgn.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C0066AF4 (PhysicalToLogicalInPlaceRect.c)
 *     InternalInvalidate3 @ 0x1C0066B30 (InternalInvalidate3.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C00670A8 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     GetAppCompatFlags @ 0x1C00F8ED0 (GetAppCompatFlags.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C00FF554 (LogicalToPhysicalInPlaceRgn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01C056C (LogicalToPhysicalInPlaceRect.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0202A04 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  __int64 v5; // rax
  HRGN v6; // r10
  struct tagRECT v7; // xmm0
  unsigned int v8; // edi
  struct tagWND *v9; // rsi
  unsigned int v10; // edx
  int v11; // r11d
  __int16 v12; // bx
  char v13; // r8
  bool v14; // zf
  unsigned __int64 v15; // r8
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v25; // ecx
  __int64 v26; // rdx
  HRGN v27; // rcx
  struct tagWND *v28; // rax
  struct tagWND *v29; // rbx
  __int64 EmptyRgnPublic; // rax
  HRGN v31; // rdx
  int v32; // ebx
  struct tagWND *v33; // rbx
  HRGN v34; // rax
  HRGN v35; // rcx
  __int64 v36; // rax
  __int64 AppCompatFlags; // rax
  HRGN v38; // rax
  __int64 v39; // rcx
  HRGN v40; // rdx
  int v41; // eax
  struct tagWND *v42; // rcx
  HRGN v43; // rbx
  int v44; // eax
  int v45; // eax
  HRGN Prop; // rax
  __int64 v47; // rbx
  HRGN v48; // rdx
  HRGN v49; // rcx
  __int16 v50; // [rsp+30h] [rbp-61h]
  int v51; // [rsp+30h] [rbp-61h]
  int v52; // [rsp+30h] [rbp-61h]
  int v53; // [rsp+30h] [rbp-61h]
  HRGN v54; // [rsp+38h] [rbp-59h]
  __int16 v55; // [rsp+40h] [rbp-51h]
  unsigned int v56; // [rsp+44h] [rbp-4Dh]
  unsigned int v57; // [rsp+44h] [rbp-4Dh]
  HRGN v58; // [rsp+48h] [rbp-49h] BYREF
  HRGN v59; // [rsp+50h] [rbp-41h]
  HRGN v60; // [rsp+58h] [rbp-39h] BYREF
  struct tagWND *v61; // [rsp+60h] [rbp-31h]
  HRGN v62; // [rsp+68h] [rbp-29h]
  __int128 v63; // [rsp+70h] [rbp-21h] BYREF
  int v64; // [rsp+80h] [rbp-11h]
  int v65; // [rsp+84h] [rbp-Dh]
  int v66; // [rsp+88h] [rbp-9h]
  struct tagRECT v67; // [rsp+90h] [rbp-1h] BYREF
  struct tagRECT v68; // [rsp+A0h] [rbp+Fh] BYREF

  v5 = *((_QWORD *)a1 + 27);
  v6 = a2;
  v7 = (struct tagRECT)*((_OWORD *)a1 + 8);
  v54 = a2;
  v8 = 0;
  v9 = a1;
  v10 = a5 | 0x8000;
  v62 = a3;
  if ( !v5 )
    v10 = a5;
  v50 = v10;
  v11 = v10 | 0x2000;
  v55 = v10;
  v56 = v10 | 0x2000;
  v12 = v10;
  v67 = v7;
  if ( (v10 & 1) == 0 )
    goto LABEL_27;
  v13 = *((_BYTE *)a1 + 66) & 8;
  if ( v13 != 0 && (v10 & 0x10000) == 0 && (*((_DWORD *)a1 + 76) & 2) == 0 )
    return 1LL;
  *((_DWORD *)a1 + 76) &= ~2u;
  v14 = v13 == 0;
  v15 = 1LL;
  if ( ((unsigned __int8)~(*((_BYTE *)a1 + 67) >> 5) & v14) != 0 )
  {
    v63 = (__int128)*a4;
    if ( *((_QWORD *)a1 + 13) )
    {
      PhysicalToLogicalInPlaceRect(a1, &v63);
      v6 = v54;
      v15 = 1LL;
      LOWORD(v10) = v50;
      v11 = v56;
    }
    left = v67.left;
    right = v67.right;
    if ( v67.left <= (int)v63 )
      left = v63;
    v67.left = left;
    if ( v67.right >= SDWORD2(v63) )
      right = DWORD2(v63);
    v67.right = right;
    if ( left >= right )
      goto LABEL_80;
    top = v67.top;
    bottom = v67.bottom;
    if ( v67.top <= SDWORD1(v63) )
      top = DWORD1(v63);
    v67.top = top;
    if ( v67.bottom >= SHIDWORD(v63) )
      bottom = HIDWORD(v63);
    v67.bottom = bottom;
    if ( top >= bottom )
    {
LABEL_80:
      v20 = 0;
      *(_QWORD *)&v67.left = 0LL;
      *(_QWORD *)&v67.right = 0LL;
    }
    else
    {
      v20 = 1;
    }
    v21 = v20 ^ 1;
  }
  else
  {
    v21 = IsRectEmptyInl(&v67);
  }
  v55 = v10;
  v12 = v10;
  if ( v21 )
  {
    if ( ((unsigned __int8)v15 & *((_BYTE *)v9 + 61)) == 0 && v6 == (HRGN)v15 )
    {
      v12 = v10 & 0xDFFF;
      v55 = v10 & 0xDFFF;
      v56 = v11 & 0xFFFFDFFF;
      goto LABEL_26;
    }
    return (unsigned int)v15;
  }
  if ( (unsigned __int64)v6 > v15 )
  {
    v22 = SmartRectInRegion(v6, &v67);
    if ( !v22 )
      return 1LL;
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 != 1 )
        goto LABEL_25;
      AppCompatFlags = GetAppCompatFlags(*((_QWORD *)v9 + 2));
      LODWORD(v15) = 1;
      if ( (AppCompatFlags & 0x10000) == 0 )
        v54 = (HRGN)1;
    }
    else
    {
      if ( (v12 & 0x8000) == 0 )
      {
LABEL_25:
        LODWORD(v15) = 1;
        goto LABEL_26;
      }
      SetRectRgnIndirect(ghrgnInv2, &v67);
      v38 = (HRGN)v9;
      v39 = 0LL;
      v60 = (HRGN)v9;
      do
      {
        v40 = (HRGN)*((_QWORD *)v38 + 27);
        v59 = v40;
        if ( v40 )
        {
          v58 = v40;
          if ( v39 )
          {
            v45 = PhysicalToLogicalInPlaceRgn(v39, &v58);
            v40 = v58;
            v59 = v58;
            v52 = v45;
          }
          else
          {
            v52 = 0;
          }
          GreCombineRgn(ghrgnInv2, ghrgnInv2, v40, 1LL);
          if ( v52 )
            GreDeleteObject(v59);
          v38 = v60;
        }
        v39 = (__int64)v38;
        v38 = (HRGN)*((_QWORD *)v38 + 13);
        v60 = v38;
      }
      while ( v38 );
      v41 = GreCombineRgn(ghrgnInv2, ghrgnInv2, v54, 1LL);
      LODWORD(v15) = 1;
      v12 = v55;
      if ( v41 == 1 )
        return (unsigned int)v15;
    }
  }
LABEL_26:
  if ( (*((_BYTE *)v9 + 67) & 0x10) != 0 )
  {
    Prop = (HRGN)GetProp((__int64)v9, atomLayer, v15);
    v58 = Prop;
    if ( Prop )
    {
      v47 = *((_QWORD *)Prop + 5);
      if ( !v47 )
      {
        v47 = ((__int64 (*)(void))CreateEmptyRgnPublic)();
        if ( !v47 )
          v47 = 1LL;
      }
      SetRectRgnIndirect(ghrgnInv2, &v67);
      if ( v47 != 1 )
        GreCombineRgn(v47, v47, ghrgnInv2, 2LL);
      v48 = v62;
      v49 = v62;
      *((_QWORD *)v58 + 5) = v47;
      LOBYTE(v8) = (unsigned int)GreCombineRgn(v49, v48, ghrgnInv2, 4LL) != 1;
      return v8;
    }
  }
LABEL_27:
  if ( (*((_BYTE *)v9 + 71) & 2) == 0 )
    InternalInvalidate3(v9);
  if ( (*((_BYTE *)v9 + 62) & 0x40) != 0 )
    PixieHack(v9, &v67);
  v61 = (struct tagWND *)*((_QWORD *)v9 + 14);
  if ( v61
    && (((v12 & 0x40) == 0) & (unsigned __int8)~(*((_BYTE *)v9 + 71) >> 5)) != 0
    && ((v12 & 0x80u) != 0 || (*((_BYTE *)v9 + 71) & 2) == 0) )
  {
    v25 = v56 | 0x404;
    v59 = 0LL;
    if ( (v12 & 1) == 0 )
      v25 = v56;
    v57 = v25;
    if ( (unsigned int)IntersectRect(&v68, &v67, (char *)v9 + 144)
      || (v27 = v54, (*((_BYTE *)v9 + 61) & 1) == 0) && v54 == (HRGN)1 )
    {
      v28 = v61;
      while ( 1 )
      {
        if ( (*((_BYTE *)v28 + 71) & 0x10) != 0 )
        {
          v29 = v61;
          if ( (*((_BYTE *)v61 + 67) & 0x20) != 0 || (*((_BYTE *)v61 + 66) & 8) != 0 )
          {
            EmptyRgnPublic = (__int64)v59;
            v51 = 1;
            if ( v59 || (EmptyRgnPublic = CreateEmptyRgnPublic(v27, v26, 1LL), (v59 = (HRGN)EmptyRgnPublic) != 0LL) )
            {
              v31 = v62;
              if ( v54 != (HRGN)1 )
                v31 = v54;
              GreCombineRgn(EmptyRgnPublic, v31, 0LL, 5LL);
            }
          }
          else
          {
            v51 = 0;
          }
          v58 = v54;
          v60 = v62;
          v65 = PhysicalToLogicalInPlaceRect(v29, &v68);
          v32 = PhysicalToLogicalInPlaceRgn((__int64)v29, &v58);
          v64 = PhysicalToLogicalInPlaceRgn((__int64)v61, &v60);
          *(_QWORD *)&v63 = v60;
          v66 = InternalInvalidate2(v61, v58, v60, &v68, v57);
          if ( v32 )
            GreDeleteObject(v58);
          v33 = v61;
          if ( v64 )
          {
            if ( (unsigned int)LogicalToPhysicalInPlaceRgn(v61, &v60) )
            {
              GreCombineRgn(v62, v60, 0LL, 5LL);
              GreDeleteObject(v60);
            }
            GreDeleteObject(v63);
          }
          if ( v65 )
            LogicalToPhysicalInPlaceRect(v33, &v68);
          v34 = v59;
          if ( v51 && v59 )
          {
            v35 = v54;
            if ( v54 == (HRGN)1 )
              v35 = v62;
            GreCombineRgn(v35, v59, 0LL, 5LL);
            v34 = v59;
          }
          if ( v66 )
          {
            v12 = v55;
          }
          else
          {
            v12 = v55;
            if ( !v51 )
            {
              if ( (v55 & 0x12) == 0 )
              {
                if ( v34 )
                  GreDeleteObject(v34);
                return 0LL;
              }
              v12 = v55 & 0xF3D2;
              v57 &= 0xFFFFD3D2;
              v55 &= 0xF3D2u;
            }
          }
        }
        v28 = (struct tagWND *)*((_QWORD *)v61 + 11);
        v61 = v28;
        if ( !v28 )
        {
          if ( v59 )
            GreDeleteObject(v59);
          break;
        }
      }
    }
  }
  if ( (*((_BYTE *)v9 + 71) & 2) != 0 )
    InternalInvalidate3(v9);
  if ( (v12 & 0x2000) != 0
    && (*((_BYTE *)v9 + 64) & 0x20) == 0
    && ((*((_BYTE *)v9 + 71) >> 2) & (unsigned __int8)~(*((_BYTE *)v9 + 66) >> 3) & 1) != 0
    && ((v12 & 8) != 0
     || (v36 = *((_QWORD *)v9 + 13)) != 0
     && ((*(_BYTE *)(v36 + 71) & 2) != 0 || (GetAppCompatFlags(*((_QWORD *)v9 + 2)) & 0x4000) != 0)) )
  {
    SetRectRgnIndirect(ghrgnInv2, &v67);
    if ( v12 < 0 )
    {
      v42 = 0LL;
      do
      {
        v43 = (HRGN)*((_QWORD *)v9 + 27);
        if ( v43 )
        {
          v58 = (HRGN)*((_QWORD *)v9 + 27);
          if ( v42 )
          {
            v44 = LogicalToPhysicalInPlaceRgn(v42, &v58);
            v43 = v58;
            v53 = v44;
          }
          else
          {
            v53 = 0;
          }
          GreCombineRgn(ghrgnInv2, ghrgnInv2, *((_QWORD *)v9 + 27), 1LL);
          if ( v53 )
            GreDeleteObject(v43);
        }
        v42 = v9;
        v9 = (struct tagWND *)*((_QWORD *)v9 + 13);
      }
      while ( v9 );
    }
    if ( (unsigned int)GreCombineRgn(v62, v62, ghrgnInv2, 4LL) == 1 )
      return 0LL;
  }
  return 1LL;
}
