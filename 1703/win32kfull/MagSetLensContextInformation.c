/*
 * XREFs of MagSetLensContextInformation @ 0x1C01EC5F4
 * Callers:
 *     NtUserMagSetContextInformation @ 0x1C01DD1F0 (NtUserMagSetContextInformation.c)
 *     MagSlicerControl @ 0x1C01ED248 (MagSlicerControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C005D1E4 (MagpFindThreadContext.c)
 *     MagpRevokeInputTransfrom @ 0x1C00A2330 (MagpRevokeInputTransfrom.c)
 *     memcmp @ 0x1C013C6B0 (memcmp.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ChangeComposableCursor @ 0x1C0195E08 (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01EBBB0 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01EBBF4 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C024B12C (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C024B1F0 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C024B29C (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C024B378 (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C024B570 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C024B65C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C024B758 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, _DWORD *Buf1)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v10; // edi
  _QWORD *ThreadContext; // rax
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 *v14; // rax
  char v15; // r11
  __int64 *v16; // rsi
  int v17; // ebx
  __int64 *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r11
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rcx
  _DWORD *v27; // rbx
  unsigned int v28; // r12d
  char *v29; // rdx
  __int64 *v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  _QWORD *v34; // rcx
  void *v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // rsi
  bool v42; // zf
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 *v48; // rax
  void *v49; // rax
  int v50; // eax
  __int64 v51; // rax
  __int64 *v52; // rcx
  void *v53; // rax
  void *v54; // rax
  unsigned int v55; // eax
  void *v56; // rax
  __int64 *v58; // rax
  char v59; // r11
  __int64 *v60; // r15
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 *v66; // rax
  int v67; // ebx
  void *v68; // rax
  __int64 v69; // rax
  __int64 *v70; // rcx
  int v71; // ebx
  void *v72; // rax
  int v73; // ebx
  void *v74; // rax
  double v75; // xmm1_8
  __int64 v76; // rax
  double v77; // xmm2_8
  unsigned __int16 v78; // cx
  __int128 v79; // xmm1
  __int64 *v80; // rax
  __int64 *v81; // rbx
  unsigned __int16 v82; // dx
  int *v83; // rdi
  INT v84; // eax
  __int128 v85; // xmm0
  __int64 *LensContext; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 *v91; // rax
  void *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rax
  void *v96; // rax
  __int64 v97; // rax
  void *v98; // rax
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  void *v103; // rax
  int v104; // eax
  __int64 v105; // r13
  __int64 *v106; // rax
  __int64 v108; // [rsp+30h] [rbp-40h]
  __int128 v109; // [rsp+50h] [rbp-20h] BYREF
  __int64 v110; // [rsp+60h] [rbp-10h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = a4;
  v108 = 0LL;
  v10 = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v13 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return (unsigned int)-1073741661;
  switch ( a5 )
  {
    case 0:
      if ( !a3 || MagpFindLensContext((__int64)ThreadContext, a3, 2) )
        return v10;
      v6 = Win32AllocPool(264LL, 1735226197LL);
      if ( !v6 )
        return (unsigned int)-1073741801;
      if ( a3 != -1 )
      {
        v103 = (void *)ReferenceDwmApiPort(
                         **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 8LL),
                         v100,
                         v101,
                         v102);
        v104 = DwmAsyncMagnCreate(v103);
        v10 = v104;
        if ( v104 == -1073741823 )
        {
          *(_DWORD *)(v6 + 16) |= 0x20u;
        }
        else if ( v104 < 0 )
        {
          goto LABEL_152;
        }
        v8 = a4;
      }
      memset((void *)(v6 + 16), 0, 0xF8uLL);
      *(double *)(v6 + 40) = gOneDouble;
      *(double *)(v6 + 48) = gOneDouble;
      if ( a3 == -1 )
      {
        *(_QWORD *)(v6 + 24) = -1LL;
      }
      else
      {
        *((_QWORD *)&v109 + 1) = a3;
        *(_QWORD *)&v109 = v6 + 24;
        HMAssignmentLock(&v109);
      }
      v105 = v13 + 40;
      *(_DWORD *)(v6 + 16) ^= (*(_DWORD *)(v6 + 16) ^ ((v8 == 1) << 7)) & 0x80;
      v106 = *(__int64 **)(v105 + 8);
      if ( *v106 != v105 )
        __fastfail(3u);
      *(_QWORD *)v6 = v105;
      *(_QWORD *)(v6 + 8) = v106;
      *v106 = v6;
      *(_QWORD *)(v105 + 8) = v6;
      v6 = 0LL;
      v10 = 0;
LABEL_148:
      if ( !v108 )
        return v10;
      Win32FreePool(v108);
      v33 = 0LL;
      goto LABEL_150;
    case 1:
      MagpRevokeInputTransfrom();
      if ( !a3 )
        return v10;
      LensContext = MagpFindLensContext(v13, a3, v8);
      v6 = (__int64)LensContext;
      if ( !LensContext )
        return v10;
      v90 = *LensContext;
      v91 = (__int64 *)LensContext[1];
      if ( *(_QWORD *)(v90 + 8) != v6 || *v91 != v6 )
        __fastfail(3u);
      *v91 = v90;
      *(_QWORD *)(v90 + 8) = v91;
      if ( a3 != -1 )
      {
        if ( (*(_DWORD *)(v6 + 16) & 0x40) != 0 )
        {
          ChangeComposableCursor(0);
          *(_DWORD *)(v6 + 16) &= ~0x40u;
        }
        if ( (*(_DWORD *)(v6 + 16) & 0x20) != 0 )
        {
          v10 = 0;
        }
        else
        {
          v92 = (void *)ReferenceDwmApiPort(
                          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 8LL),
                          v87,
                          v88,
                          v89);
          v10 = DwmAsyncMagnDestroy(v92);
        }
        HMAssignmentUnlock(v6 + 24);
        v93 = *(_QWORD *)(v6 + 232);
        if ( v93 )
          Win32FreePool(v93);
        v94 = *(_QWORD *)(v6 + 256);
        if ( v94 )
          Win32FreePool(v94);
        if ( (v10 & 0x80000000) != 0 )
          goto LABEL_152;
        goto LABEL_131;
      }
      v95 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL);
      if ( *(_QWORD *)(v95 + 232) == v6 )
      {
        v96 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v95 + 8), v87, v88, v89);
        v10 = DwmAsyncMagnSetDesktopColorTransform(v96);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 232LL) = 0LL;
      }
      else
      {
        v10 = 0;
      }
      v97 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL);
      if ( *(_QWORD *)(v97 + 224) == v6 )
      {
        v98 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v97 + 8), v87, v88, v89);
        v99 = DwmAsyncMagnSetDesktopTransform(v98, 0);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 224LL) = 0LL;
      }
      else
      {
        v99 = 0;
      }
      if ( (v10 & 0x80000000) == 0 )
      {
        if ( v99 >= 0 )
        {
LABEL_131:
          v10 = 0;
          goto LABEL_152;
        }
        v10 = v99;
      }
LABEL_152:
      if ( v6 )
        Win32FreePool(v6);
      return v10;
    case 2:
      if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v10;
      v80 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
      v81 = v80;
      if ( !v80 )
        return v10;
      if ( (*(_DWORD *)(v80[3] + 368) & 0xF) != 0 || (v82 = *(_WORD *)(gpDispInfo + 144LL), v82 <= 0x60u) )
      {
        v83 = Buf1;
        if ( (v80[2] & 2) == 0 )
        {
          *((_DWORD *)v80 + 8) = -*Buf1;
          v84 = Buf1[1];
          goto LABEL_106;
        }
      }
      else
      {
        v83 = Buf1;
        if ( (v80[2] & 2) == 0 )
        {
          *((_DWORD *)v80 + 8) = -EngMulDiv(*Buf1, v82, 96);
          v84 = EngMulDiv(Buf1[1], *(unsigned __int16 *)(gpDispInfo + 144LL), 96);
          goto LABEL_106;
        }
      }
      *((_DWORD *)v80 + 8) = -(int)((double)*v83 * *((double *)v80 + 11));
      v84 = (int)((double)v83[1] * *((double *)v80 + 12));
LABEL_106:
      *((_DWORD *)v81 + 9) = -v84;
      v85 = *(_OWORD *)v83;
      *((_DWORD *)v81 + 4) |= 1u;
      *(_OWORD *)(v81 + 9) = v85;
      return 0;
    case 3:
      if ( !a3 )
        return v10;
      v58 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
      v60 = v58;
      if ( !v58 )
        return v10;
      if ( v59 )
      {
        if ( *(double *)Buf1 != *((double *)Buf1 + 1) )
          return v10;
        v42 = memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) == 0;
        v64 = *(_QWORD *)(v13 + 16);
        if ( !v42 )
        {
          v69 = *(_QWORD *)(v64 + 408);
          v70 = *(__int64 **)(v69 + 224);
          if ( v70 )
          {
            if ( v60 != v70 )
              return v10;
            v73 = (int)*((double *)Buf1 + 3);
            v74 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v69 + 8), v61, v62, v63);
            v10 = DwmAsyncMagnSetDesktopTransform(v74, v73);
          }
          else
          {
            v71 = (int)*((double *)Buf1 + 3);
            v72 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v69 + 8), v61, v62, v63);
            v10 = DwmAsyncMagnSetDesktopTransform(v72, v71);
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 224LL) = v60;
          }
          goto LABEL_95;
        }
        v65 = *(_QWORD *)(v64 + 408);
        v66 = *(__int64 **)(v65 + 224);
        if ( v66 )
        {
          if ( v60 != v66 )
            return v10;
          v67 = (int)*((double *)Buf1 + 3);
          v68 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v65 + 8), v61, v62, v63);
          v10 = DwmAsyncMagnSetDesktopTransform(v68, v67);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 224LL) = 0LL;
LABEL_95:
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_OWORD *)(v60 + 11) = *(_OWORD *)Buf1;
          v79 = *((_OWORD *)Buf1 + 1);
          *((_DWORD *)v60 + 4) |= 2u;
          *(_OWORD *)(v60 + 13) = v79;
          return 0;
        }
      }
      else
      {
        v58[5] = *(_QWORD *)Buf1;
        v58[6] = *((_QWORD *)Buf1 + 1);
        v75 = *((double *)Buf1 + 2);
        v76 = v58[3];
        *((double *)v60 + 7) = v75;
        v77 = *((double *)Buf1 + 3);
        *((double *)v60 + 8) = v77;
        if ( (*(_DWORD *)(v76 + 368) & 0xF) == 0 )
        {
          v78 = *(_WORD *)(gpDispInfo + 144LL);
          if ( v78 > 0x60u )
          {
            *((double *)v60 + 7) = (double)v78 * v75 / 96.0;
            *((double *)v60 + 8) = (double)*(unsigned __int16 *)(gpDispInfo + 144LL) * v77 / 96.0;
            *((double *)v60 + 5) = *(double *)Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpDispInfo + 144LL);
            *((double *)v60 + 6) = *((double *)Buf1 + 1) * 96.0 / (double)*(unsigned __int16 *)(gpDispInfo + 144LL);
          }
        }
      }
      v10 = 0;
      goto LABEL_95;
    case 4:
      if ( Buf1[8] == 3 )
        return (unsigned int)MagpRevokeInputTransfrom();
      else
        return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1);
    case 5:
      if ( !a3 )
        return v10;
      v37 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
      v41 = v37;
      if ( !v37 )
        return v10;
      if ( a3 == -1 )
      {
        v42 = memcmp(Buf1, &gMagEffectIdentity, 0x64uLL) == 0;
        v46 = *(_QWORD *)(v13 + 16);
        if ( v42 )
        {
          v47 = *(_QWORD *)(v46 + 408);
          v48 = *(__int64 **)(v47 + 232);
          if ( v48 )
          {
            if ( v48 != v41 )
              return v10;
            v49 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v47 + 8), v43, v44, v45);
            v10 = DwmAsyncMagnSetDesktopColorTransform(v49);
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 232LL) = 0LL;
LABEL_62:
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            *(_OWORD *)(v41 + 15) = *(_OWORD *)Buf1;
            *(_OWORD *)(v41 + 17) = *((_OWORD *)Buf1 + 1);
            *(_OWORD *)(v41 + 19) = *((_OWORD *)Buf1 + 2);
            *(_OWORD *)(v41 + 21) = *((_OWORD *)Buf1 + 3);
            *(_OWORD *)(v41 + 23) = *((_OWORD *)Buf1 + 4);
            *(_OWORD *)(v41 + 25) = *((_OWORD *)Buf1 + 5);
            v50 = Buf1[24];
            *((_DWORD *)v41 + 4) |= 4u;
            *((_DWORD *)v41 + 54) = v50;
            return 0;
          }
LABEL_61:
          v10 = 0;
          goto LABEL_62;
        }
        v51 = *(_QWORD *)(v46 + 408);
        v52 = *(__int64 **)(v51 + 232);
        if ( !v52 )
        {
          v53 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v51 + 8), v43, v44, v45);
          v10 = DwmAsyncMagnSetDesktopColorTransform(v53);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 232LL) = v41;
          goto LABEL_62;
        }
        if ( v52 != v41 )
          return v10;
        v54 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v51 + 8), v43, v44, v45);
        v55 = DwmAsyncMagnSetDesktopColorTransform(v54);
      }
      else
      {
        if ( (v37[2] & 0x20) != 0 )
          goto LABEL_61;
        v56 = (void *)ReferenceDwmApiPort(
                        **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 8LL),
                        v38,
                        v39,
                        v40);
        v55 = DwmAsyncMagnSetWindowColorTransform(v56);
      }
      v10 = v55;
      goto LABEL_62;
    case 6:
      v27 = Buf1;
      v28 = *Buf1 + Buf1[1];
      if ( v28 > 0x19 )
        return v10;
      if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v10;
      v30 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
      if ( !v30 )
        return v10;
      if ( v28 )
      {
        v33 = Win32AllocPool(8LL * v28, 1735226197LL);
        if ( !v33 )
          return (unsigned int)-1073741801;
      }
      else
      {
        v33 = 0LL;
      }
      if ( v28 )
      {
        v31 = v28;
        v29 = (char *)Buf1 - v33;
        v34 = (_QWORD *)v33;
        do
        {
          *v34 = *(_QWORD *)((char *)v34 + (_QWORD)v29 + 8);
          ++v34;
          --v31;
        }
        while ( v31 );
      }
      if ( (v30[2] & 0x20) == 0 )
      {
        v35 = (void *)ReferenceDwmApiPort(
                        **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 8LL),
                        v29,
                        v31,
                        v32);
        v10 = DwmAsyncMagnSetWindowFilterList(v35);
        if ( (v10 & 0x80000000) != 0 )
        {
LABEL_150:
          if ( !v33 )
            return v10;
          Win32FreePool(v33);
          goto LABEL_152;
        }
        v27 = Buf1;
      }
      v36 = v30[29];
      if ( v36 )
      {
        Win32FreePool(v36);
        v30[29] = 0LL;
      }
      *((_DWORD *)v30 + 56) = *v27;
      *((_DWORD *)v30 + 57) = v27[1];
      v30[29] = v33;
      if ( v28 )
        *((_DWORD *)v30 + 4) |= 8u;
      else
        *((_DWORD *)v30 + 4) &= ~8u;
      return 0;
    case 7:
      if ( *Buf1 > 6u )
        return v10;
      if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v10;
      v18 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
      if ( !v18 )
        return v10;
      if ( (_DWORD)v21 )
      {
        v108 = Win32AllocPool(24 * v21, 1735226197LL);
        v7 = v108;
        if ( !v108 )
          return (unsigned int)-1073741801;
      }
      v22 = 0LL;
      v23 = *Buf1;
      *(_QWORD *)((char *)&v109 + 4) = *(_QWORD *)(Buf1 + 1);
      HIDWORD(v109) = Buf1[3];
      LODWORD(v109) = v23;
      v110 = v7;
      if ( v23 )
      {
        do
        {
          v24 = 3 * v22;
          v22 = (unsigned int)(v22 + 1);
          *(_OWORD *)(v7 + 8 * v24) = *(_OWORD *)&Buf1[2 * v24 + 4];
          *(_QWORD *)(v7 + 8 * v24 + 16) = *(_QWORD *)&Buf1[2 * v24 + 8];
        }
        while ( (unsigned int)v22 < *Buf1 );
      }
      if ( (v18[2] & 0x20) != 0 )
      {
LABEL_29:
        v26 = v18[32];
        if ( v26 )
        {
          Win32FreePool(v26);
          v18[32] = 0LL;
        }
        *((_DWORD *)v18 + 60) = *Buf1;
        *((_DWORD *)v18 + 61) = Buf1[1];
        *((_DWORD *)v18 + 62) = Buf1[2];
        *((_DWORD *)v18 + 63) = Buf1[3];
        v18[32] = v7;
        if ( *Buf1 )
          *((_DWORD *)v18 + 4) |= 0x10u;
        else
          *((_DWORD *)v18 + 4) &= ~0x10u;
        return 0;
      }
      v25 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL) + 8LL), v22, v19, v20);
      v10 = DwmAsyncMagnSetWindowSharedTextures(v25);
      if ( (v10 & 0x80000000) == 0 )
      {
        v7 = v108;
        goto LABEL_29;
      }
      goto LABEL_148;
  }
  if ( a5 == 9 && (*Buf1 & 0xFFFFFFFE) == 0 && (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v14 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v16 = v14;
    if ( v14 )
    {
      v17 = v15 & 1;
      if ( ((*((_DWORD *)v14 + 4) >> 6) & 1) != v17 )
      {
        ChangeComposableCursor(v17);
        *((_DWORD *)v16 + 4) ^= (*((_DWORD *)v16 + 4) ^ (v17 << 6)) & 0x40;
      }
      return 0;
    }
  }
  return v10;
}
