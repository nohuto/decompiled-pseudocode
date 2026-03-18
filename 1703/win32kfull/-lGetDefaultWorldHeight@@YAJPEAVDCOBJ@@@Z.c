/*
 * XREFs of ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C01330E0
 * Callers:
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C0030C34 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C007EA00 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 * Callees:
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C007DAB4 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

__int64 __fastcall lGetDefaultWorldHeight(struct DCOBJ *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  float v5; // xmm1_4
  struct LFONT *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( !v2 )
    return 24LL;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v6, *(struct HLFONT__ **)(v2 + 1440), 0LL);
  if ( !v6 )
    return 24LL;
  v3 = *((_DWORD *)v6 + 69);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) & 0x802) != 0x802 )
  {
    *(float *)&v6 = (float)(*(float *)(*(_QWORD *)a1 + 348LL) * *(float *)(*(_QWORD *)a1 + 348LL))
                  + (float)(*(float *)(*(_QWORD *)a1 + 344LL) * *(float *)(*(_QWORD *)a1 + 344LL));
    EFLOAT::vSqrt((EFLOAT *)&v6);
    v5 = 1.0 / *(float *)&v6;
    LODWORD(v6) = 0;
    bFToL((float)(16 * v3) * v5, (int *)&v6, 0);
    v3 = (int)v6;
  }
  if ( v3 )
    return (unsigned int)-v3;
  else
    return 24LL;
}
