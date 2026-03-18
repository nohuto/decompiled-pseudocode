/*
 * XREFs of ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180144CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
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
  int v14; // ecx
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // ebx
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // r8d
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v31; // [rsp+20h] [rbp-30h]
  _DWORD v32[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-18h]
  unsigned int v34[2]; // [rsp+3Ch] [rbp-14h]
  unsigned int v35; // [rsp+44h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+70h] [rbp+20h] BYREF

  v11 = a4;
  v36 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v32[0] = 467;
  v14 = -1;
  v33 = 0;
  v32[1] = a2;
  v15 = 12 * v11;
  v16 = -1;
  *(_QWORD *)v34 = 0LL;
  v35 = 0;
  if ( (unsigned __int64)(12 * v11) <= 0xFFFFFFFF )
    v16 = 12 * v11;
  v33 = v16;
  v17 = v15 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v15 > 0xFFFFFFFF )
  {
    v31 = 2615;
    goto LABEL_32;
  }
  v18 = -1;
  v19 = 16LL * a6;
  if ( v19 <= 0xFFFFFFFF )
    v18 = 16 * a6;
  v34[0] = v18;
  v17 = v19 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v19 > 0xFFFFFFFF )
  {
    v31 = 2616;
    goto LABEL_32;
  }
  v20 = -1;
  v21 = 4LL * a8;
  if ( v21 <= 0xFFFFFFFF )
    v20 = 4 * a8;
  v34[1] = v20;
  v17 = v21 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v21 > 0xFFFFFFFF )
  {
    v31 = 2617;
    goto LABEL_32;
  }
  v22 = -1;
  v23 = 4LL * a10;
  if ( v23 <= 0xFFFFFFFF )
    v22 = 4 * a10;
  v35 = v22;
  v17 = v23 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v23 > 0xFFFFFFFF )
  {
    v31 = 2618;
    goto LABEL_32;
  }
  v24 = v18 + v16;
  v25 = -1;
  if ( v24 >= v16 )
    v25 = v24;
  v17 = v24 < v16 ? 0x80070216 : 0;
  if ( v24 < v16 )
  {
    v31 = 2621;
    goto LABEL_32;
  }
  v26 = v20 + v25;
  v27 = -1;
  if ( v20 + v25 >= v25 )
    v27 = v20 + v25;
  v17 = v26 < v25 ? 0x80070216 : 0;
  if ( v26 < v25 )
  {
    v31 = 2622;
    goto LABEL_32;
  }
  v28 = v22 + v27;
  if ( v22 + v27 >= v27 )
    v14 = v22 + v27;
  v17 = v28 < v27 ? 0x80070216 : 0;
  if ( v28 < v27 )
  {
    v31 = 2623;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v31);
    goto LABEL_33;
  }
  v29 = CChannel::BeginCommand(this, v32, 0x18u, v14);
  v17 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xA40u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a3, v33);
    CDataStreamWriter::AddItemData(this[20], a5, v34[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v34[1]);
    CDataStreamWriter::AddItemData(this[20], a9, v35);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_33:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v36);
  return v17;
}
