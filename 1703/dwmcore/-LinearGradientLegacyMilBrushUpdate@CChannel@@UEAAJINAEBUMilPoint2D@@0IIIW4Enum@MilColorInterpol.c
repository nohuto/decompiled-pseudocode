/*
 * XREFs of ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180139780
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
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
  int v19; // eax
  unsigned int v20; // ebx
  int v22; // [rsp+38h] [rbp-51h] BYREF
  int v23; // [rsp+3Ch] [rbp-4Dh] BYREF
  double v24; // [rsp+40h] [rbp-49h]
  int v25; // [rsp+48h] [rbp-41h]
  int v26; // [rsp+4Ch] [rbp-3Dh]
  int v27; // [rsp+50h] [rbp-39h]
  int v28; // [rsp+54h] [rbp-35h]
  int v29; // [rsp+58h] [rbp-31h]
  int v30; // [rsp+5Ch] [rbp-2Dh]
  unsigned int v31; // [rsp+60h] [rbp-29h]
  __int128 v32; // [rsp+64h] [rbp-25h]
  __int128 v33; // [rsp+74h] [rbp-15h]
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+A8h] [rbp+1Fh] BYREF

  v34 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v22 = 382;
  memset_0(&v23, 0, 0x48uLL);
  v16 = *a4;
  v23 = a2;
  v24 = a3;
  v17 = *a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  v28 = a9;
  v29 = a10;
  v30 = a11;
  v32 = v16;
  v33 = v17;
  v18 = 24LL * a13;
  if ( v18 > 0xFFFFFFFF )
  {
    v20 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB91u);
  }
  else
  {
    v31 = 24 * a13;
    v19 = CChannel::BeginCommand((struct CCommandBatch **)a1, &v22, 0x4Cu, v18);
    v20 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xB92u);
    }
    else
    {
      CDataStreamWriter::AddItemData(*(CDataStreamWriter **)(a1 + 160), a12, v31);
      CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a1 + 160));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v34);
  return v20;
}
