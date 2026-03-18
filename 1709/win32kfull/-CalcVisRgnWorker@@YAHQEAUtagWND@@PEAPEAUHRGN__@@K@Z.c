/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C006A790
 * Callers:
 *     CalcVisRgn @ 0x1C006A5C0 (CalcVisRgn.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00721C0 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C005F004 (-ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0069E5C (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C006AF68 (PhysicalToLogicalInPlaceRect.c)
 *     GreSubtractRgnRectList @ 0x1C00FD314 (GreSubtractRgnRectList.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C01354D8 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *const a1, HRGN *a2, int a3)
{
  int v3; // r12d
  int v5; // eax
  LONG right; // r10d
  int left; // r9d
  LONG v8; // eax
  LONG top; // r11d
  LONG bottom; // r15d
  struct tagWND *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // eax
  LONG v15; // edx
  LONG v16; // ecx
  LONG v17; // edx
  LONG v18; // ecx
  __int64 v19; // r14
  __int64 v20; // rdx
  int v21; // esi
  int v22; // ecx
  struct tagWND *v23; // rdi
  int v24; // r12d
  __int64 v25; // rbx
  char v26; // cl
  HRGN *v27; // r14
  __int64 v28; // rdx
  __int64 EmptyRgn; // rdi
  __int64 v30; // r8
  unsigned int v31; // ebx
  int v33; // eax
  LONG v34; // edx
  LONG v35; // r8d
  LONG v36; // ecx
  __int64 v37; // rax
  LONG v38; // eax
  struct tagWND *v39; // rcx
  unsigned int v40; // edi
  int v41; // ebx
  _BYTE *v42; // r14
  __int64 v43; // r15
  _OWORD *v44; // r9
  __int64 v45; // r8
  __int64 *v46; // rcx
  _QWORD *v47; // rdx
  __int64 v48; // rax
  HRGN *v49; // rsi
  HRGN v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rsi
  __int64 v55; // rbx
  __int64 v56; // rsi
  int v57; // r15d
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // r12
  int v61; // ebx
  BOOL v62; // r14d
  HRGN *v63; // r14
  int v64; // [rsp+28h] [rbp-E0h]
  __int128 v65; // [rsp+30h] [rbp-D8h] BYREF
  HRGN *v66; // [rsp+40h] [rbp-C8h]
  __int64 v67; // [rsp+48h] [rbp-C0h]
  __int64 v68; // [rsp+50h] [rbp-B8h]
  __int64 v69; // [rsp+58h] [rbp-B0h]
  _QWORD v70[5]; // [rsp+60h] [rbp-A8h] BYREF
  struct tagRECT v71; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v72[240]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v73[480]; // [rsp+188h] [rbp+80h] BYREF

  v3 = a3;
  v66 = a2;
  v64 = a3;
  LODWORD(v67) = 0;
  memset(v70, 0, sizeof(v70));
  if ( (v3 & 1) != 0 )
  {
    v71 = (struct tagRECT)*((_OWORD *)a1 + 8);
    goto LABEL_9;
  }
  v5 = *((_DWORD *)a1 + 32);
  v71 = (struct tagRECT)*((_OWORD *)a1 + 9);
  right = v71.right;
  left = _mm_cvtsi128_si32((__m128i)v71);
  if ( left <= v5 )
    left = v5;
  v8 = *((_DWORD *)a1 + 34);
  v71.left = left;
  if ( v71.right >= v8 )
    right = v8;
  v71.right = right;
  if ( left >= right )
    goto LABEL_7;
  top = v71.top;
  bottom = v71.bottom;
  if ( v71.top <= *((_DWORD *)a1 + 33) )
    top = *((_DWORD *)a1 + 33);
  v38 = *((_DWORD *)a1 + 35);
  v71.top = top;
  if ( v71.bottom >= v38 )
    bottom = v38;
  v71.bottom = bottom;
  if ( top >= bottom )
  {
LABEL_7:
    *(_QWORD *)&v71.left = 0LL;
    *(_QWORD *)&v71.right = 0LL;
LABEL_9:
    left = v71.left;
    top = v71.top;
    right = v71.right;
    bottom = v71.bottom;
  }
  v11 = a1;
  v12 = *((_QWORD *)a1 + 13);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 16LL) + 104LL);
  v68 = v13;
  if ( !v12 )
    goto LABEL_130;
  if ( v12 == v13 )
  {
    if ( (*((_WORD *)a1 + 41) & 0x3FFF) != 0x29D )
      goto LABEL_130;
  }
  else
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v12 + 104) == v13 && (*(_WORD *)(v12 + 82) & 0x3FFF) != 0x29D )
        goto LABEL_130;
      if ( (v3 & 0x1004000) != 0 && (*(_WORD *)(v12 + 82) & 0x3FFF) == 0x29D )
        goto LABEL_44;
      if ( (v3 & 0x4000) != 0 )
      {
        v14 = *((_DWORD *)v11 + 16);
        if ( (v14 & 0x80000) != 0 || (v14 & 0x20000000) != 0 )
          goto LABEL_44;
      }
      if ( (v3 & 0x8000000) != 0
        && (*(_WORD *)(v12 + 82) & 0x3FFF) == 0x29D
        && (unsigned int)IsWindowDesktopComposed(v12) )
      {
        break;
      }
      if ( *(_QWORD *)(v12 + 216) )
        LODWORD(v67) = 1;
      v65 = *(_OWORD *)(v12 + 144);
      PhysicalToLogicalInPlaceRect(v11, &v65);
      v15 = v71.left;
      v16 = v71.right;
      if ( v71.left <= (int)v65 )
        v15 = v65;
      v71.left = v15;
      if ( v71.right >= SDWORD2(v65) )
        v16 = DWORD2(v65);
      v71.right = v16;
      if ( v15 >= v16 )
        goto LABEL_129;
      v17 = v71.top;
      v18 = v71.bottom;
      if ( v71.top <= SDWORD1(v65) )
        v17 = DWORD1(v65);
      v71.top = v17;
      if ( v71.bottom >= SHIDWORD(v65) )
        v18 = HIDWORD(v65);
      v71.bottom = v18;
      if ( v17 >= v18 )
        goto LABEL_129;
      v65 = *(_OWORD *)(v12 + 128);
      PhysicalToLogicalInPlaceRect(v11, &v65);
      left = v71.left;
      right = v71.right;
      if ( v71.left <= (int)v65 )
        left = v65;
      v71.left = left;
      if ( v71.right >= SDWORD2(v65) )
        right = DWORD2(v65);
      v71.right = right;
      if ( left >= right )
        goto LABEL_129;
      top = v71.top;
      bottom = v71.bottom;
      if ( v71.top <= SDWORD1(v65) )
        top = DWORD1(v65);
      v71.top = top;
      if ( v71.bottom >= SHIDWORD(v65) )
        bottom = HIDWORD(v65);
      v71.bottom = bottom;
      if ( top >= bottom )
      {
LABEL_129:
        *(_QWORD *)&v71.right = 0LL;
        *(_QWORD *)&v71.left = 0LL;
        goto LABEL_130;
      }
      v11 = (struct tagWND *)v12;
      v12 = *(_QWORD *)(v12 + 104);
      if ( v12 == v13 )
        goto LABEL_44;
    }
    bottom = v71.bottom;
    right = v71.right;
    top = v71.top;
    left = v71.left;
  }
LABEL_44:
  v19 = *((_QWORD *)a1 + 13);
  v20 = v68;
  v21 = 0;
  v70[3] = v72;
  v22 = v3 & 0x10;
  LODWORD(v70[1]) = 30;
  HIDWORD(v70[0]) = 0;
  v70[2] = v72;
  v23 = a1;
  if ( v19 != v68 )
  {
    v24 = v3 & 0x4000;
    do
    {
      if ( v24 && (*((_BYTE *)v23 + 67) & 0x20) != 0 )
        break;
      if ( v22 )
      {
        v25 = *(_QWORD *)(v19 + 112);
        if ( (struct tagWND *)v25 != v23 )
        {
          if ( v25 )
          {
            while ( (struct tagWND *)v25 != v23 )
            {
              if ( (*(_BYTE *)(v25 + 71) & 0x10) != 0
                && (*(_BYTE *)(v25 + 66) & 8) == 0
                && (*(_BYTE *)(v25 + 64) & 0x20) == 0 )
              {
                v33 = *(_DWORD *)(v25 + 136);
                if ( left < v33 )
                {
                  v34 = *(_DWORD *)(v25 + 128);
                  if ( v34 < right )
                  {
                    v35 = *(_DWORD *)(v25 + 140);
                    if ( top < v35 )
                    {
                      v36 = *(_DWORD *)(v25 + 132);
                      if ( v36 < bottom && v34 < v33 && v36 < v35 )
                      {
                        if ( v21 == LODWORD(v70[1]) )
                        {
                          if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)v70) )
                            goto LABEL_130;
                          v21 = HIDWORD(v70[0]);
                        }
                        v37 = v21++;
                        HIDWORD(v70[0]) = v21;
                        *(_QWORD *)(v70[2] + 8 * v37) = v25;
                        bottom = v71.bottom;
                        right = v71.right;
                        top = v71.top;
                        left = v71.left;
                      }
                    }
                  }
                }
              }
              v25 = *(_QWORD *)(v25 + 88);
              if ( !v25 )
                break;
            }
            v20 = v68;
          }
        }
      }
      v26 = *(_BYTE *)(v19 + 71);
      v23 = (struct tagWND *)v19;
      v19 = *(_QWORD *)(v19 + 104);
      v22 = v26 & 4;
    }
    while ( v19 != v20 );
    v3 = v64;
  }
  if ( (v3 & 8) != 0 )
  {
    v39 = (struct tagWND *)*((_QWORD *)a1 + 14);
    if ( v39 )
    {
      if ( !(unsigned int)ExcludeWindowRects(v39, 0LL, &v71, (struct _CalcVisRgnData *)v70) )
        goto LABEL_130;
      v21 = HIDWORD(v70[0]);
    }
  }
  if ( v21 > 0 )
  {
    v40 = 0;
    v41 = 0;
    if ( v21 > 30 )
    {
      *(_QWORD *)&v65 = Win32AllocPoolWithQuota(16LL * v21, 1769370453LL);
      v42 = (_BYTE *)v65;
      if ( !(_QWORD)v65 )
      {
LABEL_130:
        SetOrCreateRectRgnIndirectPublic(v66, gZero);
        EmptyRgn = v70[4];
        v31 = 0;
        goto LABEL_67;
      }
    }
    else
    {
      v42 = v73;
      *(_QWORD *)&v65 = v73;
    }
    v43 = v70[2];
    v44 = v42;
    v45 = (unsigned int)v21;
    v46 = (__int64 *)v70[2];
    v47 = (_QWORD *)v70[2];
    do
    {
      v48 = *v46;
      if ( *(_QWORD *)(*v46 + 216) )
      {
        ++v41;
        *v47++ = v48;
      }
      else
      {
        ++v40;
        *v44++ = *(_OWORD *)(v48 + 128);
      }
      ++v46;
      --v45;
    }
    while ( v45 );
    v49 = v66;
    if ( !*v66 )
      *v49 = (HRGN)CreateEmptyRgn(v46, v47, 0LL, v44);
    v50 = *v49;
    if ( v40 )
      GreSubtractRgnRectList(v50, &v71, v42, v40);
    else
      SetRectRgnIndirect(v50, &v71);
    EmptyRgn = v70[4];
    v69 = v70[4];
    if ( !v70[4] )
    {
      EmptyRgn = CreateEmptyRgn(v51, v28, v52, v53);
      v69 = EmptyRgn;
    }
    v54 = v41;
    v55 = 0LL;
    if ( v54 > 0 )
    {
      v63 = v66;
      do
      {
        SetRectRgnIndirect(EmptyRgn, *(_QWORD *)(v43 + 8 * v55) + 128LL);
        GreCombineRgn(EmptyRgn, EmptyRgn, *(_QWORD *)(*(_QWORD *)(v43 + 8 * v55) + 216LL), 1LL);
        if ( (unsigned int)GreCombineRgn(*v63, *v63, EmptyRgn, 4LL) == 1 )
          break;
        ++v55;
      }
      while ( v55 < v54 );
      v42 = (_BYTE *)v65;
      v3 = v64;
    }
    if ( v42 != v73 )
      Win32FreePool(v42, v28, v52);
    v27 = v66;
    goto LABEL_63;
  }
  if ( *((char *)a1 + 59) < 0 )
  {
    *(_QWORD *)&v71.left = 0LL;
    *(_QWORD *)&v71.right = 0LL;
  }
  v27 = v66;
  if ( !(unsigned int)SetOrCreateRectRgnIndirectPublic(v66, &v71) )
    goto LABEL_130;
  EmptyRgn = v70[4];
  v69 = v70[4];
LABEL_63:
  v30 = *((_QWORD *)a1 + 27);
  if ( v30 )
    GreCombineRgn(*v27, *v27, v30, 1LL);
  if ( (_DWORD)v67 )
  {
    v56 = *((_QWORD *)a1 + 13);
    v57 = 0;
    v58 = v68;
    if ( v56 != v68 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(v56 + 216) )
          goto LABEL_115;
        if ( (*((_BYTE *)a1 + 66) & 8) != 0 && (*((_DWORD *)a1 + 76) & 0x20) == 0 )
          break;
        if ( (v3 & 0x1000000) != 0 )
        {
          v57 = 1;
LABEL_139:
          if ( (*(_WORD *)(v56 + 82) & 0x3FFF) == 0x29D )
            goto LABEL_116;
          goto LABEL_120;
        }
        if ( v57 )
          goto LABEL_139;
LABEL_120:
        *(_QWORD *)&v65 = *(_QWORD *)(v56 + 216);
        v59 = PhysicalToLogicalInPlaceRgn((__int64)a1, (HRGN *)&v65);
        v60 = v65;
        v61 = v59;
        v62 = GreCombineRgn(*v27, *v27, v65, 1LL) == 1;
        if ( v61 )
          GreDeleteObject(v60);
        if ( v62 )
        {
LABEL_116:
          EmptyRgn = v69;
          goto LABEL_66;
        }
        v3 = v64;
        v58 = v68;
LABEL_115:
        v27 = v66;
        a1 = (struct tagWND *const)v56;
        v56 = *(_QWORD *)(v56 + 104);
        if ( v56 == v58 )
          goto LABEL_116;
      }
      v57 = 1;
      goto LABEL_139;
    }
  }
LABEL_66:
  v31 = 1;
LABEL_67:
  if ( EmptyRgn )
    GreDeleteObject(EmptyRgn);
  if ( LODWORD(v70[0]) )
    Win32FreePool(v70[2], v28, v30);
  return v31;
}
