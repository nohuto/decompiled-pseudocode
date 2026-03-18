/*
 * XREFs of InitializeGre @ 0x1C01D521C
 * Callers:
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C00293BC (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??0CTokenManager@@AEAA@XZ @ 0x1C002A050 (--0CTokenManager@@AEAA@XZ.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C002A0F4 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreCreateSemaphore @ 0x1C00546C0 (GreCreateSemaphore.c)
 *     HmgCreate @ 0x1C0075A30 (HmgCreate.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C00767D0 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C007D31C (-Initialize@SfmState@@QEAAHXZ.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C009166C (GreCreateSemaphoreNonTracked.c)
 *     bLockEtwEnabled @ 0x1C0091C5C (bLockEtwEnabled.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C0091DB4 (-bUseActualGDIScale@@YAHXZ.c)
 *     ?UMPDAllowPrinterSurfaceInDisplayDC@@YAHXZ @ 0x1C00A08C4 (-UMPDAllowPrinterSurfaceInDisplayDC@@YAHXZ.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     GreCreateRectRgn @ 0x1C00FC750 (GreCreateRectRgn.c)
 *     bInitBMOBJ @ 0x1C01D7858 (bInitBMOBJ.c)
 *     bInitICM @ 0x1C01D78AC (bInitICM.c)
 *     bInitPALOBJ @ 0x1C01D7B18 (bInitPALOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 *     vInitXLATE @ 0x1C01D82BC (vInitXLATE.c)
 */

char InitializeGre()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  HRGN RectRgn; // rax
  CTokenManager *v5; // rax
  CTokenManager *v6; // rbx
  int v7; // edi
  CTokenManager *v8; // rcx
  _QWORD v9[4]; // [rsp+30h] [rbp-59h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-39h] BYREF
  __int64 v11; // [rsp+88h] [rbp-1h]
  int v12; // [rsp+90h] [rbp+7h]
  __int64 v13; // [rsp+98h] [rbp+Fh]
  PULONG BitMapBuffer; // [rsp+F0h] [rbp+67h] BYREF
  void *v15; // [rsp+F8h] [rbp+6Fh] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+100h] [rbp+77h] BYREF
  _QWORD *v17; // [rsp+108h] [rbp+7Fh] BYREF

  G_fConsole = gbRemoteSession == 0;
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  gAllowPrinterSurfaceInDisplayDC = UMPDAllowPrinterSurfaceInDisplayDC();
  if ( _InterlockedDecrement(&CountInit) )
    return 1;
  RtlGetSuiteMask(v1, v0, v2);
  qword_1C018E690 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = (HSEMAPHORE)GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    if ( (int)IsVerifierInitializationSupported() >= 0 )
      VerifierInitialization();
    qword_1C018E680 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocListLock = GreCreateSemaphoreNonTracked();
    if ( GreEngLoadModuleAllocListLock )
    {
      if ( (int)IsInitializeGdiCrossSessionGlobalsSupported() < 0 || (unsigned int)InitializeGdiCrossSessionGlobals() )
      {
        gbLockEtw = bLockEtwEnabled();
        gbDisableTrappedAcRendering = 0;
        if ( (unsigned int)HmgCreate() )
        {
          REGION::ulUniqueREGION = 1;
          if ( (int)IsNineGridRenderingSupported() >= 0 )
          {
            GetNineGridRenderingData(&v15, &BitMapBuffer, &BitMapHeader, &v17);
            memset(v15, 0, 0x200uLL);
            *(_QWORD *)BitMapBuffer = 0LL;
            RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
            *v17 = 0LL;
          }
          ghsemDriverMgmt = (HSEMAPHORE)GreCreateSemaphore();
          if ( ghsemDriverMgmt )
          {
            PATHALLOC::hsemFreelist = (HSEMAPHORE)GreCreateSemaphore();
            if ( PATHALLOC::hsemFreelist )
            {
              PATHALLOC::freelist = 0LL;
              PATHALLOC::cFree = 0;
              PATHALLOC::cAllocated = 0;
              ghsemRFONTList = (HSEMAPHORE)GreCreateSemaphore();
              if ( ghsemRFONTList )
              {
                ghsemCLISERV = GreCreateSemaphore();
                if ( ghsemCLISERV )
                {
                  ghsemAtmfdInit = GreCreateSemaphore();
                  if ( ghsemAtmfdInit )
                  {
                    ghsemWndobj = (HSEMAPHORE)GreCreateSemaphore();
                    if ( ghsemWndobj )
                    {
                      ghsemFntCache = GreCreateSemaphore();
                      if ( ghsemFntCache )
                      {
                        ghsemDwmState = (HSEMAPHORE)GreCreateSemaphore();
                        if ( ghsemDwmState )
                        {
                          ghsemDynamicModeChange = (PERESOURCE)GreCreateSemaphore();
                          if ( ghsemDynamicModeChange )
                          {
                            ghsemDCVisRgn = (PERESOURCE)GreCreateSemaphore();
                            if ( ghsemDCVisRgn )
                            {
                              ghsemVisRgnUniqueness = (PERESOURCE)GreCreateSemaphore();
                              if ( ghsemVisRgnUniqueness )
                              {
                                ghsemVisRgnPublish = (HSEMAPHORE)GreCreateSemaphore();
                                if ( ghsemVisRgnPublish )
                                {
                                  ghsemSprite = (PERESOURCE)GreCreateSemaphore();
                                  if ( ghsemSprite )
                                  {
                                    ghsemMapRot = (HSEMAPHORE)GreCreateSemaphore();
                                    if ( ghsemMapRot )
                                    {
                                      ghsemGreLock = (PERESOURCE)GreCreateSemaphore();
                                      if ( ghsemGreLock )
                                      {
                                        ghsemHT = (HSEMAPHORE)GreCreateSemaphore();
                                        if ( ghsemHT )
                                        {
                                          RectRgn = (HRGN)GreCreateRectRgn(0, 0, 0, 0);
                                          hrgnDefault = RectRgn;
                                          if ( RectRgn )
                                          {
                                            RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, RectRgn, 1);
                                            if ( v9[0] )
                                            {
                                              prgnDefault = (struct REGION *)v9[0];
                                              RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
                                              if ( (unsigned int)bInitPALOBJ() )
                                              {
                                                vInitXLATE();
                                                if ( (unsigned int)bInitBMOBJ() )
                                                {
                                                  if ( (unsigned int)bInitBRUSHOBJ()
                                                    && (unsigned int)bInitICM()
                                                    && ((int)IsEnableHalftoneSupported() < 0
                                                     || (unsigned int)EnableHalftone())
                                                    && ((int)IsbInitRedirDevSupported() < 0
                                                     || (unsigned int)bInitRedirDev()) )
                                                  {
                                                    if ( (int)IsvInitFontsDirectoryNameInformationSupported() >= 0 )
                                                      vInitFontsDirectoryNameInformation();
                                                    v5 = (CTokenManager *)Win32AllocPoolZInit(0x108uLL, 1735609684LL);
                                                    v6 = v5 ? CTokenManager::CTokenManager(v5) : 0LL;
                                                    if ( v6 )
                                                    {
                                                      v7 = CTokenManager::Initialize(v6);
                                                      if ( v7 >= 0 )
                                                        g_pTokenManager = v6;
                                                    }
                                                    else
                                                    {
                                                      v7 = -1073741801;
                                                    }
                                                    v8 = 0LL;
                                                    if ( v7 < 0 )
                                                      v8 = v6;
                                                    if ( v8 )
                                                      CTokenManager::`scalar deleting destructor'(v8);
                                                    if ( v7 >= 0 && (unsigned int)SfmState::Initialize(v8) )
                                                    {
                                                      QueryTable.Flags = 0;
                                                      QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
                                                      memset(&QueryTable.Name, 0, 20);
                                                      QueryTable.DefaultData = 0LL;
                                                      QueryTable.DefaultLength = 0;
                                                      v11 = 0LL;
                                                      v12 = 0;
                                                      v13 = 0LL;
                                                      *((_DWORD *)gpGdiSharedMemory + 393253) = 0;
                                                      RtlQueryRegistryValues(
                                                        0x80000003,
                                                        L"LanguagePack",
                                                        &QueryTable,
                                                        0LL,
                                                        0LL);
                                                      *((_DWORD *)gpGdiSharedMemory + 393254) = 1;
                                                      gbUseActualGDIScale = bUseActualGDIScale();
                                                      return 1;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            else
                                            {
                                              RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
