/*
 * XREFs of ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754
 * Callers:
 *     NtGdiFONTOBJ_pifi @ 0x1C00B8040 (NtGdiFONTOBJ_pifi.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C00B9F34 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00BB360 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C010F060 (-UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0113460 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0270070 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C0284E60 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0285450 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C0285AF0 (-UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02866F0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02868C0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C0286CA0 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C0287050 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02881A0 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C028CC4C (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C028D930 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C028F5F0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C028F730 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C028FBA0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C0290220 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C00BA29C (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C00BA37C (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void *__fastcall UMPDOBJ::_AllocUserMem(UMPDOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  size_t v6; // rbx
  void *v7; // rdi
  __int64 v8; // rdx
  UMPDOBJ *v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  void *KernelPtr; // rax
  __int64 ThreadWin32Thread; // rdi
  __int64 v16; // rcx
  struct _UMPDHEAP *UMPDHeap; // rax

  v4 = a3;
  if ( (int)a2 + 7 < (unsigned int)a2 )
    return 0LL;
  v6 = ((_DWORD)a2 + 7) & 0xFFFFFFF8;
  v7 = 0LL;
  if ( *((_DWORD *)this + 109) && *((_DWORD *)this + 102) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    v12 = *((_QWORD *)this + 49);
    if ( v12 )
    {
      v13 = *(unsigned int *)(v12 + 48);
      if ( (int)v13 + (int)v6 >= (unsigned int)v13
        && (unsigned __int64)(unsigned int)(v13 + v6) <= *(_QWORD *)(v12 + 24) )
      {
        v7 = (void *)(v13 + *(_QWORD *)(v12 + 16) + *(_QWORD *)(v12 + 40));
        *(_DWORD *)(v12 + 48) = v13 + v6;
      }
    }
    goto LABEL_8;
  }
  if ( *((_DWORD *)this + 109) && !*((_QWORD *)this + 7) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v16 = *(_QWORD *)(ThreadWin32Thread + 56);
    if ( v16 )
    {
      *(_DWORD *)(v16 + 24) = 0;
      *((_QWORD *)this + 7) = v16;
    }
    else
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(0LL);
      *((_QWORD *)this + 7) = UMPDHeap;
      *(_QWORD *)(ThreadWin32Thread + 56) = UMPDHeap;
    }
  }
  v8 = *((_QWORD *)this + 7);
  if ( !v8 )
    return 0LL;
  if ( !*(_QWORD *)v8 )
    return 0LL;
  v9 = (UMPDOBJ *)(*(_QWORD *)(v8 + 16) - *(unsigned int *)(v8 + 24));
  if ( (unsigned int)v6 > (unsigned __int64)v9 && !(unsigned int)UMPDOBJ::GrowUMPDHeap(v9, (struct _UMPDHEAP *)v8, v6) )
    return 0LL;
  v10 = *((_QWORD *)this + 7);
  v7 = (void *)(*(_QWORD *)v10 + *(unsigned int *)(v10 + 24));
  *(_DWORD *)(v10 + 24) += v6;
LABEL_8:
  if ( v7 )
  {
    if ( v4 )
    {
      KernelPtr = UMPDOBJ::GetKernelPtr(this, v7);
      memset(KernelPtr, 0, v6);
    }
  }
  return v7;
}
