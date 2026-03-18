/*
 * XREFs of NtGdiSetPixel @ 0x1C0073590
 * Callers:
 *     <none>
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074420 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C0075304 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetPixel(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // edi
  unsigned int v7; // r14d
  DC *v9; // rbx
  __int64 v10; // rax
  char *v11; // rcx
  DC *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdi
  int v17; // r11d
  __int64 v18; // r8
  int v19; // r10d
  __int64 v20; // r9
  char *v21; // rbx
  struct REGION *v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rbx
  int v27; // edx
  int v28; // r15d
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // eax
  ULONG v34; // ecx
  DC *v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v36; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+74h] [rbp-8Ch]
  char *v38; // [rsp+78h] [rbp-88h] BYREF
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  unsigned int NearestIndexFromColorref; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h]
  int v43; // [rsp+A0h] [rbp-60h]
  unsigned int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int128 v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+110h] [rbp+10h]
  __int128 v51; // [rsp+120h] [rbp+20h] BYREF
  __int64 v52; // [rsp+130h] [rbp+30h]
  int v53; // [rsp+138h] [rbp+38h]
  __int64 v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  __int64 v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  __int64 v58; // [rsp+160h] [rbp+60h]
  __int128 v59; // [rsp+170h] [rbp+70h] BYREF
  __int128 v60; // [rsp+180h] [rbp+80h] BYREF

  v5 = a2;
  LOBYTE(a2) = 1;
  v35[1] = 0LL;
  v7 = -1;
  v35[0] = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v35[0] )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v35) )
    {
      v9 = v35[0];
      if ( (*((_DWORD *)v35[0] + 134) & 4) != 0 )
      {
        DC::vMarkTransformDirty(v35[0]);
        v9 = v35[0];
      }
      if ( v9 && (*((_DWORD *)v9 + 9) & 0x10000) == 0 )
      {
        v10 = *((_QWORD *)v9 + 10);
        v36 = v5;
        v37 = a3;
        v39 = *(_DWORD *)(v10 + 68);
        v40 = *(_DWORD *)(*((_QWORD *)v9 + 10) + 312LL) & 1;
        if ( (*(_DWORD *)(*((_QWORD *)v9 + 10) + 352LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v38, (struct XDCOBJ *)v35, 0x204u, 0);
          v11 = v38;
          v9 = v35[0];
        }
        else
        {
          v11 = (char *)v9 + 336;
          v38 = (char *)v9 + 336;
        }
        if ( (v11[32] & 0x43) != 0x43 )
        {
          bCvtPts1(v11, &v36, 1LL);
          a3 = v37;
          v5 = v36;
        }
        *(_QWORD *)&v60 = __PAIR64__(a3, v5);
        DWORD2(v60) = v5 + 1;
        HIDWORD(v60) = a3 + 1;
        if ( (*((_DWORD *)v9 + 9) & 0xE0) != 0 )
        {
          XDCOBJ::vAccumulate((XDCOBJ *)v35, (struct ERECTL *)&v60);
          v9 = v35[0];
        }
        if ( !*((_QWORD *)v9 + 64) )
          goto LABEL_68;
        v55 = 0LL;
        v51 = 0LL;
        v52 = 0LL;
        v53 = 0;
        v54 = 0LL;
        v58 = 0LL;
        v57 = 0LL;
        v56 = 0LL;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v51, (struct XDCOBJ *)v35, 0) )
        {
          v12 = v35[0];
          v13 = (__int64)v35[0] + 1440;
          v14 = *((_QWORD *)v35[0] + 64);
          if ( (*((_DWORD *)v35[0] + 10) & 1) == 0 )
            v13 = (__int64)v35[0] + 1432;
          v15 = *(int *)v13;
          if ( (unsigned __int64)(v15 + (int)v60 + 0x80000000LL) > 0xFFFFFFFF )
            goto LABEL_70;
          if ( (unsigned __int64)(v15 + SDWORD2(v60) + 0x80000000LL) > 0xFFFFFFFF )
            goto LABEL_70;
          v16 = *(int *)(v13 + 4);
          if ( (unsigned __int64)(v16 + SDWORD1(v60) + 0x80000000LL) > 0xFFFFFFFF )
            goto LABEL_70;
          if ( (unsigned __int64)(v16 + SHIDWORD(v60) + 0x80000000LL) > 0xFFFFFFFF )
            goto LABEL_70;
          v17 = v15 + v60;
          LODWORD(v60) = v17;
          v18 = (unsigned int)(*(_DWORD *)v13 + DWORD2(v60));
          DWORD2(v60) += *(_DWORD *)v13;
          v19 = *(_DWORD *)(v13 + 4) + DWORD1(v60);
          DWORD1(v60) = v19;
          v20 = (unsigned int)(*(_DWORD *)(v13 + 4) + HIDWORD(v60));
          HIDWORD(v60) += *(_DWORD *)(v13 + 4);
          if ( (unsigned int)(v17 + 134217726) > 0xFFFFFFC
            || (unsigned int)(v18 + 134217726) > 0xFFFFFFC
            || (unsigned int)(v19 + 134217726) > 0xFFFFFFC
            || (unsigned int)(v20 + 134217726) > 0xFFFFFFC )
          {
LABEL_70:
            v34 = 87;
            goto LABEL_71;
          }
          if ( v17 >= *((_DWORD *)v35[0] + 354)
            && (int)v18 <= *((_DWORD *)v35[0] + 356)
            && v19 >= *((_DWORD *)v35[0] + 355)
            && (int)v20 <= *((_DWORD *)v35[0] + 357) )
          {
LABEL_36:
            if ( (*(_DWORD *)(v14 + 116) & 8) == 0 && !*(_QWORD *)(v14 + 232)
              || (v13 = 512LL, (*(_WORD *)(v14 + 102) & 0x200) == 0) )
            {
              v23 = *(_DWORD *)(v14 + 112);
              if ( (v23 & 0x800) != 0 )
              {
                v24 = UserSurfaceAccessCheck(*(_QWORD *)(v14 + 584), v13, v18, v20);
              }
              else
              {
                if ( (v23 & 0x10000000) == 0 )
                {
LABEL_45:
                  if ( (*((_DWORD *)v12 + 9) & 0xE0) != 0 )
                  {
                    v59 = v60;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)v35, (struct ECLIPOBJ *)v13, (struct ERECTL *)&v59);
                    v12 = v35[0];
                  }
                  v25 = *((_QWORD *)v12 + 12);
                  v26 = *(_QWORD *)(v14 + 128);
                  v49 = 0LL;
                  v48 = 0LL;
                  v42 = 0LL;
                  v43 = 0;
                  v45 = -1;
                  v46 = 0LL;
                  v47 = 0LL;
                  v50 = 0;
                  v27 = *((_DWORD *)v12 + 28);
                  if ( (v27 & 1) != 0 && *(_QWORD *)(*((_QWORD *)v12 + 10) + 112LL) && (v27 & 0x10000000) != 0 )
                  {
                    v28 = 1;
                    NearestIndexFromColorref = a4;
                    v43 = 6;
                    if ( gbMultiMonMismatchColor )
                    {
                      v44 = a4;
                      v45 = a4;
                    }
                  }
                  else
                  {
                    v28 = 0;
                    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v26, v25, a4, 1LL);
                    v29 = *((_DWORD *)v35[0] + 28);
                    if ( (v29 & 5) != 0 )
                    {
                      v43 = 2;
                    }
                    else
                    {
                      v30 = v43;
                      if ( (v29 & 2) != 0 )
                        v30 = 1;
                      v43 = v30;
                    }
                    if ( gbMultiMonMismatchColor )
                    {
                      v44 = a4;
                      v45 = rgbFromColorref(v26, v25, a4);
                    }
                  }
                  ++*(_DWORD *)(v14 + 92);
                  v31 = v14 + 24;
                  v32 = (gaMix[*(_BYTE *)(*((_QWORD *)v35[0] + 10) + 72LL) & 0xF] << 8) | gaMix[*(_BYTE *)(*((_QWORD *)v35[0] + 10) + 72LL) & 0xF];
                  if ( (*(_DWORD *)(v14 + 112) & 1) != 0 )
                    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, char *, int))(*(_QWORD *)(v14 + 48) + 2848LL))(
                            v31,
                            0LL,
                            0LL,
                            0LL,
                            0LL,
                            &v60,
                            0LL,
                            0LL,
                            &NearestIndexFromColorref,
                            (char *)v35[0] + 1592,
                            v32);
                  else
                    v33 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, char *, int))EngBitBlt)(
                            v31,
                            0LL,
                            0LL,
                            0LL,
                            0LL,
                            &v60,
                            0LL,
                            0LL,
                            &NearestIndexFromColorref,
                            (char *)v35[0] + 1592,
                            v32);
                  if ( v33 )
                  {
                    if ( v28 )
                      v7 = NearestIndexFromColorref;
                    else
                      v7 = ulIndexToRGB(v26, v25, NearestIndexFromColorref);
                  }
                  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
                  goto LABEL_67;
                }
                v24 = UserScreenAccessCheck(v12, v13, v18, v20);
              }
              if ( v24 )
              {
                v12 = v35[0];
                goto LABEL_45;
              }
            }
            v34 = 5;
LABEL_71:
            EngSetLastError(v34);
            XDCOBJ::RestoreAttributes((XDCOBJ *)v35);
            _InterlockedDecrement((volatile signed __int32 *)v35[0] + 3);
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v51);
            return v7;
          }
          v21 = (char *)v35[0] + 2200;
          v22 = XDCOBJ::prgnEffRao((XDCOBJ *)v35);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v21, v22, (struct ERECTL *)&v60, 2);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(v21 + 4)) )
          {
            v12 = v35[0];
            goto LABEL_36;
          }
        }
LABEL_67:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v51);
LABEL_68:
        XDCOBJ::RestoreAttributes((XDCOBJ *)v35);
        _InterlockedDecrement((volatile signed __int32 *)v35[0] + 3);
        return v7;
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)v35[0] + 3);
      v35[0] = 0LL;
    }
  }
  XDCOBJ::vUnlock((XDCOBJ *)v35);
  return v7;
}
