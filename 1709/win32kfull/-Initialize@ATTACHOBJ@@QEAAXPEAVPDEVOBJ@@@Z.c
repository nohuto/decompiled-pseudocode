/*
 * XREFs of ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C00393A4
 * Callers:
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C003D604 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C003D6FC (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C003D818 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C003D8F0 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C003DEC0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C003DF5C (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C003DFF0 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATTACHOBJ::Initialize(PRKAPC_STATE ApcState, struct PDEV **a2, __int64 a3, __int64 a4)
{
  struct PDEV *v4; // r8
  __int64 ProcessServerSilo; // rax

  v4 = *a2;
  if ( (*((_DWORD *)*a2 + 8) & 0x2000) != 0 && v4 != qword_1C0334158 )
  {
    BYTE4(ApcState[1].ApcListHead[1].Flink) = 1;
    ProcessServerSilo = PsGetProcessServerSilo(gpepCSRSS, a2, v4, a4);
    ApcState[1].ApcListHead[0].Flink = (struct _LIST_ENTRY *)PsAttachSiloToCurrentThread(ProcessServerSilo);
    KeStackAttachProcess(gpepCSRSS, ApcState);
  }
}
