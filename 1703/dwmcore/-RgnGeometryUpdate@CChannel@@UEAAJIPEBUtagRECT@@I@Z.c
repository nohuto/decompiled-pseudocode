/*
 * XREFs of ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x18007FB90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::RgnGeometryUpdate(
        CDataStreamWriter **this,
        int a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  _DWORD v13[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v13[0] = 380;
  v14 = 0;
  v13[1] = a2;
  v9 = 16LL * a4;
  if ( v9 > 0xFFFFFFFF )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB57u);
  }
  else
  {
    v14 = 16 * a4;
    v10 = CChannel::BeginCommand((CChannel *)this, v13, 0xCu, v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB58u);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a3, v14);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}
