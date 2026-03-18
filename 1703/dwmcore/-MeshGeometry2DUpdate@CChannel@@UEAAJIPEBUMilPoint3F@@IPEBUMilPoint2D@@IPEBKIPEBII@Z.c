/*
 * XREFs of ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1801399D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::MeshGeometry2DUpdate(
        struct CCommandBatch **this,
        int a2,
        const struct MilPoint3F *a3,
        unsigned int a4,
        const struct MilPoint2D *a5,
        unsigned int a6,
        const unsigned int *a7,
        unsigned int a8,
        const unsigned int *a9,
        unsigned int a10)
{
  __int64 v11; // rdi
  unsigned int v14; // r8d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned int v18; // r9d
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v23; // [rsp+20h] [rbp-30h]
  _DWORD v24[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-18h]
  unsigned int v26[2]; // [rsp+3Ch] [rbp-14h]
  unsigned int v27; // [rsp+44h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+70h] [rbp+20h] BYREF

  v11 = a4;
  v28 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v24[0] = 346;
  v25 = 0;
  v14 = 12 * v11;
  *(_QWORD *)v26 = 0LL;
  v27 = 0;
  v24[1] = a2;
  if ( (unsigned __int64)(12 * v11) > 0xFFFFFFFF )
  {
    v23 = 2650;
    goto LABEL_18;
  }
  v15 = 16LL * a6;
  v25 = 12 * v11;
  if ( v15 > 0xFFFFFFFF )
  {
    v23 = 2651;
    goto LABEL_18;
  }
  v16 = 4LL * a8;
  v26[0] = 16 * a6;
  if ( v16 > 0xFFFFFFFF )
  {
    v23 = 2652;
    goto LABEL_18;
  }
  v17 = 4LL * a10;
  v26[1] = 4 * a8;
  if ( v17 > 0xFFFFFFFF )
  {
    v23 = 2653;
    goto LABEL_18;
  }
  v18 = v15 + v14;
  v27 = 4 * a10;
  if ( (unsigned int)v15 + v14 < v14 )
  {
    v23 = 2656;
    goto LABEL_18;
  }
  v19 = v16 + v18;
  if ( (unsigned int)v16 + v18 < v18 )
  {
    v23 = 2657;
    goto LABEL_18;
  }
  if ( (unsigned int)v17 + v19 < v19 )
  {
    v23 = 2658;
LABEL_18:
    v21 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v23);
    goto LABEL_19;
  }
  v20 = CChannel::BeginCommand(this, v24, 0x18u, (unsigned int)v17 + v19);
  v21 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xA63u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a3, v25);
    CDataStreamWriter::AddItemData(this[20], a5, v26[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v26[1]);
    CDataStreamWriter::AddItemData(this[20], a9, v27);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_19:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v28);
  return v21;
}
