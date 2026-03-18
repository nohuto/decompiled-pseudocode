/*
 * XREFs of GetFontIntensityCorrectionTable @ 0x1C0252374
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00296A8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFontIntensityCorrectionTable(const WCHAR *a1)
{
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+68h] [rbp+1Fh]
  int v4; // [rsp+70h] [rbp+27h]
  __int64 v5; // [rsp+78h] [rbp+2Fh]
  __int64 Context; // [rsp+B0h] [rbp+67h] BYREF

  QueryTable.Name = a1;
  Context = 0LL;
  QueryTable.Flags = 0;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)QueryRegistryFontIntensityCorrectionTableRoutine;
  RtlQueryRegistryValues(3u, L"FontIntensityCorrection", &QueryTable, &Context, 0LL);
  return Context;
}
