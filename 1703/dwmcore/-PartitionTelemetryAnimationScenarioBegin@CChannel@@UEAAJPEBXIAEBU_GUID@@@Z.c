/*
 * XREFs of ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x180139FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryAnimationScenarioBegin(
        struct CCommandBatch **this,
        const void *a2,
        unsigned int a3,
        const struct _GUID *a4)
{
  unsigned int v8; // eax
  int v9; // r9d
  unsigned int v10; // ebx
  int v11; // eax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v8 = a3 + 16;
  v14 = 13;
  v9 = -1;
  if ( a3 + 16 >= a3 )
    v9 = a3 + 16;
  v10 = v8 < a3 ? 0x80070216 : 0;
  if ( v8 < a3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3BCu);
  }
  else
  {
    v11 = CChannel::BeginCommand(this, &v14, 4u, v9);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x3BDu);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a2, a3);
      CDataStreamWriter::AddItemData(this[20], a4, 0x10u);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v10;
}
