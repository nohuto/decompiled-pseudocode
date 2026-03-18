/*
 * XREFs of ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0143250
 * Callers:
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C02690A8 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00B1124 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *__fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::AutoAttachFonDrvProcess(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this)
{
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *result; // rax

  AutoSharedPushLock::AutoSharedPushLock(this, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  *((_DWORD *)this + 15) = 0;
  result = this;
  *((_BYTE *)this + 56) = 0;
  return result;
}
