/*
 * XREFs of ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z @ 0x180122B70
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18000F038 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryTouchInteractionBegin(
        struct CCommandBatch **this,
        const void *a2,
        unsigned int a3)
{
  signed int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v9 = 262;
  v6 = CChannel::BeginCommand(this, &v9, 4u, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x386u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a2, a3);
    CDataStreamWriter::EndItem(this[20]);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v7;
}
