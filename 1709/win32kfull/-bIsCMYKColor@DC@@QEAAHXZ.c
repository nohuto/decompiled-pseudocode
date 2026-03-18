/*
 * XREFs of ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C012CCD4
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00191EC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bIsCMYKColor(DC *this)
{
  int v1; // r8d
  unsigned int v2; // edx

  v1 = *((_DWORD *)this + 28);
  v2 = 1;
  if ( (v1 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)this + 10) + 112LL) || (v1 & 0x10000000) == 0 )
    return 0;
  return v2;
}
