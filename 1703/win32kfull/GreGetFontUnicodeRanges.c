/*
 * XREFs of GreGetFontUnicodeRanges @ 0x1C00FBA88
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x1C00FB9D0 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C002FBE0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C002FCB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetFontUnicodeRanges(HDC a1, int *a2)
{
  ULONG v3; // edi
  int v4; // r14d
  int v5; // eax
  struct _FD_XFORM *v6; // rbx
  struct _FD_GLYPHSET *v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-10h] BYREF
  struct _FD_XFORM *v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v12 = 0LL;
    v5 = RFONTOBJ::bInit(&v12, (struct XDCOBJ *)v11, 0, 2u);
    v6 = v12;
    if ( v5 )
      GreAcquireSemaphore(*(_QWORD *)&v12[33].eXX);
    if ( v6 )
    {
      v13 = *(__int64 **)&v6[7].eXX;
      v7 = PFEOBJ::pfdg(&v13);
      if ( !v7 )
      {
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
        goto LABEL_10;
      }
      v4 = 4 * v7->cRuns + 16;
      if ( a2 )
      {
        if ( *a2 == v4 )
        {
          *a2 = v4;
          a2[2] = v7->cGlyphsSupported;
          a2[3] = v7->cRuns;
          a2[1] = 0;
          a2[1] = (v7->flAccel & 2) != 0;
          if ( v7->cRuns )
          {
            do
            {
              v9 = v3;
              v10 = v3++;
              v10 *= 2LL;
              LOWORD(a2[v9 + 4]) = *(&v7->awcrun[0].wcLow + 4 * v10);
              HIWORD(a2[v9 + 4]) = *(&v7->awcrun[0].cGlyphs + 4 * v10);
            }
            while ( v3 < v7->cRuns );
          }
        }
        else
        {
          v4 = 0;
        }
      }
      PFEOBJ::vFreepfdg(&v13);
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  }
  v3 = v4;
LABEL_10:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  return v3;
}
