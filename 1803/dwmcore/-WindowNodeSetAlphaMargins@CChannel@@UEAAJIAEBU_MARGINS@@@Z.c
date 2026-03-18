/*
 * XREFs of ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180085870
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180087E60 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180088320 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180088438 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetAlphaMargins(CChannel *this, int a2, const struct _MARGINS *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  unsigned int v7; // ecx
  __int128 v8; // xmm0
  struct CCommandBatch **v9; // rsi
  int v10; // ebx
  int v11; // eax
  int v13; // eax
  unsigned int v14; // eax
  _DWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+38h] [rbp-20h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = (__int128)*a3;
  v15[0] = 419;
  v9 = (struct CCommandBatch **)((char *)this + 160);
  v15[1] = a2;
  v10 = 0;
  v16 = v8;
  if ( !*v9 )
  {
    v13 = CCommandBatch::Create(v7, v9);
    v10 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x11Au);
  }
  if ( v10 < 0 )
  {
    v14 = 255;
  }
  else
  {
    v11 = CDataStreamWriter::EnsureSize(*v9, 0x1Cu);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x159u);
    if ( v10 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v9);
      CDataStreamWriter::AddItemData(*v9, v15, 0x18u);
      goto LABEL_7;
    }
    v14 = 260;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v14);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x9Au);
LABEL_7:
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x78u);
  else
    CDataStreamWriter::EndItem(*v9);
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v10;
}
