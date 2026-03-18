/*
 * XREFs of ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C00B9C3C
 * Callers:
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C00B7FD0 (NtGdiFONTOBJ_pxoGetXform.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C00B9A64 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 */

struct _XFORMOBJ *__fastcall UMPDOBJ::GetFONTOBJXform(UMPDOBJ *this, struct _FONTOBJ *a2)
{
  struct _XFORMOBJ *result; // rax
  struct _XFORMOBJ *v4; // rsi
  void *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _XFORMOBJ *v8; // [rsp+48h] [rbp+10h] BYREF
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  result = (struct _XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)this, (__int64)a2);
  v4 = result;
  if ( result )
  {
    v5 = (void *)*((_QWORD *)this + 37);
    if ( !v5 )
    {
      v8 = result;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v8, this, 0, 0, 0LL);
      v9 = &v4[54];
      if ( v4 == (struct _XFORMOBJ *)-216LL
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 288), (const void **)&v9, 4LL) )
      {
        v5 = 0LL;
      }
      else
      {
        v5 = v9;
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v8, this, 0LL, 0LL, 0LL);
      v8 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8, v6, v7);
    }
    return (struct _XFORMOBJ *)v5;
  }
  return result;
}
