/*
 * XREFs of ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x180084960
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::AtlasedRectsGroupUpdate(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5)
{
  unsigned int v9; // r9d
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  int v12; // eax
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  char *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v9 = -1;
  v10 = 4LL * a5;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v10 <= 0xFFFFFFFF )
    v9 = 4 * a5;
  si128.m128i_i32[1] = a2;
  si128.m128i_i32[2] = a3;
  si128.m128i_i32[3] = v9;
  v11 = v10 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v10 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA8Au);
  }
  else
  {
    v12 = CChannel::BeginCommand(this, &si128, 0x10u, v9);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xA8Bu);
    }
    else
    {
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a4, si128.m128i_u32[3]);
      CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v11;
}
