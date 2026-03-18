/*
 * XREFs of GreEudcLoadLinkW @ 0x1C0273D04
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C0274B80 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00AF968 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00B0248 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     bAddFlEntry @ 0x1C00B1C44 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B1F70 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     vLinkEudcPFEs @ 0x1C00C199C (vLinkEudcPFEs.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00F56B8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C01100E0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01454EC (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0274670 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcLoadLinkW(
        unsigned __int16 *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned int v8; // edi
  unsigned __int16 *v10; // rbx
  unsigned int appended; // esi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  wchar_t *Src; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h] BYREF
  struct PFF *v19; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-28h] BYREF
  struct PFE *v21[2]; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+48h] BYREF

  v22 = a4;
  v8 = 0;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    return 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount <= 0 )
  {
    if ( a1 )
    {
      v16 = a6;
      if ( a6 > 1 )
        v16 = 1;
      appended = bAddFlEntry(a1, a3, v16, a5, &v18);
      if ( appended && v18 )
        vLinkEudcPFEs(v18);
    }
    else
    {
      MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x20Au);
      v10 = Src;
      if ( Src )
      {
        appended = bAppendSysDirectory(Src, (const unsigned __int16 *)a3);
        if ( appended )
        {
          v18 = ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v13 = -1LL;
          Src = (wchar_t *)gpPFTPublic;
          v14 = -1LL;
          do
            ++v14;
          while ( v10[v14] );
          if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Src, v10, (int)v14 + 1, 1, 0LL, 0, 0LL, 1) )
          {
            appended = 0;
          }
          else
          {
            v20[1] = 0LL;
            v20[0] = v21;
            appended = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&Src, v10, &v22, 8u, &v19, (struct _EUDCLOAD *)v20);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v18);
          if ( appended )
          {
            if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
            {
              vUnlinkAllEudcRFONTsAndPFEs(v15, 0);
              bUnloadEudcFont((__int64)&gappfeSysEUDC);
            }
            *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v21;
            wcscpy_s(Dst, 0x105uLL, v10);
            ++dword_1C0327BF8;
            bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v21[0], 1);
            do
              ++v13;
            while ( Dst[v13] );
            bWriteUserSystemEUDCRegistry(Dst);
          }
        }
        Win32FreePool(v10, v12);
      }
      else
      {
        appended = 0;
      }
    }
    v8 = appended;
  }
  else
  {
    EngSetLastError(0xA7u);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v8;
}
