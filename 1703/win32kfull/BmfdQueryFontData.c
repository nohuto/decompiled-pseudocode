/*
 * XREFs of BmfdQueryFontData @ 0x1C023307C
 * Callers:
 *     BmfdQueryFontDataTE @ 0x1C0232D10 (BmfdQueryFontDataTE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     vBmfdMarkFontGone @ 0x1C0232E10 (vBmfdMarkFontGone.c)
 *     bReconnectBmfdFont @ 0x1C0233590 (bReconnectBmfdFont.c)
 *     cjBmfdDeviceMetrics @ 0x1C023361C (cjBmfdDeviceMetrics.c)
 *     vBmfdScrubGLYPHBITS @ 0x1C0233908 (vBmfdScrubGLYPHBITS.c)
 *     vFill_RotateGLYPHDATA @ 0x1C0233958 (vFill_RotateGLYPHDATA.c)
 *     pjRawBitmap @ 0x1C0234904 (pjRawBitmap.c)
 *     BmfdOpenFontContext @ 0x1C0235378 (BmfdOpenFontContext.c)
 *     cjGlyphDataSimulated @ 0x1C0235AE8 (cjGlyphDataSimulated.c)
 *     vComputeSimulatedGLYPHDATA @ 0x1C0235B70 (vComputeSimulatedGLYPHDATA.c)
 *     vCvtToBmp @ 0x1C0235C90 (vCvtToBmp.c)
 *     vCvtToBoldBmp @ 0x1C0235D30 (vCvtToBoldBmp.c)
 *     vCvtToBoldItalicBmp @ 0x1C0235E08 (vCvtToBoldItalicBmp.c)
 *     vCvtToItalicBmp @ 0x1C0235F7C (vCvtToItalicBmp.c)
 *     vStretchCvtToBitmap @ 0x1C02361C4 (vStretchCvtToBitmap.c)
 */

__int64 __fastcall BmfdQueryFontData(__int64 a1, int a2, unsigned int a3, __int64 a4, _DWORD *pv, size_t Size)
{
  _DWORD *v9; // rbx
  __int64 v11; // rsi
  int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // r15
  __int16 v15; // r13
  int v16; // r8d
  unsigned int v17; // r15d
  int v18; // edx
  int v19; // r9d
  int v20; // r10d
  ULONG v21; // r11d
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  void *v25; // r14
  __int64 v26; // [rsp+50h] [rbp-178h]
  ULONG v27; // [rsp+58h] [rbp-170h]
  __int64 v28; // [rsp+60h] [rbp-168h]
  unsigned int v30; // [rsp+6Ch] [rbp-15Ch] BYREF
  PVOID v31; // [rsp+70h] [rbp-158h]
  void *v32; // [rsp+78h] [rbp-150h]
  __int64 v33; // [rsp+80h] [rbp-148h]
  __int64 v34; // [rsp+88h] [rbp-140h]
  _BYTE v35[256]; // [rsp+90h] [rbp-138h] BYREF

  v34 = a4;
  v9 = pv;
  v31 = pv;
  v27 = 0;
  v32 = 0LL;
  if ( !(unsigned int)bReconnectBmfdFont(*(_QWORD *)(a1 + 24)) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = BmfdOpenFontContext(a1);
  v11 = *(_QWORD *)(a1 + 56);
  v33 = v11;
  if ( !v11 )
    return 0xFFFFFFFFLL;
  v12 = a2 - 1;
  if ( v12 )
  {
    if ( v12 == 2 )
    {
      if ( pv )
        return cjBmfdDeviceMetrics(v11, pv);
      else
        return 124LL;
    }
    return 0xFFFFFFFFLL;
  }
  v13 = *(_QWORD *)(v11 + 24);
  v14 = v13 + 36;
  v26 = v13 + 36;
  v15 = *(_WORD *)(*(_QWORD *)(v13 + 80) + 60LL);
  v28 = pjRawBitmap(a3, v13 + 36, v13, &v30);
  v16 = *(_DWORD *)(v11 + 40) * *(unsigned __int16 *)(v14 + 8);
  v17 = v30;
  v21 = cjGlyphDataSimulated(a1, *(_DWORD *)(v11 + 36) * v30, v16, 0, 0);
  v22 = *(_DWORD *)(v11 + 16);
  switch ( v22 )
  {
    case 0:
      goto LABEL_16;
    case 900:
LABEL_15:
      v27 = cjGlyphDataSimulated(
              a1,
              *(_DWORD *)(v11 + 36) * v17,
              *(_DWORD *)(v11 + 40) * (unsigned int)*(unsigned __int16 *)(v26 + 8),
              v19,
              v22);
      break;
    case 1800:
LABEL_16:
      v27 = v21;
      break;
    case 2700:
      goto LABEL_15;
  }
  if ( *(_DWORD *)(v11 + 16) && pv )
  {
    v32 = pv;
    v9 = EngAllocMem(0, v21, 0x64666D42u);
    v31 = v9;
    if ( !v9 )
      return 0xFFFFFFFFLL;
    v20 = v28;
  }
  if ( a4 )
  {
    vComputeSimulatedGLYPHDATA(
      a4,
      v20,
      v17,
      *(unsigned __int16 *)(v26 + 8),
      v15,
      *(_DWORD *)(v11 + 36),
      *(_DWORD *)(v11 + 40),
      a1);
    *(_DWORD *)(a4 + 8) = a3;
  }
  if ( v9 )
  {
    if ( v17 )
    {
      v23 = *(_DWORD *)(v11 + 52);
      if ( (v23 & 1) != 0 )
      {
        if ( (v23 & 2) != 0 )
        {
          EngAcquireSemaphore(ghsemBMFD);
          vStretchCvtToBitmap(
            v9,
            v28,
            v17,
            *(unsigned __int16 *)(v26 + 8),
            v15,
            v11 + 56,
            *(_DWORD *)(v11 + 36),
            *(_DWORD *)(v11 + 40),
            *(_DWORD *)(a1 + 12) & 0x6000);
          EngReleaseSemaphore(ghsemBMFD);
        }
        else
        {
          vStretchCvtToBitmap(
            v9,
            v28,
            v17,
            *(unsigned __int16 *)(v26 + 8),
            v15,
            v35,
            *(_DWORD *)(v11 + 36),
            *(_DWORD *)(v11 + 40),
            *(_DWORD *)(a1 + 12) & 0x6000);
        }
      }
      else
      {
        v24 = *(_DWORD *)(a1 + 12) & 0x6000;
        if ( v24 )
        {
          switch ( v24 )
          {
            case 8192:
              vCvtToBoldBmp((_DWORD)v9, v18, v28, v17, *(unsigned __int16 *)(v26 + 8), v15);
              break;
            case 16384:
              vCvtToItalicBmp((_DWORD)v9, v18, v28, v17, *(unsigned __int16 *)(v26 + 8), v15);
              break;
            case 24576:
              vCvtToBoldItalicBmp((_DWORD)v9, v18, v28, v17, *(unsigned __int16 *)(v26 + 8), v15);
              break;
          }
        }
        else
        {
          vCvtToBmp((_DWORD)v9, v18, v28, v17, *(unsigned __int16 *)(v26 + 8), v15);
        }
      }
    }
    else
    {
      *v9 = 0;
      v9[1] = -v15;
      v9[2] = 1;
      v9[3] = 1;
      v9[4] = 0;
    }
    if ( a4 )
      *(_QWORD *)a4 = v9;
    vBmfdScrubGLYPHBITS(v9);
  }
  if ( *(_DWORD *)(v11 + 16) )
  {
    v25 = v32;
    if ( v32 )
      memset(v32, 0, (unsigned int)Size);
    vFill_RotateGLYPHDATA(a4, v9, v25, *(unsigned int *)(v11 + 16));
    if ( v9 )
      EngFreeMem(v9);
  }
  return v27;
}
