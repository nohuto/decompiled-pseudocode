/*
 * XREFs of ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z @ 0x180084A40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
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
  unsigned int v13; // r8d
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned __int64 v16; // rax
  int v17; // r9d
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-30h]
  _DWORD v24[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-10h]
  unsigned int v26[3]; // [rsp+44h] [rbp-Ch]

  v7 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v24[0] = 449;
  v12 = -1;
  v25 = 0;
  v13 = -1;
  *(_QWORD *)v26 = 0LL;
  v24[1] = a2;
  v14 = 16LL * a4;
  v24[2] = a3;
  v24[3] = a4;
  if ( v14 <= 0xFFFFFFFF )
    v13 = 16 * a4;
  v25 = v13;
  v15 = v14 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v14 > 0xFFFFFFFF )
  {
    v23 = 2669;
    goto LABEL_23;
  }
  v26[0] = v13;
  v16 = 4LL * a4;
  v17 = -1;
  if ( v16 <= 0xFFFFFFFF )
    v17 = 4 * a4;
  v26[1] = v17;
  v15 = v16 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v16 > 0xFFFFFFFF )
  {
    v23 = 2671;
    goto LABEL_23;
  }
  v18 = 2 * v13;
  v19 = -1;
  if ( 2 * v13 >= v13 )
    v19 = 2 * v13;
  v15 = v18 < v13 ? 0x80070216 : 0;
  if ( v18 < v13 )
  {
    v23 = 2674;
    goto LABEL_23;
  }
  v20 = v17 + v19;
  if ( v17 + v19 >= v19 )
    v12 = v17 + v19;
  v15 = v20 < v19 ? 0x80070216 : 0;
  if ( v20 < v19 )
  {
    v23 = 2675;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v23);
    goto LABEL_15;
  }
  v21 = CChannel::BeginCommand((CChannel *)this, v24, 0x1Cu, v12);
  v15 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xA74u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a5, v25);
    CDataStreamWriter::AddItemData(this[20], a6, v26[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v26[1]);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_15:
  if ( v7 )
    LeaveCriticalSection(v7);
  return v15;
}
