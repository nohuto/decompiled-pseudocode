/*
 * XREFs of ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C008AC28
 * Callers:
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0030334 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C008AFD0 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C008C9B8 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     GreGetCharWidthW @ 0x1C00F5BE4 (GreGetCharWidthW.c)
 * Callees:
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C002FA9C (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C008F910 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C012879C (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::lOverhang(RFONTOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  unsigned int v4; // edi
  int v5; // r9d
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // [rsp+28h] [rbp-29h] BYREF
  float v12[2]; // [rsp+30h] [rbp-21h] BYREF
  int v13; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-11h] BYREF
  __int64 v15; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v16[40]; // [rsp+60h] [rbp+Fh] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v4 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL);
  if ( (*(_DWORD *)(v6 + 48) & 6) == 0 || *(_DWORD *)(v1 + 88) )
    return v4;
  if ( (v5 & 0x4000) != 0 )
    v4 = (*(_DWORD *)(v1 + 344) - 1) / 2;
  if ( (v5 & 0x2000) == 0 )
    return v4;
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL);
  if ( (*(_DWORD *)(v6 + 48) & 4) == 0 )
    return ++v4;
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v14, (struct MATRIX *)v16, 8u);
  if ( v14[0] )
  {
    RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)v14);
    v8 = (__int64)*IFIOBJ::pptlBaseline((IFIOBJ *)&v15);
    v12[0] = (float)(int)v8;
    v12[1] = (float)SHIDWORD(v8);
    if ( (*(_DWORD *)(v14[0] + 32LL) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v14, (struct VECTORFL *)v12, (struct VECTORFL *)v12, 1uLL) )
    {
      EFLOAT::eqLength(&v13, &v11, v12);
      v11 = 0;
      bFToL(v9, &v11, 0LL);
      v10 = v11;
      if ( !v11 )
        v10 = 1;
      v4 += v10;
      return v4;
    }
    return 1;
  }
  return v2;
}
