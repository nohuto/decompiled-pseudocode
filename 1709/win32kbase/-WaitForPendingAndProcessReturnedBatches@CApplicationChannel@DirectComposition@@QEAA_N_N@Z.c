/*
 * XREFs of ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C0032C58
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0031CBC (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     NtDCompositionWaitForChannel @ 0x1C0090B50 (NtDCompositionWaitForChannel.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C002F7D4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  char v4; // si
  char v5; // al
  char v6; // di
  char v7; // bl

  v4 = 0;
  v5 = 0;
  v6 = 1;
  v7 = 1;
  do
  {
    if ( *((int *)this + 57) <= 0 )
      break;
    if ( v5 && KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)this + 27) + 8LL), UserRequest, 0, 1u, 0LL) )
      v7 = 0;
    if ( DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this) )
      v4 = 1;
    if ( !a2 && v4 )
      v7 = 0;
    v5 = 1;
  }
  while ( v7 );
  if ( !v4 || a2 && *((_DWORD *)this + 57) )
    return 0;
  return v6;
}
