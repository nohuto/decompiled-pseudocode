/*
 * XREFs of ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x18000C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18000F038 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::InteractionUpdateConfiguration(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        void *a6,
        unsigned int a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  _DWORD v14[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v14[0] = 186;
  v14[2] = a3;
  v14[1] = a2;
  v14[3] = a4;
  v14[4] = a5;
  v11 = CChannel::BeginCommand((CChannel *)a1, v14, 0x14u, a7);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA1Au);
  }
  else
  {
    CDataStreamWriter::AddItemData(*(CDataStreamWriter **)(a1 + 160), a6, a7);
    CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a1 + 160));
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v12;
}
