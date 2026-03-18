/*
 * XREFs of ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C008F528
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C008EDA0 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C008F0B8 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C008D508 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C008D8AC (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C008D8FC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01308FC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::pgdGetEudcMetricsPlus(RFONTOBJ *this, struct RFONTOBJ *a2, struct RFONTOBJ *a3)
{
  unsigned __int16 v3; // bp
  _DWORD *v5; // rcx
  unsigned int v6; // eax
  struct GPRUN *Run; // rax
  __int64 v8; // rdi
  struct _GLYPHDATA *result; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  struct _GLYPHDATA **v12; // rdx

  v3 = (unsigned __int16)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v5 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( !*v5 )
    return RFONTOBJ::pgdDefault(this);
  v6 = v3 - v5[4];
  if ( v6 < v5[5] )
  {
    v8 = v6;
    v10 = v5 + 6;
  }
  else
  {
    Run = RFONTOBJ::gprunFindRun(this, v3);
    v8 = (unsigned int)v3 - *(_DWORD *)Run;
    if ( (unsigned int)v8 >= *((_DWORD *)Run + 1) )
      return 0LL;
    v10 = (_QWORD *)((char *)Run + 8);
  }
  v11 = 8 * v8;
  v12 = (struct _GLYPHDATA **)(v11 + *v10);
  result = *v12;
  if ( !*v12 )
  {
    if ( (unsigned int)RFONTOBJ::bInsertMetricsPlus(this, v12) )
      return *(struct _GLYPHDATA **)(v11 + *v10);
    return 0LL;
  }
  return result;
}
