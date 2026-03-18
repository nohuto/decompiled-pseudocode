/*
 * XREFs of ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C008D30C
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C007AE60 (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C007DA94 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall RFONTOBJ::bCalcLayoutUnits(RFONTOBJ *this, struct XDCOBJ *a2)
{
  float v4; // xmm1_4
  __int64 v5; // rax
  float v6; // xmm2_4
  unsigned int v7; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-30h] BYREF
  float *v12; // [rsp+30h] [rbp-20h] BYREF
  float v13; // [rsp+80h] [rbp+30h] BYREF
  float v14; // [rsp+88h] [rbp+38h] BYREF

  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v12, a2, 0x204u);
  v4 = v12[3];
  v13 = *v12;
  v14 = v4;
  EFLOAT::vAbs((EFLOAT *)&v13);
  EFLOAT::vAbs((EFLOAT *)&v14);
  if ( (*(_DWORD *)(v5 + 32) & 1) != 0 && (v6 = v13, v13 == v14) )
  {
    *(float *)(*(_QWORD *)this + 400LL) = v13;
    *(float *)(*(_QWORD *)this + 420LL) = v6;
    *(float *)(*(_QWORD *)this + 404LL) = 1.0 / v6;
    *(float *)(*(_QWORD *)this + 424LL) = 1.0 / v6;
  }
  else
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, a2, 0x402u);
    v7 = 0;
    if ( !v11[0] )
      return v7;
    EXFORMOBJ::bXform((EXFORMOBJ *)v11, (struct VECTORFL *)(*(_QWORD *)this + 392LL), (struct VECTORFL *)&v14, 1uLL);
    EFLOAT::eqLength(*(_QWORD *)this + 404LL, &v13, &v14);
    v9 = *(_QWORD *)this;
    *(float *)(v9 + 404) = *(float *)(*(_QWORD *)this + 404LL) * 0.0625;
    *(float *)(v9 + 400) = 1.0 / *(float *)(v9 + 404);
    EXFORMOBJ::bXform((EXFORMOBJ *)v11, (struct VECTORFL *)(*(_QWORD *)this + 412LL), (struct VECTORFL *)&v14, 1uLL);
    EFLOAT::eqLength(*(_QWORD *)this + 424LL, &v13, &v14);
    v10 = *(_QWORD *)this;
    *(float *)(v10 + 424) = *(float *)(*(_QWORD *)this + 424LL) * 0.0625;
    *(float *)(v10 + 420) = 1.0 / *(float *)(v10 + 424);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) == 1
      && !(unsigned int)DC::bUseMetaPtoD(*(DC **)a2)
      && (*(_DWORD *)(*(_QWORD *)this + 488LL) & 4) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 684LL) = *(_DWORD *)v11[0];
      *(_DWORD *)(*(_QWORD *)this + 688LL) = *(_DWORD *)(v11[0] + 12LL);
      EFLOAT::vAbs((EFLOAT *)(*(_QWORD *)this + 684LL));
      EFLOAT::vAbs((EFLOAT *)(*(_QWORD *)this + 688LL));
      return 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)this + 684LL) = *(_DWORD *)(*(_QWORD *)this + 404LL);
  *(_DWORD *)(*(_QWORD *)this + 688LL) = *(_DWORD *)(*(_QWORD *)this + 424LL);
  return 1;
}
