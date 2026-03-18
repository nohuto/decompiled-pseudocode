/*
 * XREFs of GreFontIsLinked @ 0x1C00C1844
 * Callers:
 *     NtGdiFontIsLinked @ 0x1C00C1830 (NtGdiFontIsLinked.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C003C7C4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 */

__int64 __fastcall GreFontIsLinked(HDC a1)
{
  unsigned int v1; // esi
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _FD_XFORM *v5; // rbx
  __int64 v6; // rdi
  char v8; // cl
  _QWORD v9[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+30h] [rbp-40h] BYREF
  struct _FD_XFORM *v11; // [rsp+98h] [rbp+28h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !v9[0] )
    return v1;
  v11 = 0LL;
  v2 = RFONTOBJ::bInit(&v11, (struct XDCOBJ *)v9, 0, 2u);
  v5 = v11;
  if ( v2 )
    GreAcquireSemaphore(*(_QWORD *)&v11[33].eXX);
  if ( v5 )
  {
    v6 = *(_QWORD *)&v5[7].eXX;
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( !v6 || (*(_DWORD *)(v6 + 12) & 8) != 0 )
      goto LABEL_12;
    if ( LODWORD(v5[44].eYY) )
    {
      if ( !gbSystemDBCSFontEnabled )
        goto LABEL_12;
    }
    else if ( *(_OWORD *)&gappfeSysEUDC == 0LL )
    {
      if ( !bFinallyInitializeFontAssocDefault
        || (IFIOBJR::IFIOBJR(
              (IFIOBJR *)v10,
              *(const struct _IFIMETRICS **)(v6 + 32),
              (struct RFONTOBJ *)&v11,
              (struct DCOBJ *)v9),
            v8 = *(_BYTE *)(v10[0] + 44LL),
            v8 == 1)
        || (unsigned __int8)(v8 - 3) <= 0xFBu
        || ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v8 + 2) & 0xF) == 0 )
      {
        if ( *(_QWORD *)(v6 + 128) )
          v1 = 1;
        goto LABEL_12;
      }
    }
    v1 = 1;
LABEL_12:
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11, v3, v4);
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v1;
}
