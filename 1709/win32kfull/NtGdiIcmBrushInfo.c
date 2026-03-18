/*
 * XREFs of NtGdiIcmBrushInfo @ 0x1C02917E0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C009A190 (GreGetBitmapBitsSize.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0290C64 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0290E4C (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 */

struct tagBITMAPINFO *__fastcall NtGdiIcmBrushInfo(
        HDC a1,
        HBRUSH a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7,
        int a8)
{
  struct tagBITMAPINFO *result; // rax
  struct tagBITMAPINFO *v11; // r14
  _DWORD *v12; // rdx
  unsigned int v13; // edi
  struct tagBITMAPINFO *v14; // rcx
  __int64 v15; // r8
  unsigned int *v16; // rcx
  unsigned int BitmapBitsSize; // eax
  unsigned int v18; // r11d
  ULONG64 v19; // rcx
  unsigned int *v20; // rdx
  struct tagBITMAPINFO *v21; // rax
  __int64 v22; // r8
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  unsigned int v25; // [rsp+40h] [rbp-48h] BYREF
  int v26; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-40h] BYREF
  struct tagBITMAPINFO *v28; // [rsp+50h] [rbp-38h]

  v25 = 0;
  result = (struct tagBITMAPINFO *)PALLOCMEM2(0x428uLL, 1835231559LL, 0);
  v11 = result;
  v28 = result;
  if ( result )
  {
    if ( !a8 )
    {
      v26 = 0;
      v27 = 0;
      if ( a4 )
      {
        v20 = (unsigned int *)a5;
        if ( a5 >= MmUserProbeAddress )
          v20 = (unsigned int *)MmUserProbeAddress;
        v25 = *v20;
        ProbeForWrite((volatile void *)a4, v25, 4u);
      }
      v13 = GreIcmQueryBrushBitmap(a1, a2, v11, a4, &v25, &v27, &v26);
      if ( v13 )
      {
        ProbeForWrite((volatile void *)a3, 0x428uLL, 4u);
        v21 = v11;
        v22 = 8LL;
        do
        {
          *(_OWORD *)a3 = *(_OWORD *)&v21->bmiHeader.biSize;
          *(_OWORD *)(a3 + 16) = *(_OWORD *)&v21->bmiHeader.biCompression;
          *(_OWORD *)(a3 + 32) = *(_OWORD *)&v21->bmiHeader.biClrUsed;
          *(_OWORD *)(a3 + 48) = *(_OWORD *)&v21[1].bmiHeader.biWidth;
          *(_OWORD *)(a3 + 64) = *(_OWORD *)&v21[1].bmiHeader.biSizeImage;
          *(_OWORD *)(a3 + 80) = *(_OWORD *)&v21[1].bmiHeader.biClrImportant;
          *(_OWORD *)(a3 + 96) = *(_OWORD *)&v21[2].bmiHeader.biHeight;
          a3 += 128LL;
          *(_OWORD *)(a3 - 16) = *(_OWORD *)&v21[2].bmiHeader.biXPelsPerMeter;
          v21 = (struct tagBITMAPINFO *)((char *)v21 + 128);
          --v22;
        }
        while ( v22 );
        *(_OWORD *)a3 = *(_OWORD *)&v21->bmiHeader.biSize;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v21->bmiHeader.biCompression;
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v21->bmiHeader.biClrUsed;
        v12 = (_DWORD *)a5;
        if ( a5 >= MmUserProbeAddress )
          v12 = (_DWORD *)MmUserProbeAddress;
        *v12 = v25;
        v23 = (_DWORD *)a7;
        if ( a7 )
        {
          if ( a7 >= MmUserProbeAddress )
            v23 = (_DWORD *)MmUserProbeAddress;
          *v23 = v26;
        }
        v24 = (_DWORD *)a6;
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = v27;
        }
      }
      goto LABEL_40;
    }
    if ( a8 == 1 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + 1064 > MmUserProbeAddress || a3 + 1064 < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v14 = result;
      v15 = 8LL;
      do
      {
        *(_OWORD *)&v14->bmiHeader.biSize = *(_OWORD *)a3;
        *(_OWORD *)&v14->bmiHeader.biCompression = *(_OWORD *)(a3 + 16);
        *(_OWORD *)&v14->bmiHeader.biClrUsed = *(_OWORD *)(a3 + 32);
        *(_OWORD *)&v14[1].bmiHeader.biWidth = *(_OWORD *)(a3 + 48);
        *(_OWORD *)&v14[1].bmiHeader.biSizeImage = *(_OWORD *)(a3 + 64);
        *(_OWORD *)&v14[1].bmiHeader.biClrImportant = *(_OWORD *)(a3 + 80);
        *(_OWORD *)&v14[2].bmiHeader.biHeight = *(_OWORD *)(a3 + 96);
        v14 = (struct tagBITMAPINFO *)((char *)v14 + 128);
        *(_OWORD *)&v14[-1].bmiHeader.biYPelsPerMeter = *(_OWORD *)(a3 + 112);
        a3 += 128LL;
        --v15;
      }
      while ( v15 );
      *(_OWORD *)&v14->bmiHeader.biSize = *(_OWORD *)a3;
      *(_OWORD *)&v14->bmiHeader.biCompression = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v14->bmiHeader.biClrUsed = *(_QWORD *)(a3 + 32);
      v16 = (unsigned int *)a5;
      if ( a5 >= MmUserProbeAddress )
        v16 = (unsigned int *)MmUserProbeAddress;
      v25 = *v16;
      BitmapBitsSize = GreGetBitmapBitsSize((__int64)result);
      if ( BitmapBitsSize && BitmapBitsSize <= v18 )
      {
        if ( (a4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = a4 + BitmapBitsSize;
        if ( v19 > MmUserProbeAddress || v19 < a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v13 = GreIcmSetBrushBitmap(a1, a2, v11, (void *)a4);
        goto LABEL_40;
      }
    }
    else
    {
      EngSetLastError(0x57u);
    }
    v13 = 0;
LABEL_40:
    Win32FreePool(v11, v12);
    return (struct tagBITMAPINFO *)v13;
  }
  return result;
}
