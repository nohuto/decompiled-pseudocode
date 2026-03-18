/*
 * XREFs of MagSetLensContextInformation @ 0x1C01A89BC
 * Callers:
 *     MagSlicerControl @ 0x1C01A96C8 (MagSlicerControl.c)
 *     NtUserMagSetContextInformation @ 0x1C01E93F0 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C006037C (MagpFindThreadContext.c)
 *     MagpRevokeInputTransfrom @ 0x1C0123170 (MagpRevokeInputTransfrom.c)
 *     memcmp @ 0x1C0143590 (memcmp.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ChangeComposableCursor @ 0x1C01A0F94 (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01A7FA4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01A7FE8 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C024C98C (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C024CA50 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C024CAFC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x1C024CBD8 (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C024CC88 (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x1C024CD48 (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C024CF30 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C024D01C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C024D118 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, _DWORD *Buf1)
{
  __int64 v6; // rbx
  int v7; // esi
  unsigned int v9; // edi
  __int64 v10; // r14
  __int64 v11; // r12
  _QWORD *ThreadContext; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 *v17; // rax
  char v18; // r11
  __int64 *v19; // r15
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rax
  int v24; // ebx
  void *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rcx
  int v28; // ebx
  void *v29; // rax
  int v30; // ebx
  void *v31; // rax
  double v32; // xmm1_8
  __int64 v33; // rax
  double v34; // xmm2_8
  unsigned __int16 v35; // cx
  __int128 v36; // xmm1
  __int64 *v37; // rax
  __int64 *v38; // rbx
  unsigned __int16 v39; // dx
  int *v40; // rdi
  INT v41; // eax
  __int128 v42; // xmm0
  __int64 *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 *v47; // rax
  void *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  void *v52; // rax
  __int64 v53; // rax
  void *v54; // rax
  int v55; // eax
  void *v56; // rax
  int v57; // eax
  int v58; // ecx
  __int64 v59; // r13
  __int64 *v60; // rax
  __int64 *v61; // rax
  __int64 *v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 *v65; // rax
  void *v66; // rax
  int v67; // eax
  __int64 v68; // rax
  __int64 *v69; // rcx
  void *v70; // rax
  void *v71; // rax
  unsigned int v72; // eax
  void *v73; // rax
  __int64 *v74; // rax
  __int64 *v75; // rsi
  void *v76; // rax
  unsigned int v77; // eax
  void *v78; // rax
  int v79; // ebx
  __int64 *v80; // rax
  __int64 *v81; // rsi
  int v82; // ebx
  __int64 *v83; // rsi
  __int64 v84; // r8
  __int64 v85; // r11
  unsigned __int64 v86; // rdx
  int v87; // ecx
  __int64 v88; // rcx
  void *v89; // rax
  __int64 v90; // rcx
  unsigned int v91; // ebx
  __int64 *LensContext; // rsi
  _DWORD *v93; // rdi
  __int64 v94; // rcx
  void *v95; // rax
  __int64 v96; // rcx
  __int64 v98; // [rsp+30h] [rbp-30h]
  __int128 v99; // [rsp+40h] [rbp-20h] BYREF
  __int64 v100; // [rsp+50h] [rbp-10h]

  v6 = 0LL;
  v7 = a4;
  v98 = 0LL;
  v9 = -1073741811;
  v10 = 0LL;
  v11 = 0LL;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v15 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return (unsigned int)-1073741661;
  if ( a5 > 5 )
  {
    switch ( a5 )
    {
      case 6:
        v91 = Buf1[1] + *Buf1;
        if ( v91 > 0x19 )
          return v9;
        if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v9;
        LensContext = MagpFindLensContext((__int64)ThreadContext, a3, v7);
        if ( !LensContext )
          return v9;
        if ( v91 )
        {
          v11 = Win32AllocPool(8LL * v91, 1735226197LL);
          if ( !v11 )
            return (unsigned int)-1073741801;
        }
        v93 = Buf1;
        *((_QWORD *)&v99 + 1) = v11;
        *(_QWORD *)&v99 = *(_QWORD *)Buf1;
        if ( v91 )
        {
          v84 = v91;
          v86 = (unsigned __int64)Buf1 - v11;
          v94 = v11;
          do
          {
            *(_QWORD *)v94 = *(_QWORD *)(v94 + v86 + 8);
            v94 += 8LL;
            --v84;
          }
          while ( v84 );
        }
        if ( (LensContext[2] & 0x20) == 0 )
        {
          v95 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 8LL));
          v9 = DwmAsyncMagnSetWindowFilterList(v95);
          if ( (v9 & 0x80000000) != 0 )
          {
LABEL_164:
            if ( !v11 )
              return v9;
            Win32FreePool(v11, v86, v84);
            goto LABEL_166;
          }
          v93 = Buf1;
        }
        v96 = LensContext[29];
        if ( v96 )
        {
          Win32FreePool(v96, v86, v84);
          LensContext[29] = 0LL;
        }
        *((_DWORD *)LensContext + 56) = *v93;
        *((_DWORD *)LensContext + 57) = v93[1];
        LensContext[29] = v11;
        if ( v91 )
          *((_DWORD *)LensContext + 4) |= 8u;
        else
          *((_DWORD *)LensContext + 4) &= ~8u;
        v9 = 0;
        break;
      case 7:
        if ( *Buf1 > 6u )
          return v9;
        if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v9;
        v83 = MagpFindLensContext((__int64)ThreadContext, a3, v7);
        if ( !v83 )
          return v9;
        if ( (_DWORD)v85 )
        {
          v98 = Win32AllocPool(24 * v85, 1735226197LL);
          v6 = v98;
          if ( !v98 )
            return (unsigned int)-1073741801;
        }
        v86 = 0LL;
        v87 = *Buf1;
        *(_QWORD *)((char *)&v99 + 4) = *(_QWORD *)(Buf1 + 1);
        HIDWORD(v99) = Buf1[3];
        LODWORD(v99) = v87;
        v100 = v6;
        if ( v87 )
        {
          do
          {
            v88 = 3 * v86;
            v86 = (unsigned int)(v86 + 1);
            *(_OWORD *)(v6 + 8 * v88) = *(_OWORD *)&Buf1[2 * v88 + 4];
            *(_QWORD *)(v6 + 8 * v88 + 16) = *(_QWORD *)&Buf1[2 * v88 + 8];
          }
          while ( (unsigned int)v86 < *Buf1 );
        }
        if ( (v83[2] & 0x20) != 0 )
        {
LABEL_140:
          v90 = v83[32];
          if ( v90 )
          {
            Win32FreePool(v90, v86, v84);
            v83[32] = 0LL;
          }
          *((_DWORD *)v83 + 60) = *Buf1;
          *((_DWORD *)v83 + 61) = Buf1[1];
          *((_DWORD *)v83 + 62) = Buf1[2];
          *((_DWORD *)v83 + 63) = Buf1[3];
          v83[32] = v6;
          if ( *Buf1 )
            *((_DWORD *)v83 + 4) |= 0x10u;
          else
            *((_DWORD *)v83 + 4) &= ~0x10u;
          return 0;
        }
        v89 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 8LL));
        v9 = DwmAsyncMagnSetWindowSharedTextures(v89);
        if ( (v9 & 0x80000000) == 0 )
        {
          v6 = v98;
          goto LABEL_140;
        }
        break;
      case 9:
        v79 = *Buf1;
        if ( (*Buf1 & 0xFFFFFFFE) != 0 )
          return v9;
        if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v9;
        v80 = MagpFindLensContext((__int64)ThreadContext, a3, v7);
        v81 = v80;
        if ( !v80 )
          return v9;
        v82 = v79 & 1;
        if ( ((*((_DWORD *)v80 + 4) >> 6) & 1) != v82 )
        {
          ChangeComposableCursor(v82);
          *((_DWORD *)v81 + 4) = (v82 << 6) | v81[2] & 0xFFFFFFBF;
        }
        return 0;
      case 10:
        if ( !a3 )
          return v9;
        v74 = MagpFindLensContext((__int64)ThreadContext, a3, v7);
        v75 = v74;
        if ( !v74 )
          return v9;
        if ( a3 == -1 )
        {
          v76 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 8LL));
          v77 = DwmAsyncMagnSetDesktopSamplingMode(v76);
        }
        else
        {
          if ( (v74[2] & 0x20) != 0 )
          {
            v9 = 0;
            goto LABEL_123;
          }
          v78 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 8LL));
          v77 = DwmAsyncMagnSetSamplingMode(v78);
        }
        v9 = v77;
LABEL_123:
        if ( (v9 & 0x80000000) != 0 )
          return v9;
        *((_DWORD *)v75 + 66) = *Buf1;
        return 0;
      default:
        return v9;
    }
    if ( !v98 )
      return v9;
    Win32FreePool(v98, v86, v84);
    v11 = 0LL;
    goto LABEL_164;
  }
  if ( a5 == 5 )
  {
    if ( !a3 )
      return v9;
    v61 = MagpFindLensContext((__int64)ThreadContext, a3, v7);
    v62 = v61;
    if ( !v61 )
      return v9;
    if ( a3 == -1 )
    {
      v20 = memcmp(Buf1, &gMagEffectIdentity, 0x64uLL) == 0;
      v63 = *(_QWORD *)(v15 + 16);
      if ( v20 )
      {
        v64 = *(_QWORD *)(v63 + 432);
        v65 = *(__int64 **)(v64 + 232);
        if ( v65 )
        {
          if ( v65 != v62 )
            return v9;
          v66 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v64 + 8));
          v9 = DwmAsyncMagnSetDesktopColorTransform(v66);
          if ( (v9 & 0x80000000) != 0 )
            return v9;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 232LL) = 0LL;
          goto LABEL_100;
        }
        goto LABEL_99;
      }
      v68 = *(_QWORD *)(v63 + 432);
      v69 = *(__int64 **)(v68 + 232);
      if ( !v69 )
      {
        v70 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v68 + 8));
        v9 = DwmAsyncMagnSetDesktopColorTransform(v70);
        if ( (v9 & 0x80000000) != 0 )
          return v9;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 232LL) = v62;
        goto LABEL_100;
      }
      if ( v69 != v62 )
        return v9;
      v71 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v68 + 8));
      v72 = DwmAsyncMagnSetDesktopColorTransform(v71);
    }
    else
    {
      if ( (v61[2] & 0x20) != 0 )
      {
LABEL_99:
        v9 = 0;
LABEL_100:
        if ( (v9 & 0x80000000) != 0 )
          return v9;
        *(_OWORD *)(v62 + 15) = *(_OWORD *)Buf1;
        *(_OWORD *)(v62 + 17) = *((_OWORD *)Buf1 + 1);
        *(_OWORD *)(v62 + 19) = *((_OWORD *)Buf1 + 2);
        *(_OWORD *)(v62 + 21) = *((_OWORD *)Buf1 + 3);
        *(_OWORD *)(v62 + 23) = *((_OWORD *)Buf1 + 4);
        *(_OWORD *)(v62 + 25) = *((_OWORD *)Buf1 + 5);
        v67 = Buf1[24];
        *((_DWORD *)v62 + 4) |= 4u;
        *((_DWORD *)v62 + 54) = v67;
        return 0;
      }
      v73 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 8LL));
      v72 = DwmAsyncMagnSetWindowColorTransform(v73);
    }
    v9 = v72;
    goto LABEL_100;
  }
  if ( !a5 )
  {
    if ( !a3 || MagpFindLensContext((__int64)ThreadContext, a3, 2) )
      return v9;
    v10 = Win32AllocPool(272LL, 1735226197LL);
    if ( v10 )
    {
      if ( a3 != -1 )
      {
        v56 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 8LL));
        v57 = DwmAsyncMagnCreate(v56);
        v9 = v57;
        if ( v57 == -1073741823 )
        {
          *(_DWORD *)(v10 + 16) |= 0x20u;
        }
        else if ( v57 < 0 )
        {
          goto LABEL_166;
        }
        v7 = a4;
      }
      memset((void *)(v10 + 16), 0, 0x100uLL);
      *(double *)(v10 + 40) = gOneDouble;
      *(double *)(v10 + 48) = gOneDouble;
      if ( a3 == -1 )
      {
        *(_QWORD *)(v10 + 24) = -1LL;
      }
      else
      {
        *((_QWORD *)&v99 + 1) = a3;
        *(_QWORD *)&v99 = v10 + 24;
        HMAssignmentLock(&v99);
      }
      *(_DWORD *)(v10 + 264) = 0;
      v58 = 0;
      if ( v7 == 1 )
        v58 = 128;
      v59 = v15 + 40;
      *(_DWORD *)(v10 + 16) = *(_DWORD *)(v10 + 16) & 0xFFFFFF7F | v58;
      v60 = *(__int64 **)(v59 + 8);
      if ( *v60 != v59 )
        __fastfail(3u);
      *(_QWORD *)v10 = v59;
      *(_QWORD *)(v10 + 8) = v60;
      *v60 = v10;
      *(_QWORD *)(v59 + 8) = v10;
      return 0;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 != 1 )
  {
    if ( a5 != 2 )
    {
      if ( a5 != 3 )
      {
        if ( a5 == 4 )
        {
          if ( Buf1[8] == 3 )
            return (unsigned int)MagpRevokeInputTransfrom();
          else
            return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1, v13);
        }
        return v9;
      }
      if ( !a3 )
        return v9;
      v17 = MagpFindLensContext((__int64)ThreadContext, a3, v7);
      v19 = v17;
      if ( !v17 )
        return v9;
      if ( v18 )
      {
        if ( *(double *)Buf1 != *((double *)Buf1 + 1) )
          return v9;
        v20 = memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) == 0;
        v21 = *(_QWORD *)(v15 + 16);
        if ( !v20 )
        {
          v26 = *(_QWORD *)(v21 + 432);
          v27 = *(__int64 **)(v26 + 224);
          if ( v27 )
          {
            if ( v19 != v27 )
              return v9;
            v30 = (int)*((double *)Buf1 + 3);
            v31 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v26 + 8));
            v9 = DwmAsyncMagnSetDesktopTransform(v31, v30);
          }
          else
          {
            v28 = (int)*((double *)Buf1 + 3);
            v29 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v26 + 8));
            v9 = DwmAsyncMagnSetDesktopTransform(v29, v28);
            if ( (v9 & 0x80000000) != 0 )
              return v9;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 224LL) = v19;
          }
          goto LABEL_33;
        }
        v22 = *(_QWORD *)(v21 + 432);
        v23 = *(__int64 **)(v22 + 224);
        if ( v23 )
        {
          if ( v19 != v23 )
            return v9;
          v24 = (int)*((double *)Buf1 + 3);
          v25 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v22 + 8));
          v9 = DwmAsyncMagnSetDesktopTransform(v25, v24);
          if ( (v9 & 0x80000000) != 0 )
            return v9;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 224LL) = 0LL;
          goto LABEL_33;
        }
      }
      else
      {
        v17[5] = *(_QWORD *)Buf1;
        v17[6] = *((_QWORD *)Buf1 + 1);
        v32 = *((double *)Buf1 + 2);
        v33 = v17[3];
        *((double *)v19 + 7) = v32;
        v34 = *((double *)Buf1 + 3);
        *((double *)v19 + 8) = v34;
        if ( (*(_DWORD *)(v33 + 368) & 0xF) == 0 )
        {
          v35 = *(_WORD *)(gpsi + 9974LL);
          if ( v35 > 0x60u )
          {
            *((double *)v19 + 7) = (double)v35 * v32 / 96.0;
            *((double *)v19 + 8) = (double)*(unsigned __int16 *)(gpsi + 9974LL) * v34 / 96.0;
            *((double *)v19 + 5) = *(double *)Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpsi + 9974LL);
            *((double *)v19 + 6) = *((double *)Buf1 + 1) * 96.0 / (double)*(unsigned __int16 *)(gpsi + 9974LL);
          }
        }
      }
      v9 = 0;
LABEL_33:
      if ( (v9 & 0x80000000) != 0 )
        return v9;
      *(_OWORD *)(v19 + 11) = *(_OWORD *)Buf1;
      v36 = *((_OWORD *)Buf1 + 1);
      *((_DWORD *)v19 + 4) |= 2u;
      *(_OWORD *)(v19 + 13) = v36;
      return 0;
    }
    if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v9;
    v37 = MagpFindLensContext((__int64)ThreadContext, a3, v7);
    v38 = v37;
    if ( !v37 )
      return v9;
    if ( (*(_DWORD *)(v37[3] + 368) & 0xF) != 0 || (v39 = *(_WORD *)(gpsi + 9974LL), v39 <= 0x60u) )
    {
      v40 = Buf1;
      if ( (v37[2] & 2) == 0 )
      {
        *((_DWORD *)v37 + 8) = -*Buf1;
        v41 = Buf1[1];
        goto LABEL_45;
      }
    }
    else
    {
      v40 = Buf1;
      if ( (v37[2] & 2) == 0 )
      {
        *((_DWORD *)v37 + 8) = -EngMulDiv(*Buf1, v39, 96);
        v41 = EngMulDiv(Buf1[1], *(unsigned __int16 *)(gpsi + 9974LL), 96);
        goto LABEL_45;
      }
    }
    *((_DWORD *)v37 + 8) = -(int)((double)*v40 * *((double *)v37 + 11));
    v41 = (int)((double)v40[1] * *((double *)v37 + 12));
LABEL_45:
    *((_DWORD *)v38 + 9) = -v41;
    v42 = *(_OWORD *)v40;
    *((_DWORD *)v38 + 4) |= 1u;
    *(_OWORD *)(v38 + 9) = v42;
    return 0;
  }
  MagpRevokeInputTransfrom();
  if ( !a3 )
    return v9;
  v43 = MagpFindLensContext(v15, a3, v7);
  v10 = (__int64)v43;
  if ( !v43 )
    return v9;
  v46 = *v43;
  v47 = (__int64 *)v43[1];
  if ( *(_QWORD *)(v46 + 8) != v10 || *v47 != v10 )
    __fastfail(3u);
  *v47 = v46;
  *(_QWORD *)(v46 + 8) = v47;
  if ( a3 != -1 )
  {
    if ( (*(_DWORD *)(v10 + 16) & 0x40) != 0 )
    {
      ChangeComposableCursor(0);
      *(_DWORD *)(v10 + 16) &= ~0x40u;
    }
    if ( (*(_DWORD *)(v10 + 16) & 0x20) != 0 )
    {
      v9 = 0;
    }
    else
    {
      v48 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 8LL));
      v9 = DwmAsyncMagnDestroy(v48);
    }
    HMAssignmentUnlock(v10 + 24);
    v49 = *(_QWORD *)(v10 + 232);
    if ( v49 )
      Win32FreePool(v49, v44, v45);
    v50 = *(_QWORD *)(v10 + 256);
    if ( v50 )
      Win32FreePool(v50, v44, v45);
    if ( (v9 & 0x80000000) != 0 )
      goto LABEL_166;
    goto LABEL_70;
  }
  v51 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL);
  if ( *(_QWORD *)(v51 + 232) == v10 )
  {
    v52 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v51 + 8));
    v9 = DwmAsyncMagnSetDesktopColorTransform(v52);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) + 232LL) = 0LL;
  }
  else
  {
    v9 = 0;
  }
  v53 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL);
  if ( *(_QWORD *)(v53 + 224) == v10 )
  {
    v54 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v53 + 8));
    v55 = DwmAsyncMagnSetDesktopTransform(v54, 0);
    v44 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL);
    *(_QWORD *)(v44 + 224) = 0LL;
  }
  else
  {
    v55 = 0;
  }
  if ( (v9 & 0x80000000) == 0 )
  {
    if ( v55 >= 0 )
    {
LABEL_70:
      v9 = 0;
      goto LABEL_166;
    }
    v9 = v55;
  }
LABEL_166:
  if ( v10 )
    Win32FreePool(v10, v44, v45);
  return v9;
}
