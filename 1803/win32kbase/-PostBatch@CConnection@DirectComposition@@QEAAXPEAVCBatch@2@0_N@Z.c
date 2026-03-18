/*
 * XREFs of ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0_N@Z @ 0x1C0046CBC
 * Callers:
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C000221C (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C001617C (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 * Callees:
 *     McTemplateK0x @ 0x1C0145760 (McTemplateK0x.c)
 */

void __fastcall DirectComposition::CConnection::PostBatch(
        DirectComposition::CConnection *this,
        struct _SLIST_ENTRY *a2,
        struct DirectComposition::CBatch *a3,
        char a4)
{
  struct _SLIST_ENTRY *Next; // rax
  __int64 v7; // rcx

  Next = a2->Next;
  *((_QWORD *)&a2[1].Next + 1) = a2->Next;
  if ( Next )
    *((_QWORD *)&Next[1].Next + 1) = a3;
  if ( a4 )
  {
    v7 = (unsigned int)(*((_DWORD *)this + 64) + 1);
    *((_DWORD *)this + 64) = v7;
    if ( (WORD2(Microsoft_Windows_Win32kEnableBits) & 0x100) != 0 )
      McTemplateK0x(v7, &HighWorkLoadBatchCountUpdatedPending, a3, (int)v7);
  }
  ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 6, a2);
  KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 8LL), 1, 0);
}
