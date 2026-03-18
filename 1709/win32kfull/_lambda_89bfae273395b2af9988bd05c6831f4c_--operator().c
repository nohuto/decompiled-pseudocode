/*
 * XREFs of _lambda_89bfae273395b2af9988bd05c6831f4c_::operator() @ 0x1C00B5084
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C00B4E04 (UmfdLoadFontFileView.c)
 * Callees:
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C003D818 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00B63CC (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 */

__int64 __fastcall lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(__int64 a1, char a2, unsigned int a3)
{
  if ( !a2
    || MapFontFiles(
         **(_DWORD **)(a1 + 16),
         **(struct _FONTFILEVIEW ****)(a1 + 24),
         **(void ****)(a1 + 32),
         **(unsigned int ***)(a1 + 40)) )
  {
    return PDEVOBJ::LoadFontFile(
             *(struct PDEV ***)a1,
             **(_DWORD **)(a1 + 16),
             **(unsigned __int64 ***)(a1 + 24),
             **(void ****)(a1 + 32),
             **(unsigned int ***)(a1 + 40),
             **(struct tagDESIGNVECTOR ***)(a1 + 8),
             gusLanguageID,
             a3);
  }
  else
  {
    return 0LL;
  }
}
