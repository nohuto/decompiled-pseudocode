/*
 * XREFs of ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180084720
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::RgnGeometryUpdate(
        CDataStreamWriter **this,
        int a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  unsigned __int64 v9; // rax
  unsigned int v10; // r9d
  unsigned int v11; // ebx
  int v12; // eax
  _DWORD v14[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v14[0] = 468;
  v15 = 0;
  v14[1] = a2;
  v9 = 16LL * a4;
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = 16 * a4;
  v15 = v10;
  v11 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v9 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB34u);
  }
  else
  {
    v12 = CChannel::BeginCommand((CChannel *)this, v14, 0xCu, v10);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB35u);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a3, v15);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}
