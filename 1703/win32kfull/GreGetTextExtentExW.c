/*
 * XREFs of GreGetTextExtentExW @ 0x1C013F8F0
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C008A2E0 (NtGdiGetTextExtentExW.c)
 *     GreGetCharacterPlacementW @ 0x1C0298268 (GreGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C008A800 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C013C110 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C013C23C (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetTextExtentExW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        struct tagSIZE *a7,
        char a8)
{
  int *v8; // r14
  int *v10; // rbx
  unsigned int v12; // r12d
  unsigned int v14; // eax
  struct _FD_XFORM *v15; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v16; // [rsp+98h] [rbp-78h]
  _QWORD v17[2]; // [rsp+A0h] [rbp-70h] BYREF
  struct tagSIZE *v18; // [rsp+B0h] [rbp-60h]
  unsigned int *v19[3]; // [rsp+B8h] [rbp-58h] BYREF
  _BYTE v20[320]; // [rsp+D0h] [rbp-40h] BYREF
  char v21; // [rsp+210h] [rbp+100h] BYREF

  v8 = 0LL;
  v10 = a6;
  v16 = a4;
  v12 = 0;
  v18 = a7;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v17, a1);
      if ( v17[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v17, 516);
        v15 = 0LL;
        if ( (unsigned int)RFONTOBJ::bInit(&v15, (struct XDCOBJ *)v17, 0, 2 * (a8 & 1u) + 2) )
          GreAcquireSemaphore(*(_QWORD *)&v15[33].eXX);
        if ( v15 )
        {
          if ( (LODWORD(v15[4].eXY) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v15, a2, a3);
          if ( !a6 && a5 )
          {
            if ( a3 > 0x28 )
            {
              v8 = (int *)PALLOCMEM2(4 * a3, 1954051143LL, 1);
              if ( !v8 )
                EngSetLastError(8u);
              v10 = v8;
            }
            else
            {
              v10 = (int *)&v21;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v20,
            a2,
            a3,
            (struct XDCOBJ *)v17,
            (struct RFONTOBJ *)&v15,
            v19,
            0LL,
            0,
            *(_DWORD *)(v17[0] + 2188LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 80LL) + 160LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 80LL) + 168LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 80LL) + 172LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v20[64] & 4) != 0 && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v20, (struct RFONTOBJ *)&v15, 0, v18) )
          {
            if ( a5 && v10 )
            {
              v14 = 0;
              do
              {
                if ( *v10 > v16 )
                  break;
                ++v14;
                ++v10;
              }
              while ( v14 < a3 );
              *a5 = v14;
            }
            v12 = 1;
          }
          if ( v8 )
            Win32FreePool(v8);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v20);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
      }
      else
      {
        EngSetLastError(6u);
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
      return v12;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return 1LL;
    }
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
