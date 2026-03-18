/*
 * XREFs of GreGetDIBitsInternal @ 0x1C0018D1C
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x1C0018440 (NtGdiGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0099310 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C013ECE8 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0290C64 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00191EC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
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
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  unsigned int DIBitsInternalWorker; // esi
  unsigned __int8 *v13; // r12
  DC *v14; // rbx
  int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // rax
  _DWORD *v20; // rbx
  unsigned int biSize; // r14d
  LONG v22; // edx
  __int64 v23; // rax
  int v24; // ecx
  int v25; // eax
  DWORD v26; // eax
  __int64 v28; // rcx
  _DWORD *v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rbx
  unsigned __int16 v32; // ax
  HDC v33; // [rsp+30h] [rbp-99h]
  HBITMAP v34; // [rsp+38h] [rbp-91h]
  int v35; // [rsp+78h] [rbp-51h] BYREF
  BOOL v36; // [rsp+7Ch] [rbp-4Dh]
  _DWORD *v37; // [rsp+80h] [rbp-49h] BYREF
  __int64 v38; // [rsp+88h] [rbp-41h] BYREF
  __int64 v39; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v40[8]; // [rsp+98h] [rbp-31h] BYREF
  __int64 *v41; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-21h]
  DC *v43; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-11h]
  __int64 v46; // [rsp+120h] [rbp+57h]

  v46 = a2;
  v9 = a6;
  if ( !a6 || (v10 = a7, a7 > 2) || (v11 = a9, a9 < 0xC) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v44 = 0LL;
  DIBitsInternalWorker = 1;
  v36 = 1;
  v13 = (unsigned __int8 *)(a5 & -(__int64)(a4 != 0));
  LOBYTE(a2) = 1;
  v43 = (DC *)HmgLockEx(a1, a2, 0LL);
  v14 = v43;
  if ( !v43 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
      goto LABEL_8;
    }
LABEL_12:
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    goto LABEL_13;
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v43) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v43 + 3);
    goto LABEL_12;
  }
  v14 = v43;
  if ( (*((_DWORD *)v43 + 134) & 4) != 0 )
    DC::vMarkTransformDirty(v43);
LABEL_8:
  if ( !v14 )
    goto LABEL_12;
  v15 = *(_DWORD *)(*((_QWORD *)v14 + 6) + 32LL);
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v43);
  LODWORD(a6) = 0;
  v16 = *(_QWORD *)v43;
  HmgDecrementExclusiveReferenceCountEx(v43, HIDWORD(v44), &a6);
  v18 = v15 & 0x8000;
  v36 = v18 == 0;
  if ( (_DWORD)a6 )
    bDeleteDCInternalEx(v16, 0LL);
  if ( !v18 )
    goto LABEL_12;
LABEL_13:
  LOBYTE(v17) = 5;
  v19 = HmgShareLockCheck(v46, v17);
  v37 = (_DWORD *)v19;
  v20 = (_DWORD *)v19;
  if ( !v19 )
    goto LABEL_51;
  biSize = v9->bmiHeader.biSize;
  if ( v13 )
  {
LABEL_28:
    if ( biSize >= 0x28 && v9->bmiHeader.biCompression - 4 <= 1 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      v41 = 0LL;
      v42 = 0LL;
      XDCOBJ::vLock((XDCOBJ *)&v41, a1);
      if ( v41 )
      {
        v28 = v41[12];
        v39 = v41[6];
        v38 = v28;
        if ( (*(_DWORD *)(v39 + 32) & 0x8000) != 0 )
        {
          DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                   biSize,
                                   (struct DCOBJ *)&v41,
                                   (struct PDEVOBJ *)&v39,
                                   (struct SURFREF *)&v37,
                                   (struct XEPALOBJ *)&v38,
                                   v33,
                                   v34,
                                   a3,
                                   a4,
                                   v13,
                                   v9,
                                   v10,
                                   a8,
                                   v11);
        }
        else
        {
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v40, (struct XDCOBJ *)&v41);
          v29 = v20 + 6;
          v30 = 0LL;
          if ( v29
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) & 0x200) == 0 )
          {
            v30 = SURFOBJ_TO_SURFACE_NOT_NULL(v29);
            GreLockDisplayDevice(*(_QWORD *)(v30 + 48));
          }
          DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                   biSize,
                                   (struct DCOBJ *)&v41,
                                   (struct PDEVOBJ *)&v39,
                                   (struct SURFREF *)&v37,
                                   (struct XEPALOBJ *)&v38,
                                   v33,
                                   v34,
                                   a3,
                                   a4,
                                   v13,
                                   v9,
                                   v10,
                                   a8,
                                   v11);
          if ( v30 )
            GreUnlockDisplayDevice(*(_QWORD *)(v30 + 48));
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v40);
        }
        if ( v41 )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v41);
          v35 = 0;
          v31 = *v41;
          HmgDecrementExclusiveReferenceCountEx(v41, HIDWORD(v42), &v35);
          if ( v35 )
            bDeleteDCInternalEx(v31, 0LL);
        }
        v20 = v37;
        goto LABEL_23;
      }
    }
    goto LABEL_51;
  }
  if ( biSize == 12 )
  {
    if ( !HIWORD(v9->bmiHeader.biHeight) )
    {
      LOWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v19 + 56);
      HIWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v19 + 60);
      LOWORD(v9->bmiHeader.biHeight) = 1;
      v32 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v19 + 96));
      HIWORD(v9->bmiHeader.biHeight) = v32;
      if ( v32 >= 0x10u )
        HIWORD(v9->bmiHeader.biHeight) = 24;
      goto LABEL_23;
    }
    goto LABEL_28;
  }
  if ( v11 >= 0x28 )
  {
    if ( !v9->bmiHeader.biBitCount )
    {
      if ( biSize > 0x28 )
        memset(v9, 0, v9->bmiHeader.biSize);
      v9->bmiHeader.biSize = 40;
      v22 = v20[14];
      v9->bmiHeader.biWidth = v22;
      v9->bmiHeader.biHeight = v20[15];
      v9->bmiHeader.biCompression = 0;
      v9->bmiHeader.biPlanes = 1;
      v23 = (unsigned int)v20[24];
      *(_QWORD *)&v9->bmiHeader.biXPelsPerMeter = 0LL;
      v24 = *((unsigned __int16 *)&galBitsPerPixel + 2 * v23);
      v9->bmiHeader.biBitCount = v24;
      v25 = 0;
      if ( (((_WORD)v24 - 16) & 0xFFEF) == 0 )
        v25 = 3;
      v9->bmiHeader.biCompression = v25;
      v9->bmiHeader.biSizeImage = v9->bmiHeader.biHeight * (((v22 * v24 + 31) >> 3) & 0xFFFFFFFC);
      v26 = *((_DWORD *)&gacPalEntries + (unsigned int)v20[24]);
      v9->bmiHeader.biClrImportant = v26;
      v9->bmiHeader.biClrUsed = v26;
      goto LABEL_23;
    }
    goto LABEL_28;
  }
LABEL_51:
  DIBitsInternalWorker = 0;
LABEL_23:
  if ( v20 )
    DEC_SHARE_REF_CNT(v20);
  if ( v36 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return DIBitsInternalWorker;
}
