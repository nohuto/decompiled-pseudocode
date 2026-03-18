/*
 * XREFs of ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180022260
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::TransformGroupUpdate(
        CChannel *this,
        unsigned int a2,
        const unsigned int *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  char *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = 4LL * a4;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  if ( v8 > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xAF2u);
  }
  else
  {
    si128.m128i_i32[3] = 0;
    si128.m128i_i32[2] = 4 * a4;
    v9 = CChannel::BeginCommand(this, &si128, 0x10u, v8);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xAF4u);
    }
    else
    {
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a3, si128.m128i_u32[2]);
      CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v10;
}
