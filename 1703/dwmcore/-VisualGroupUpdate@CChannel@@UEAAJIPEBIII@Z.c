/*
 * XREFs of ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x18013A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::VisualGroupUpdate(
        struct CCommandBatch **this,
        __int32 a2,
        const unsigned int *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v9 = 4LL * a4;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  if ( v9 > 0xFFFFFFFF )
  {
    v15 = 1806;
    goto LABEL_10;
  }
  v10 = 4LL * a5;
  si128.m128i_i32[2] = 4 * a4;
  if ( v10 > 0xFFFFFFFF )
  {
    v15 = 1807;
    goto LABEL_10;
  }
  v11 = v10 + v9;
  si128.m128i_i32[3] = 4 * a5;
  if ( (int)v10 + (int)v9 < (unsigned int)v9 )
  {
    v15 = 1810;
LABEL_10:
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v15);
    goto LABEL_11;
  }
  v12 = CChannel::BeginCommand(this, &si128, 0x10u, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x713u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a3, v11);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_11:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v17);
  return v13;
}
