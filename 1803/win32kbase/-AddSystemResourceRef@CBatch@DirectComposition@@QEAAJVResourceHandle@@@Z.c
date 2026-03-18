/*
 * XREFs of ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C0046FB8
 * Callers:
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0012A30 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C001932C (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C00467A8 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 */

__int64 __fastcall DirectComposition::CBatch::AddSystemResourceRef(__int64 a1, int a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  _DWORD *v6; // rsi

  v2 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6 = Win32AllocPoolWithQuotaZInit(0x10uLL, 0x72624344u);
  if ( v6 )
  {
    DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(v2 + 40), a2);
    v6[2] = a2;
    *(_QWORD *)v6 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
