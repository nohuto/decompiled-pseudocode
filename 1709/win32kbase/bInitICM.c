/*
 * XREFs of bInitICM @ 0x1C01DF194
 * Callers:
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     GreGetStockObject @ 0x1C0048B90 (GreGetStockObject.c)
 *     HmgMarkUndeletable @ 0x1C0063790 (HmgMarkUndeletable.c)
 *     HmgShareLock @ 0x1C006E5E0 (HmgShareLock.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C006EF50 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C006EFA0 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 bInitICM()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  int v2; // ecx
  _BYTE *v3; // rcx
  __int64 v4; // rax
  struct tagLOGCOLORSPACEW *v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct HOBJ__ *ColorSpace; // rax
  struct HOBJ__ *v18; // rdi
  HCOLORSPACE StockObject; // rax
  __int64 v20; // rdx
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h]
  int v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  _BYTE v27[588]; // [rsp+B8h] [rbp-50h] BYREF
  int v28; // [rsp+304h] [rbp+1FCh]

  QueryTable.Flags = 292;
  v22 = 0;
  QueryTable.Name = L"GdiIcmControl";
  QueryTable.QueryRoutine = 0LL;
  v0 = 1;
  QueryTable.EntryContext = &v22;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v24 = 0LL;
  v25 = 0;
  v26 = 0LL;
  v1 = RtlQueryRegistryValues(3u, L"ICM", &QueryTable, 0LL, 0LL);
  v2 = v22;
  if ( v1 < 0 )
    v2 = 0;
  v22 = v2;
  if ( (v2 & 0x10000) == 0 )
  {
    dword_1C018DAAC = 1934772034;
    wcscpy_s(&Dst, 0x104uLL, L"sRGB Color Space Profile.icm");
  }
  giIcmGammaRange = 128;
  QueryTable.Name = L"GdiIcmGammaRange";
  QueryTable.EntryContext = &giIcmGammaRange;
  if ( RtlQueryRegistryValues(3u, L"ICM", &QueryTable, 0LL, 0LL) < 0 )
    giIcmGammaRange = 128;
  if ( giIcmGammaRange > 0x100 )
    giIcmGammaRange = 256;
  v3 = v27;
  v4 = 4LL;
  v5 = &gcsStockColorSpace;
  do
  {
    v6 = *(_OWORD *)&v5->lcsIntent;
    *(_OWORD *)v3 = *(_OWORD *)&v5->lcsSignature;
    v7 = *(_OWORD *)&v5->lcsEndpoints.ciexyzGreen.ciexyzX;
    *((_OWORD *)v3 + 1) = v6;
    v8 = *(_OWORD *)&v5->lcsEndpoints.ciexyzBlue.ciexyzY;
    *((_OWORD *)v3 + 2) = v7;
    v9 = *(_OWORD *)&v5->lcsGammaBlue;
    *((_OWORD *)v3 + 3) = v8;
    v10 = *(_OWORD *)&v5->lcsFilename[6];
    *((_OWORD *)v3 + 4) = v9;
    v11 = *(_OWORD *)&v5->lcsFilename[14];
    *((_OWORD *)v3 + 5) = v10;
    v12 = *(_OWORD *)&v5->lcsFilename[22];
    v5 = (struct tagLOGCOLORSPACEW *)((char *)v5 + 128);
    *((_OWORD *)v3 + 6) = v11;
    v3 += 128;
    *((_OWORD *)v3 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = *(_QWORD *)&v5->lcsGammaBlue;
  v14 = *(_OWORD *)&v5->lcsIntent;
  *(_OWORD *)v3 = *(_OWORD *)&v5->lcsSignature;
  v15 = *(_OWORD *)&v5->lcsEndpoints.ciexyzGreen.ciexyzX;
  *((_OWORD *)v3 + 1) = v14;
  v16 = *(_OWORD *)&v5->lcsEndpoints.ciexyzBlue.ciexyzY;
  *((_OWORD *)v3 + 2) = v15;
  *((_OWORD *)v3 + 3) = v16;
  *((_QWORD *)v3 + 8) = v13;
  *((_DWORD *)v3 + 18) = *(_DWORD *)&v5->lcsFilename[2];
  v28 = 0;
  ColorSpace = GreCreateColorSpace((struct _LOGCOLORSPACEEXW *)v27);
  v18 = ColorSpace;
  if ( !ColorSpace )
    return 0;
  HmgSetOwner((unsigned int)ColorSpace, 0, 9);
  HmgMarkUndeletable(v18, 9);
  bSetStockObject((unsigned __int64)v18, 20, 0);
  StockObject = (HCOLORSPACE)GreGetStockObject(20);
  LOBYTE(v20) = 9;
  ghStockColorSpace = StockObject;
  gpStockColorSpace = (struct COLORSPACE *)HmgShareLock((__int64)StockObject, v20);
  qword_1C018D968 = (__int64)ghStockColorSpace;
  qword_1C018D720 = (__int64)gpStockColorSpace;
  if ( !gpStockColorSpace )
    return 0;
  return v0;
}
