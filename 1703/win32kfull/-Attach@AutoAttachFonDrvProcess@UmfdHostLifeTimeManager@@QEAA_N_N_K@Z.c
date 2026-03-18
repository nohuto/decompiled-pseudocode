/*
 * XREFs of ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_N_K@Z @ 0x1C00083B0
 * Callers:
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00082B0 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C026A350 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this,
        char a2,
        __int64 a3)
{
  struct _KAPC_STATE *v4; // rdx
  struct _KPROCESS *v5; // rcx

  if ( !a2 )
  {
    v4 = (struct _KAPC_STATE *)((char *)this + 8);
    v5 = (struct _KPROCESS *)gpepCSRSS;
    goto LABEL_5;
  }
  if ( UmfdHostLifeTimeManager::s_Ready && a3 == UmfdHostLifeTimeManager::s_UmfdHostGenerationId )
  {
    v4 = (struct _KAPC_STATE *)((char *)this + 8);
    v5 = UmfdHostLifeTimeManager::s_UmfdHostProcess;
LABEL_5:
    KeStackAttachProcess(v5, v4);
    *((_BYTE *)this + 56) = 1;
  }
  return *((_BYTE *)this + 56);
}
