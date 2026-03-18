/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4
 * Callers:
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C009F1CC (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0069E5C (PhysicalToLogicalInPlaceRgn.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C006AF68 (PhysicalToLogicalInPlaceRect.c)
 *     InternalInvalidate3 @ 0x1C006AFA4 (InternalInvalidate3.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C006B504 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     GetAppCompatFlags @ 0x1C0073430 (GetAppCompatFlags.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C010B2D8 (LogicalToPhysicalInPlaceRgn.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01C3D4C (LogicalToPhysicalInPlaceRect.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0204518 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  __int64 v5; // rax
  HRGN v6; // r11
  struct tagRECT v7; // xmm0
  unsigned int v8; // edi
  HRGN v9; // rsi
  unsigned int v10; // edx
  int v11; // r10d
  __int16 v12; // bx
  char v13; // r8
  bool v15; // zf
  unsigned __int64 v16; // r8
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  BOOL v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  __int64 v25; // rdx
  HRGN v26; // rcx
  struct tagWND *v27; // rax
  struct tagWND *v28; // rbx
  __int64 EmptyRgnPublic; // rax
  HRGN v30; // rdx
  int v31; // ebx
  struct tagWND *v32; // rbx
  HRGN v33; // rax
  HRGN v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // eax
  bool v37; // cf
  __int64 v38; // rax
  HRGN v39; // rax
  __int64 v40; // rcx
  HRGN v41; // rdx
  int v42; // eax
  HRGN v43; // rcx
  HRGN v44; // rbx
  int v45; // eax
  int v46; // eax
  HRGN Prop; // rax
  __int64 v48; // rbx
  HRGN v49; // rdx
  HRGN v50; // rcx
  __int16 v51; // [rsp+30h] [rbp-61h]
  int v52; // [rsp+30h] [rbp-61h]
  int v53; // [rsp+30h] [rbp-61h]
  int v54; // [rsp+30h] [rbp-61h]
  HRGN v55; // [rsp+38h] [rbp-59h]
  __int16 v56; // [rsp+40h] [rbp-51h]
  unsigned int v57; // [rsp+44h] [rbp-4Dh]
  unsigned int v58; // [rsp+44h] [rbp-4Dh]
  HRGN v59; // [rsp+48h] [rbp-49h] BYREF
  HRGN v60; // [rsp+50h] [rbp-41h]
  HRGN v61; // [rsp+58h] [rbp-39h] BYREF
  struct tagWND *v62; // [rsp+60h] [rbp-31h]
  HRGN v63; // [rsp+68h] [rbp-29h]
  __int128 v64; // [rsp+70h] [rbp-21h] BYREF
  int v65; // [rsp+80h] [rbp-11h]
  int v66; // [rsp+84h] [rbp-Dh]
  int v67; // [rsp+88h] [rbp-9h]
  struct tagRECT v68; // [rsp+90h] [rbp-1h] BYREF
  struct tagRECT v69; // [rsp+A0h] [rbp+Fh] BYREF

  v5 = *((_QWORD *)a1 + 27);
  v6 = a2;
  v7 = (struct tagRECT)*((_OWORD *)a1 + 8);
  v55 = a2;
  v8 = 0;
  v9 = (HRGN)a1;
  v10 = a5 | 0x8000;
  v63 = a3;
  if ( !v5 )
    v10 = a5;
  v51 = v10;
  v11 = v10 | 0x2000;
  v56 = v10;
  v57 = v10 | 0x2000;
  v12 = v10;
  v68 = v7;
  if ( (v10 & 1) == 0 )
    goto LABEL_28;
  v13 = *((_BYTE *)a1 + 66) & 8;
  if ( v13 != 0 && (v10 & 0x10000) == 0 && (*((_DWORD *)a1 + 76) & 2) == 0 )
    return 1LL;
  *((_DWORD *)a1 + 76) &= ~2u;
  v15 = v13 == 0;
  v16 = 1LL;
  if ( ((unsigned __int8)~(*((_BYTE *)a1 + 67) >> 5) & v15) != 0 )
  {
    v64 = (__int128)*a4;
    if ( *((_QWORD *)a1 + 13) )
    {
      PhysicalToLogicalInPlaceRect(a1, &v64);
      v6 = v55;
      v16 = 1LL;
      LOWORD(v10) = v51;
      v11 = v57;
    }
    left = v68.left;
    right = v68.right;
    if ( v68.left <= (int)v64 )
      left = v64;
    v68.left = left;
    if ( v68.right >= SDWORD2(v64) )
      right = DWORD2(v64);
    v68.right = right;
    if ( left >= right )
      goto LABEL_79;
    top = v68.top;
    bottom = v68.bottom;
    if ( v68.top <= SDWORD1(v64) )
      top = DWORD1(v64);
    v68.top = top;
    if ( v68.bottom >= SHIDWORD(v64) )
      bottom = HIDWORD(v64);
    v68.bottom = bottom;
    if ( top >= bottom )
    {
LABEL_79:
      *(_QWORD *)&v68.left = 0LL;
      *(_QWORD *)&v68.right = 0LL;
      v21 = 1;
    }
    else
    {
      v21 = 0;
    }
  }
  else
  {
    v21 = IsRectEmptyInl(&v68);
  }
  v56 = v10;
  v12 = v10;
  if ( v21 )
  {
    if ( ((unsigned __int8)v16 & *((_BYTE *)v9 + 61)) == 0 && v6 == (HRGN)v16 )
    {
      v12 = v10 & 0xDFFF;
      v56 = v10 & 0xDFFF;
      v57 = v11 & 0xFFFFDFFF;
      goto LABEL_27;
    }
    return (unsigned int)v16;
  }
  if ( (unsigned __int64)v6 > v16 )
  {
    v22 = SmartRectInRegion(v6, &v68);
    if ( !v22 )
      return 1LL;
    v23 = v22 - 1;
    if ( v23 )
    {
      v36 = v23 - 1;
      if ( v36 )
      {
        if ( v36 == 1 )
          return 0LL;
        goto LABEL_26;
      }
      v37 = (GetAppCompatFlags(*((_QWORD *)v9 + 2)) & 0x10000) != 0;
      v16 = 1LL;
      v38 = 1LL;
      if ( v37 )
        v38 = (__int64)v55;
      v55 = (HRGN)v38;
    }
    else
    {
      if ( (v12 & 0x8000) == 0 )
      {
LABEL_26:
        v16 = 1LL;
        goto LABEL_27;
      }
      SetRectRgnIndirect(ghrgnInv2, &v68);
      v39 = v9;
      v40 = 0LL;
      v61 = v9;
      do
      {
        v41 = (HRGN)*((_QWORD *)v39 + 27);
        v60 = v41;
        if ( v41 )
        {
          v59 = v41;
          if ( v40 )
          {
            v46 = PhysicalToLogicalInPlaceRgn(v40, &v59);
            v41 = v59;
            v60 = v59;
            v53 = v46;
          }
          else
          {
            v53 = 0;
          }
          GreCombineRgn(ghrgnInv2, ghrgnInv2, v41, 1LL);
          if ( v53 )
            GreDeleteObject(v60);
          v39 = v61;
        }
        v40 = (__int64)v39;
        v39 = (HRGN)*((_QWORD *)v39 + 13);
        v61 = v39;
      }
      while ( v39 );
      v42 = GreCombineRgn(ghrgnInv2, ghrgnInv2, v55, 1LL);
      v16 = 1LL;
      v12 = v56;
      if ( v42 == 1 )
        return (unsigned int)v16;
    }
  }
LABEL_27:
  if ( (*((_BYTE *)v9 + 67) & 0x10) != 0 )
  {
    Prop = (HRGN)GetProp(v9, (unsigned __int16)atomLayer, v16);
    v59 = Prop;
    if ( Prop )
    {
      v48 = *((_QWORD *)Prop + 5);
      if ( !v48 )
      {
        v48 = ((__int64 (*)(void))CreateEmptyRgnPublic)();
        if ( !v48 )
          v48 = 1LL;
      }
      SetRectRgnIndirect(ghrgnInv2, &v68);
      if ( v48 != 1 )
        GreCombineRgn(v48, v48, ghrgnInv2, 2LL);
      v49 = v63;
      v50 = v63;
      *((_QWORD *)v59 + 5) = v48;
      LOBYTE(v8) = (unsigned int)GreCombineRgn(v50, v49, ghrgnInv2, 4LL) != 1;
      return v8;
    }
  }
LABEL_28:
  if ( (*((_BYTE *)v9 + 71) & 2) == 0 )
    InternalInvalidate3((struct tagWND *)v9);
  if ( (*((_BYTE *)v9 + 62) & 0x40) != 0 )
    PixieHack((struct tagWND *)v9, &v68);
  v62 = (struct tagWND *)*((_QWORD *)v9 + 14);
  if ( v62
    && (((v12 & 0x40) == 0) & (unsigned __int8)~(*((_BYTE *)v9 + 71) >> 5)) != 0
    && ((v12 & 0x80u) != 0 || (*((_BYTE *)v9 + 71) & 2) == 0) )
  {
    v24 = v57 | 0x404;
    v60 = 0LL;
    if ( (v12 & 1) == 0 )
      v24 = v57;
    v58 = v24;
    if ( (unsigned int)IntersectRect(&v69, &v68, v9 + 36)
      || (v26 = v55, (*((_BYTE *)v9 + 61) & 1) == 0) && v55 == (HRGN)1 )
    {
      v27 = v62;
      while ( 1 )
      {
        if ( (*((_BYTE *)v27 + 71) & 0x10) != 0 )
        {
          v28 = v62;
          if ( (*((_BYTE *)v62 + 67) & 0x20) != 0 || (*((_BYTE *)v62 + 66) & 8) != 0 )
          {
            EmptyRgnPublic = (__int64)v60;
            v52 = 1;
            if ( v60 || (EmptyRgnPublic = CreateEmptyRgnPublic(v26, v25, 1LL), (v60 = (HRGN)EmptyRgnPublic) != 0LL) )
            {
              v30 = v63;
              if ( v55 != (HRGN)1 )
                v30 = v55;
              GreCombineRgn(EmptyRgnPublic, v30, 0LL, 5LL);
            }
          }
          else
          {
            v52 = 0;
          }
          v59 = v55;
          v61 = v63;
          v66 = PhysicalToLogicalInPlaceRect(v28, &v69);
          v31 = PhysicalToLogicalInPlaceRgn((__int64)v28, &v59);
          v65 = PhysicalToLogicalInPlaceRgn((__int64)v62, &v61);
          *(_QWORD *)&v64 = v61;
          v67 = InternalInvalidate2(v62, v59, v61, &v69, v58);
          if ( v31 )
            GreDeleteObject(v59);
          v32 = v62;
          if ( v65 )
          {
            if ( (unsigned int)LogicalToPhysicalInPlaceRgn(v62, &v61) )
            {
              GreCombineRgn(v63, v61, 0LL, 5LL);
              GreDeleteObject(v61);
            }
            GreDeleteObject(v64);
          }
          if ( v66 )
            LogicalToPhysicalInPlaceRect(v32, &v69);
          v33 = v60;
          if ( v52 && v60 )
          {
            v34 = v55;
            if ( v55 == (HRGN)1 )
              v34 = v63;
            GreCombineRgn(v34, v60, 0LL, 5LL);
            v33 = v60;
          }
          if ( v67 )
          {
            v12 = v56;
          }
          else
          {
            v12 = v56;
            if ( !v52 )
            {
              if ( (v56 & 0x12) == 0 )
              {
                if ( v33 )
                  GreDeleteObject(v33);
                return 0LL;
              }
              v12 = v56 & 0xF3D2;
              v58 &= 0xFFFFD3D2;
              v56 &= 0xF3D2u;
            }
          }
        }
        v27 = (struct tagWND *)*((_QWORD *)v62 + 11);
        v62 = v27;
        if ( !v27 )
        {
          if ( v60 )
            GreDeleteObject(v60);
          break;
        }
      }
    }
  }
  if ( (*((_BYTE *)v9 + 71) & 2) != 0 )
    InternalInvalidate3((struct tagWND *)v9);
  if ( (v12 & 0x2000) != 0
    && ((_BYTE)v9[16] & 0x20) == 0
    && ((*((_BYTE *)v9 + 71) >> 2) & (unsigned __int8)~(*((_BYTE *)v9 + 66) >> 3) & 1) != 0
    && ((v12 & 8) != 0
     || (v35 = *((_QWORD *)v9 + 13)) != 0
     && ((*(_BYTE *)(v35 + 71) & 2) != 0 || (GetAppCompatFlags(*((_QWORD *)v9 + 2)) & 0x4000) != 0)) )
  {
    SetRectRgnIndirect(ghrgnInv2, &v68);
    if ( v12 < 0 )
    {
      v43 = 0LL;
      do
      {
        v44 = (HRGN)*((_QWORD *)v9 + 27);
        if ( v44 )
        {
          v59 = (HRGN)*((_QWORD *)v9 + 27);
          if ( v43 )
          {
            v45 = LogicalToPhysicalInPlaceRgn(v43, &v59);
            v44 = v59;
            v54 = v45;
          }
          else
          {
            v54 = 0;
          }
          GreCombineRgn(ghrgnInv2, ghrgnInv2, *((_QWORD *)v9 + 27), 1LL);
          if ( v54 )
            GreDeleteObject(v44);
        }
        v43 = v9;
        v9 = (HRGN)*((_QWORD *)v9 + 13);
      }
      while ( v9 );
    }
    if ( (unsigned int)GreCombineRgn(v63, v63, ghrgnInv2, 4LL) == 1 )
      return 0LL;
  }
  return 1LL;
}
