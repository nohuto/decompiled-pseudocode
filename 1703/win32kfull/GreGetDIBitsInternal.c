/*
 * XREFs of GreGetDIBitsInternal @ 0x1C00800D0
 * Callers:
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0046620 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiGetDIBitsInternal @ 0x1C007F950 (NtGdiGetDIBitsInternal.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0137E70 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C029453C (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00DADC0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        HDC a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct tagBITMAPINFO *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  struct tagBITMAPINFO *v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // r12d
  unsigned int DIBitsInternalWorker; // esi
  unsigned __int8 *v13; // r13
  BOOL v14; // r15d
  DC *v15; // rcx
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rax
  struct tagBITMAPINFO *v19; // rbx
  unsigned int biSize; // r14d
  LONG v21; // edx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  DWORD v25; // eax
  __int64 v26; // rcx
  LONG *p_biXPelsPerMeter; // rsi
  __int64 v28; // rbx
  unsigned __int16 v30; // ax
  HDC v31; // [rsp+30h] [rbp-81h]
  HBITMAP v32; // [rsp+38h] [rbp-79h]
  __int64 v33; // [rsp+78h] [rbp-39h] BYREF
  __int64 v34; // [rsp+80h] [rbp-31h] BYREF
  __int64 v35; // [rsp+88h] [rbp-29h]
  _BYTE v36[8]; // [rsp+90h] [rbp-21h] BYREF
  DC *v37[2]; // [rsp+98h] [rbp-19h] BYREF
  DC *v38[8]; // [rsp+A8h] [rbp-9h] BYREF

  v9 = a6;
  v10 = a2;
  if ( !a6 || a7 > 2 || (v11 = a9, a9 < 0xC) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v38[1] = 0LL;
  DIBitsInternalWorker = 1;
  LOBYTE(a2) = 1;
  v13 = (unsigned __int8 *)(a5 & -(__int64)(a4 != 0));
  v14 = 1;
  v38[0] = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( !v38[0] )
    goto LABEL_9;
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v38) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v38[0] + 3);
LABEL_9:
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    goto LABEL_10;
  }
  v15 = v38[0];
  if ( (*((_DWORD *)v38[0] + 134) & 4) != 0 )
    DC::vMarkTransformDirty(v38[0]);
  v16 = *(_DWORD *)(*((_QWORD *)v15 + 6) + 32LL);
  XDCOBJ::RestoreAttributes((XDCOBJ *)v38);
  _InterlockedDecrement((volatile signed __int32 *)v38[0] + 3);
  v14 = ((v16 >> 15) & 1) == 0;
  if ( v14 )
    goto LABEL_9;
LABEL_10:
  LOBYTE(v17) = 5;
  v18 = HmgShareLockCheck(v10, v17);
  a6 = (struct tagBITMAPINFO *)v18;
  v19 = (struct tagBITMAPINFO *)v18;
  if ( !v18 )
    goto LABEL_38;
  biSize = v9->bmiHeader.biSize;
  if ( !v13 )
  {
    if ( biSize != 12 )
    {
      if ( v11 >= 0x28 )
      {
        if ( !v9->bmiHeader.biBitCount )
        {
          if ( biSize > 0x28 )
            memset(v9, 0, v9->bmiHeader.biSize);
          v9->bmiHeader.biSize = 40;
          v21 = *(_DWORD *)&v19[1].bmiHeader.biPlanes;
          v9->bmiHeader.biWidth = v21;
          v9->bmiHeader.biHeight = v19[1].bmiHeader.biCompression;
          v9->bmiHeader.biCompression = 0;
          v9->bmiHeader.biPlanes = 1;
          v22 = *((unsigned __int16 *)&galBitsPerPixel + 2 * (unsigned int)v19[2].bmiHeader.biHeight);
          v9->bmiHeader.biBitCount = v22;
          v23 = 0;
          if ( (((_WORD)v22 - 16) & 0xFFEF) == 0 )
            v23 = 3;
          v9->bmiHeader.biCompression = v23;
          v24 = v9->bmiHeader.biHeight * (((v21 * v22 + 31) >> 3) & 0xFFFFFFFC);
          *(_QWORD *)&v9->bmiHeader.biXPelsPerMeter = 0LL;
          v9->bmiHeader.biSizeImage = v24;
          v25 = *((_DWORD *)&gacPalEntries + (unsigned int)v19[2].bmiHeader.biHeight);
          v9->bmiHeader.biClrImportant = v25;
          v9->bmiHeader.biClrUsed = v25;
          goto LABEL_33;
        }
        goto LABEL_20;
      }
LABEL_38:
      DIBitsInternalWorker = 0;
      goto LABEL_33;
    }
    if ( !HIWORD(v9->bmiHeader.biHeight) )
    {
      LOWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v18 + 56);
      HIWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v18 + 60);
      LOWORD(v9->bmiHeader.biHeight) = 1;
      v30 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v18 + 96));
      HIWORD(v9->bmiHeader.biHeight) = v30;
      if ( v30 >= 0x10u )
        HIWORD(v9->bmiHeader.biHeight) = 24;
      goto LABEL_33;
    }
  }
LABEL_20:
  if ( biSize >= 0x28 && v9->bmiHeader.biCompression - 4 <= 1 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v37[0] = 0LL;
    v37[1] = 0LL;
    XDCOBJ::vLock(v37, a1);
    if ( v37[0] )
    {
      v26 = *((_QWORD *)v37[0] + 12);
      v34 = *((_QWORD *)v37[0] + 6);
      v33 = v26;
      if ( (*(_DWORD *)(v34 + 32) & 0x8000) != 0 )
      {
        DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                 biSize,
                                 (struct DCOBJ *)v37,
                                 (struct PDEVOBJ *)&v34,
                                 (struct SURFREF *)&a6,
                                 (struct XEPALOBJ *)&v33,
                                 v31,
                                 v32,
                                 a3,
                                 a4,
                                 v13,
                                 v9,
                                 a7,
                                 a8,
                                 v11);
      }
      else
      {
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v36, (struct XDCOBJ *)v37);
        p_biXPelsPerMeter = &v19->bmiHeader.biXPelsPerMeter;
        v28 = 0LL;
        v35 = 0LL;
        if ( p_biXPelsPerMeter
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(p_biXPelsPerMeter) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(p_biXPelsPerMeter) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(p_biXPelsPerMeter) + 112) & 0x200) == 0 )
        {
          v28 = SURFOBJ_TO_SURFACE_NOT_NULL(p_biXPelsPerMeter);
          v35 = v28;
          GreLockDisplayDevice(*(_QWORD *)(v28 + 48));
        }
        DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                 biSize,
                                 (struct DCOBJ *)v37,
                                 (struct PDEVOBJ *)&v34,
                                 (struct SURFREF *)&a6,
                                 (struct XEPALOBJ *)&v33,
                                 v31,
                                 v32,
                                 a3,
                                 a4,
                                 v13,
                                 v9,
                                 a7,
                                 a8,
                                 v11);
        if ( v28 )
          GreUnlockDisplayDevice(*(_QWORD *)(v28 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v36);
      }
      if ( v37[0] )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)v37);
        _InterlockedDecrement((volatile signed __int32 *)v37[0] + 3);
      }
      v19 = a6;
      goto LABEL_33;
    }
  }
  DIBitsInternalWorker = 0;
LABEL_33:
  if ( v19 )
    DEC_SHARE_REF_CNT(v19);
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return DIBitsInternalWorker;
}
