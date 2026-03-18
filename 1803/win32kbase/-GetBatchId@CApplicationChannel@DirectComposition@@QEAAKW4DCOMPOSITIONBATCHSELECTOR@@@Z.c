/*
 * XREFs of ?GetBatchId@CApplicationChannel@DirectComposition@@QEAAKW4DCOMPOSITIONBATCHSELECTOR@@@Z @ 0x1C00155F8
 * Callers:
 *     NtDCompositionGetBatchId @ 0x1C0014CF0 (NtDCompositionGetBatchId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetBatchId(unsigned int *a1, int a2)
{
  int v2; // edx

  if ( !a2 )
    return a1[94];
  v2 = a2 - 1;
  if ( !v2 )
    return a1[95];
  if ( v2 == 1 )
    return a1[96];
  return 0LL;
}
