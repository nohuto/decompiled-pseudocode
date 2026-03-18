/*
 * XREFs of ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1801225F0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18000F038 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  signed int v25; // eax
  DWORD v26; // r9d
  unsigned int v28; // [rsp+20h] [rbp-30h]
  _DWORD v29[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-18h]
  unsigned int v31[2]; // [rsp+3Ch] [rbp-14h]
  unsigned int v32; // [rsp+44h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+70h] [rbp+20h] BYREF

  v11 = a4;
  v33 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v29[0] = 406;
  v30 = 0;
  v29[1] = a2;
  v14 = 12 * v11;
  v15 = -1;
  *(_QWORD *)v31 = 0LL;
  v32 = 0;
  if ( (unsigned __int64)(12 * v11) <= 0xFFFFFFFF )
    v15 = 12 * v11;
  v30 = v15;
  v16 = v14 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v14 > 0xFFFFFFFF )
  {
    v28 = 2672;
    goto LABEL_27;
  }
  v17 = -1;
  v18 = 16LL * a6;
  if ( v18 <= 0xFFFFFFFF )
    v17 = 16 * a6;
  v31[0] = v17;
  v16 = v18 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v18 > 0xFFFFFFFF )
  {
    v28 = 2673;
    goto LABEL_27;
  }
  v19 = -1;
  v20 = 4LL * a8;
  if ( v20 <= 0xFFFFFFFF )
    v19 = 4 * a8;
  v31[1] = v19;
  v16 = v20 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v20 > 0xFFFFFFFF )
  {
    v28 = 2674;
    goto LABEL_27;
  }
  v21 = -1;
  v22 = 4LL * a10;
  if ( v22 <= 0xFFFFFFFF )
    v21 = 4 * a10;
  v32 = v21;
  v16 = v22 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v22 > 0xFFFFFFFF )
  {
    v28 = 2675;
LABEL_27:
    v26 = v16;
    goto LABEL_28;
  }
  v23 = v15 + v17;
  if ( v23 < v15 )
  {
    v28 = 2678;
    goto LABEL_20;
  }
  v24 = v19 + v23;
  if ( v19 + v23 < v23 )
  {
    v28 = 2679;
    goto LABEL_20;
  }
  if ( v21 + v24 < v24 )
  {
    v28 = 2680;
LABEL_20:
    v16 = -2147024362;
    v26 = -2147024362;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, v28);
    goto LABEL_29;
  }
  v25 = CChannel::BeginCommand(this, v29, 0x18u, v21 + v24);
  v16 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0xA79u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a3, v30);
    CDataStreamWriter::AddItemData(this[20], a5, v31[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v31[1]);
    CDataStreamWriter::AddItemData(this[20], a9, v32);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_29:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v33);
  return v16;
}
