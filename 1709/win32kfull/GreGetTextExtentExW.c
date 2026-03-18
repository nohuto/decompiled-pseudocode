/*
 * XREFs of GreGetTextExtentExW @ 0x1C0145118
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C0030A10 (NtGdiGetTextExtentExW.c)
 *     GreGetCharacterPlacementW @ 0x1C0294920 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00361A8 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0142F68 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0142FAC (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
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
  unsigned int v8; // r12d
  int *v10; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  int *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // eax
  struct _FD_XFORM *v19; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v20; // [rsp+98h] [rbp-78h]
  _QWORD v21[2]; // [rsp+A0h] [rbp-70h] BYREF
  struct tagSIZE *v22; // [rsp+B0h] [rbp-60h]
  unsigned int *v23[3]; // [rsp+B8h] [rbp-58h] BYREF
  _BYTE v24[320]; // [rsp+D0h] [rbp-40h] BYREF
  char v25; // [rsp+210h] [rbp+100h] BYREF

  v8 = 0;
  v10 = a6;
  v20 = a4;
  v22 = a7;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v21, a1);
      if ( v21[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v23, (struct XDCOBJ *)v21, 516);
        v19 = 0LL;
        if ( (unsigned int)RFONTOBJ::bInit(&v19, (struct XDCOBJ *)v21, 0, 2 * (a8 & 1u) + 2) )
          GreAcquireSemaphore(*(_QWORD *)&v19[33].eXX);
        if ( v19 )
        {
          if ( (LODWORD(v19[4].eXY) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v19, a2, a3);
          v15 = 0LL;
          if ( !a6 && a5 )
          {
            if ( a3 > 0x28 )
            {
              v15 = (int *)PALLOCMEM2(4 * a3, 1954051143LL, 1);
              if ( !v15 )
                EngSetLastError(8u);
              v10 = v15;
            }
            else
            {
              v10 = (int *)&v25;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v24,
            a2,
            a3,
            (struct XDCOBJ *)v21,
            (struct RFONTOBJ *)&v19,
            v23,
            0LL,
            0,
            *(_DWORD *)(v21[0] + 2188LL),
            *(_DWORD *)(*(_QWORD *)(v21[0] + 80LL) + 160LL),
            *(_DWORD *)(*(_QWORD *)(v21[0] + 80LL) + 168LL),
            *(_DWORD *)(*(_QWORD *)(v21[0] + 80LL) + 172LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v24[64] & 4) != 0 && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v24, (struct RFONTOBJ *)&v19, 0, v22) )
          {
            if ( a5 && v10 )
            {
              v18 = 0;
              do
              {
                if ( *v10 > v20 )
                  break;
                ++v18;
                ++v10;
              }
              while ( v18 < a3 );
              *a5 = v18;
            }
            v8 = 1;
          }
          if ( v15 )
            Win32FreePool(v15, v16, v17);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v24, v16, v17);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19, v13, v14);
      }
      else
      {
        EngSetLastError(6u);
      }
      if ( v21[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v21);
      return v8;
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
