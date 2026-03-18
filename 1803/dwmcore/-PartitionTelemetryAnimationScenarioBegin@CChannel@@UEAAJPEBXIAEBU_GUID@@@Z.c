/*
 * XREFs of ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x180086D00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryAnimationScenarioBegin(
        CChannel *this,
        const void *a2,
        unsigned int a3,
        const struct _GUID *a4)
{
  unsigned int v8; // eax
  unsigned int v9; // r9d
  unsigned int v10; // ebx
  int v11; // eax
  char *v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = a3 + 16;
  v14 = 290;
  v9 = -1;
  if ( a3 + 16 >= a3 )
    v9 = a3 + 16;
  v10 = v8 < a3 ? 0x80070216 : 0;
  if ( v8 < a3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3BEu);
  }
  else
  {
    v11 = CChannel::BeginCommand(this, &v14, 4u, v9);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x3BFu);
    }
    else
    {
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a2, a3);
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a4, 0x10u);
      CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v10;
}
