/*
 * XREFs of ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C001D4BC
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C001C5F8 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     NtDCompositionWaitForChannel @ 0x1C008AF70 (NtDCompositionWaitForChannel.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C001A268 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
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
    if ( *((int *)this + 61) <= 0 )
      break;
    if ( v5 && KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)this + 29) + 8LL), UserRequest, 0, 1u, 0LL) )
      v7 = 0;
    if ( DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this) )
      v4 = 1;
    if ( !a2 && v4 )
      v7 = 0;
    v5 = 1;
  }
  while ( v7 );
  if ( !v4 || a2 && *((_DWORD *)this + 61) )
    return 0;
  return v6;
}
