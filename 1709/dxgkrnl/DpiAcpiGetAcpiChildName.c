/*
 * XREFs of DpiAcpiGetAcpiChildName @ 0x1C011F1B8
 * Callers:
 *     DpiFdoCreateChildDescriptor @ 0x1C011F010 (DpiFdoCreateChildDescriptor.c)
 *     DpEvalAcpiMethod @ 0x1C0123D50 (DpEvalAcpiMethod.c)
 * Callees:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C011F1F8 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiGetAcpiChildName(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v8; // rdx

  v4 = DpiAcpiPrepareAcpiChildNameList(a1);
  v5 = 0;
  if ( v4 < 0 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 3144);
  if ( !v6 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 3160);
  while ( a2 != *(_DWORD *)(v8 + 16LL * v5) )
  {
    if ( ++v5 >= v6 )
      return 0LL;
  }
  return *(_QWORD *)(v8 + 16LL * v5 + 8);
}
