/*
 * XREFs of ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C0117E8C
 * Callers:
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003D9DC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     HT_Get8BPPMaskPalette @ 0x1C0139AB0 (HT_Get8BPPMaskPalette.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

_BOOL8 __fastcall PALMEMOBJ::bCreateHTPalette(PALMEMOBJ *this, int a2, struct _GDIINFO *a3)
{
  ULONG ulPrimaryOrder; // r9d
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v10; // eax
  int v11; // r12d
  unsigned int *p_peRed; // rdi
  LONG v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // edx
  int v17; // edx
  struct tagPALETTEENTRY *v18; // rax
  ULONG v19; // r8d
  __int64 i; // rdx
  char v21; // cl
  __int64 j; // rdx
  char v23; // cl
  __int64 k; // rdx
  char v25; // cl
  __int64 m; // rax
  unsigned int v27; // eax
  unsigned int v28; // eax
  _OWORD v29[2]; // [rsp+50h] [rbp-30h] BYREF

  if ( (unsigned int)(a2 - 5) <= 2 )
  {
    ulPrimaryOrder = a3->ulPrimaryOrder;
    if ( a2 == 5 )
    {
      v6 = 31744;
      v7 = 992;
      v8 = 31;
    }
    else
    {
      v6 = 16711680;
      v7 = 65280;
      v8 = 255;
    }
    if ( (ulPrimaryOrder & 1) != 0 )
    {
      v27 = v7;
      v7 = v8;
      v8 = v27;
    }
    if ( (ulPrimaryOrder & 2) != 0 )
    {
      v28 = v6;
      v6 = v7;
      v7 = v28;
    }
    else if ( (ulPrimaryOrder & 4) != 0 )
    {
      v10 = v6;
      v6 = v8;
      v8 = v10;
    }
    return PALMEMOBJ::bCreatePalette(this, 2u, 0, 0LL, v6, v7, v8, 0x100200u, 1) != 0;
  }
  v11 = 0;
  if ( !a2 )
  {
    p_peRed = (unsigned int *)&apalMono;
    v13 = 2;
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      p_peRed = (unsigned int *)v29;
      *(_QWORD *)&v29[0] = 0xFFFFFFLL;
    }
    goto LABEL_14;
  }
  v16 = a2 - 2;
  if ( !v16 )
  {
LABEL_27:
    v19 = a3->ulPrimaryOrder;
    v13 = 8;
    p_peRed = (unsigned int *)v29;
    v29[0] = *(_OWORD *)&apal3BPP;
    v29[1] = xmmword_1C0325D78;
    if ( (v19 & 1) != 0 )
    {
      for ( i = 1LL; i < 7; ++i )
      {
        v21 = *((_BYTE *)v29 + 4 * i + 1);
        *((_BYTE *)v29 + 4 * i + 1) = *((_BYTE *)v29 + 4 * i + 2);
        *((_BYTE *)v29 + 4 * i + 2) = v21;
      }
    }
    if ( (v19 & 2) != 0 )
    {
      for ( j = 1LL; j < 7; ++j )
      {
        v23 = *((_BYTE *)v29 + 4 * j);
        *((_BYTE *)v29 + 4 * j) = *((_BYTE *)v29 + 4 * j + 1);
        *((_BYTE *)v29 + 4 * j + 1) = v23;
      }
    }
    else if ( (v19 & 4) != 0 )
    {
      for ( k = 1LL; k < 7; ++k )
      {
        v25 = *((_BYTE *)v29 + 4 * k);
        *((_BYTE *)v29 + 4 * k) = *((_BYTE *)v29 + 4 * k + 2);
        *((_BYTE *)v29 + 4 * k + 2) = v25;
      }
    }
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      for ( m = 0LL; m < 2; ++m )
        v29[m] = _mm_xor_si128(_mm_load_si128((const __m128i *)&_xmm), _mm_loadu_si128((const __m128i *)&v29[m]));
    }
    goto LABEL_14;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v13 = HT_Get8BPPMaskPalette(
              0LL,
              a3->flHTFlags & 8,
              HIBYTE(a3->flHTFlags),
              a3->ciDevice.RedGamma,
              a3->ciDevice.GreenGamma,
              a3->ciDevice.BlueGamma);
      v18 = (struct tagPALETTEENTRY *)PALLOCMEM2((unsigned int)(4 * v13), 1818316871LL, 0);
      p_peRed = (unsigned int *)&v18->peRed;
      if ( !v18 )
        return 0LL;
      if ( (a3->flHTFlags & 0x400) != 0 )
        *v18 = (struct tagPALETTEENTRY)809650002;
      else
        *v18 = 0;
      HT_Get8BPPMaskPalette(
        v18,
        a3->flHTFlags & 8,
        HIBYTE(a3->flHTFlags),
        a3->ciDevice.RedGamma,
        a3->ciDevice.GreenGamma,
        a3->ciDevice.BlueGamma);
      v11 = 1;
      goto LABEL_14;
    }
    goto LABEL_27;
  }
  v13 = 16;
  p_peRed = (unsigned int *)&apalVGA;
LABEL_14:
  if ( PALMEMOBJ::bCreatePalette(this, 1u, v13, p_peRed, 0, 0, 0, 0x100400u, 1) )
  {
    if ( v11 )
      Win32FreePool(p_peRed, v14, v15);
    return 1LL;
  }
  if ( v11 )
    Win32FreePool(p_peRed, v14, v15);
  return 0LL;
}
