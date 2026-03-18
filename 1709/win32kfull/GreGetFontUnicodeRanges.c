/*
 * XREFs of GreGetFontUnicodeRanges @ 0x1C0110D38
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x1C0110C80 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C003C1B0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C003C284 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 */

__int64 __fastcall GreGetFontUnicodeRanges(HDC a1, unsigned int *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _FD_XFORM *v7; // rbx
  struct _FD_GLYPHSET *v8; // rax
  ULONG cRuns; // eax
  int v11; // eax
  __int64 v12; // r9
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  struct _FD_XFORM *v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v15; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v14 = 0LL;
    v4 = RFONTOBJ::bInit(&v14, (struct XDCOBJ *)v13, 0, 2u);
    v7 = v14;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v14[33].eXX);
    if ( v7 )
    {
      v15 = *(__int64 **)&v7[7].eXX;
      v8 = PFEOBJ::pfdg(&v15);
      v6 = (__int64)v8;
      if ( v8 )
      {
        v3 = 4 * v8->cRuns + 16;
        if ( a2 )
        {
          if ( *a2 == v3 )
          {
            *a2 = v3;
            a2[2] = v8->cGlyphsSupported;
            cRuns = v8->cRuns;
            a2[1] = 0;
            a2[3] = cRuns;
            v11 = a2[1];
            if ( (*(_BYTE *)(v6 + 4) & 2) != 0 )
              v11 = 1;
            v12 = 0LL;
            for ( a2[1] = v11; (unsigned int)v12 < *(_DWORD *)(v6 + 12); v12 = (unsigned int)(v12 + 1) )
            {
              LOWORD(a2[v12 + 4]) = *(_WORD *)(v6 + 16LL * (unsigned int)v12 + 16);
              HIWORD(a2[v12 + 4]) = *(_WORD *)(v6 + 16LL * (unsigned int)v12 + 18);
            }
          }
          else
          {
            v3 = 0;
          }
        }
        PFEOBJ::vFreepfdg(&v15);
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14, v5, v6);
  }
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v3;
}
