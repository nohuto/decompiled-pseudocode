/*
 * XREFs of ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x180123710
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18000F038 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::VisualGroupUpdate(
        struct CCommandBatch **this,
        __int32 a2,
        const unsigned int *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int64 v9; // rax
  unsigned int v10; // edx
  DWORD v11; // ebx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // edi
  signed int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-28h]
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  v9 = 4LL * a4;
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = 4 * a4;
  si128.m128i_i32[2] = v10;
  v11 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v9 > 0xFFFFFFFF )
  {
    v17 = 1816;
    goto LABEL_14;
  }
  v12 = -1;
  v13 = 4LL * a5;
  if ( v13 <= 0xFFFFFFFF )
    v12 = 4 * a5;
  si128.m128i_i32[3] = v12;
  v11 = v13 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v13 > 0xFFFFFFFF )
  {
    v17 = 1817;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v17);
    goto LABEL_15;
  }
  v14 = v10 + v12;
  if ( v10 + v12 < v10 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x71Cu);
  }
  else
  {
    v15 = CChannel::BeginCommand(this, &si128, 0x10u, v14);
    v11 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x71Du);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a3, v14);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
LABEL_15:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v19);
  return v11;
}
