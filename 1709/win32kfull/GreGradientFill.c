/*
 * XREFs of GreGradientFill @ 0x1C00B54F8
 * Callers:
 *     NtGdiGradientFill @ 0x1C00B52E0 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C013C7D4 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C001B914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A2C (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0021E50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002C5DC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C00B5B20 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // r15d
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  int v17; // ebx
  size_t v18; // rcx
  ULONG v19; // ecx
  char *v20; // rax
  unsigned int v21; // r9d
  char *v22; // r8
  signed __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int *v25; // rax
  __int64 v26; // r10
  unsigned int v27; // ebx
  __int64 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // r11
  COLOR16 Alpha; // ax
  LONG x; // r10d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  struct _POINTL *v38; // rbx
  __int64 v39; // rsi
  LONG v40; // ecx
  int v41; // esi
  struct REGION *v42; // rax
  struct ECLIPOBJ *v43; // rdx
  DC *v44; // r15
  struct ECLIPOBJ *v45; // rdx
  __int64 v46; // r15
  __int64 v47; // rbx
  __int64 v48; // r8
  int inited; // eax
  char *v50; // rax
  __int64 v51; // rax
  BOOL (__stdcall *v52)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  unsigned int v54; // [rsp+60h] [rbp-A0h]
  unsigned int v55; // [rsp+60h] [rbp-A0h]
  struct _POINTL v56[2]; // [rsp+70h] [rbp-90h] BYREF
  DC *v57[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v58; // [rsp+90h] [rbp-70h]
  int v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v61[3]; // [rsp+A8h] [rbp-58h] BYREF
  HDC v62[22]; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL si128; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v64[4]; // [rsp+180h] [rbp+80h] BYREF
  char v65[76]; // [rsp+184h] [rbp+84h] BYREF
  __int64 v66; // [rsp+1D0h] [rbp+D0h]
  int v67; // [rsp+1D8h] [rbp+D8h]
  int v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+210h] [rbp+110h]

  v58 = a4;
  v7 = 0;
  v8 = a3;
  v54 = a6;
  v9 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v57, a1);
  if ( !v57[0] || (*((_DWORD *)v57[0] + 9) & 0x10000) != 0 )
  {
    v41 = 0;
    goto LABEL_59;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v62);
  if ( (unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v62, (struct XDCOBJ *)v57) )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v61, (struct XDCOBJ *)v57, 516);
    if ( (*(_DWORD *)(v61[0] + 32LL) & 1) == 0 && a6 <= 1u )
    {
      v12 = 2LL * a5;
      if ( v12 > 0xFFFFFFFF
        || (v13 = 12LL * (unsigned int)v12, v13 > 0xFFFFFFFF)
        || (v14 = 2 * a5, v15 = v8 + 2 * a5, v59 = 2 * a5, v15 < 2 * a5)
        || (v16 = 16LL * v15, v16 > 0xFFFFFFFF)
        || (v17 = v16, v18 = (unsigned int)(v16 + v13), (unsigned int)v18 < 24 * a5) )
      {
        v19 = 534;
      }
      else
      {
        if ( (unsigned int)v18 <= 0x2710000 )
        {
          v20 = (char *)PALLOCMEM2(v18, 1886221383LL, 0);
          v9 = (struct _TRIVERTEX *)v20;
          if ( v20 )
          {
            v21 = 0;
            v22 = &v20[v17];
            if ( (_DWORD)v8 )
            {
              v21 = v8;
              v23 = (char *)a2 - v20;
              v24 = v8;
              do
              {
                *(_OWORD *)v20 = *(_OWORD *)&v20[v23];
                v20 += 16;
                --v24;
              }
              while ( v24 );
            }
            v55 = 0;
            if ( a5 )
            {
              v25 = (unsigned int *)v58;
              while ( 1 )
              {
                v26 = *v25;
                v27 = v25[1];
                LODWORD(v60) = v26;
                if ( (unsigned int)v26 >= (unsigned int)v8 || v27 >= (unsigned int)v8 )
                  break;
                v28 = v26;
                v29 = v21;
                v9[v29].x = a2[v27].x;
                v9[v29].y = a2[v28].y;
                v30 = v21 + 1;
                v56[0].x = v21 + 1;
                v9[v30].x = a2[v28].x;
                v9[v30].y = a2[v27].y;
                if ( a6 == 1 )
                {
                  v9[v21].Red = a2[v28].Red;
                  v9[v21].Green = a2[v28].Green;
                  v9[v21].Blue = a2[v28].Blue;
                  v9[v21].Alpha = a2[v28].Alpha;
                  v9[v21 + 1].Red = a2[v27].Red;
                  v9[v21 + 1].Green = a2[v27].Green;
                  v9[v21 + 1].Blue = a2[v27].Blue;
                  Alpha = a2[v27].Alpha;
                }
                else
                {
                  v9[v21].Red = a2[v27].Red;
                  v9[v21].Green = a2[v27].Green;
                  v9[v21].Blue = a2[v27].Blue;
                  v9[v21].Alpha = a2[v27].Alpha;
                  v9[v21 + 1].Red = a2[v28].Red;
                  v9[v21 + 1].Green = a2[v28].Green;
                  v9[v21 + 1].Blue = a2[v28].Blue;
                  Alpha = a2[v28].Alpha;
                }
                x = v56[0].x;
                v9[v21 + 1].Alpha = Alpha;
                v33 = 2 * v55;
                v34 = 3 * v33;
                ++v55;
                *(_DWORD *)&v22[4 * v34] = v60;
                v35 = 3LL * (unsigned int)(v33 + 1);
                *(_DWORD *)&v22[4 * v34 + 4] = v21;
                *(_DWORD *)&v22[4 * v35 + 4] = v21;
                v21 += 2;
                *(_DWORD *)&v22[4 * v35] = v27;
                *(_DWORD *)&v22[4 * v35 + 8] = x;
                v25 = (unsigned int *)((char *)v58 + 8);
                *(_DWORD *)&v22[4 * v34 + 8] = x;
                v58 = v25;
                if ( v55 >= a5 )
                  goto LABEL_25;
              }
              EngSetLastError(0x57u);
              Win32FreePool(v9, v36, v37);
              goto LABEL_29;
            }
LABEL_25:
            v58 = v22;
            a2 = v9;
            v54 = 2;
            LODWORD(v8) = v21;
            goto LABEL_31;
          }
        }
        v19 = 8;
      }
      EngSetLastError(v19);
LABEL_29:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v62);
      goto LABEL_62;
    }
    v14 = a5;
    v59 = a5;
LABEL_31:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( (_DWORD)v8 )
    {
      v38 = (struct _POINTL *)a2;
      v39 = (unsigned int)v8;
      do
      {
        v56[0] = *v38;
        EXFORMOBJ::bXform((EXFORMOBJ *)v61, v56, 1LL);
        v40 = v56[0].x;
        if ( (*(_DWORD *)(*((_QWORD *)v57[0] + 10) + 312LL) & 1) != 0 )
          v40 = v56[0].x + 1;
        v38->x = *((_DWORD *)v57[0] + 2 * (*((_DWORD *)v57[0] + 10) & 1) + 358) + v40;
        v38->y = v56[0].y + *((_DWORD *)v57[0] + 2 * (*((_DWORD *)v57[0] + 10) & 1) + 359);
        v38 += 2;
        --v39;
      }
      while ( v39 );
    }
    v41 = bCalcMeshExtent(a2, v8, v58, v14, v54, &si128);
    if ( v41 )
    {
      v42 = XDCOBJ::prgnEffRao(v57);
      v66 = 0LL;
      v67 = 0;
      v68 = 1;
      v69 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v64, v42, (struct ERECTL *)&si128, 0);
      if ( ERECTL::bEmpty((ERECTL *)v65) )
        goto LABEL_55;
      v44 = v57[0];
      if ( (*((_DWORD *)v57[0] + 9) & 0xE0) != 0 )
      {
        *(struct _RECTL *)&v56[0].x = si128;
        XDCOBJ::vAccumulate((XDCOBJ *)v57, v43, (__m128i *)v56);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v57, v45, (__m128i *)v56);
        v44 = v57[0];
      }
      v46 = *((_QWORD *)v44 + 64);
      if ( !v46 )
      {
LABEL_55:
        v41 = 1;
      }
      else
      {
        ++*(_DWORD *)(v46 + 92);
        v47 = *(_QWORD *)(v46 + 48);
        v60 = 0LL;
        if ( (*(_DWORD *)(v47 + 32) & 0x80u) != 0 || *(_DWORD *)(v46 + 96) <= 3u )
        {
          inited = EXLATEOBJ::bInitXlateObj(
                     &v60,
                     *(_QWORD *)(*((_QWORD *)v57[0] + 10) + 112LL),
                     *((_DWORD *)v57[0] + 28),
                     (__int64)gppalRGB,
                     *(_QWORD *)(v46 + 128),
                     *((_QWORD *)v57[0] + 12),
                     *((_QWORD *)v57[0] + 12),
                     *(_DWORD *)(*((_QWORD *)v57[0] + 10) + 40LL),
                     *(_DWORD *)(*((_QWORD *)v57[0] + 10) + 32LL),
                     0,
                     0);
          v48 = v60;
          v41 = inited;
        }
        else
        {
          v48 = 0LL;
        }
        v50 = (char *)v57[0] + 1440;
        if ( (*((_DWORD *)v57[0] + 10) & 1) == 0 )
          v50 = (char *)v57[0] + 1432;
        v51 = *(_QWORD *)v50;
        v56[0].x = -(int)v51;
        v56[0].y = -HIDWORD(v51);
        if ( *(_DWORD *)(v46 + 96) == 3 || (*(_DWORD *)(v46 + 112) & 0x20000) == 0 )
          v52 = EngGradientFill;
        else
          v52 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v47 + 3248);
        if ( !v41
          || (v41 = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, _DWORD, void *, int, struct _RECTL *, struct _POINTL *, unsigned int))v52)(
                 v46 + 24,
                 v64,
                 v48,
                 a2,
                 v8,
                 v58,
                 v59,
                 &si128,
                 v56,
                 v54)) )
        {
          v41 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
      }
    }
    goto LABEL_57;
  }
  v41 = XDCOBJ::bFullScreen((XDCOBJ *)v57);
LABEL_57:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v62);
LABEL_59:
  if ( v9 )
    Win32FreePool(v9, v10, v11);
  v7 = v41;
LABEL_62:
  DCOBJ::~DCOBJ((DCOBJ *)v57);
  return v7;
}
