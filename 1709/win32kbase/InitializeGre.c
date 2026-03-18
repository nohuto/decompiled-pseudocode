/*
 * XREFs of InitializeGre @ 0x1C01DFC44
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C0024B58 (GreCreateSemaphoreInternal.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C0036360 (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??0CTokenManager@@AEAA@XZ @ 0x1C0036560 (--0CTokenManager@@AEAA@XZ.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0036614 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004333C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C006F0F0 (-bUseActualGDIScale@@YAHXZ.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C006F188 (-Initialize@SfmState@@QEAAHXZ.c)
 *     GreCreateRectRgn @ 0x1C006F220 (GreCreateRectRgn.c)
 *     HmgCreate @ 0x1C006F330 (HmgCreate.c)
 *     bLockEtwEnabled @ 0x1C006F6F0 (bLockEtwEnabled.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C006F798 (GreCreateSemaphoreNonTracked.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C006F7DC (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     bInitICM @ 0x1C01DF194 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C01DF3FC (bInitPALOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C01DFBA4 (bInitBMOBJ.c)
 *     vInitXLATE @ 0x1C01E00C0 (vInitXLATE.c)
 */

char InitializeGre()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  G_fConsole = gbRemoteSession == 0;
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  if ( _InterlockedDecrement(&CountInit) )
    return 1;
  RtlGetSuiteMask(v1, v0, v2);
  qword_1C0193558 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = (HSEMAPHORE)GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    if ( (int)IsVerifierInitializationSupported() >= 0 )
      VerifierInitialization();
    qword_1C0193548 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocListLock = GreCreateSemaphoreNonTracked();
    if ( GreEngLoadModuleAllocListLock
      && ((int)IsInitializeGdiCrossSessionGlobalsSupported() < 0 || (unsigned int)InitializeGdiCrossSessionGlobals()) )
    {
      gbLockEtw = bLockEtwEnabled();
      gbDisableTrappedAcRendering = 0;
      HmgCreate();
    }
  }
  return 0;
}
