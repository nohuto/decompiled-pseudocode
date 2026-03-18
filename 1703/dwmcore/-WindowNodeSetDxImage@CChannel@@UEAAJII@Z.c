/*
 * XREFs of ?WindowNodeSetDxImage@CChannel@@UEAAJII@Z @ 0x180081000
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18007F86C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800831E0 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180083540 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetDxImage(CChannel *this, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v7; // rcx
  struct CCommandBatch **v8; // rsi
  int v9; // ebx
  int v10; // eax
  int v12; // eax
  _DWORD v13[6]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v13[0] = 102;
  v8 = (struct CCommandBatch **)((char *)this + 160);
  v13[1] = a2;
  v9 = 0;
  v13[2] = a3;
  if ( !*v8 )
  {
    v12 = CCommandBatch::Create(v7, v8);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x11Bu);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x100u);
  }
  else
  {
    v10 = CDataStreamWriter::EnsureSize(*v8, 0x10u);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x159u);
    if ( v9 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v8);
      CDataStreamWriter::AddItemData(*v8, v13, 0xCu);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x105u);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x9Au);
LABEL_7:
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x78u);
  else
    CDataStreamWriter::EndItem(*v8);
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v9;
}
