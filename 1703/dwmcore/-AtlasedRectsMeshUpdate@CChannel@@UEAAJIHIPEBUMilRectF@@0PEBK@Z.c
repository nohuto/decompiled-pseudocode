/*
 * XREFs of ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z @ 0x18007FE90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
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
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v17; // [rsp+20h] [rbp-30h]
  _DWORD v18[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-10h]
  unsigned int v20[3]; // [rsp+44h] [rbp-Ch]

  v7 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v18[0] = 348;
  v19 = 0;
  *(_QWORD *)v20 = 0LL;
  v18[1] = a2;
  v18[2] = a3;
  v18[3] = a4;
  if ( 16 * (unsigned __int64)a4 > 0xFFFFFFFF )
  {
    v17 = 2704;
    goto LABEL_15;
  }
  v12 = 4LL * a4;
  v19 = 16 * a4;
  v20[0] = 16 * a4;
  if ( v12 > 0xFFFFFFFF )
  {
    v17 = 2706;
    goto LABEL_15;
  }
  v13 = 32 * a4;
  v20[1] = 4 * a4;
  if ( 32 * a4 < 16 * a4 )
  {
    v17 = 2709;
    goto LABEL_15;
  }
  if ( (unsigned int)v12 + v13 < v13 )
  {
    v17 = 2710;
LABEL_15:
    v15 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v17);
    goto LABEL_7;
  }
  v14 = CChannel::BeginCommand((CChannel *)this, v18, 0x1Cu, v12 + v13);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xA97u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a5, v19);
    CDataStreamWriter::AddItemData(this[20], a6, v20[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v20[1]);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_7:
  if ( v7 )
    LeaveCriticalSection(v7);
  return v15;
}
