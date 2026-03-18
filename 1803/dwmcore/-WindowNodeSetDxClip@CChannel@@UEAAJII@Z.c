/*
 * XREFs of ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180085A60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180087D6C (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180087E60 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180088438 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetDxClip(CChannel *this, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  unsigned int v7; // ecx
  struct CCommandBatch **v8; // rsi
  int v9; // ebx
  int v11; // eax
  unsigned int v12; // eax
  _DWORD v13[6]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v13[0] = 424;
  v8 = (struct CCommandBatch **)((char *)this + 160);
  v13[1] = a2;
  v9 = 0;
  v13[2] = a3;
  if ( !*v8 )
  {
    v11 = CCommandBatch::Create(v7, v8);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x11Au);
  }
  if ( v9 < 0 )
  {
    v12 = 255;
  }
  else
  {
    v9 = CDataStreamWriter::EnsureItem(*v8, 0xCu);
    if ( v9 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v8);
      CDataStreamWriter::AddItemData(*v8, v13, 0xCu);
      goto LABEL_5;
    }
    v12 = 260;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v12);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Au);
LABEL_5:
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x78u);
  else
    CDataStreamWriter::EndItem(*v8);
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v9;
}
