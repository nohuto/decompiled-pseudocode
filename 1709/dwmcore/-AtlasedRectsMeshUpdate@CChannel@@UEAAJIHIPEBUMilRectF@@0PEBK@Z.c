/*
 * XREFs of ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z @ 0x18000C390
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18000F038 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::AtlasedRectsMeshUpdate(
        CDataStreamWriter **this,
        int a2,
        int a3,
        unsigned int a4,
        const struct MilRectF *a5,
        const struct MilRectF *a6,
        const unsigned int *a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // r15
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // eax
  int v18; // eax
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-30h]
  _DWORD v22[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-10h]
  unsigned int v24[3]; // [rsp+44h] [rbp-Ch]

  v7 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v22[0] = 388;
  v23 = 0;
  v12 = -1;
  *(_QWORD *)v24 = 0LL;
  v22[1] = a2;
  v13 = 16LL * a4;
  v22[2] = a3;
  v22[3] = a4;
  if ( v13 <= 0xFFFFFFFF )
    v12 = 16 * a4;
  v23 = v12;
  v14 = v13 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v13 > 0xFFFFFFFF )
  {
    v21 = 2726;
    goto LABEL_20;
  }
  v24[0] = v12;
  v15 = 4LL * a4;
  v16 = -1;
  if ( v15 <= 0xFFFFFFFF )
    v16 = 4 * a4;
  v24[1] = v16;
  v14 = v15 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v15 > 0xFFFFFFFF )
  {
    v21 = 2728;
LABEL_20:
    v20 = v14;
    goto LABEL_21;
  }
  v17 = 2 * v12;
  if ( 2 * v12 < v12 )
  {
    v21 = 2731;
    goto LABEL_17;
  }
  if ( v16 + v17 < v17 )
  {
    v21 = 2732;
LABEL_17:
    v14 = -2147024362;
    v20 = -2147024362;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v21);
    goto LABEL_11;
  }
  v18 = CChannel::BeginCommand((CChannel *)this, v22, 0x1Cu, v16 + v17);
  v14 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xAADu);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a5, v23);
    CDataStreamWriter::AddItemData(this[20], a6, v24[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v24[1]);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_11:
  if ( v7 )
    LeaveCriticalSection(v7);
  return v14;
}
