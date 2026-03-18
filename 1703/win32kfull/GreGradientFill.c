/*
 * XREFs of GreGradientFill @ 0x1C00A9038
 * Callers:
 *     NtGdiGradientFill @ 0x1C00A8E20 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C01389D8 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071CC8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0072C4C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074B8C (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009556C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C00A9670 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGradientFill(
        HDC a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v7; // edi
  __int64 v8; // r12
  struct _TRIVERTEX *v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // eax
  unsigned __int64 v14; // rbx
  unsigned int v15; // eax
  ULONG v16; // ecx
  char *v17; // rax
  unsigned int v18; // r9d
  char *v19; // r8
  signed __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rax
  int v23; // r15d
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r11
  COLOR16 Alpha; // ax
  LONG x; // r11d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _POINTL *v32; // rbx
  __int64 v33; // rsi
  LONG v34; // edx
  int v35; // esi
  struct REGION *v36; // rax
  struct ECLIPOBJ *v37; // rdx
  DC *v38; // r15
  struct ECLIPOBJ *v39; // rdx
  __int64 v40; // r15
  __int64 v41; // rbx
  __int64 v42; // r8
  int inited; // eax
  char *v44; // rax
  __int64 v45; // rax
  BOOL (__stdcall *v46)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  unsigned int v48; // [rsp+60h] [rbp-A0h]
  unsigned int v49; // [rsp+60h] [rbp-A0h]
  struct _POINTL v50; // [rsp+68h] [rbp-98h] BYREF
  int v51; // [rsp+70h] [rbp-90h]
  DC *v52[2]; // [rsp+78h] [rbp-88h] BYREF
  void *v53; // [rsp+88h] [rbp-78h]
  __m128i v54; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v55[2]; // [rsp+A0h] [rbp-60h] BYREF
  HDC v56[22]; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTL si128; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v58[4]; // [rsp+170h] [rbp+70h] BYREF
  char v59[76]; // [rsp+174h] [rbp+74h] BYREF
  __int64 v60; // [rsp+1C0h] [rbp+C0h]
  int v61; // [rsp+1C8h] [rbp+C8h]
  int v62; // [rsp+1F0h] [rbp+F0h]
  __int64 v63; // [rsp+200h] [rbp+100h]

  v53 = a4;
  v7 = 0;
  v8 = a3;
  v48 = a6;
  v9 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v52, a1);
  if ( !v52[0] || (*((_DWORD *)v52[0] + 9) & 0x10000) != 0 )
  {
    v35 = 0;
    goto LABEL_60;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v56);
  if ( (unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v56, v52) )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v55, (struct XDCOBJ *)v52, 516);
    if ( (*(_BYTE *)(v55[0] + 32LL) & 1) == 0 && a6 <= 1u )
    {
      v10 = 2LL * a5;
      if ( v10 > 0xFFFFFFFF
        || (v11 = 12LL * (unsigned int)v10, v11 > 0xFFFFFFFF)
        || (v12 = 2 * a5, v13 = v8 + 2 * a5, v51 = 2 * a5, v13 < 2 * a5)
        || (v14 = 16LL * v13, v14 > 0xFFFFFFFF)
        || (v15 = v14 + v11, (int)v14 + (int)v11 < (unsigned int)v11) )
      {
        v16 = 534;
      }
      else
      {
        if ( v15 <= 0x2710000 )
        {
          v17 = (char *)PALLOCMEM2(v15, 1886221383LL, 0);
          v9 = (struct _TRIVERTEX *)v17;
          if ( v17 )
          {
            v18 = 0;
            v19 = &v17[(unsigned int)v14];
            if ( (_DWORD)v8 )
            {
              v18 = v8;
              v20 = (char *)a2 - v17;
              v21 = v8;
              do
              {
                *(_OWORD *)v17 = *(_OWORD *)&v17[v20];
                v17 += 16;
                --v21;
              }
              while ( v21 );
            }
            v49 = 0;
            if ( a5 )
            {
              v22 = (int *)v53;
              while ( 1 )
              {
                v23 = *v22;
                v24 = v22[1];
                if ( *v22 >= (unsigned int)v8 || v24 >= (unsigned int)v8 )
                  break;
                v25 = v18;
                v9[v25].x = a2[v24].x;
                v9[v25].y = a2[v23].y;
                v26 = v18 + 1;
                v50.x = v18 + 1;
                v9[v26].x = a2[v23].x;
                v9[v26].y = a2[v24].y;
                if ( a6 == 1 )
                {
                  v9[v18].Red = a2[v23].Red;
                  v9[v18].Green = a2[v23].Green;
                  v9[v18].Blue = a2[v23].Blue;
                  v9[v18].Alpha = a2[v23].Alpha;
                  v9[v18 + 1].Red = a2[v24].Red;
                  v9[v18 + 1].Green = a2[v24].Green;
                  v9[v18 + 1].Blue = a2[v24].Blue;
                  Alpha = a2[v24].Alpha;
                }
                else
                {
                  v9[v18].Red = a2[v24].Red;
                  v9[v18].Green = a2[v24].Green;
                  v9[v18].Blue = a2[v24].Blue;
                  v9[v18].Alpha = a2[v24].Alpha;
                  v9[v18 + 1].Red = a2[v23].Red;
                  v9[v18 + 1].Green = a2[v23].Green;
                  v9[v18 + 1].Blue = a2[v23].Blue;
                  Alpha = a2[v23].Alpha;
                }
                v9[v18 + 1].Alpha = Alpha;
                x = v50.x;
                v29 = 2 * v49;
                v30 = 3 * v29;
                ++v49;
                *(_DWORD *)&v19[4 * v30 + 4] = v18;
                v31 = 3LL * (unsigned int)(v29 + 1);
                *(_DWORD *)&v19[4 * v30] = v23;
                *(_DWORD *)&v19[4 * v31 + 4] = v18;
                v18 += 2;
                *(_DWORD *)&v19[4 * v31] = v24;
                *(_DWORD *)&v19[4 * v31 + 8] = x;
                v22 = (int *)((char *)v53 + 8);
                *(_DWORD *)&v19[4 * v30 + 8] = x;
                v53 = v22;
                if ( v49 >= a5 )
                {
                  v12 = v51;
                  goto LABEL_26;
                }
              }
              EngSetLastError(0x57u);
              Win32FreePool(v9);
              goto LABEL_30;
            }
LABEL_26:
            v53 = v19;
            a2 = v9;
            v48 = 2;
            LODWORD(v8) = v18;
            goto LABEL_32;
          }
        }
        v16 = 8;
      }
      EngSetLastError(v16);
LABEL_30:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v56);
      goto LABEL_63;
    }
    v12 = a5;
    v51 = a5;
LABEL_32:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( (_DWORD)v8 )
    {
      v32 = (struct _POINTL *)a2;
      v33 = (unsigned int)v8;
      do
      {
        v50 = *v32;
        EXFORMOBJ::bXform((EXFORMOBJ *)v55, &v50, 1LL);
        v34 = v50.x;
        if ( (*(_DWORD *)(*((_QWORD *)v52[0] + 10) + 312LL) & 1) != 0 )
          v34 = v50.x + 1;
        v32->x = v34 + *(_DWORD *)((char *)v52[0] + ((*((_BYTE *)v52[0] + 40) & 1) != 0 ? 8 : 0) + 1432);
        v32->y = v50.y + *(_DWORD *)((char *)v52[0] + ((*((_BYTE *)v52[0] + 40) & 1) != 0 ? 8 : 0) + 1436);
        v32 += 2;
        --v33;
      }
      while ( v33 );
    }
    v35 = bCalcMeshExtent(a2, v8, v53, v12, v48, &si128);
    if ( v35 )
    {
      v36 = XDCOBJ::prgnEffRao(v52);
      v60 = 0LL;
      v61 = 0;
      v62 = 1;
      v63 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v58, v36, (struct ERECTL *)&si128, 0);
      if ( ERECTL::bEmpty((ERECTL *)v59) )
        goto LABEL_56;
      v38 = v52[0];
      if ( (*((_DWORD *)v52[0] + 9) & 0xE0) != 0 )
      {
        v54 = (__m128i)si128;
        XDCOBJ::vAccumulate((XDCOBJ *)v52, v37, &v54);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v52, v39, &v54);
        v38 = v52[0];
      }
      v40 = *((_QWORD *)v38 + 64);
      if ( !v40 )
      {
LABEL_56:
        v35 = 1;
      }
      else
      {
        ++*(_DWORD *)(v40 + 92);
        v41 = *(_QWORD *)(v40 + 48);
        v54.m128i_i64[0] = 0LL;
        if ( (*(_DWORD *)(v41 + 32) & 0x80u) != 0 || *(_DWORD *)(v40 + 96) <= 3u )
        {
          inited = EXLATEOBJ::bInitXlateObj(
                     v54.m128i_i64,
                     *(_QWORD *)(*((_QWORD *)v52[0] + 10) + 112LL),
                     *((_DWORD *)v52[0] + 28),
                     (__int64)gppalRGB,
                     *(_QWORD *)(v40 + 128),
                     *((_QWORD *)v52[0] + 12),
                     *((_QWORD *)v52[0] + 12),
                     *(_DWORD *)(*((_QWORD *)v52[0] + 10) + 40LL),
                     *(_DWORD *)(*((_QWORD *)v52[0] + 10) + 32LL),
                     0,
                     0);
          v42 = v54.m128i_i64[0];
          v35 = inited;
        }
        else
        {
          v42 = 0LL;
        }
        v44 = (char *)v52[0] + 1440;
        if ( (*((_DWORD *)v52[0] + 10) & 1) == 0 )
          v44 = (char *)v52[0] + 1432;
        v45 = *(_QWORD *)v44;
        v50.x = -(int)v45;
        v50.y = -HIDWORD(v45);
        if ( *(_DWORD *)(v40 + 96) == 3 || (*(_DWORD *)(v40 + 112) & 0x20000) == 0 )
          v46 = EngGradientFill;
        else
          v46 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v41 + 3248);
        if ( !v35
          || (v35 = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, _DWORD, void *, int, struct _RECTL *, struct _POINTL *, unsigned int))v46)(
                 v40 + 24,
                 v58,
                 v42,
                 a2,
                 v8,
                 v53,
                 v51,
                 &si128,
                 &v50,
                 v48)) )
        {
          v35 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v54);
      }
    }
    goto LABEL_58;
  }
  v35 = XDCOBJ::bFullScreen((XDCOBJ *)v52);
LABEL_58:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v56);
LABEL_60:
  if ( v9 )
    Win32FreePool(v9);
  v7 = v35;
LABEL_63:
  DCOBJ::~DCOBJ((DCOBJ *)v52);
  return v7;
}
