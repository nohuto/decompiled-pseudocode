/*
 * XREFs of ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180121FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18000F038 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CChannel::LinearGradientLegacyMilBrushUpdate(
        __int64 a1,
        int a2,
        double a3,
        __int128 *a4,
        __int128 *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *a12,
        unsigned int a13)
{
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned __int64 v18; // rcx
  int v19; // r9d
  DWORD v20; // ebx
  signed int v21; // eax
  int v23; // [rsp+38h] [rbp-51h] BYREF
  int v24; // [rsp+3Ch] [rbp-4Dh] BYREF
  double v25; // [rsp+40h] [rbp-49h]
  int v26; // [rsp+48h] [rbp-41h]
  int v27; // [rsp+4Ch] [rbp-3Dh]
  int v28; // [rsp+50h] [rbp-39h]
  int v29; // [rsp+54h] [rbp-35h]
  int v30; // [rsp+58h] [rbp-31h]
  int v31; // [rsp+5Ch] [rbp-2Dh]
  unsigned int v32; // [rsp+60h] [rbp-29h]
  __int128 v33; // [rsp+64h] [rbp-25h]
  __int128 v34; // [rsp+74h] [rbp-15h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+A8h] [rbp+1Fh] BYREF

  v35 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v23 = 401;
  memset_0(&v24, 0, 0x48uLL);
  v16 = *a4;
  v24 = a2;
  v25 = a3;
  v17 = *a5;
  v26 = a6;
  v27 = a7;
  v28 = a8;
  v29 = a9;
  v30 = a10;
  v31 = a11;
  v33 = v16;
  v34 = v17;
  v18 = 24LL * a13;
  v19 = -1;
  if ( v18 <= 0xFFFFFFFF )
    v19 = 24 * a13;
  v32 = v19;
  v20 = v18 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v18 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0xBA7u);
  }
  else
  {
    v21 = CChannel::BeginCommand((struct CCommandBatch **)a1, &v23, 0x4Cu, v19);
    v20 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0xBA8u);
    }
    else
    {
      CDataStreamWriter::AddItemData(*(CDataStreamWriter **)(a1 + 160), a12, v32);
      CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a1 + 160));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v35);
  return v20;
}
