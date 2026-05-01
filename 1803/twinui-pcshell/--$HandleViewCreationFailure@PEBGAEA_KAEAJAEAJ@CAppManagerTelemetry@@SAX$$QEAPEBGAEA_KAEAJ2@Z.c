/*
 * XREFs of ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x18009C890
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18003FB80 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x18009CB18 (-HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z.c)
 *     ?Instance@CAppManagerTelemetry@@KAPEAV1@XZ @ 0x180108468 (-Instance@CAppManagerTelemetry@@KAPEAV1@XZ.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x180108814 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 */

void __fastcall CAppManagerTelemetry::HandleViewCreationFailure<unsigned short const *,unsigned __int64 &,long &,long &>(
        const unsigned __int16 **a1,
        unsigned __int64 *a2,
        int *a3,
        int *a4)
{
  CAppManagerTelemetry *v8; // rcx

  if ( CAppManagerTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    CAppManagerTelemetry::Instance();
    CAppManagerTelemetry::HandleViewCreationFailure_(v8, *a1, *a2, *a3, *a4);
  }
}
