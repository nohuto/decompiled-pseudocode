/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0066340
 * Callers:
 *     CalcVisRgn @ 0x1C0066160 (CalcVisRgn.c)
 *     GreUpdateSpriteVisRgn @ 0x1C006D400 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C0062CD0 (-ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00659FC (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C0066AF4 (PhysicalToLogicalInPlaceRect.c)
 *     GreSubtractRgnRectList @ 0x1C00F02F4 (GreSubtractRgnRectList.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C0130698 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *const a1, HRGN *a2, int a3)
{
  int v5; // eax
  LONG v6; // r10d
  int v7; // r9d
  LONG v8; // eax
  LONG v9; // r11d
  LONG v10; // r15d
  LONG v11; // eax
  struct tagWND *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r14
  int v15; // eax
  LONG v16; // edx
  LONG v17; // ecx
  LONG v18; // edx
  LONG v19; // ecx
  __int64 v20; // r14
  __int64 v21; // rdx
  int v22; // esi
  int v23; // ecx
  struct tagWND *v24; // rdi
  int v25; // eax
  __int64 v26; // rbx
  char v27; // cl
  HRGN *v28; // r12
  __int64 EmptyRgn; // rdi
  __int64 v30; // r8
  unsigned int v31; // ebx
  int v33; // eax
  LONG v34; // edx
  LONG v35; // r8d
  LONG v36; // ecx
  __int64 v37; // rax
  struct tagWND *v38; // rcx
  unsigned int v39; // edi
  int v40; // ebx
  _BYTE *v41; // r14
  __int64 v42; // r15
  _OWORD *v43; // r9
  __int64 v44; // r8
  __int64 *v45; // rcx
  _QWORD *v46; // rdx
  __int64 v47; // rax
  HRGN v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rsi
  __int64 i; // rbx
  __int64 v55; // rsi
  int v56; // r15d
  __int64 v57; // rax
  int v58; // eax
  HRGN v59; // rcx
  HRGN v60; // r12
  int v61; // ebx
  BOOL v62; // r14d
  __int128 v63; // [rsp+28h] [rbp-E0h] BYREF
  HRGN *v64; // [rsp+38h] [rbp-D0h]
  HRGN v65; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+48h] [rbp-C0h]
  _QWORD v67[5]; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v68; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v69[240]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v70[480]; // [rsp+178h] [rbp+70h] BYREF

  v64 = a2;
  LODWORD(v65) = 0;
  memset(v67, 0, sizeof(v67));
  if ( (a3 & 1) != 0 )
  {
    v68 = *((__m128i *)a1 + 8);
    goto LABEL_14;
  }
  v5 = *((_DWORD *)a1 + 32);
  v68 = *((__m128i *)a1 + 9);
  v6 = v68.m128i_i32[2];
  v7 = _mm_cvtsi128_si32(v68);
  if ( v7 <= v5 )
    v7 = v5;
  v8 = *((_DWORD *)a1 + 34);
  v68.m128i_i32[0] = v7;
  if ( v68.m128i_i32[2] >= v8 )
    v6 = v8;
  v68.m128i_i32[2] = v6;
  if ( v7 >= v6 )
    goto LABEL_12;
  v9 = v68.m128i_i32[1];
  v10 = v68.m128i_i32[3];
  if ( v68.m128i_i32[1] <= *((_DWORD *)a1 + 33) )
    v9 = *((_DWORD *)a1 + 33);
  v11 = *((_DWORD *)a1 + 35);
  v68.m128i_i32[1] = v9;
  if ( v68.m128i_i32[3] >= v11 )
    v10 = v11;
  v68.m128i_i32[3] = v10;
  if ( v9 >= v10 )
  {
LABEL_12:
    v68.m128i_i64[0] = 0LL;
    v68.m128i_i64[1] = 0LL;
LABEL_14:
    v7 = v68.m128i_i32[0];
    v9 = v68.m128i_i32[1];
    v6 = v68.m128i_i32[2];
    v10 = v68.m128i_i32[3];
  }
  v12 = a1;
  v13 = *((_QWORD *)a1 + 13);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 16LL) + 104LL);
  v66 = v14;
  if ( !v13 )
    goto LABEL_124;
  if ( v13 == v14 )
  {
    if ( (*((_WORD *)a1 + 41) & 0x3FFF) != 0x29D )
      goto LABEL_124;
  }
  else
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v13 + 104) == v14 && (*(_WORD *)(v13 + 82) & 0x3FFF) != 0x29D )
        goto LABEL_124;
      if ( (a3 & 0x4000) != 0 )
      {
        if ( (*(_WORD *)(v13 + 82) & 0x3FFF) == 0x29D )
          goto LABEL_48;
        v15 = *((_DWORD *)v12 + 16);
        if ( (v15 & 0x80000) != 0 || (v15 & 0x20000000) != 0 )
          goto LABEL_48;
      }
      if ( (a3 & 0x8000000) != 0
        && (*(_WORD *)(v13 + 82) & 0x3FFF) == 0x29D
        && (unsigned int)IsWindowDesktopComposed(v13) )
      {
        break;
      }
      if ( *(_QWORD *)(v13 + 216) )
        LODWORD(v65) = 1;
      v63 = *(_OWORD *)(v13 + 144);
      PhysicalToLogicalInPlaceRect(v12, &v63);
      v16 = v68.m128i_i32[0];
      v17 = v68.m128i_i32[2];
      if ( v68.m128i_i32[0] <= (int)v63 )
        v16 = v63;
      v68.m128i_i32[0] = v16;
      if ( v68.m128i_i32[2] >= SDWORD2(v63) )
        v17 = DWORD2(v63);
      v68.m128i_i32[2] = v17;
      if ( v16 >= v17 )
        goto LABEL_123;
      v18 = v68.m128i_i32[1];
      v19 = v68.m128i_i32[3];
      if ( v68.m128i_i32[1] <= SDWORD1(v63) )
        v18 = DWORD1(v63);
      v68.m128i_i32[1] = v18;
      if ( v68.m128i_i32[3] >= SHIDWORD(v63) )
        v19 = HIDWORD(v63);
      v68.m128i_i32[3] = v19;
      if ( v18 >= v19 )
        goto LABEL_123;
      v63 = *(_OWORD *)(v13 + 128);
      PhysicalToLogicalInPlaceRect(v12, &v63);
      v7 = v68.m128i_i32[0];
      v6 = v68.m128i_i32[2];
      if ( v68.m128i_i32[0] <= (int)v63 )
        v7 = v63;
      v68.m128i_i32[0] = v7;
      if ( v68.m128i_i32[2] >= SDWORD2(v63) )
        v6 = DWORD2(v63);
      v68.m128i_i32[2] = v6;
      if ( v7 >= v6 )
        goto LABEL_123;
      v9 = v68.m128i_i32[1];
      v10 = v68.m128i_i32[3];
      if ( v68.m128i_i32[1] <= SDWORD1(v63) )
        v9 = DWORD1(v63);
      v68.m128i_i32[1] = v9;
      if ( v68.m128i_i32[3] >= SHIDWORD(v63) )
        v10 = HIDWORD(v63);
      v68.m128i_i32[3] = v10;
      if ( v9 >= v10 )
      {
LABEL_123:
        v68.m128i_i64[1] = 0LL;
        v68.m128i_i64[0] = 0LL;
        goto LABEL_124;
      }
      v12 = (struct tagWND *)v13;
      v13 = *(_QWORD *)(v13 + 104);
      if ( v13 == v14 )
        goto LABEL_48;
    }
    v10 = v68.m128i_i32[3];
    v6 = v68.m128i_i32[2];
    v9 = v68.m128i_i32[1];
    v7 = v68.m128i_i32[0];
  }
LABEL_48:
  v20 = *((_QWORD *)a1 + 13);
  v21 = v66;
  v22 = 0;
  v67[3] = v69;
  v23 = a3 & 0x10;
  LODWORD(v67[1]) = 30;
  HIDWORD(v67[0]) = 0;
  v67[2] = v69;
  v24 = a1;
  if ( v20 != v66 )
  {
    v25 = a3 & 0x4000;
    LODWORD(v63) = v25;
    do
    {
      if ( v25 && (*((_BYTE *)v24 + 67) & 0x20) != 0 )
        break;
      if ( v23 )
      {
        v26 = *(_QWORD *)(v20 + 112);
        if ( (struct tagWND *)v26 != v24 )
        {
          if ( v26 )
          {
            while ( (struct tagWND *)v26 != v24 )
            {
              if ( (*(_BYTE *)(v26 + 71) & 0x10) != 0
                && (*(_BYTE *)(v26 + 66) & 8) == 0
                && (*(_BYTE *)(v26 + 64) & 0x20) == 0 )
              {
                v33 = *(_DWORD *)(v26 + 136);
                if ( v7 < v33 )
                {
                  v34 = *(_DWORD *)(v26 + 128);
                  if ( v34 < v6 )
                  {
                    v35 = *(_DWORD *)(v26 + 140);
                    if ( v9 < v35 )
                    {
                      v36 = *(_DWORD *)(v26 + 132);
                      if ( v36 < v10 && v36 < v35 && v34 < v33 )
                      {
                        if ( v22 == LODWORD(v67[1]) )
                        {
                          if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)v67) )
                            goto LABEL_124;
                          v22 = HIDWORD(v67[0]);
                        }
                        v37 = v22++;
                        HIDWORD(v67[0]) = v22;
                        *(_QWORD *)(v67[2] + 8 * v37) = v26;
                        v10 = v68.m128i_i32[3];
                        v6 = v68.m128i_i32[2];
                        v9 = v68.m128i_i32[1];
                        v7 = v68.m128i_i32[0];
                      }
                    }
                  }
                }
              }
              v26 = *(_QWORD *)(v26 + 88);
              if ( !v26 )
                break;
            }
            v21 = v66;
          }
        }
      }
      v27 = *(_BYTE *)(v20 + 71);
      v24 = (struct tagWND *)v20;
      v20 = *(_QWORD *)(v20 + 104);
      v23 = v27 & 4;
      v25 = v63;
    }
    while ( v20 != v21 );
  }
  if ( (a3 & 8) != 0 )
  {
    v38 = (struct tagWND *)*((_QWORD *)a1 + 14);
    if ( v38 )
    {
      if ( !(unsigned int)ExcludeWindowRects(v38, 0LL, (struct tagRECT *)&v68, (struct _CalcVisRgnData *)v67) )
        goto LABEL_124;
      v22 = HIDWORD(v67[0]);
    }
  }
  if ( v22 > 0 )
  {
    v39 = 0;
    v40 = 0;
    if ( v22 > 30 )
    {
      v41 = (_BYTE *)Win32AllocPoolWithQuota(16LL * v22, 1769370453LL);
      if ( !v41 )
      {
LABEL_124:
        v28 = v64;
LABEL_125:
        SetOrCreateRectRgnIndirectPublic(v28, gZero);
        EmptyRgn = v67[4];
        v31 = 0;
        goto LABEL_70;
      }
    }
    else
    {
      v41 = v70;
    }
    v42 = v67[2];
    v43 = v41;
    v44 = (unsigned int)v22;
    v45 = (__int64 *)v67[2];
    v46 = (_QWORD *)v67[2];
    do
    {
      v47 = *v45;
      if ( *(_QWORD *)(*v45 + 216) )
      {
        ++v40;
        *v46++ = v47;
      }
      else
      {
        ++v39;
        *v43++ = *(_OWORD *)(v47 + 128);
      }
      ++v45;
      --v44;
    }
    while ( v44 );
    v28 = v64;
    if ( !*v64 )
      *v28 = (HRGN)CreateEmptyRgn(v45, v46, 0LL, v43);
    v48 = *v28;
    if ( v39 )
      GreSubtractRgnRectList(v48, &v68, v41, v39);
    else
      SetRectRgnIndirect(v48, &v68);
    EmptyRgn = v67[4];
    *(_QWORD *)&v63 = v67[4];
    if ( !v67[4] )
    {
      EmptyRgn = CreateEmptyRgn(v50, v49, v51, v52);
      *(_QWORD *)&v63 = EmptyRgn;
    }
    v53 = v40;
    for ( i = 0LL; i < v53; ++i )
    {
      SetRectRgnIndirect(EmptyRgn, *(_QWORD *)(v42 + 8 * i) + 128LL);
      GreCombineRgn(EmptyRgn, EmptyRgn, *(_QWORD *)(*(_QWORD *)(v42 + 8 * i) + 216LL), 1LL);
      if ( (unsigned int)GreCombineRgn(*v28, *v28, EmptyRgn, 4LL) == 1 )
        break;
    }
    if ( v41 != v70 )
      Win32FreePool(v41);
    goto LABEL_66;
  }
  if ( *((char *)a1 + 59) < 0 )
  {
    v68.m128i_i64[0] = 0LL;
    v68.m128i_i64[1] = 0LL;
  }
  v28 = v64;
  if ( !(unsigned int)SetOrCreateRectRgnIndirectPublic(v64, &v68) )
    goto LABEL_125;
  EmptyRgn = v67[4];
  *(_QWORD *)&v63 = v67[4];
LABEL_66:
  v30 = *((_QWORD *)a1 + 27);
  if ( v30 )
    GreCombineRgn(*v28, *v28, v30, 1LL);
  if ( (_DWORD)v65 )
  {
    v55 = *((_QWORD *)a1 + 13);
    v56 = 0;
    v57 = v66;
    if ( v55 != v66 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(v55 + 216) )
          goto LABEL_111;
        if ( (*((_BYTE *)a1 + 66) & 8) != 0 && (*((_DWORD *)a1 + 76) & 0x20) == 0 )
          break;
        if ( v56 )
          goto LABEL_133;
LABEL_115:
        v65 = *(HRGN *)(v55 + 216);
        v58 = PhysicalToLogicalInPlaceRgn((__int64)a1, &v65);
        v59 = *v28;
        v60 = v65;
        v61 = v58;
        v62 = GreCombineRgn(v59, v59, v65, 1LL) == 1;
        if ( v61 )
          GreDeleteObject(v60);
        if ( v62 )
        {
LABEL_112:
          EmptyRgn = v63;
          goto LABEL_69;
        }
        v57 = v66;
LABEL_111:
        v28 = v64;
        a1 = (struct tagWND *const)v55;
        v55 = *(_QWORD *)(v55 + 104);
        if ( v55 == v57 )
          goto LABEL_112;
      }
      v56 = 1;
LABEL_133:
      if ( (*(_WORD *)(v55 + 82) & 0x3FFF) == 0x29D )
        goto LABEL_112;
      goto LABEL_115;
    }
  }
LABEL_69:
  v31 = 1;
LABEL_70:
  if ( EmptyRgn )
    GreDeleteObject(EmptyRgn);
  if ( LODWORD(v67[0]) )
    Win32FreePool(v67[2]);
  return v31;
}
