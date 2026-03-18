/*
 * XREFs of InitializeGreCSRSS @ 0x1C0095650
 * Callers:
 *     NtUserInitialize @ 0x1C0005200 (NtUserInitialize.c)
 * Callees:
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C0095914 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C00959F8 (-GetLanguageID@@YAGXZ.c)
 *     DrvNotifySessionStateChange @ 0x1C0095B00 (DrvNotifySessionStateChange.c)
 */

_BOOL8 InitializeGreCSRSS()
{
  _DWORD *v0; // rsi
  USHORT *v1; // rbx
  USHORT *v2; // rdi
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-78h] BYREF
  __int64 v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  __int64 v12; // [rsp+78h] [rbp-30h]

  DrvNotifySessionStateChange(0LL);
  gppdevTrueType = 0LL;
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
  gcTrueTypeFonts = 0;
  gulFontInformation = 0;
  gusLanguageID = GetLanguageID();
  v0 = (_DWORD *)GetgForceFontAssocCodePage();
  v1 = (USHORT *)GetgSystemOemCodePage();
  v2 = (USHORT *)GetgSystemAnsiCodePage();
  RtlGetDefaultCodePage(v2, v1);
  v3 = *v2;
  gjCurCharset = 0;
  gfsCurSignature = 1;
  v4 = 0LL;
  if ( nCharsets )
  {
    v3 = (unsigned __int16)v3;
    v5 = &codepages;
    while ( *v5 != (unsigned __int16)v3 )
    {
      v4 = (unsigned int)(v4 + 1);
      ++v5;
      if ( (unsigned int)v4 >= nCharsets )
        goto LABEL_5;
    }
    v3 = 0x1C0000000uLL;
    gfsCurSignature = dword_1C0169A90[v4];
    gjCurCharset = charsets[4 * v4];
  }
LABEL_5:
  if ( *v2 == 936 || (unsigned __int16)(*v2 - 949) <= 1u )
    *v0 = 3;
  v7 = *v2;
  v6 = 932LL;
  LOWORD(v7) = v7 - 932;
  if ( (unsigned __int16)v7 > 0x12u || (v6 = 393233LL, gbDBCSCodePage = 1, !_bittest((const int *)&v6, v7)) )
    gbDBCSCodePage = 0;
  if ( (int)IsInitFNTCacheSupported(v6, v3) >= 0 )
    InitFNTCache();
  vCheckIsSetupRunning();
  QueryTable.Flags = 0;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontDriverQueryRoutineApiExt;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  RtlQueryRegistryValues(0x80000003, L"Font Drivers", &QueryTable, 0LL, 0LL);
  if ( (int)IsbATMFDDisabledSupported() >= 0
    && !(unsigned int)bATMFDDisabled()
    && (int)IsbEnableFontDriverSupported() >= 0
    && !(unsigned int)bEnableFontDriver(atmfdEnableDriverApiExt, 4LL)
    || (int)IsbEnableFontDriverSupported() >= 0 && !(unsigned int)bEnableFontDriver(vtfdEnableDriverApiExt, 3LL) )
  {
    return 0LL;
  }
  if ( (int)IsvGetJpn98FixPitchSupported() >= 0 )
    vGetJpn98FixPitch();
  if ( (int)IsbEnableFontDriverSupported() >= 0 && !(unsigned int)bEnableFontDriver(BmfdEnableDriverApiExt, 2LL)
    || (int)IsbEnableFontDriverSupported() >= 0 && !(unsigned int)bEnableFontDriver(ttfdEnableDriverApiExt, 1LL)
    || (int)UmfdSessionInitialize() < 0
    || (int)IsbInitFontTablesSupported() >= 0 && !(unsigned int)bInitFontTables()
    || (int)IsbInitStockFontsSupported() >= 0 && !(unsigned int)bInitStockFonts() )
  {
    return 0LL;
  }
  if ( (int)IsvInitFontSubTableSupported() >= 0 )
    vInitFontSubTable();
  if ( (int)IsvInitFontMapperFamilyFallbackTableSupported() >= 0 )
    vInitFontMapperFamilyFallbackTable();
  if ( (int)IsvInitMapperSupported() >= 0 )
    vInitMapper();
  return (int)IsbInitializeEUDCSupported() < 0 || (unsigned int)bInitializeEUDC();
}
