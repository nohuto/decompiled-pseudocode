/*
 * XREFs of bAddAllFlEntry @ 0x1C00C16B8
 * Callers:
 *     GreEnableEUDC @ 0x1C00BF0E4 (GreEnableEUDC.c)
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00C1410 (-bInitializeEUDCInternal@@YAHXZ.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00405F0 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00AF968 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00B0248 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B1F70 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     vLinkEudcPFEs @ 0x1C00C199C (vLinkEudcPFEs.c)
 *     AddAllFlEntryWorker @ 0x1C00C1A30 (AddAllFlEntryWorker.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C00C1EC4 (bReadUserSystemEUDCRegistry.c)
 *     bNotIsKeySymbolicLink @ 0x1C00C1FDC (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C00C2074 (GetUserEUDCRegistryPath.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00F56B8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  wchar_t *v5; // rbx
  unsigned __int16 *v6; // rdi
  HSEMAPHORE v7; // rcx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  int v18; // esi
  struct _FONTHASH **v19; // rcx
  struct PFF *v20; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-28h] BYREF
  struct PFE *v22[2]; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE v25; // [rsp+B8h] [rbp+48h] BYREF

  v23 = a2;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v25, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Handle, 0x208u);
  v5 = (wchar_t *)v25;
  if ( !v25 )
  {
    if ( !Handle )
      return 0LL;
    Win32FreePool(Handle, v3, v4);
LABEL_35:
    if ( v5 )
      goto LABEL_36;
    return 0LL;
  }
  v6 = (unsigned __int16 *)Handle;
  if ( !Handle )
    goto LABEL_35;
  v7 = ghsemEUDC1;
  *(_WORD *)Handle = 0;
  *v5 = 0;
  GreAcquireSemaphore(v7);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
LABEL_19:
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    Win32FreePool(v6, v14, v15);
LABEL_36:
    Win32FreePool(v5, v3, v4);
    return 0LL;
  }
  if ( !a1 || *(_OWORD *)&gappfeSysEUDC != 0LL || !(unsigned int)bReadUserSystemEUDCRegistry(v5) )
    goto LABEL_5;
  if ( !(unsigned int)bAppendSysDirectory(v6, v5) )
    goto LABEL_19;
  Handle = gpPFTPublic;
  v25 = (HANDLE)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v17 = -1LL;
  do
    ++v17;
  while ( v6[v17] );
  if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Handle, v6, (int)v17 + 1, 1, 0LL, 0, 0LL, 1) )
  {
    v18 = 0;
  }
  else
  {
    v21[1] = 0LL;
    v21[0] = v22;
    v18 = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&Handle, v6, &v23, 8u, &v20, (struct _EUDCLOAD *)v21);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  if ( v18 )
  {
    if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v22[0], 1) )
    {
      *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v22;
      wcscpy_s(&Dst, 0x105uLL, v6);
      ++dword_1C0327BF8;
      goto LABEL_5;
    }
    PFTOBJ::bUnloadEUDCFont(v19, v6);
  }
  Dst = 0;
  *(_OWORD *)&gappfeSysEUDC = 0uLL;
LABEL_5:
  v8 = dword_1C0327C04;
  if ( (dword_1C0327C04 & 1) != 0 )
  {
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
    v8 = dword_1C0327C04;
  }
  if ( (v8 & 4) != 0 )
  {
    Handle = 0LL;
    v25 = 0LL;
    v23 = 0;
    if ( (int)GetUserEUDCRegistryPath(v5) >= 0 && (unsigned int)bNotIsKeySymbolicLink(v5, &Handle, &v25) && v23 )
      AddAllFlEntryWorker(v5);
    if ( Handle )
      ZwClose(Handle);
    if ( v25 )
      ZwClose(v25);
  }
  vLinkEudcPFEs(0LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  Win32FreePool(v6, v9, v10);
  Win32FreePool(v5, v11, v12);
  return 1LL;
}
